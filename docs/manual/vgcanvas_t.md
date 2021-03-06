## vgcanvas\_t
### 概述
 矢量图画布抽象基类。

### 函数
<p id="vgcanvas_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#vgcanvas_t_vgcanvas_arc">vgcanvas\_arc</a> |  arc |
| <a href="#vgcanvas_t_vgcanvas_arc_to">vgcanvas\_arc\_to</a> |  arc to |
| <a href="#vgcanvas_t_vgcanvas_begin_frame">vgcanvas\_begin\_frame</a> |  开始绘制，系统内部调用。 |
| <a href="#vgcanvas_t_vgcanvas_begin_path">vgcanvas\_begin\_path</a> |  begin path |
| <a href="#vgcanvas_t_vgcanvas_bezier_to">vgcanvas\_bezier\_to</a> |  bezier curve to |
| <a href="#vgcanvas_t_vgcanvas_clear_rect">vgcanvas\_clear\_rect</a> |  clear rect |
| <a href="#vgcanvas_t_vgcanvas_clip_rect">vgcanvas\_clip\_rect</a> |  clip_rect |
| <a href="#vgcanvas_t_vgcanvas_close_path">vgcanvas\_close\_path</a> |  close_path |
| <a href="#vgcanvas_t_vgcanvas_create">vgcanvas\_create</a> |  创建vgcanvas。 |
| <a href="#vgcanvas_t_vgcanvas_destroy">vgcanvas\_destroy</a> |  destroy |
| <a href="#vgcanvas_t_vgcanvas_draw_icon">vgcanvas\_draw\_icon</a> |  draw icon |
| <a href="#vgcanvas_t_vgcanvas_draw_image">vgcanvas\_draw\_image</a> |  draw image |
| <a href="#vgcanvas_t_vgcanvas_ellipse">vgcanvas\_ellipse</a> |  ellipse |
| <a href="#vgcanvas_t_vgcanvas_end_frame">vgcanvas\_end\_frame</a> |  结束绘制。系统内部调用。 |
| <a href="#vgcanvas_t_vgcanvas_fill">vgcanvas\_fill</a> |  填充多边形。 |
| <a href="#vgcanvas_t_vgcanvas_fill_text">vgcanvas\_fill\_text</a> |  fill text |
| <a href="#vgcanvas_t_vgcanvas_flush">vgcanvas\_flush</a> |  flush |
| <a href="#vgcanvas_t_vgcanvas_is_point_in_path">vgcanvas\_is\_point\_in\_path</a> |  检查点是否在当前路径中。 |
| <a href="#vgcanvas_t_vgcanvas_line_to">vgcanvas\_line\_to</a> |  line to。 |
| <a href="#vgcanvas_t_vgcanvas_measure_text">vgcanvas\_measure\_text</a> |  measure text |
| <a href="#vgcanvas_t_vgcanvas_move_to">vgcanvas\_move\_to</a> |  move to |
| <a href="#vgcanvas_t_vgcanvas_paint">vgcanvas\_paint</a> |  用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。 |
| <a href="#vgcanvas_t_vgcanvas_quad_to">vgcanvas\_quad\_to</a> |  quadratic curve to |
| <a href="#vgcanvas_t_vgcanvas_rect">vgcanvas\_rect</a> |  rect |
| <a href="#vgcanvas_t_vgcanvas_reinit">vgcanvas\_reinit</a> |  重新初始化，系统内部调用。 |
| <a href="#vgcanvas_t_vgcanvas_reset">vgcanvas\_reset</a> |  reset |
| <a href="#vgcanvas_t_vgcanvas_restore">vgcanvas\_restore</a> |  restore |
| <a href="#vgcanvas_t_vgcanvas_rotate">vgcanvas\_rotate</a> |  rotate |
| <a href="#vgcanvas_t_vgcanvas_rounded_rect">vgcanvas\_rounded\_rect</a> |  round rect |
| <a href="#vgcanvas_t_vgcanvas_save">vgcanvas\_save</a> |  save |
| <a href="#vgcanvas_t_vgcanvas_scale">vgcanvas\_scale</a> |  scale |
| <a href="#vgcanvas_t_vgcanvas_set_antialias">vgcanvas\_set\_antialias</a> |  set antialias |
| <a href="#vgcanvas_t_vgcanvas_set_fill_color">vgcanvas\_set\_fill\_color</a> |  set fill color |
| <a href="#vgcanvas_t_vgcanvas_set_font">vgcanvas\_set\_font</a> |  set font |
| <a href="#vgcanvas_t_vgcanvas_set_font_size">vgcanvas\_set\_font\_size</a> |  set font size |
| <a href="#vgcanvas_t_vgcanvas_set_global_alpha">vgcanvas\_set\_global\_alpha</a> |  set global alpha |
| <a href="#vgcanvas_t_vgcanvas_set_line_cap">vgcanvas\_set\_line\_cap</a> |  set line cap |
| <a href="#vgcanvas_t_vgcanvas_set_line_join">vgcanvas\_set\_line\_join</a> |  set line join |
| <a href="#vgcanvas_t_vgcanvas_set_line_width">vgcanvas\_set\_line\_width</a> |  set line width |
| <a href="#vgcanvas_t_vgcanvas_set_linear_gradient">vgcanvas\_set\_linear\_gradient</a> |  set fill linear gradient |
| <a href="#vgcanvas_t_vgcanvas_set_linear_gradient">vgcanvas\_set\_linear\_gradient</a> |  set stroke linear gradient |
| <a href="#vgcanvas_t_vgcanvas_set_miter_limit">vgcanvas\_set\_miter\_limit</a> |  set miter limit |
| <a href="#vgcanvas_t_vgcanvas_set_radial_gradient">vgcanvas\_set\_radial\_gradient</a> |  set stroke radial gradient |
| <a href="#vgcanvas_t_vgcanvas_set_radial_gradient">vgcanvas\_set\_radial\_gradient</a> |  set fill radial gradient |
| <a href="#vgcanvas_t_vgcanvas_set_stroke_color">vgcanvas\_set\_stroke\_color</a> |  set stroke color |
| <a href="#vgcanvas_t_vgcanvas_set_text_align">vgcanvas\_set\_text\_align</a> |  set text align |
| <a href="#vgcanvas_t_vgcanvas_set_text_baseline">vgcanvas\_set\_text\_baseline</a> |  set text baseline |
| <a href="#vgcanvas_t_vgcanvas_set_transform">vgcanvas\_set\_transform</a> |  set transform |
| <a href="#vgcanvas_t_vgcanvas_stroke">vgcanvas\_stroke</a> |  画线。 |
| <a href="#vgcanvas_t_vgcanvas_transform">vgcanvas\_transform</a> |  transform |
| <a href="#vgcanvas_t_vgcanvas_translate">vgcanvas\_translate</a> |  scale |
### 属性
<p id="vgcanvas_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#vgcanvas_t_anti_alias">anti\_alias</a> | bool_t |  是否启用反走样功能。 |
| <a href="#vgcanvas_t_fill_color">fill\_color</a> | color_t |  填充颜色 |
| <a href="#vgcanvas_t_font">font</a> | char* |  字体。 |
| <a href="#vgcanvas_t_font_size">font\_size</a> | float_t |  字体大小。 |
| <a href="#vgcanvas_t_global_alpha">global\_alpha</a> | float_t |  全局alpha。 |
| <a href="#vgcanvas_t_height">height</a> | wh_t |  canvas的高度 |
| <a href="#vgcanvas_t_line_cap">line\_cap</a> | char* |  line_cap。 |
| <a href="#vgcanvas_t_line_join">line\_join</a> | char* |  line_join。 |
| <a href="#vgcanvas_t_line_width">line\_width</a> | float_t |  线宽。 |
| <a href="#vgcanvas_t_miter_limit">miter\_limit</a> | float_t |  miter_limit。 |
| <a href="#vgcanvas_t_ratio">ratio</a> | float_t |  显示比例。 |
| <a href="#vgcanvas_t_stroke_color">stroke\_color</a> | color_t |  线条颜色 |
| <a href="#vgcanvas_t_text_align">text\_align</a> | char* |  text_align。 |
| <a href="#vgcanvas_t_text_baseline">text\_baseline</a> | char* |  text_baseline。 |
| <a href="#vgcanvas_t_w">w</a> | wh_t |  canvas的宽度 |
### 事件
<p id="vgcanvas_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### vgcanvas\_arc 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | 原点x坐标。 |
| y | float\_t | 原点y坐标。 |
| r | float\_t | 半径。 |
| start\_angle | float\_t | 起始角度。 |
| end\_angle | float\_t | 结束角度。 |
| ccw | bool\_t | 是否逆时针。 |
<p id="vgcanvas_t_vgcanvas_arc"> arc




