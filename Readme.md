# 工程说明


## 1.使用USB编译下载

```
idf.py set-target esp32s3
sudo chmod 777 /dev/ttyACM0
idf.py build flash monitor
```
## 2.配置智能提示

使用生成的compile_commands.json配置智能提示,请在.vscode中配置
```
{
    "configurations": [
        {
            "name": "ESP32S3",
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c11",
            "cppStandard": "c++11",
            "compileCommands": "${workspaceFolder}/build/compile_commands.json"
        }
    ],
    "version": 4
}
```

## 3.使用clang-format格式化代码
安装clang-format插件
```
sudo apt install clang-format
```
在setting.json中加入,就会在保存的时候自动运行
```
"editor.formatOnSave": true
```
# 目录说明
