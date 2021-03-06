## date\_time\_t
### 概述
 日期时间。

### 函数
<p id="date_time_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#date_time_t_date_time_create">date\_time\_create</a> |  创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。 |
| <a href="#date_time_t_date_time_date_time_set_impl">date\_time\_date\_time\_set\_impl</a> |  设置获取当前日期和时间的函数。 |
| <a href="#date_time_t_date_time_destroy">date\_time\_destroy</a> |  销毁date_time对象(一般供脚本语言中使用)。 |
| <a href="#date_time_t_date_time_init">date\_time\_init</a> |  初始为当前日期和时间。 |
### 属性
<p id="date_time_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
| <a href="#date_time_t_day">day</a> | int32_t |  日(1-31)。 |
| <a href="#date_time_t_hour">hour</a> | int32_t |  时(0 - 23)。 |
| <a href="#date_time_t_minute">minute</a> | int32_t |  分(0 - 59)。 |
| <a href="#date_time_t_month">month</a> | int32_t |  月(1-12)。 |
| <a href="#date_time_t_second">second</a> | int32_t |  秒(0 - 59)。 |
| <a href="#date_time_t_year">year</a> | int32_t |  年。 |
### 事件
<p id="date_time_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### date\_time\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | date\_time\_t* | 返回date\_time对象。 |
<p id="date_time_t_date_time_create"> 创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。




#### date\_time\_date\_time\_set\_impl 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| date\_time\_get\_now | date\_time\_get\_now\_t | 获取当前日期和时间的函数。 |
<p id="date_time_t_date_time_date_time_set_impl"> 设置获取当前日期和时间的函数。




#### date\_time\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| dt | date\_time\_t* | date\_time对象。 |
<p id="date_time_t_date_time_destroy"> 销毁date_time对象(一般供脚本语言中使用)。




#### date\_time\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | date\_time\_t* | 返回date\_time对象。 |
| dt | date\_time\_t* | date\_time对象。 |
<p id="date_time_t_date_time_init"> 初始为当前日期和时间。




#### day 属性
-----------------------
<p id="date_time_t_day"> 日(1-31)。



* 类型：int32\_t

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
#### hour 属性
-----------------------
<p id="date_time_t_hour"> 时(0 - 23)。



* 类型：int32\_t

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
#### minute 属性
-----------------------
<p id="date_time_t_minute"> 分(0 - 59)。



* 类型：int32\_t

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
#### month 属性
-----------------------
<p id="date_time_t_month"> 月(1-12)。



* 类型：int32\_t

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
#### second 属性
-----------------------
<p id="date_time_t_second"> 秒(0 - 59)。



* 类型：int32\_t

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
#### year 属性
-----------------------
<p id="date_time_t_year"> 年。



* 类型：int32\_t

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
