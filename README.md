# tolua_runtime
**Build**<br>
pc: build_win32.sh build_win64.h  (mingw + luajit2.0.4) <br>
android: build_arm.sh build_x86.sh (mingw + luajit2.0.4) <br>
mac: build_osx.sh (xcode + luac5.1.5 for luajit can't run on unity5) <br>
ios: build_ios.sh (xcode + luajit2.1 beta) <br>

NDK 版本:android-ndk-r10e 默认安装到 D:/android-ndk-r10e<br>
https://dl.google.com/android/repository/android-ndk-r10e-windows-x86_64.zip<br>
Msys2配置说明<br>
https://github.com/topameng/tolua_runtime/wiki<br>
配置好的Msys2下载<br>
https://pan.baidu.com/s/1c2JzvDQ<br>

# Libs
**cjson**<br>
https://github.com/mpx/lua-cjson<br>
**protoc-gen-lua**<br>
https://github.com/topameng/protoc-gen-lua<br>
**LuaSocket** <br>
https://github.com/diegonehab/luasocket<br>
**struct**<br>
http://www.inf.puc-rio.br/~roberto/struct/<br>
**lpeg**<br>
http://www.inf.puc-rio.br/~roberto/lpeg/lpeg.html

# mod
* ndk 用的 android-ndk-r15c, 用 android-ndk-r16b 会报错
* https://dl.google.com/android/repository/android-ndk-r15c-windows-x86_64.zip?hl=zh_cn

* windows 用 mingw64_shell.bat
* android 64 用 mingw64_shell.bat
* android 32 用 mingw32_shell.bat
* xcode 不再支持 x86, 顺带移除了 armv7 armv7s 的支持, 以加速
* Android 为了支持 Mono (真机测试快一倍)，继续支持 armv7

# 额外库
* sproto 17affaf https://github.com/cloudwu/sproto
* LuaSQLite3 0.9.5 http://lua.sqlite.org/index.cgi/home (not compiled, just get source inside)