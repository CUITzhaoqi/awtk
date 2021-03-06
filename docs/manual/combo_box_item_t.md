## combo\_box\_item\_t
### 概述
 ComboBox Item控件。
![image](images/combo_box_item_t_0.png)

### 函数
<p id="combo_box_item_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#combo_box_item_t_combo_box_item_cast">combo\_box\_item\_cast</a> |  转换combo_box_item对象(供脚本语言使用)。 |
| <a href="#combo_box_item_t_combo_box_item_create">combo\_box\_item\_create</a> |  创建combo_box_item对象 |
| <a href="#combo_box_item_t_combo_box_item_set_checked">combo\_box\_item\_set\_checked</a> |  设置控件是否被选中。 |
| <a href="#combo_box_item_t_combo_box_item_set_value">combo\_box\_item\_set\_value</a> |  设置控件的值。 |
### 属性
<p id="combo_box_item_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#combo_box_item_t_checked">checked</a> | bool_t |  是否被选中。 |
| <a href="#combo_box_item_t_value">value</a> | int32_t |  值。 |
### 事件
<p id="combo_box_item_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
| EVT\_VALUE\_WILL\_CHANGE | event\_t | 值(勾选状态)即将改变事件。 |
| EVT\_VALUE\_CHANGED | event\_t | 值(勾选状态)改变事件。 |
#### combo\_box\_item\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | combo\_box\_item对象。 |
| widget | widget\_t* | combo\_box\_item对象。 |
<p id="combo_box_item_t_combo_box_item_cast"> 转换combo_box_item对象(供脚本语言使用)。



#### combo\_box\_item\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="combo_box_item_t_combo_box_item_create"> 创建combo_box_item对象



#### combo\_box\_item\_set\_checked 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | combo\_box\_item对象。 |
| checked | bool\_t | 是否被选中。 |
<p id="combo_box_item_t_combo_box_item_set_checked"> 设置控件是否被选中。



#### combo\_box\_item\_set\_value 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | combo\_box\_item对象。 |
| value | int32\_t | 值 |
<p id="combo_box_item_t_combo_box_item_set_value"> 设置控件的值。



#### checked 属性
-----------------------
<p id="combo_box_item_t_checked"> 是否被选中。


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
<p id="combo_box_item_t_value"> 值。


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
