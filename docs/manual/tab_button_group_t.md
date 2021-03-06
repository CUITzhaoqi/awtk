## tab\_button\_group\_t
### 概述
 Tab Button Group控件。
![image](images/tab_button_group_t_0.png)

### 函数
<p id="tab_button_group_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#tab_button_group_t_tab_button_group_cast">tab\_button\_group\_cast</a> |  转换tab_button_group对象(供脚本语言使用)。 |
| <a href="#tab_button_group_t_tab_button_group_create">tab\_button\_group\_create</a> |  创建tab_button_group对象 |
### 属性
<p id="tab_button_group_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#tab_button_group_t_compact">compact</a> | bool_t |  紧凑型排版子控件。 |
### 事件
<p id="tab_button_group_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### tab\_button\_group\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | tab\_button\_group对象。 |
| widget | widget\_t* | tab\_button\_group对象。 |
<p id="tab_button_group_t_tab_button_group_cast"> 转换tab_button_group对象(供脚本语言使用)。



#### tab\_button\_group\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="tab_button_group_t_tab_button_group_create"> 创建tab_button_group对象



#### compact 属性
-----------------------
<p id="tab_button_group_t_compact"> 紧凑型排版子控件。


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
