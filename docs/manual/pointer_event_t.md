## pointer\_event\_t
### 概述
 指针事件。

![image](images/pointer_event_t_0.png)

### 函数
<p id="pointer_event_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#pointer_event_t_pointer_event_cast">pointer\_event\_cast</a> |  把event对象转pointer_event_t对象，主要给脚本语言使用。 |
### 属性
<p id="pointer_event_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#pointer_event_t_alt">alt</a> | bool_t |  alt键是否按下。 |
| <a href="#pointer_event_t_button">button</a> | uint8_t |  button。 |
| <a href="#pointer_event_t_ctrl">ctrl</a> | bool_t |  ctrl键是否按下。 |
| <a href="#pointer_event_t_pressed">pressed</a> | bool_t |  指针是否按下。 |
| <a href="#pointer_event_t_shift">shift</a> | bool_t |  shift键是否按下。 |
| <a href="#pointer_event_t_x">x</a> | xy_t |  x坐标。 |
| <a href="#pointer_event_t_y">y</a> | xy_t |  y坐标。 |
### 事件
<p id="pointer_event_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### pointer\_event\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | pointer\_event\_t* | 对象。 |
| event | event\_t* | event对象。 |
<p id="pointer_event_t_pointer_event_cast"> 把event对象转pointer_event_t对象，主要给脚本语言使用。




#### alt 属性
-----------------------
<p id="pointer_event_t_alt"> alt键是否按下。



* 类型：bool\_t

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
#### button 属性
-----------------------
<p id="pointer_event_t_button"> button。



* 类型：uint8\_t

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
#### ctrl 属性
-----------------------
<p id="pointer_event_t_ctrl"> ctrl键是否按下。



* 类型：bool\_t

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
#### pressed 属性
-----------------------
<p id="pointer_event_t_pressed"> 指针是否按下。



* 类型：bool\_t

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
#### shift 属性
-----------------------
<p id="pointer_event_t_shift"> shift键是否按下。



* 类型：bool\_t

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
#### x 属性
-----------------------
<p id="pointer_event_t_x"> x坐标。



* 类型：xy\_t

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
#### y 属性
-----------------------
<p id="pointer_event_t_y"> y坐标。



* 类型：xy\_t

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
