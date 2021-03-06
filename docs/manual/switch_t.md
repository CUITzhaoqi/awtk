## switch\_t
### 概述
 开关控件。
![image](images/switch_t_0.png)

### 函数
<p id="switch_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#switch_t_switch_cast">switch\_cast</a> |  转换switch对象(供脚本语言使用)。 |
| <a href="#switch_t_switch_create">switch\_create</a> |  创建switch对象 |
| <a href="#switch_t_switch_set_value">switch\_set\_value</a> |  设置控件的值。 |
### 属性
<p id="switch_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#switch_t_max_xoffset_ratio">max\_xoffset\_ratio</a> | float_t |  当开关处于关闭时，图片偏移相对于图片宽度的比例(缺省为1/3)。 |
| <a href="#switch_t_round_radius">round\_radius</a> | int32_t |  图片的圆角半径。 |
| <a href="#switch_t_value">value</a> | bool_t |  值。 |
### 事件
<p id="switch_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
| EVT\_VALUE\_WILL\_CHANGE | event\_t | 值(开关状态)即将改变事件。 |
| EVT\_VALUE\_CHANGED | event\_t | 值(开关状态)改变事件。 |
#### switch\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | switch对象。 |
| widget | widget\_t* | switch对象。 |
<p id="switch_t_switch_cast"> 转换switch对象(供脚本语言使用)。



#### switch\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="switch_t_switch_create"> 创建switch对象



#### switch\_set\_value 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | switch对象。 |
| value | bool\_t | 值 |
<p id="switch_t_switch_set_value"> 设置控件的值。



#### max\_xoffset\_ratio 属性
-----------------------
<p id="switch_t_max_xoffset_ratio"> 当开关处于关闭时，图片偏移相对于图片宽度的比例(缺省为1/3)。


* 类型：float\_t

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
#### round\_radius 属性
-----------------------
<p id="switch_t_round_radius"> 图片的圆角半径。


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
#### value 属性
-----------------------
<p id="switch_t_value"> 值。


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
