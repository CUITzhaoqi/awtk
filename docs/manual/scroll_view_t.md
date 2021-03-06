## scroll\_view\_t
### 概述
 滚动视图。
![image](images/scroll_view_t_0.png)

### 函数
<p id="scroll_view_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#scroll_view_t_scroll_view_cast">scroll\_view\_cast</a> |  转换为scroll_view对象(供脚本语言使用)。 |
| <a href="#scroll_view_t_scroll_view_create">scroll\_view\_create</a> |  创建scroll_view对象 |
| <a href="#scroll_view_t_scroll_view_scroll_to">scroll\_view\_scroll\_to</a> |  滚动到指定的偏移量。 |
| <a href="#scroll_view_t_scroll_view_set_offset">scroll\_view\_set\_offset</a> |  设置偏移量。 |
| <a href="#scroll_view_t_scroll_view_set_virtual_h">scroll\_view\_set\_virtual\_h</a> |  设置虚拟高度。 |
| <a href="#scroll_view_t_scroll_view_set_virtual_w">scroll\_view\_set\_virtual\_w</a> |  设置虚拟宽度。 |
| <a href="#scroll_view_t_scroll_view_set_xslidable">scroll\_view\_set\_xslidable</a> |  设置是否允许x方向滑动。 |
| <a href="#scroll_view_t_scroll_view_set_yslidable">scroll\_view\_set\_yslidable</a> |  设置是否允许y方向滑动。 |
### 属性
<p id="scroll_view_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#scroll_view_t_virtual_h">virtual\_h</a> | wh_t |  虚拟高度。 |
| <a href="#scroll_view_t_virtual_w">virtual\_w</a> | wh_t |  虚拟宽度。 |
| <a href="#scroll_view_t_xoffset">xoffset</a> | int32_t |  x偏移量。 |
| <a href="#scroll_view_t_xslidable">xslidable</a> | bool_t |  是否允许x方向滑动。 |
| <a href="#scroll_view_t_yoffset">yoffset</a> | int32_t |  y偏移量。 |
| <a href="#scroll_view_t_yslidable">yslidable</a> | bool_t |  是否允许y方向滑动。 |
### 事件
<p id="scroll_view_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### scroll\_view\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | scroll\_view对象。 |
| widget | widget\_t* | scroll\_view对象。 |
<p id="scroll_view_t_scroll_view_cast"> 转换为scroll_view对象(供脚本语言使用)。



#### scroll\_view\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="scroll_view_t_scroll_view_create"> 创建scroll_view对象



#### scroll\_view\_scroll\_to 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| xoffset\_end | int32\_t | x偏移量。 |
| yoffset\_end | int32\_t | y偏移量。 |
| duration | int32\_t | 时间。 |
<p id="scroll_view_t_scroll_view_scroll_to"> 滚动到指定的偏移量。



#### scroll\_view\_set\_offset 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| xoffset | int32\_t | x偏移量。 |
| yoffset | int32\_t | y偏移量。 |
<p id="scroll_view_t_scroll_view_set_offset"> 设置偏移量。



#### scroll\_view\_set\_virtual\_h 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| h | wh\_t | 虚拟高度。 |
<p id="scroll_view_t_scroll_view_set_virtual_h"> 设置虚拟高度。



#### scroll\_view\_set\_virtual\_w 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| w | wh\_t | 虚拟宽度。 |
<p id="scroll_view_t_scroll_view_set_virtual_w"> 设置虚拟宽度。



#### scroll\_view\_set\_xslidable 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| xslidable | bool\_t | 是否允许滑动。 |
<p id="scroll_view_t_scroll_view_set_xslidable"> 设置是否允许x方向滑动。



#### scroll\_view\_set\_yslidable 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| yslidable | bool\_t | 是否允许滑动。 |
<p id="scroll_view_t_scroll_view_set_yslidable"> 设置是否允许y方向滑动。



#### virtual\_h 属性
-----------------------
<p id="scroll_view_t_virtual_h"> 虚拟高度。


* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 是 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 是 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
#### virtual\_w 属性
-----------------------
<p id="scroll_view_t_virtual_w"> 虚拟宽度。


* 类型：wh\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 是 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 是 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
#### xoffset 属性
-----------------------
<p id="scroll_view_t_xoffset"> x偏移量。


* 类型：int32\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 是 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 是 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
#### xslidable 属性
-----------------------
<p id="scroll_view_t_xslidable"> 是否允许x方向滑动。


* 类型：bool\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
#### yoffset 属性
-----------------------
<p id="scroll_view_t_yoffset"> y偏移量。


* 类型：int32\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
#### yslidable 属性
-----------------------
<p id="scroll_view_t_yslidable"> 是否允许y方向滑动。


* 类型：bool\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 是 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 是 |
| 可在XML中设置 | 是 |
| 支通过widget_get_prop读取 | 是 |
| 支通过widget_set_prop修改 | 是 |
