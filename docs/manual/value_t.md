## value\_t
### 概述
 一个通用数据类型，用来存放整数、浮点数、obj_t、str_t和其它对象。

### 函数
<p id="value_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#value_t_value_bool">value\_bool</a> |  获取类型为bool的值。 |
| <a href="#value_t_value_copy">value\_copy</a> |  拷贝value的值。 |
| <a href="#value_t_value_create">value\_create</a> |  创建value对象 |
| <a href="#value_t_value_destroy">value\_destroy</a> |  @deconstructor |
| <a href="#value_t_value_double">value\_double</a> |  获取类型为double的值。 |
| <a href="#value_t_value_equal">value\_equal</a> |  判断两个value是否相同。 |
| <a href="#value_t_value_float">value\_float</a> |  获取类型为float的值。 |
| <a href="#value_t_value_float32">value\_float32</a> |  获取类型为float的值。 |
| <a href="#value_t_value_int">value\_int</a> |  转换为int的值。 |
| <a href="#value_t_value_int16">value\_int16</a> |  获取类型为int16的值。 |
| <a href="#value_t_value_int32">value\_int32</a> |  获取类型为int32的值。 |
| <a href="#value_t_value_int64">value\_int64</a> |  获取类型为int64的值。 |
| <a href="#value_t_value_int8">value\_int8</a> |  获取类型为int8的值。 |
| <a href="#value_t_value_is_null">value\_is\_null</a> |  判断value是否为空值。 |
| <a href="#value_t_value_pointer">value\_pointer</a> |  获取类型为pointer的值。 |
| <a href="#value_t_value_set_bool">value\_set\_bool</a> |  设置类型为bool的值。 |
| <a href="#value_t_value_set_double">value\_set\_double</a> |  设置类型为double的值。 |
| <a href="#value_t_value_set_float">value\_set\_float</a> |  设置类型为float的值。 |
| <a href="#value_t_value_set_float32">value\_set\_float32</a> |  设置类型为float的值。 |
| <a href="#value_t_value_set_int">value\_set\_int</a> |  设置类型为int的值。 |
| <a href="#value_t_value_set_int16">value\_set\_int16</a> |  设置类型为int16的值。 |
| <a href="#value_t_value_set_int32">value\_set\_int32</a> |  设置类型为int32的值。 |
| <a href="#value_t_value_set_int64">value\_set\_int64</a> |  设置类型为int64的值。 |
| <a href="#value_t_value_set_int8">value\_set\_int8</a> |  设置类型为int8的值。 |
| <a href="#value_t_value_set_pointer">value\_set\_pointer</a> |  设置类型为pointer的值。 |
| <a href="#value_t_value_set_str">value\_set\_str</a> |  设置类型为char*的值。 |
| <a href="#value_t_value_set_uint16">value\_set\_uint16</a> |  设置类型为uint16的值。 |
| <a href="#value_t_value_set_uint32">value\_set\_uint32</a> |  设置类型为uint32的值。 |
| <a href="#value_t_value_set_uint64">value\_set\_uint64</a> |  设置类型为uint64的值。 |
| <a href="#value_t_value_set_uint8">value\_set\_uint8</a> |  设置类型为uint8的值。 |
| <a href="#value_t_value_str">value\_str</a> |  获取类型为str_t的值。 |
| <a href="#value_t_value_uint16">value\_uint16</a> |  获取类型为uint16的值。 |
| <a href="#value_t_value_uint32">value\_uint32</a> |  获取类型为uint32的值。 |
| <a href="#value_t_value_uint64">value\_uint64</a> |  获取类型为uint64的值。 |
| <a href="#value_t_value_uint8">value\_uint8</a> |  获取类型为uint8的值。 |
### 属性
<p id="value_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#value_t_type">type</a> | int8_t |  类型。 |
### 事件
<p id="value_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### value\_bool 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bool\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_bool"> 获取类型为bool的值。




#### value\_copy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | void | 值。 |
| dst | value\_t* | 目的value对象。 |
| src | value\_t* | 源value对象。 |
<p id="value_t_value_copy"> 拷贝value的值。




#### value\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | 对象。 |
<p id="value_t_value_create"> 创建value对象




#### value\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | void |  |
| v | value\_t* | value对象。 |
<p id="value_t_value_destroy"> @deconstructor
 销毁value对象




