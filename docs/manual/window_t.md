## window\_t
### 概述
 窗口。
![image](images/window_t_0.png)

### 函数
<p id="window_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#window_t_window_cast">window\_cast</a> |  转换为window对象(供脚本语言使用)。 |
| <a href="#window_t_window_close">window\_close</a> |  关闭窗口。 |
| <a href="#window_t_window_create">window\_create</a> |  创建window对象 |
| <a href="#window_t_window_open">window\_open</a> |  从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。 |
| <a href="#window_t_window_open_and_close">window\_open\_and\_close</a> |  从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。 |
### 属性
<p id="window_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="window_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### window\_cast 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | window对象。 |
| widget | widget\_t* | window对象。 |
<p id="window_t_window_cast"> 转换为window对象(供脚本语言使用)。



#### window\_close 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| widget | widget\_t* | window\_base对象。 |
<p id="window_t_window_close"> 关闭窗口。



#### window\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| parent | widget\_t* | 父控件 |
| x | xy\_t | x坐标 |
| y | xy\_t | y坐标 |
| w | wh\_t | 宽度 |
| h | wh\_t | 高度 |
<p id="window_t_window_create"> 创建window对象



#### window\_open 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| name | char* | window\_base的名称。 |
<p id="window_t_window_open"> 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。



#### window\_open\_and\_close 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | widget\_t* | 对象。 |
| name | char* | window\_base的名称。 |
| to\_close | widget\_t* | 关闭该窗口。 |
<p id="window_t_window_open_and_close"> 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。