#### vgcanvas\_arc\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x1 | float\_t | 起始点x坐标。 |
| y1 | float\_t | 起始点y坐标。 |
| x2 | float\_t | 结束点x坐标。 |
| y2 | float\_t | 结束点y坐标。 |
| r | float\_t | 半径。 |
<p id="vgcanvas_t_vgcanvas_arc_to"> arc to




#### vgcanvas\_begin\_frame 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| dirty\_rect | rect\_t* | 需要绘制的区域。 |
<p id="vgcanvas_t_vgcanvas_begin_frame"> 开始绘制，系统内部调用。




#### vgcanvas\_begin\_path 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_begin_path"> begin path




#### vgcanvas\_bezier\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| cp1x | float\_t | 控制点1x坐标。 |
| cp1y | float\_t | 控制点1y坐标。 |
| cp2x | float\_t | 控制点2x坐标。 |
| cp2y | float\_t | 控制点3y坐标。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
<p id="vgcanvas_t_vgcanvas_bezier_to"> bezier curve to




#### vgcanvas\_clear\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| w | float\_t | 宽度。 |
| h | float\_t | 高度。 |
| c | color\_t | 颜色。 |
<p id="vgcanvas_t_vgcanvas_clear_rect"> clear rect




#### vgcanvas\_clip\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| w | float\_t | 宽度。 |
| h | float\_t | 高度。 |
<p id="vgcanvas_t_vgcanvas_clip_rect"> clip_rect




