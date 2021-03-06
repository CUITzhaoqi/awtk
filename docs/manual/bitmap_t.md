## bitmap\_t
### 概述
 位图。

### 函数
<p id="bitmap_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#bitmap_t_bitmap_create">bitmap\_create</a> |  创建图片对象(一般供脚本语言中使用)。 |
| <a href="#bitmap_t_bitmap_create_ex">bitmap\_create\_ex</a> |  创建图片对象。 |
| <a href="#bitmap_t_bitmap_destroy">bitmap\_destroy</a> |  销毁图片。 |
| <a href="#bitmap_t_bitmap_get_bpp">bitmap\_get\_bpp</a> |  获取图片一个像素占用的字节数。 |
| <a href="#bitmap_t_bitmap_get_line_length">bitmap\_get\_line\_length</a> |  获取每一行占用内存的字节数。 |
| <a href="#bitmap_t_bitmap_get_pixel">bitmap\_get\_pixel</a> |  获取图片指定像素的rgba颜色值(主要用于测试程序)。 |
| <a href="#bitmap_t_bitmap_init">bitmap\_init</a> |  初始化图片。 |
| <a href="#bitmap_t_bitmap_init_from_rgba">bitmap\_init\_from\_rgba</a> |  初始化图片。 |
| <a href="#bitmap_t_bitmap_set_line_length">bitmap\_set\_line\_length</a> |  设置line_length。 |
### 属性
<p id="bitmap_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#bitmap_t_data">data</a> | uint8_t* |  图片数据。 |
| <a href="#bitmap_t_flags">flags</a> | uint16_t |  标志。请参考{bitmap_flag_t}。 |
| <a href="#bitmap_t_format">format</a> | uint16_t |  格式。请参考{bitmap_format_t}。 |
| <a href="#bitmap_t_h">h</a> | wh_t |  高度。 |
| <a href="#bitmap_t_line_length">line\_length</a> | uint32_t |  每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。 |
| <a href="#bitmap_t_name">name</a> | char* |  名称。 |
| <a href="#bitmap_t_w">w</a> | wh_t |  宽度。 |
### 事件
<p id="bitmap_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### bitmap\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bitmap\_t* | 返回bitmap对象。 |
<p id="bitmap_t_bitmap_create"> 创建图片对象(一般供脚本语言中使用)。



#### bitmap\_create\_ex 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bitmap\_t* | 返回bitmap对象。 |
| w | uint32\_t | 宽度。 |
| h | uint32\_t | 高度。 |
| line\_length | uint32\_t | line\_length。 |
| format | bitmap\_format\_t | 格式。 |
<p id="bitmap_t_bitmap_create_ex"> 创建图片对象。




#### bitmap\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
<p id="bitmap_t_bitmap_destroy"> 销毁图片。



#### bitmap\_get\_bpp 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回一个像素占用的字节数。 |
| bitmap | bitmap\_t* | bitmap对象。 |
<p id="bitmap_t_bitmap_get_bpp"> 获取图片一个像素占用的字节数。




#### bitmap\_get\_line\_length 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
<p id="bitmap_t_bitmap_get_line_length"> 获取每一行占用内存的字节数。




#### bitmap\_get\_pixel 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
| x | uint32\_t | x坐标。 |
| y | uint32\_t | y坐标。 |
| rgba | rgba\_t* | 返回颜色值。 |
<p id="bitmap_t_bitmap_get_pixel"> 获取图片指定像素的rgba颜色值(主要用于测试程序)。




#### bitmap\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
| w | uint32\_t | 宽度。 |
| h | uint32\_t | 高度。 |
| format | bitmap\_format\_t | 格式。 |
| data | const uint8\_t* | 数据，直接引用，但不负责释放。如果为空，由内部自动分配和释放。 |
<p id="bitmap_t_bitmap_init"> 初始化图片。




#### bitmap\_init\_from\_rgba 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
| w | uint32\_t | 宽度。 |
| h | uint32\_t | 高度。 |
| format | bitmap\_format\_t | 格式。 |
|  | const uint8\_t* | a |
| comp | uint32\_t | 颜色通道数(目前支持3(rgb)和4(rgba))。 |
<p id="bitmap_t_bitmap_init_from_rgba"> 初始化图片。
 数据。3通道时为RGB888格式，4通道时为RGBA888格式(内部拷贝该数据，不会引用，调用者自行释放)。




#### bitmap\_set\_line\_length 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| bitmap | bitmap\_t* | bitmap对象。 |
| line\_length | uint32\_t | line\_length。 |
<p id="bitmap_t_bitmap_set_line_length"> 设置line_length。




#### data 属性
-----------------------
<p id="bitmap_t_data"> 图片数据。



* 类型：uint8\_t*

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
#### flags 属性
-----------------------
<p id="bitmap_t_flags"> 标志。请参考{bitmap_flag_t}。



* 类型：uint16\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### format 属性
-----------------------
<p id="bitmap_t_format"> 格式。请参考{bitmap_format_t}。



* 类型：uint16\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### h 属性
-----------------------
<p id="bitmap_t_h"> 高度。



* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### line\_length 属性
-----------------------
<p id="bitmap_t_line_length"> 每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。



* 类型：uint32\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### name 属性
-----------------------
<p id="bitmap_t_name"> 名称。



* 类型：char*

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
#### w 属性
-----------------------
<p id="bitmap_t_w"> 宽度。



* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
