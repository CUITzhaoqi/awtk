## timer\_t
### 概述
 定时器系统。

### 函数
<p id="timer_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#timer_t_timer_add">timer\_add</a> |  增加一个timer。 |
| <a href="#timer_t_timer_count">timer\_count</a> |  返回timer的个数。 |
| <a href="#timer_t_timer_next_time">timer\_next\_time</a> |  返回最近的timer到期时间。 |
| <a href="#timer_t_timer_now">timer\_now</a> |  获取当前时间(ms)。 |
| <a href="#timer_t_timer_queue">timer\_queue</a> |  用于非GUI线程增加一个timer，本函数向主循环的事件队列中发送一个增加timer的请求。 |
| <a href="#timer_t_timer_remove">timer\_remove</a> |  删除指定的timer。 |
| <a href="#timer_t_timer_set_on_destroy">timer\_set\_on\_destroy</a> |  设置一个回调函数，在timer被销毁时调用(方便脚本语言去释放回调函数)。 |
### 属性
<p id="timer_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="timer_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### timer\_add 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回timer的ID，TK\_INVALID\_ID表示失败。 |
| on\_timer | timer\_func\_t | timer回调函数。 |
| ctx | void* | timer回调函数的上下文。 |
| duration\_ms | uint32\_t | 时间。 |
<p id="timer_t_timer_add"> 增加一个timer。




#### timer\_count 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回timer的个数。 |
<p id="timer_t_timer_count"> 返回timer的个数。




#### timer\_next\_time 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回最近的timer到期时间。 |
<p id="timer_t_timer_next_time"> 返回最近的timer到期时间。




#### timer\_now 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回获取当前时间(ms)。 |
<p id="timer_t_timer_now"> 获取当前时间(ms)。




#### timer\_queue 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
|  | timer\_func\_t | r |
| ctx | void* | timer回调函数的上下文。 |
| duration\_ms | uint32\_t | 时间。 |
<p id="timer_t_timer_queue"> 用于非GUI线程增加一个timer，本函数向主循环的事件队列中发送一个增加timer的请求。
 timer回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。




#### timer\_remove 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| timer\_id | uint32\_t | timerID。 |
<p id="timer_t_timer_remove"> 删除指定的timer。




#### timer\_set\_on\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| timer\_id | uint32\_t | timerID。 |
| on\_destroy | tk\_destroy\_t | 回调函数。 |
| on\_destroy\_ctx | void* | 回调函数上下文。 |
<p id="timer_t_timer_set_on_destroy"> 设置一个回调函数，在timer被销毁时调用(方便脚本语言去释放回调函数)。