#### vgcanvas\_close\_path 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_close_path"> close_path




#### vgcanvas\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | vgcanvas\_t | 返回vgcanvas |
| w | uint32\_t | 宽度 |
| h | uint32\_t | 高度 |
| stride | uint32\_t | 一行占用的字节数。 |
| format | bitmap\_format\_t | 如果data是framebuffer，format指定data的格式。 |
| data | void* | framebuffer或其它ctx。 |
<p id="vgcanvas_t_vgcanvas_create"> 创建vgcanvas。




#### vgcanvas\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_destroy"> destroy




#### vgcanvas\_draw\_icon 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| img | bitmap\_t* | 图片。 |
| sx | float\_t | sx |
| sy | float\_t | sy |
| sw | float\_t | sw |
| sh | float\_t | sh |
| dx | float\_t | dx |
| dy | float\_t | dy |
| dw | float\_t | dw |
| dh | float\_t | dh |
<p id="vgcanvas_t_vgcanvas_draw_icon"> draw icon




#### vgcanvas\_draw\_image 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| img | bitmap\_t* | 图片。 |
| sx | float\_t | sx |
| sy | float\_t | sy |
| sw | float\_t | sw |
| sh | float\_t | sh |
| dx | float\_t | dx |
| dy | float\_t | dy |
| dw | float\_t | dw |
| dh | float\_t | dh |
<p id="vgcanvas_t_vgcanvas_draw_image"> draw image




#### vgcanvas\_ellipse 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| rx | float\_t | 圆角半径。 |
| ry | float\_t | 圆角半径。 |
<p id="vgcanvas_t_vgcanvas_ellipse"> ellipse




#### vgcanvas\_end\_frame 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_end_frame"> 结束绘制。系统内部调用。




#### vgcanvas\_fill 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_fill"> 填充多边形。




#### vgcanvas\_fill\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| text | char* | text |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| max\_width | float\_t | 最大宽度。 |
<p id="vgcanvas_t_vgcanvas_fill_text"> fill text




#### vgcanvas\_flush 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_flush"> flush




#### vgcanvas\_is\_point\_in\_path 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bool\_t | 返回TRUE表示在，否则表示不在。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
<p id="vgcanvas_t_vgcanvas_is_point_in_path"> 检查点是否在当前路径中。




#### vgcanvas\_line\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
<p id="vgcanvas_t_vgcanvas_line_to"> line to。




#### vgcanvas\_measure\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | float\_t | 返回text的宽度。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| text | char* | text |
<p id="vgcanvas_t_vgcanvas_measure_text"> measure text




#### vgcanvas\_move\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
<p id="vgcanvas_t_vgcanvas_move_to"> move to




