/**
 * File:   qr.h
 * Author: AWTK Develop Team
 * Brief:  qr
 *
 * Copyright (c) 2018 - 2018  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-12-19 Zhaoqi <zq@zhaoqi.info> created
 *
 */

#include "tkc/mem.h"
#include "base/timer.h"
#include "tkc/utils.h"
#include "widgets/qr.h"
#include "base/widget_vtable.h"
#include "qrencode/qrencode.h"

static ret_t qr_on_repeat(const timer_info_t* info) {
  pointer_event_t evt;
  qr_t* button = QR(info->ctx);
  widget_t* widget = WIDGET(info->ctx);

  return RET_REPEAT;
}

static ret_t qr_pointer_up_cleanup(widget_t* widget) {
  qr_t* button = QR(widget);


  return RET_OK;
}

static ret_t qr_on_event(widget_t* widget, event_t* e) {
  uint16_t type = e->type;
  qr_t* button = QR(widget);


  return RET_OK;
}

static ret_t qr_get_prop(widget_t* widget, const char* name, value_t* v) {
  qr_t* qr = QR(widget);
  return_value_if_fail(widget != NULL && name != NULL && v != NULL, RET_BAD_PARAMS);


  return RET_NOT_FOUND;
}

static ret_t qr_set_prop(widget_t* widget, const char* name, const value_t* v) {
  return_value_if_fail(widget != NULL && name != NULL && v != NULL, RET_BAD_PARAMS);


  return RET_NOT_FOUND;
}

static ret_t qr_destroy(widget_t* widget) {
  qr_t* qr = QR(widget);


  return RET_OK;
}

ret_t qr_set_text(widget_t* widget, char *text)
{
  return_value_if_fail(widget != NULL && text != NULL, RET_BAD_PARAMS);
  qr_t* qr = QR(widget);
  char* qr_text = TKMEM_ZALLOCN(char, strlen(text) + 1);
  memcpy(qr_text, text, strlen(text));
  qr->qr_text = qr_text;
  return RET_OK;
}

ret_t qr_set_pixsize(widget_t* widget, uint8_t pixsize)
{
  return_value_if_fail(widget != NULL, RET_BAD_PARAMS);
  qr_t* qr = QR(widget);
  qr->pix_size = pixsize;

  return RET_OK;
}

static ret_t qr_on_paint_self(widget_t* widget, canvas_t* c) {
  // if (style_is_valid(widget->astyle)) {
  log_debug("test!");
  qr_t* qr = QR(widget);
  if (qr->qr_text != NULL) {
    QRcode *qr_code;
    qr_code = QRcode_encodeString((const char *)qr->qr_text, 3, QR_ECLEVEL_L, QR_MODE_8, 1);

    style_t* style = widget->astyle;
    int32_t margin = style_get_int(style, STYLE_ID_MARGIN, 2);
    int32_t icon_at = style_get_int(style, STYLE_ID_ICON_AT, ICON_AT_AUTO);
    uint16_t font_size = style_get_int(style, STYLE_ID_FONT_SIZE, TK_DEFAULT_FONT_SIZE);
    uint16_t qr_size_pre = 3;

    wh_t w = widget->w;
    wh_t h = widget->h;

    int y = 0, x = 0, a = 0, b = 0;
    for(y = 0; y < qr_code->width; y++) {
      for(x = 0; x < qr_code->width; x++) {
        if(qr_code->data[y * qr_code->width + x] & 0x01)  {
          /* 画黑色矩形 */
          canvas_set_fill_color(c, color_init(0x00, 0x00, 0x00, 0xff));
        } else {
          /* 画白色矩形 */
          canvas_set_fill_color(c, color_init(0xff, 0xff, 0xff, 0xff));   
        }
        canvas_fill_rect(c, x * qr->pix_size, y * qr->pix_size, qr->pix_size, qr->pix_size);
      }
    }
    QRcode_free(qr_code);
    widget->dirty = FALSE;
  }

  return RET_OK;
}

static const char* s_qr_properties[] = {WIDGET_PROP_REPEAT, NULL};
static const widget_vtable_t s_qr_vtable = {.size = sizeof(qr_t),
                                                .type = WIDGET_TYPE_QR,
                                                .create = qr_create,
                                                .clone_properties = s_qr_properties,
                                                .persistent_properties = s_qr_properties,
                                                .on_event = qr_on_event,
                                                .set_prop = qr_set_prop,
                                                .get_prop = qr_get_prop,
                                                .destroy = qr_destroy,
                                                .on_paint_self = qr_on_paint_self};

widget_t* qr_create(widget_t* parent, xy_t x, xy_t y, wh_t w, wh_t h) {
  qr_t* qr = TKMEM_ZALLOC(qr_t);
  widget_t* widget = WIDGET(qr);
  return_value_if_fail(qr != NULL, NULL);

  widget_init(widget, parent, &s_qr_vtable, x, y, w, h);
  /* 默认的二维码像素与屏幕像素的转化关系 */
  qr->pix_size = 1;

  return widget;
}

widget_t* qr_cast(widget_t* widget) {
  return_value_if_fail(widget != NULL && widget->vt == &s_qr_vtable, NULL);

  return widget;
}
