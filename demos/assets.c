#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "assets/inc/styles/button.data"
#include "assets/inc/styles/calibration.data"
#include "assets/inc/styles/color.data"
#include "assets/inc/styles/default.data"
#include "assets/inc/styles/dialog.data"
#include "assets/inc/styles/keyboard.data"
#include "assets/inc/styles/tab_bottom.data"
#include "assets/inc/styles/tab_bottom_compact.data"
#include "assets/inc/styles/tab_list.data"
#include "assets/inc/styles/tab_top.data"
#include "assets/inc/styles/tab_top_compact.data"
#include "assets/inc/ui/animation.data"
#include "assets/inc/ui/animator.data"
#include "assets/inc/ui/auto_play.data"
#include "assets/inc/ui/basic.data"
#include "assets/inc/ui/bottom.data"
#include "assets/inc/ui/button.data"
#include "assets/inc/ui/calibration.data"
#include "assets/inc/ui/color.data"
#include "assets/inc/ui/color_picker.data"
#include "assets/inc/ui/color_picker_full.data"
#include "assets/inc/ui/color_picker_hsv.data"
#include "assets/inc/ui/color_picker_rgb.data"
#include "assets/inc/ui/color_picker_simple.data"
#include "assets/inc/ui/combo_box.data"
#include "assets/inc/ui/dialog1.data"
#include "assets/inc/ui/dialog2.data"
#include "assets/inc/ui/dragger.data"
#include "assets/inc/ui/edit.data"
#include "assets/inc/ui/fade.data"
#include "assets/inc/ui/htranslate.data"
#include "assets/inc/ui/image_list.data"
#include "assets/inc/ui/images.data"
#include "assets/inc/ui/kb_ascii.data"
#include "assets/inc/ui/kb_default.data"
#include "assets/inc/ui/kb_float.data"
#include "assets/inc/ui/kb_hex.data"
#include "assets/inc/ui/kb_int.data"
#include "assets/inc/ui/kb_phone.data"
#include "assets/inc/ui/kb_ufloat.data"
#include "assets/inc/ui/kb_uint.data"
#include "assets/inc/ui/keyboard.data"
#include "assets/inc/ui/list_view.data"
#include "assets/inc/ui/list_view_d.data"
#include "assets/inc/ui/list_view_h.data"
#include "assets/inc/ui/list_view_m.data"
#include "assets/inc/ui/list_view_vh.data"
#include "assets/inc/ui/locale.data"
#include "assets/inc/ui/lua.data"
#include "assets/inc/ui/main.data"
#include "assets/inc/ui/memtest.data"
#include "assets/inc/ui/preload.data"
#include "assets/inc/ui/rich_text.data"
#include "assets/inc/ui/rich_text1.data"
#include "assets/inc/ui/rich_text2.data"
#include "assets/inc/ui/scroll_bar.data"
#include "assets/inc/ui/scroll_bar_h.data"
#include "assets/inc/ui/scroll_view.data"
#include "assets/inc/ui/scroll_view_h.data"
#include "assets/inc/ui/scroll_view_v.data"
#include "assets/inc/ui/select1.data"
#include "assets/inc/ui/selectm.data"
#include "assets/inc/ui/slide_view.data"
#include "assets/inc/ui/slide_view_h.data"
#include "assets/inc/ui/slide_view_v.data"
#include "assets/inc/ui/spinbox.data"
#include "assets/inc/ui/tab_bottom.data"
#include "assets/inc/ui/tab_bottom_compact.data"
#include "assets/inc/ui/tab_control.data"
#include "assets/inc/ui/tab_list.data"
#include "assets/inc/ui/tab_top.data"
#include "assets/inc/ui/tab_top_compact.data"
#include "assets/inc/ui/top.data"
#include "assets/inc/ui/vtranslate.data"
#ifdef WITH_STB_IMAGE
#include "assets/inc/images/1.res"
#include "assets/inc/images/2.res"
#include "assets/inc/images/3.res"
#include "assets/inc/images/arrow_down_n.res"
#include "assets/inc/images/arrow_down_o.res"
#include "assets/inc/images/arrow_down_p.res"
#include "assets/inc/images/arrow_left_n.res"
#include "assets/inc/images/arrow_left_o.res"
#include "assets/inc/images/arrow_left_p.res"
#include "assets/inc/images/arrow_right_n.res"
#include "assets/inc/images/arrow_right_o.res"
#include "assets/inc/images/arrow_right_p.res"
#include "assets/inc/images/arrow_up_n.res"
#include "assets/inc/images/arrow_up_o.res"
#include "assets/inc/images/arrow_up_p.res"
#include "assets/inc/images/backspace.res"
#include "assets/inc/images/bg800x480.res"
#include "assets/inc/images/bricks.res"
#include "assets/inc/images/check.res"
#include "assets/inc/images/checked.res"
#include "assets/inc/images/contact.res"
#include "assets/inc/images/contact_active.res"
#include "assets/inc/images/cross.res"
#include "assets/inc/images/dialog_title.res"
#include "assets/inc/images/discovery.res"
#include "assets/inc/images/discovery_active.res"
#include "assets/inc/images/earth.res"
#include "assets/inc/images/edit_clear_n.res"
#include "assets/inc/images/edit_clear_o.res"
#include "assets/inc/images/edit_clear_p.res"
#include "assets/inc/images/empty.res"
#include "assets/inc/images/find.res"
#include "assets/inc/images/green_btn_n.res"
#include "assets/inc/images/green_btn_o.res"
#include "assets/inc/images/green_btn_p.res"
#include "assets/inc/images/info.res"
#include "assets/inc/images/left_off.res"
#include "assets/inc/images/left_on.res"
#include "assets/inc/images/logo.res"
#include "assets/inc/images/me.res"
#include "assets/inc/images/me_active.res"
#include "assets/inc/images/message.res"
#include "assets/inc/images/middle_off.res"
#include "assets/inc/images/middle_on.res"
#include "assets/inc/images/msg.res"
#include "assets/inc/images/msg_active.res"
#include "assets/inc/images/muted.res"
#include "assets/inc/images/play_n.res"
#include "assets/inc/images/play_o.res"
#include "assets/inc/images/play_p.res"
#include "assets/inc/images/question.res"
#include "assets/inc/images/radio_checked.res"
#include "assets/inc/images/radio_unchecked.res"
#include "assets/inc/images/red_btn_n.res"
#include "assets/inc/images/red_btn_o.res"
#include "assets/inc/images/red_btn_p.res"
#include "assets/inc/images/rgb.res"
#include "assets/inc/images/rgba.res"
#include "assets/inc/images/right_off.res"
#include "assets/inc/images/right_on.res"
#include "assets/inc/images/shift.res"
#include "assets/inc/images/shifton.res"
#include "assets/inc/images/slider_bg.res"
#include "assets/inc/images/slider_drag.res"
#include "assets/inc/images/slider_drag_o.res"
#include "assets/inc/images/slider_drag_p.res"
#include "assets/inc/images/slider_fg.res"
#include "assets/inc/images/slider_v_bg.res"
#include "assets/inc/images/slider_v_fg.res"
#include "assets/inc/images/unchecked.res"
#include "assets/inc/images/unmuted.res"
#include "assets/inc/images/warn.res"
#else
#include "assets/inc/images/1.data"
#include "assets/inc/images/2.data"
#include "assets/inc/images/3.data"
#include "assets/inc/images/arrow_down_n.data"
#include "assets/inc/images/arrow_down_o.data"
#include "assets/inc/images/arrow_down_p.data"
#include "assets/inc/images/arrow_left_n.data"
#include "assets/inc/images/arrow_left_o.data"
#include "assets/inc/images/arrow_left_p.data"
#include "assets/inc/images/arrow_right_n.data"
#include "assets/inc/images/arrow_right_o.data"
#include "assets/inc/images/arrow_right_p.data"
#include "assets/inc/images/arrow_up_n.data"
#include "assets/inc/images/arrow_up_o.data"
#include "assets/inc/images/arrow_up_p.data"
#include "assets/inc/images/backspace.data"
#include "assets/inc/images/bg800x480.data"
#include "assets/inc/images/bricks.data"
#include "assets/inc/images/check.data"
#include "assets/inc/images/checked.data"
#include "assets/inc/images/contact.data"
#include "assets/inc/images/contact_active.data"
#include "assets/inc/images/cross.data"
#include "assets/inc/images/dialog_title.data"
#include "assets/inc/images/discovery.data"
#include "assets/inc/images/discovery_active.data"
#include "assets/inc/images/earth.data"
#include "assets/inc/images/edit_clear_n.data"
#include "assets/inc/images/edit_clear_o.data"
#include "assets/inc/images/edit_clear_p.data"
#include "assets/inc/images/empty.data"
#include "assets/inc/images/find.data"
#include "assets/inc/images/green_btn_n.data"
#include "assets/inc/images/green_btn_o.data"
#include "assets/inc/images/green_btn_p.data"
#include "assets/inc/images/info.data"
#include "assets/inc/images/left_off.data"
#include "assets/inc/images/left_on.data"
#include "assets/inc/images/logo.data"
#include "assets/inc/images/me.data"
#include "assets/inc/images/me_active.data"
#include "assets/inc/images/message.data"
#include "assets/inc/images/middle_off.data"
#include "assets/inc/images/middle_on.data"
#include "assets/inc/images/msg.data"
#include "assets/inc/images/msg_active.data"
#include "assets/inc/images/muted.data"
#include "assets/inc/images/play_n.data"
#include "assets/inc/images/play_o.data"
#include "assets/inc/images/play_p.data"
#include "assets/inc/images/question.data"
#include "assets/inc/images/radio_checked.data"
#include "assets/inc/images/radio_unchecked.data"
#include "assets/inc/images/red_btn_n.data"
#include "assets/inc/images/red_btn_o.data"
#include "assets/inc/images/red_btn_p.data"
#include "assets/inc/images/rgb.data"
#include "assets/inc/images/rgba.data"
#include "assets/inc/images/right_off.data"
#include "assets/inc/images/right_on.data"
#include "assets/inc/images/shift.data"
#include "assets/inc/images/shifton.data"
#include "assets/inc/images/slider_bg.data"
#include "assets/inc/images/slider_drag.data"
#include "assets/inc/images/slider_drag_o.data"
#include "assets/inc/images/slider_drag_p.data"
#include "assets/inc/images/slider_fg.data"
#include "assets/inc/images/slider_v_bg.data"
#include "assets/inc/images/slider_v_fg.data"
#include "assets/inc/images/unchecked.data"
#include "assets/inc/images/unmuted.data"
#include "assets/inc/images/warn.data"
#endif /*WITH_STB_IMAGE*/
#ifdef WITH_STB_FONT
#ifdef WITH_MINI_FONT
#include "assets/inc/fonts/default.mini.res"
#else /*WITH_MINI_FONT*/
#include "assets/inc/fonts/default.res"
#endif /*WITH_MINI_FONT*/
#else  /*WITH_STB_FONT*/
#include "assets/inc/fonts/default.data"
#endif /*WITH_STB_FONT*/
#endif /*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* rm = assets_manager();

