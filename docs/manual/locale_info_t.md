## locale\_info\_t
### 概述
 locale_info

### 函数
<p id="locale_info_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#locale_info_t_locale_info">locale\_info</a> |  获取缺省locale_info。 |
| <a href="#locale_info_t_locale_info_change">locale\_info\_change</a> |  设置当前的国家和语言。 |
| <a href="#locale_info_t_locale_info_create">locale\_info\_create</a> |  创建locale_info。 |
| <a href="#locale_info_t_locale_info_deinit">locale\_info\_deinit</a> |  释放全部资源。 |
| <a href="#locale_info_t_locale_info_destroy">locale\_info\_destroy</a> |  释放全部资源并销毁locale_info对象。 |
| <a href="#locale_info_t_locale_info_init">locale\_info\_init</a> |  初始化locale_info。 |
| <a href="#locale_info_t_locale_info_off">locale\_info\_off</a> |  注销指定事件的处理函数。 |
| <a href="#locale_info_t_locale_info_on">locale\_info\_on</a> |  注册指定事件的处理函数。 |
| <a href="#locale_info_t_locale_info_set">locale\_info\_set</a> |  设置缺省locale_info。 |
| <a href="#locale_info_t_locale_info_tr">locale\_info\_tr</a> |  翻译字符串。 |
### 属性
<p id="locale_info_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#locale_info_t_country;">country;</a> | char* |  国家或地区。如：CN |
| <a href="#locale_info_t_language">language</a> | char* |  语言。如：zh |
### 事件
<p id="locale_info_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### locale\_info 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | locale\_info\_t* | 返回locale\_info对象。 |
<p id="locale_info_t_locale_info"> 获取缺省locale_info。




#### locale\_info\_change 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
| language | char* | 语言。 |
| country | char* | 国家或地区。 |
<p id="locale_info_t_locale_info_change"> 设置当前的国家和语言。




#### locale\_info\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | locale\_info\_t* | 返回locale\_info对象。 |
| language | char* | 语言。 |
| country | char* | 国家或地区。 |
<p id="locale_info_t_locale_info_create"> 创建locale_info。




#### locale\_info\_deinit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
<p id="locale_info_t_locale_info_deinit"> 释放全部资源。




#### locale\_info\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
<p id="locale_info_t_locale_info_destroy"> 释放全部资源并销毁locale_info对象。




#### locale\_info\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | locale\_info\_t* | 返回locale\_info对象。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
| language | char* | 语言。 |
| country | char* | 国家或地区。 |
<p id="locale_info_t_locale_info_init"> 初始化locale_info。




#### locale\_info\_off 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| locale\_info | locale\_info\_t* | 控件对象。 |
| id | uint32\_t | locale\_info\_on返回的ID。 |
<p id="locale_info_t_locale_info_off"> 注销指定事件的处理函数。




#### locale\_info\_on 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 返回id，用于locale\_info\_off。 |
| locale\_info | locale\_info\_t* | 控件对象。 |
| type | event\_type\_t | 事件类型，目前固定为EVT\_LOCALE\_CHANGED。 |
| on\_event | event\_func\_t | 事件处理函数。 |
| ctx | void* | 事件处理函数上下文。 |
<p id="locale_info_t_locale_info_on"> 注册指定事件的处理函数。




#### locale\_info\_set 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
<p id="locale_info_t_locale_info_set"> 设置缺省locale_info。




#### locale\_info\_tr 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | char* | 返回翻译之后的字符串。 |
| locale\_info | locale\_info\_t* | locale\_info对象。 |
| text | char* | 待翻译的文本。 |
<p id="locale_info_t_locale_info_tr"> 翻译字符串。




#### country; 属性
-----------------------
<p id="locale_info_t_country;"> 国家或地区。如：CN



* 类型：char*

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
#### language 属性
-----------------------
<p id="locale_info_t_language"> 语言。如：zh



* 类型：char*

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