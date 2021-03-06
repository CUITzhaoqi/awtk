## lcd\_t
### 概述
 显示设备抽象基类。
### 函数
<p id="lcd_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#lcd_t_lcd_begin_frame">lcd\_begin\_frame</a> |  准备绘制。 |
| <a href="#lcd_t_lcd_draw_glyph">lcd\_draw\_glyph</a> |  绘制字符。如果实现了measure_text/draw_text则不需要实现本函数。 |
| <a href="#lcd_t_lcd_draw_hline">lcd\_draw\_hline</a> |  绘制一条水平线。 |
| <a href="#lcd_t_lcd_draw_image">lcd\_draw\_image</a> |  绘制图片。 |
| <a href="#lcd_t_lcd_draw_image_matrix">lcd\_draw\_image\_matrix</a> |  绘制图片。 |
| <a href="#lcd_t_lcd_draw_points">lcd\_draw\_points</a> |  绘制一组点。 |
| <a href="#lcd_t_lcd_draw_text">lcd\_draw\_text</a> |  绘制字符。 |
| <a href="#lcd_t_lcd_draw_vline">lcd\_draw\_vline</a> |  绘制一条垂直线。 |
| <a href="#lcd_t_lcd_end_frame">lcd\_end\_frame</a> |  完成绘制，同步到显示设备。 |
| <a href="#lcd_t_lcd_fill_rect">lcd\_fill\_rect</a> |  绘制实心矩形。 |
| <a href="#lcd_t_lcd_get_clip_rect">lcd\_get\_clip\_rect</a> |  获取裁剪区域。 |
| <a href="#lcd_t_lcd_get_point_color_t">lcd\_get\_point\_color\_t</a> |  获取指定点的颜色，对于基于非FrameBuffer的LCD，返回当前的fill_color。 |
| <a href="#lcd_t_lcd_get_vgcanvas">lcd\_get\_vgcanvas</a> |  获取矢量图canvas。 |
| <a href="#lcd_t_lcd_is_swappable">lcd\_is\_swappable</a> |  判读lcd是否支持swap。 |
| <a href="#lcd_t_lcd_measure_text">lcd\_measure\_text</a> |  测量字符串占用的宽度。 |
| <a href="#lcd_t_lcd_resize">lcd\_resize</a> |  基于SDL的PC软件，在SDL窗口resize时，需要调用本函数resize lcd。 |
| <a href="#lcd_t_lcd_set_clip_rect">lcd\_set\_clip\_rect</a> |  设置裁剪区域。 |
| <a href="#lcd_t_lcd_set_fill_color">lcd\_set\_fill\_color</a> |  设置填充颜色。 |
| <a href="#lcd_t_lcd_set_font_name">lcd\_set\_font\_name</a> |  设置字体名称。 |
| <a href="#lcd_t_lcd_set_font_size">lcd\_set\_font\_size</a> |  设置字体大小。 |
| <a href="#lcd_t_lcd_set_global_alpha">lcd\_set\_global\_alpha</a> |  设置全局alpha。 |
| <a href="#lcd_t_lcd_set_stroke_color">lcd\_set\_stroke\_color</a> |  设置线条颜色。 |
| <a href="#lcd_t_lcd_set_text_color">lcd\_set\_text\_color</a> |  设置文本颜色。 |
| <a href="#lcd_t_lcd_stroke_rect">lcd\_stroke\_rect</a> |  绘制矩形。 |
| <a href="#lcd_t_lcd_take_snapshot">lcd\_take\_snapshot</a> |  拍摄快照，一般用于窗口动画，只有framebuffer模式，才支持。 |
### 属性
<p id="lcd_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#lcd_t_draw_mode">draw\_mode</a> | lcd_draw_mode_t |  绘制模式。 |
| <a href="#lcd_t_fill_color">fill\_color</a> | color_t |  填充颜色 |
| <a href="#lcd_t_font_name">font\_name</a> | char* |  字体名称。 |
| <a href="#lcd_t_font_size">font\_size</a> | uint32_t |  字体大小。 |
| <a href="#lcd_t_global_alpha">global\_alpha</a> | uint8_t |  全局alpha |
| <a href="#lcd_t_height">height</a> | wh_t |  屏幕的高度 |
| <a href="#lcd_t_ratio">ratio</a> | float_t |  屏幕密度。 |
| <a href="#lcd_t_stroke_color">stroke\_color</a> | color_t |  线条颜色 |
| <a href="#lcd_t_support_dirty_rect">support\_dirty\_rect</a> | bool_t |  是否支持脏矩形。 |
| <a href="#lcd_t_text_color">text\_color</a> | color_t |  文本颜色 |
| <a href="#lcd_t_type">type</a> | lcd_type_t |  LCD的类型。 |
| <a href="#lcd_t_w">w</a> | wh_t |  屏幕的宽度 |
### 事件
<p id="lcd_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### lcd\_begin\_frame 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| dirty\_rect | rect\_t* | 需要绘制的区域。 |
| anim\_mode | bool\_t | 动画模式，如果可能，直接画到显存而不是离线的framebuffer。 |
<p id="lcd_t_lcd_begin_frame"> 准备绘制。