#### value\_double 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | double | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_double"> 获取类型为double的值。




#### value\_equal 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bool\_t | 为空值返回TRUE，否则返回FALSE。 |
| value | value\_t* | value对象。 |
| other | value\_t* | value对象。 |
<p id="value_t_value_equal"> 判断两个value是否相同。




#### value\_float 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | float | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_float"> 获取类型为float的值。




#### value\_float32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | float | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_float32"> 获取类型为float的值。




#### value\_int 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_int"> 转换为int的值。




#### value\_int16 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int16\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_int16"> 获取类型为int16的值。




#### value\_int32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int32\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_int32"> 获取类型为int32的值。




#### value\_int64 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int64\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_int64"> 获取类型为int64的值。




#### value\_int8 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int8\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_int8"> 获取类型为int8的值。




#### value\_is\_null 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | bool\_t | 为空值返回TRUE，否则返回FALSE。 |
| value | value\_t* | value对象。 |
<p id="value_t_value_is_null"> 判断value是否为空值。




#### value\_pointer 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | void* | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_pointer"> 获取类型为pointer的值。




#### value\_set\_bool 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | bool\_t | 待设置的值。 |
<p id="value_t_value_set_bool"> 设置类型为bool的值。




#### value\_set\_double 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | double | 待设置的值。 |
<p id="value_t_value_set_double"> 设置类型为double的值。




#### value\_set\_float 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | float\_t | 待设置的值。 |
<p id="value_t_value_set_float"> 设置类型为float的值。




#### value\_set\_float32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | float | 待设置的值。 |
<p id="value_t_value_set_float32"> 设置类型为float的值。




#### value\_set\_int 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | int32\_t | 待设置的值。 |
<p id="value_t_value_set_int"> 设置类型为int的值。




#### value\_set\_int16 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | int16\_t | 待设置的值。 |
<p id="value_t_value_set_int16"> 设置类型为int16的值。




#### value\_set\_int32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | int32\_t | 待设置的值。 |
<p id="value_t_value_set_int32"> 设置类型为int32的值。




#### value\_set\_int64 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | int64\_t | 待设置的值。 |
<p id="value_t_value_set_int64"> 设置类型为int64的值。




#### value\_set\_int8 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | int8\_t | 待设置的值。 |
<p id="value_t_value_set_int8"> 设置类型为int8的值。




#### value\_set\_pointer 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | pointer\_t | 待设置的值。 |
<p id="value_t_value_set_pointer"> 设置类型为pointer的值。




#### value\_set\_str 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | char* | 待设置的值。 |
<p id="value_t_value_set_str"> 设置类型为char*的值。




#### value\_set\_uint16 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | uint16\_t | 待设置的值。 |
<p id="value_t_value_set_uint16"> 设置类型为uint16的值。




#### value\_set\_uint32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | uint32\_t | 待设置的值。 |
<p id="value_t_value_set_uint32"> 设置类型为uint32的值。




#### value\_set\_uint64 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | uint64\_t | 待设置的值。 |
<p id="value_t_value_set_uint64"> 设置类型为uint64的值。




#### value\_set\_uint8 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | value\_t* | value对象本身。 |
| v | value\_t* | value对象。 |
| value | uint8\_t | 待设置的值。 |
<p id="value_t_value_set_uint8"> 设置类型为uint8的值。




#### value\_str 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | const char* | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_str"> 获取类型为str_t的值。




#### value\_uint16 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint16\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_uint16"> 获取类型为uint16的值。




#### value\_uint32 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint32\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_uint32"> 获取类型为uint32的值。




#### value\_uint64 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | uint64\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_uint64"> 获取类型为uint64的值。




#### value\_uint8 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | int8\_t | 值。 |
| v | value\_t* | value对象。 |
<p id="value_t_value_uint8"> 获取类型为uint8的值。




#### type 属性
-----------------------
<p id="value_t_type"> 类型。



* 类型：int8\_t

| 特性 | 是否支持 |
| -------- | ----- |
| 可直接读取 | 是 |
| 可直接修改 | 否 |
| 可持久化   | 否 |
| 可脚本化   | 是 |
| 可在IDE中设置 | 否 |
| 可在XML中设置 | 否 |
| 支通过widget_get_prop读取 | 否 |
| 支通过widget_set_prop修改 | 否 |
