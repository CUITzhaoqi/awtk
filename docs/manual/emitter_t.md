## emitter\_t
### 概述
 事件分发器, 用于实现观察者模式。

### 函数
<p id="emitter_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#emitter_t_emitter_create">emitter\_create</a> |  创建emitter对象。 |
| <a href="#emitter_t_emitter_deinit">emitter\_deinit</a> |  析构。 |
| <a href="#emitter_t_emitter_destroy">emitter\_destroy</a> |  销毁。 |
| <a href="#emitter_t_emitter_disable">emitter\_disable</a> |  禁用。禁用后emitter_dispatch无效，但可以注册和注销。 |
| <a href="#emitter_t_emitter_dispatch">emitter\_dispatch</a> |  分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。 |
| <a href="#emitter_t_emitter_enable">emitter\_enable</a> |  启用。 |
| <a href="#emitter_t_emitter_find">emitter\_find</a> |  通过ID查找emitter_item_t，主要用于辅助测试。 |
| <a href="#emitter_t_emitter_init">emitter\_init</a> |  初始化emitter对象。 |
| <a href="#emitter_t_emitter_off">emitter\_off</a> |  注销指定事件的处理函数。 |
| <a href="#emitter_t_emitter_off_by_func">emitter\_off\_by\_func</a> |  注销指定事件的处理函数。 |
| <a href="#emitter_t_emitter_on">emitter\_on</a> |  注册指定事件的处理函数。 |
| <a href="#emitter_t_emitter_set_on_destroy">emitter\_set\_on\_destroy</a> |  设置一个回调函数，在emitter被销毁时调用(方便脚本语言去释放回调函数)。 |
| <a href="#emitter_t_emitter_size">emitter\_size</a> |  获取注册的回调函数个数，主要用于辅助测试。 |
### 属性
<p id="emitter_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#emitter_t_enable">enable</a> | bool_t |  禁用标志。禁用时dispatch无效。 |
### 事件
<p id="emitter_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### emitter\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | emitter\_t* | 对象。 |
<p id="emitter_t_emitter_create"> 创建emitter对象。




#### emitter\_deinit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_deinit"> 析构。




#### emitter\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_destroy"> 销毁。




#### emitter\_disable 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_disable"> 禁用。禁用后emitter_dispatch无效，但可以注册和注销。




#### emitter\_dispatch 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t |  |
| emitter | emitter\_t* | emitter对象。 |
| e | event\_t* | 事件对象。 |
<p id="emitter_t_emitter_dispatch"> 分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
 禁用状态下，本函数不做任何事情。

 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。



#### emitter\_enable 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_enable"> 启用。




#### emitter\_find 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
| id | uint32\_t | emitter\_on返回的ID。 |
<p id="emitter_t_emitter_find"> 通过ID查找emitter_item_t，主要用于辅助测试。




#### emitter\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | emitter\_t* | 对象。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_init"> 初始化emitter对象。




#### emitter\_off 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
| id | uint32\_t | emitter\_on返回的ID。 |
<p id="emitter_t_emitter_off"> 注销指定事件的处理函数。




#### emitter\_off\_by\_func 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
| type | event\_type\_t | 事件类型。 |
| on\_event | event\_func\_t | 事件处理函数。 |
| ctx | void* | 事件处理函数上下文。 |
<p id="emitter_t_emitter_off_by_func"> 注销指定事件的处理函数。




#### emitter\_on 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回id，用于emitter\_off。 |
| emitter | emitter\_t* | emitter对象。 |
| type | event\_type\_t | 事件类型。 |
| on\_event | event\_func\_t | 事件处理函数。 |
| ctx | void* | 事件处理函数上下文。 |
<p id="emitter_t_emitter_on"> 注册指定事件的处理函数。




#### emitter\_set\_on\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| emitter | emitter\_t* | emitter对象。 |
| id | uint32\_t | emitter\_on返回的ID。 |
| on\_destroy | tk\_destroy\_t | 回调函数。 |
| on\_destroy\_ctx | void* | 回调函数上下文。 |
<p id="emitter_t_emitter_set_on_destroy"> 设置一个回调函数，在emitter被销毁时调用(方便脚本语言去释放回调函数)。




#### emitter\_size 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 回调函数个数。 |
| emitter | emitter\_t* | emitter对象。 |
<p id="emitter_t_emitter_size"> 获取注册的回调函数个数，主要用于辅助测试。




#### enable 属性
-----------------------
<p id="emitter_t_enable"> 禁用标志。禁用时dispatch无效。



* 类型：bool\_t

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
