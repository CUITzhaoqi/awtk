## font\_manager\_t
### 概述
 字体管理器。
 (如果使用nanovg，字体由nanovg内部管理)

### 函数
<p id="font_manager_t_methods">

| 函数名称 | 说明 | 
| -------- | ------------ | 
| <a href="#font_manager_t_font_manager">font\_manager</a> |  获取缺省的字体管理器。 |
| <a href="#font_manager_t_font_manager_add">font\_manager\_add</a> |  向缓存中加入字体。 |
| <a href="#font_manager_t_font_manager_create">font\_manager\_create</a> |  创建字体管理器。 |
| <a href="#font_manager_t_font_manager_deinit">font\_manager\_deinit</a> |  析构字体管理器。 |
| <a href="#font_manager_t_font_manager_destroy">font\_manager\_destroy</a> |  析构并释放字体管理器。 |
| <a href="#font_manager_t_font_manager_find">font\_manager\_find</a> |  从缓存中查找字体。 |
| <a href="#font_manager_t_font_manager_init">font\_manager\_init</a> |  初始化字体管理器。 |
| <a href="#font_manager_t_font_manager_set">font\_manager\_set</a> |  设置缺省的字体管理器。 |
| <a href="#font_manager_t_font_manager_set_assets_manager">font\_manager\_set\_assets\_manager</a> |  设置资源管理器对象 |
| <a href="#font_manager_t_g2d_blend_image">g2d\_blend\_image</a> |  把图片指定的区域渲染到framebuffer指定的区域，src的大小和dst的大小不一致则进行缩放。 |
| <a href="#font_manager_t_g2d_copy_image">g2d\_copy\_image</a> |  把图片指定的区域拷贝到framebuffer中。 |
| <a href="#font_manager_t_g2d_copy_image">g2d\_copy\_image</a> |  把图片指定的区域进行旋转并拷贝到framebuffer相应的区域，本函数主要用于辅助实现横屏和竖屏的切换，一般支持90度旋转即可。 |
| <a href="#font_manager_t_g2d_fill_rect">g2d\_fill\_rect</a> |  用颜色填充指定的区域。 |
### 属性
<p id="font_manager_t_properties">

| 名属性称 | 类型 | 说明 | 
| -------- | ----- | ------------ | 
### 事件
<p id="font_manager_t_events">

| 事件名称 | 类型  | 说明 | 
| -------- | ----- | ------- | 
#### font\_manager 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | font\_manager\_t* | 返回字体管理器对象。 |
<p id="font_manager_t_font_manager"> 获取缺省的字体管理器。



#### font\_manager\_add 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
| name | char* | 字体名。 |
| font | font\_t* | 字体。 |
<p id="font_manager_t_font_manager_add"> 向缓存中加入字体。




#### font\_manager\_create 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | font\_manager\_t* | 返回字体管理器对象。 |
| loader | font\_loader\_t* | 字体加载器。 |
<p id="font_manager_t_font_manager_create"> 创建字体管理器。




#### font\_manager\_deinit 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
<p id="font_manager_t_font_manager_deinit"> 析构字体管理器。




#### font\_manager\_destroy 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
<p id="font_manager_t_font_manager_destroy"> 析构并释放字体管理器。




#### font\_manager\_find 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | font\_t* | 返回字体对象。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
| name | char* | 字体名，为NULL时使用TK\_DEFAULT\_FONT。 |
| size | uint16\_t | 字体的大小。 |
<p id="font_manager_t_font_manager_find"> 从缓存中查找字体。




#### font\_manager\_init 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | font\_manager\_t* | 返回字体管理器对象。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
| loader | font\_loader\_t* | 字体加载器。 |
<p id="font_manager_t_font_manager_init"> 初始化字体管理器。




#### font\_manager\_set 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| fm | font\_manager\_t* | 字体管理器对象。 |
<p id="font_manager_t_font_manager_set"> 设置缺省的字体管理器。




#### font\_manager\_set\_assets\_manager 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败。 |
| imm | font\_manager\_t* | 图片管理器对象。 |
| assets\_manager | assets\_manager\_t* | 资源管理器。 |
<p id="font_manager_t_font_manager_set_assets_manager"> 设置资源管理器对象




#### g2d\_blend\_image 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败，返回失败则上层用软件实现。 |
| fb | bitmap\_t* | framebuffer对象。 |
| img | bitmap\_t* | 图片对象。 |
| dst | rect\_t* | 目的区域。 |
| src | rect\_t* | 源区域。 |
| global\_alpha | uint8\_t | 全局alpha。 |
<p id="font_manager_t_g2d_blend_image"> 把图片指定的区域渲染到framebuffer指定的区域，src的大小和dst的大小不一致则进行缩放。
 1.硬件不支持缩放，则返回NOT_IMPL。
 2.硬件不支持全局alpha，global_alpha!=0xff时返回NOT_IMPL。



#### g2d\_copy\_image 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败，返回失败则上层用软件实现。 |
| fb | bitmap\_t* | framebuffer对象。 |
| img | bitmap\_t* | 图片对象。 |
| src | rect\_t* | 要拷贝的区域。 |
| dx | xy\_t | 目标位置的x坐标。 |
| dy | xy\_t | 目标位置的y坐标。 |
<p id="font_manager_t_g2d_copy_image"> 把图片指定的区域拷贝到framebuffer中。



#### g2d\_copy\_image 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败，返回失败则上层用软件实现。 |
| fb | bitmap\_t* | framebuffer对象。 |
| img | bitmap\_t* | 图片对象。 |
| src | rect\_t* | 要旋转并拷贝的区域。 |
| o | lcd\_orientation\_t | 旋转角度(一般支持90度即可)。 |
<p id="font_manager_t_g2d_copy_image"> 把图片指定的区域进行旋转并拷贝到framebuffer相应的区域，本函数主要用于辅助实现横屏和竖屏的切换，一般支持90度旋转即可。



#### g2d\_fill\_rect 函数
-----------------------

| 参数 | 类型 | 说明 |
| -------- | ----- | --------- |
| 返回值 | ret\_t | 返回RET\_OK表示成功，否则表示失败，返回失败则上层用软件实现。 |
| fb | bitmap\_t* | framebuffer对象。 |
| dst | rect\_t* | 要填充的目标区域。 |
| c | color\_t | 颜色。 |
<p id="font_manager_t_g2d_fill_rect"> 用颜色填充指定的区域。