#### lcd\_draw\_glyph 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| glyph | glyph\_t* | 字模 |
| src | rect\_t* | 只绘制指定区域的部分。 |
| x | xy\_t | x坐标。 |
| y | xy\_t | y坐标。 |
<p id="lcd_t_lcd_draw_glyph"> 绘制字符。如果实现了measure_text/draw_text则不需要实现本函数。



#### lcd\_draw\_hline 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| x | xy\_t* | x坐标。 |
| y | xy\_t* | y坐标。 |
| w | xy\_t* | 直线宽度。 |
<p id="lcd_t_lcd_draw_hline"> 绘制一条水平线。



#### lcd\_draw\_image 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| img | bitmap\_t* | 图片。 |
| src | rect\_t* | 只绘制指定区域的部分。 |
| dst | rect\_t* | 绘制到目标区域。 |
<p id="lcd_t_lcd_draw_image"> 绘制图片。



#### lcd\_draw\_image\_matrix 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| info | draw\_image\_info\_t* | 绘制参数。 |
<p id="lcd_t_lcd_draw_image_matrix"> 绘制图片。



#### lcd\_draw\_points 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| points | point\_t* | 要绘制的点集合。 |
| nr | uint32\_t | 点的个数。 |
<p id="lcd_t_lcd_draw_points"> 绘制一组点。



#### lcd\_draw\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| str | wchar\_t* | 字符串。 |
| nr | uint32\_t | 字符数。 |
| x | xy\_t | x坐标。 |
| y | xy\_t | y坐标。 |
<p id="lcd_t_lcd_draw_text"> 绘制字符。



#### lcd\_draw\_vline 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| x | xy\_t* | x坐标。 |
| y | xy\_t* | y坐标。 |
| h | xy\_t* | 直线高度。 |
<p id="lcd_t_lcd_draw_vline"> 绘制一条垂直线。



#### lcd\_end\_frame 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
<p id="lcd_t_lcd_end_frame"> 完成绘制，同步到显示设备。



#### lcd\_fill\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| x | xy\_t | x坐标。 |
| y | xy\_t | y坐标。 |
| w | wh\_t | 宽度。 |
| h | wh\_t | 高度。 |
<p id="lcd_t_lcd_fill_rect"> 绘制实心矩形。



#### lcd\_get\_clip\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| rect | rect\_t* | 裁剪区域。 |
<p id="lcd_t_lcd_get_clip_rect"> 获取裁剪区域。



#### lcd\_get\_point\_color\_t 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| x | xy\_t | x坐标。 |
| y | xy\_t | y坐标。 |
<p id="lcd_t_lcd_get_point_color_t"> 获取指定点的颜色，对于基于非FrameBuffer的LCD，返回当前的fill_color。



#### lcd\_get\_vgcanvas 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | vgcanvas\_t* | 返回矢量图canvas。 |
| lcd | lcd\_t* | lcd对象。 |
<p id="lcd_t_lcd_get_vgcanvas"> 获取矢量图canvas。



