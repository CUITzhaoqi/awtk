## tk\_t
### 概述
 TK全局对象。

### 函数
<p id="tk_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#tk_t_tk_init">tk\_init</a> |  初始化TK。 |
| <a href="#tk_t_tk_quit">tk\_quit</a> |  退出TK事件主循环。 |
| <a href="#tk_t_tk_run">tk\_run</a> |  进入TK事件主循环。 |
| <a href="#tk_t_tk_set_lcd_orientation">tk\_set\_lcd\_orientation</a> |  设置屏幕的旋转方向(XXX:目前仅支持0度和90度)。 |
### 属性
<p id="tk_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="tk_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### tk\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| w | wh\_t | LCD宽度。 |
| h | wh\_t | LCD高度。 |
| app\_type | app\_type\_t | 应用程序的类型。 |
| app\_name | const char* | 应用程序的名称(必须为常量字符串)。 |
| app\_root | const char* | 应用程序的根目录，用于定位资源文件(必须为常量字符串)。 |
<p id="tk_t_tk_init"> 初始化TK。




#### tk\_quit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
<p id="tk_t_tk_quit"> 退出TK事件主循环。




#### tk\_run 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
<p id="tk_t_tk_run"> 进入TK事件主循环。




#### tk\_set\_lcd\_orientation 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| orientation | int | 旋转方向。 |
<p id="tk_t_tk_set_lcd_orientation"> 设置屏幕的旋转方向(XXX:目前仅支持0度和90度)。




