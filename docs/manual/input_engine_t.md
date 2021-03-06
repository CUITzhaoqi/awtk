## input\_engine\_t
### 概述
 输入法引擎接口。

### 函数
<p id="input_engine_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#input_engine_t_input_engine_create">input\_engine\_create</a> |  创建输入法引擎对象。 |
| <a href="#input_engine_t_input_engine_destroy">input\_engine\_destroy</a> |  @deconstructor |
| <a href="#input_engine_t_input_engine_input">input\_engine\_input</a> |  输入新的按键，并更新候选字。 |
| <a href="#input_engine_t_input_engine_reset_input">input\_engine\_reset\_input</a> |  清除所有输入的按键组合和候选字。 |
### 属性
<p id="input_engine_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="input_engine_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### input\_engine\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | input\_engine\_t* | 返回输入法引擎对象。 |
<p id="input_engine_t_input_engine_create"> 创建输入法引擎对象。




#### input\_engine\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| engine | input\_engine\_t* | 输入法引擎对象。 |
<p id="input_engine_t_input_engine_destroy"> @deconstructor
 销毁输入法引擎对象。




#### input\_engine\_input 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| engine | input\_engine\_t* | 输入法引擎对象。 |
| key | int | 键值。 |
<p id="input_engine_t_input_engine_input"> 输入新的按键，并更新候选字。




#### input\_engine\_reset\_input 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| engine | input\_engine\_t* | 输入法引擎对象。 |
<p id="input_engine_t_input_engine_reset_input"> 清除所有输入的按键组合和候选字。