#### vgcanvas\_paint 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| stroke | bool\_t | TRUE表示画线FALSE表示填充。 |
| img | bitmap\_t* | 图片。 |
<p id="vgcanvas_t_vgcanvas_paint"> 用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
 多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。




#### vgcanvas\_quad\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| cpx | float\_t | 控制点x坐标。 |
| cpy | float\_t | 控制点y坐标。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
<p id="vgcanvas_t_vgcanvas_quad_to"> quadratic curve to




#### vgcanvas\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| w | float\_t | 宽度。 |
| h | float\_t | 高度。 |
<p id="vgcanvas_t_vgcanvas_rect"> rect




#### vgcanvas\_reinit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| w | uint32\_t | 宽度 |
| h | uint32\_t | 高度 |
| stride | uint32\_t | 一行占用的字节数。 |
| format | bitmap\_format\_t | 如果data是framebuffer，format指定data的格式。 |
| data | void* | framebuffer或其它ctx。 |
<p id="vgcanvas_t_vgcanvas_reinit"> 重新初始化，系统内部调用。




#### vgcanvas\_reset 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_reset"> reset




#### vgcanvas\_restore 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_restore"> restore




#### vgcanvas\_rotate 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| rad | float\_t | 角度 |
<p id="vgcanvas_t_vgcanvas_rotate"> rotate




#### vgcanvas\_rounded\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x坐标。 |
| y | float\_t | y坐标。 |
| w | float\_t | 宽度。 |
| h | float\_t | 高度。 |
| r | float\_t | 圆角半径。 |
<p id="vgcanvas_t_vgcanvas_rounded_rect"> round rect




#### vgcanvas\_save 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_save"> save




#### vgcanvas\_scale 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x方向缩放比例。 |
| y | float\_t | y方向缩放比例。 |
<p id="vgcanvas_t_vgcanvas_scale"> scale




#### vgcanvas\_set\_antialias 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | bool\_t | 是否启用反走样。 |
<p id="vgcanvas_t_vgcanvas_set_antialias"> set antialias




#### vgcanvas\_set\_fill\_color 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| color | color\_t | 颜色。 |
<p id="vgcanvas_t_vgcanvas_set_fill_color"> set fill color




#### vgcanvas\_set\_font 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| font | char* | 字体名称。 |
<p id="vgcanvas_t_vgcanvas_set_font"> set font




#### vgcanvas\_set\_font\_size 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| font | float\_t | 字体大小。 |
<p id="vgcanvas_t_vgcanvas_set_font_size"> set font size




#### vgcanvas\_set\_global\_alpha 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| alpha | float\_t | global alpha。 |
<p id="vgcanvas_t_vgcanvas_set_global_alpha"> set global alpha




#### vgcanvas\_set\_line\_cap 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | char* | 取值：butt|round|square，必须为常量字符串。 |
<p id="vgcanvas_t_vgcanvas_set_line_cap"> set line cap




#### vgcanvas\_set\_line\_join 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | char* | 取值：bevel|round|miter，必须为常量字符串。 |
<p id="vgcanvas_t_vgcanvas_set_line_join"> set line join




#### vgcanvas\_set\_line\_width 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | float\_t | 线宽。 |
<p id="vgcanvas_t_vgcanvas_set_line_width"> set line width




#### vgcanvas\_set\_linear\_gradient 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| sx | float\_t | start x |
| sy | float\_t | start y |
| ex | float\_t | end x |
| ey | float\_t | end y |
| icolor | color\_t | 开始颜色。 |
| ocolor | color\_t | 结束颜色。 |
<p id="vgcanvas_t_vgcanvas_set_linear_gradient"> set fill linear gradient




#### vgcanvas\_set\_linear\_gradient 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| sx | float\_t | start x |
| sy | float\_t | start y |
| ex | float\_t | end x |
| ey | float\_t | end y |
| icolor | color\_t | 开始颜色。 |
| ocolor | color\_t | 结束颜色。 |
<p id="vgcanvas_t_vgcanvas_set_linear_gradient"> set stroke linear gradient




#### vgcanvas\_set\_miter\_limit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | float\_t | miter limit |
<p id="vgcanvas_t_vgcanvas_set_miter_limit"> set miter limit




