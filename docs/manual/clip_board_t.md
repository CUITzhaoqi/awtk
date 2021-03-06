## clip\_board\_t
### 概述
 剪切板接口。

### 函数
<p id="clip_board_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#clip_board_t_clip_board">clip\_board</a> |  获取缺省的剪切板对象。 |
| <a href="#clip_board_t_clip_board_clear">clip\_board\_clear</a> |  清空剪切板中的数据。 |
| <a href="#clip_board_t_clip_board_destroy">clip\_board\_destroy</a> |  销毁剪切板对象。 |
| <a href="#clip_board_t_clip_board_get_data">clip\_board\_get\_data</a> |  从剪切板中获取数据。 |
| <a href="#clip_board_t_clip_board_get_text">clip\_board\_get\_text</a> |  从剪切板中获取文本(UTF8)数据。 |
| <a href="#clip_board_t_clip_board_set">clip\_board\_set</a> |  设置缺省的剪切板对象。 |
| <a href="#clip_board_t_clip_board_set_data">clip\_board\_set\_data</a> |  设置数据到剪切板中。 |
| <a href="#clip_board_t_clip_board_set_text">clip\_board\_set\_text</a> |  设置文本(UTF8)数据到剪切板。 |
### 属性
<p id="clip_board_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="clip_board_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### clip\_board 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回缺省剪切板对象。 |
<p id="clip_board_t_clip_board"> 获取缺省的剪切板对象。




#### clip\_board\_clear 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| cl | clip\_board\_t* | 剪切板对象。 |
<p id="clip_board_t_clip_board_clear"> 清空剪切板中的数据。




#### clip\_board\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| cl | clip\_board\_t* | 剪切板对象。 |
<p id="clip_board_t_clip_board_destroy"> 销毁剪切板对象。




#### clip\_board\_get\_data 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| cl | clip\_board\_t* | 剪切板对象。 |
| type | clip\_board\_data\_type\_t* | 返回数据类型(可为NULL)。 |
| data | void** data | 返回数据(可为NULL)。 |
| size | uint32\_t* | 返回数据长度(可为NULL)。 |
<p id="clip_board_t_clip_board_get_data"> 从剪切板中获取数据。




#### clip\_board\_get\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | const char* | 返回文本数据。 |
<p id="clip_board_t_clip_board_get_text"> 从剪切板中获取文本(UTF8)数据。




#### clip\_board\_set 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| cl | clip\_board\_t* | 剪切板对象。 |
<p id="clip_board_t_clip_board_set"> 设置缺省的剪切板对象。




#### clip\_board\_set\_data 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| cl | clip\_board\_t* | 剪切板对象。 |
| type | clip\_board\_data\_type\_t | 数据类型。 |
| data | const void* data | 数据。 |
| size | uint32\_t | 数据长度 |
<p id="clip_board_t_clip_board_set_data"> 设置数据到剪切板中。




#### clip\_board\_set\_text 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| text | const char* | 文本。 |
<p id="clip_board_t_clip_board_set_text"> 设置文本(UTF8)数据到剪切板。




