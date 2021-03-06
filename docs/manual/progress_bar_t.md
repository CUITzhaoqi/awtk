## progress\_bar\_t
### 概述
 进度条控件。
![image](images/progress_bar_t_0.png)

### 函数
<p id="progress_bar_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#progress_bar_t_progress_bar_cast">progress\_bar\_cast</a> |  转换为progress_bar对象(供脚本语言使用)。 |
| <a href="#progress_bar_t_progress_bar_create">progress\_bar\_create</a> |  创建progress_bar对象 |
| <a href="#progress_bar_t_progress_bar_set_show_text">progress\_bar\_set\_show\_text</a> |  设置进度条的是否显示文本。 |
| <a href="#progress_bar_t_progress_bar_set_value">progress\_bar\_set\_value</a> |  设置进度条的进度。 |
| <a href="#progress_bar_t_progress_bar_set_vertical">progress\_bar\_set\_vertical</a> |  设置进度条的方向。 |
### 属性
<p id="progress_bar_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#progress_bar_t_show_text">show\_text</a> | bool_t |  是否显示文本。 |
| <a href="#progress_bar_t_value">value</a> | uint8_t |  进度条的值[0-100]。 |
| <a href="#progress_bar_t_vertical">vertical</a> | bool_t |  进度条的是否为垂直方向。 |
### 事件
<p id="progress_bar_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
| EVT\_VALUE\_WILL\_CHANGE | event\_t | 值即将改变事件。 |
| EVT\_VALUE\_CHANGED | event\_t | 值改变事件。 |
#### progress\_bar\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | progress\_bar对象。 |
| widget | widget\_t* | progress\_bar对象。 |
<p id="progress_bar_t_progress_bar_cast"> 转换为progress_bar对象(供脚本语言使用)。



#### progress\_bar\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="progress_bar_t_progress_bar_create"> 创建progress_bar对象



#### progress\_bar\_set\_show\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| show\_text | bool\_t | 是否显示文本。 |
<p id="progress_bar_t_progress_bar_set_show_text"> 设置进度条的是否显示文本。



#### progress\_bar\_set\_value 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| value | uint8\_t | 进度 |
<p id="progress_bar_t_progress_bar_set_value"> 设置进度条的进度。



#### progress\_bar\_set\_vertical 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | 控件对象。 |
| vertical | bool\_t | 是否为垂直方向。 |
<p id="progress_bar_t_progress_bar_set_vertical"> 设置进度条的方向。



#### show\_text 属性
-----------------------
<p id="progress_bar_t_show_text"> 是否显示文本。


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
#### value 属性
-----------------------
<p id="progress_bar_t_value"> 进度条的值[0-100]。


* 类型：uint8\_t

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
#### vertical 属性
-----------------------
<p id="progress_bar_t_vertical"> 进度条的是否为垂直方向。


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