#### vgcanvas\_set\_radial\_gradient 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| cx | float\_t | center x |
| cy | float\_t | center y |
| inr | float\_t | 内环半径 |
| outr | float\_t | 外环半径。 |
| icolor | color\_t | 开始颜色。 |
| ocolor | color\_t | 结束颜色。 |
<p id="vgcanvas_t_vgcanvas_set_radial_gradient"> set stroke radial gradient




#### vgcanvas\_set\_radial\_gradient 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| cx | float\_t | center x |
| cy | float\_t | center y |
| inr | float\_t | 内环半径 |
| outr | float\_t | 外环半径。 |
| icolor | color\_t | 开始颜色。 |
| ocolor | color\_t | 结束颜色。 |
<p id="vgcanvas_t_vgcanvas_set_radial_gradient"> set fill radial gradient




#### vgcanvas\_set\_stroke\_color 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| color | color\_t | 颜色。 |
<p id="vgcanvas_t_vgcanvas_set_stroke_color"> set stroke color




#### vgcanvas\_set\_text\_align 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | char* | 取值：left|center|right，必须为常量字符串。 |
<p id="vgcanvas_t_vgcanvas_set_text_align"> set text align




#### vgcanvas\_set\_text\_baseline 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| value | char* | 取值：top|middle|bottom，必须为常量字符串。 |
<p id="vgcanvas_t_vgcanvas_set_text_baseline"> set text baseline




#### vgcanvas\_set\_transform 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| a | float\_t | a |
| b | float\_t | b |
| c | float\_t | c |
| d | float\_t | d |
| e | float\_t | e |
| f | float\_t | f |
<p id="vgcanvas_t_vgcanvas_set_transform"> set transform




#### vgcanvas\_stroke 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
<p id="vgcanvas_t_vgcanvas_stroke"> 画线。




#### vgcanvas\_transform 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| a | float\_t | a |
| b | float\_t | b |
| c | float\_t | c |
| d | float\_t | d |
| e | float\_t | e |
| f | float\_t | f |
<p id="vgcanvas_t_vgcanvas_transform"> transform




#### vgcanvas\_translate 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| vg | vgcanvas\_t* | vgcanvas对象。 |
| x | float\_t | x方向偏移。 |
| y | float\_t | y方向偏移。 |
<p id="vgcanvas_t_vgcanvas_translate"> scale




#### anti\_alias 属性
-----------------------
<p id="vgcanvas_t_anti_alias"> 是否启用反走样功能。



* 类型：bool\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### fill\_color 属性
-----------------------
<p id="vgcanvas_t_fill_color"> 填充颜色



* 类型：color\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### font 属性
-----------------------
<p id="vgcanvas_t_font"> 字体。



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### font\_size 属性
-----------------------
<p id="vgcanvas_t_font_size"> 字体大小。



* 类型：float\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### global\_alpha 属性
-----------------------
<p id="vgcanvas_t_global_alpha"> 全局alpha。



* 类型：float\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### height 属性
-----------------------
<p id="vgcanvas_t_height"> canvas的高度



* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### line\_cap 属性
-----------------------
<p id="vgcanvas_t_line_cap"> line_cap。
 @see http://www.w3school.com.cn/tags/canvas_linecap.asp



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### line\_join 属性
-----------------------
<p id="vgcanvas_t_line_join"> line_join。
 @see http://www.w3school.com.cn/tags/canvas_linejoin.asp



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### line\_width 属性
-----------------------
<p id="vgcanvas_t_line_width"> 线宽。



* 类型：float\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### miter\_limit 属性
-----------------------
<p id="vgcanvas_t_miter_limit"> miter_limit。
 @see http://www.w3school.com.cn/tags/canvas_miterlimit.asp



* 类型：float\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### ratio 属性
-----------------------
<p id="vgcanvas_t_ratio"> 显示比例。



* 类型：float\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### stroke\_color 属性
-----------------------
<p id="vgcanvas_t_stroke_color"> 线条颜色



* 类型：color\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### text\_align 属性
-----------------------
<p id="vgcanvas_t_text_align"> text_align。
 @see http://www.w3school.com.cn/tags/canvas_textalign.asp



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### text\_baseline 属性
-----------------------
<p id="vgcanvas_t_text_baseline"> text_baseline。
 @see http://www.w3school.com.cn/tags/canvas_textbaseline.asp



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### w 属性
-----------------------
<p id="vgcanvas_t_w"> canvas的宽度



* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 否 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