#### lcd\_is\_swappable 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bool\_t | 返回是否支持swap。 |
| lcd | lcd\_t* | lcd对象。 |
<p id="lcd_t_lcd_is_swappable"> 判读lcd是否支持swap。



#### lcd\_measure\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | float\_t | 返回字符串占用的宽度。 |
| lcd | lcd\_t* | lcd对象。 |
| str | wchar\_t* | 字符串。 |
| nr | uint32\_t | 字符数。 |
<p id="lcd_t_lcd_measure_text"> 测量字符串占用的宽度。



#### lcd\_resize 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| w | wh\_t | 新的宽度。 |
| h | wh\_t | 新的高度。 |
| line\_length | uint32\_t | line\_length。 |
<p id="lcd_t_lcd_resize"> 基于SDL的PC软件，在SDL窗口resize时，需要调用本函数resize lcd。
 屏幕旋转时会调用本函数，调整LCD的大小。



#### lcd\_set\_clip\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| rect | rect\_t* | 裁剪区域。 |
<p id="lcd_t_lcd_set_clip_rect"> 设置裁剪区域。



#### lcd\_set\_fill\_color 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| color | color\_t | 颜色。 |
<p id="lcd_t_lcd_set_fill_color"> 设置填充颜色。



#### lcd\_set\_font\_name 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| name | const char* | 字体名称。 |
<p id="lcd_t_lcd_set_font_name"> 设置字体名称。



#### lcd\_set\_font\_size 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| font\_size | uint32\_t | 字体大小。 |
<p id="lcd_t_lcd_set_font_size"> 设置字体大小。



#### lcd\_set\_global\_alpha 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| alpha | uint8\_t | 全局alpha。 |
<p id="lcd_t_lcd_set_global_alpha"> 设置全局alpha。



#### lcd\_set\_stroke\_color 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| color | color\_t | 颜色。 |
<p id="lcd_t_lcd_set_stroke_color"> 设置线条颜色。



#### lcd\_set\_text\_color 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| color | color\_t | 颜色。 |
<p id="lcd_t_lcd_set_text_color"> 设置文本颜色。



#### lcd\_stroke\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| x | xy\_t | x坐标。 |
| y | xy\_t | y坐标。 |
| w | wh\_t | 宽度。 |
| h | wh\_t | 高度。 |
<p id="lcd_t_lcd_stroke_rect"> 绘制矩形。



#### lcd\_take\_snapshot 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| lcd | lcd\_t* | lcd对象。 |
| img | bitmap\_t* | 返回快照图片。 |
| auto\_rotate | bool\_t | 是否根据LCD实际方向自动旋转。 |
<p id="lcd_t_lcd_take_snapshot"> 拍摄快照，一般用于窗口动画，只有framebuffer模式，才支持。



#### draw\_mode 属性
-----------------------
<p id="lcd_t_draw_mode"> 绘制模式。


* 类型：lcd\_draw\_mode\_t

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
<p id="lcd_t_fill_color"> 填充颜色


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
#### font\_name 属性
-----------------------
<p id="lcd_t_font_name"> 字体名称。


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
<p id="lcd_t_font_size"> 字体大小。


* 类型：uint32\_t

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
<p id="lcd_t_global_alpha"> 全局alpha


* 类型：uint8\_t

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
<p id="lcd_t_height"> 屏幕的高度


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
#### ratio 属性
-----------------------
<p id="lcd_t_ratio"> 屏幕密度。


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
<p id="lcd_t_stroke_color"> 线条颜色


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
#### support\_dirty\_rect 属性
-----------------------
<p id="lcd_t_support_dirty_rect"> 是否支持脏矩形。


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
#### text\_color 属性
-----------------------
<p id="lcd_t_text_color"> 文本颜色


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
#### type 属性
-----------------------
<p id="lcd_t_type"> LCD的类型。


* 类型：lcd\_type\_t

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
<p id="lcd_t_w"> 屏幕的宽度


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