#ifdef WITH_FS_RES
  assets_manager_load(rm, ASSET_TYPE_STYLE, "default");
  assets_manager_load(rm, ASSET_TYPE_FONT, "default");
#else
  assets_manager_add(rm, font_default);
  assets_manager_add(rm, image_1);
  assets_manager_add(rm, image_2);
  assets_manager_add(rm, image_3);
  assets_manager_add(rm, image_arrow_down_n);
  assets_manager_add(rm, image_arrow_down_o);
  assets_manager_add(rm, image_arrow_down_p);
  assets_manager_add(rm, image_arrow_left_n);
  assets_manager_add(rm, image_arrow_left_o);
  assets_manager_add(rm, image_arrow_left_p);
  assets_manager_add(rm, image_arrow_right_n);
  assets_manager_add(rm, image_arrow_right_o);
  assets_manager_add(rm, image_arrow_right_p);
  assets_manager_add(rm, image_arrow_up_n);
  assets_manager_add(rm, image_arrow_up_o);
  assets_manager_add(rm, image_arrow_up_p);
  assets_manager_add(rm, image_backspace);
  assets_manager_add(rm, image_bg800x480);
  assets_manager_add(rm, image_bricks);
  assets_manager_add(rm, image_check);
  assets_manager_add(rm, image_checked);
  assets_manager_add(rm, image_contact);
  assets_manager_add(rm, image_contact_active);
  assets_manager_add(rm, image_cross);
  assets_manager_add(rm, image_dialog_title);
  assets_manager_add(rm, image_discovery);
  assets_manager_add(rm, image_discovery_active);
  assets_manager_add(rm, image_earth);
  assets_manager_add(rm, image_edit_clear_n);
  assets_manager_add(rm, image_edit_clear_o);
  assets_manager_add(rm, image_edit_clear_p);
  assets_manager_add(rm, image_empty);
  assets_manager_add(rm, image_find);
  assets_manager_add(rm, image_green_btn_n);
  assets_manager_add(rm, image_green_btn_o);
  assets_manager_add(rm, image_green_btn_p);
  assets_manager_add(rm, image_info);
  assets_manager_add(rm, image_left_off);
  assets_manager_add(rm, image_left_on);
  assets_manager_add(rm, image_logo);
  assets_manager_add(rm, image_me);
  assets_manager_add(rm, image_me_active);
  assets_manager_add(rm, image_message);
  assets_manager_add(rm, image_middle_off);
  assets_manager_add(rm, image_middle_on);
  assets_manager_add(rm, image_msg);
  assets_manager_add(rm, image_msg_active);
  assets_manager_add(rm, image_muted);
  assets_manager_add(rm, image_play_n);
  assets_manager_add(rm, image_play_o);
  assets_manager_add(rm, image_play_p);
  assets_manager_add(rm, image_question);
  assets_manager_add(rm, image_radio_checked);
  assets_manager_add(rm, image_radio_unchecked);
  assets_manager_add(rm, image_red_btn_n);
  assets_manager_add(rm, image_red_btn_o);
  assets_manager_add(rm, image_red_btn_p);
  assets_manager_add(rm, image_rgb);
  assets_manager_add(rm, image_rgba);
  assets_manager_add(rm, image_right_off);
  assets_manager_add(rm, image_right_on);
  assets_manager_add(rm, image_shift);
  assets_manager_add(rm, image_shifton);
  assets_manager_add(rm, image_slider_bg);
  assets_manager_add(rm, image_slider_drag);
  assets_manager_add(rm, image_slider_drag_o);
  assets_manager_add(rm, image_slider_drag_p);
  assets_manager_add(rm, image_slider_fg);
  assets_manager_add(rm, image_slider_v_bg);
  assets_manager_add(rm, image_slider_v_fg);
  assets_manager_add(rm, image_unchecked);
  assets_manager_add(rm, image_unmuted);
  assets_manager_add(rm, image_warn);
  assets_manager_add(rm, style_button);
  assets_manager_add(rm, style_calibration);
  assets_manager_add(rm, style_color);
  assets_manager_add(rm, style_default);
  assets_manager_add(rm, style_dialog);
  assets_manager_add(rm, style_keyboard);
  assets_manager_add(rm, style_tab_bottom);
  assets_manager_add(rm, style_tab_bottom_compact);
  assets_manager_add(rm, style_tab_list);
  assets_manager_add(rm, style_tab_top);
  assets_manager_add(rm, style_tab_top_compact);
  assets_manager_add(rm, ui_animation);
  assets_manager_add(rm, ui_animator);
  assets_manager_add(rm, ui_auto_play);
  assets_manager_add(rm, ui_basic);
  assets_manager_add(rm, ui_bottom);
  assets_manager_add(rm, ui_button);
  assets_manager_add(rm, ui_calibration);
  assets_manager_add(rm, ui_color);
  assets_manager_add(rm, ui_color_picker);
  assets_manager_add(rm, ui_color_picker_full);
  assets_manager_add(rm, ui_color_picker_hsv);
  assets_manager_add(rm, ui_color_picker_rgb);
  assets_manager_add(rm, ui_color_picker_simple);
  assets_manager_add(rm, ui_combo_box);
  assets_manager_add(rm, ui_dialog1);
  assets_manager_add(rm, ui_dialog2);
  assets_manager_add(rm, ui_dragger);
  assets_manager_add(rm, ui_edit);
  assets_manager_add(rm, ui_fade);
  assets_manager_add(rm, ui_htranslate);
  assets_manager_add(rm, ui_image_list);
  assets_manager_add(rm, ui_images);
  assets_manager_add(rm, ui_kb_ascii);
  assets_manager_add(rm, ui_kb_default);
  assets_manager_add(rm, ui_kb_float);
  assets_manager_add(rm, ui_kb_hex);
  assets_manager_add(rm, ui_kb_int);
  assets_manager_add(rm, ui_kb_phone);
  assets_manager_add(rm, ui_kb_ufloat);
  assets_manager_add(rm, ui_kb_uint);
  assets_manager_add(rm, ui_keyboard);
  assets_manager_add(rm, ui_list_view);
  assets_manager_add(rm, ui_list_view_d);
  assets_manager_add(rm, ui_list_view_h);
  assets_manager_add(rm, ui_list_view_m);
  assets_manager_add(rm, ui_list_view_vh);
  assets_manager_add(rm, ui_locale);
  assets_manager_add(rm, ui_lua);
  assets_manager_add(rm, ui_main);
  assets_manager_add(rm, ui_memtest);
  assets_manager_add(rm, ui_preload);
  assets_manager_add(rm, ui_rich_text);
  assets_manager_add(rm, ui_rich_text1);
  assets_manager_add(rm, ui_rich_text2);
  assets_manager_add(rm, ui_scroll_bar);
  assets_manager_add(rm, ui_scroll_bar_h);
  assets_manager_add(rm, ui_scroll_view);
  assets_manager_add(rm, ui_scroll_view_h);
  assets_manager_add(rm, ui_scroll_view_v);
  assets_manager_add(rm, ui_select1);
  assets_manager_add(rm, ui_selectm);
  assets_manager_add(rm, ui_slide_view);
  assets_manager_add(rm, ui_slide_view_h);
  assets_manager_add(rm, ui_slide_view_v);
  assets_manager_add(rm, ui_spinbox);
  assets_manager_add(rm, ui_tab_bottom);
  assets_manager_add(rm, ui_tab_bottom_compact);
  assets_manager_add(rm, ui_tab_control);
  assets_manager_add(rm, ui_tab_list);
  assets_manager_add(rm, ui_tab_top);
  assets_manager_add(rm, ui_tab_top_compact);
  assets_manager_add(rm, ui_top);
  assets_manager_add(rm, ui_vtranslate);
#endif

  tk_init_assets();
  return RET_OK;
}