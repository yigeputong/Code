这是我用来学习的仓库

这个仓库的源代码与程序均使用 GPL v3.0 协议。
# 文件说明
 * .run: Linux系统下的程序
 * .exe: Windows系统下的程序
 * main: 主要的源文件/程序
 * _debug: 调试用程序
 * _SB: 整活用
# json文件
所有程序都是用 Visual Studio Code 写的，以下是使用的 json 文件:
## tasks.json
```json
{
    "tasks": [
        {
            "type": "shell",
            "label": "C 生成优化程序(.run)",
            "command": "gcc -fdiagnostics-color=always -std=c23 -O2 ${file} -o ${fileDirname}/${fileBasenameNoExtension}.run",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C 生成优化程序(.exe)",
            "command": "gcc -fdiagnostics-color=always -std=c23 -O2 ${file} -o ${fileDirname}\\${fileBasenameNoExtension}.exe",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C 生成可调试程序(.run)",
            "command": "gcc -fdiagnostics-color=always -ggdb -std=c23 ${file} -o ${fileDirname}/${fileBasenameNoExtension}_debug.run",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C 生成可调试程序(.exe)",
            "command": "gcc -fdiagnostics-color=always -ggdb -std=c23 ${file} -o ${fileDirname}\\${fileBasenameNoExtension}_debug.exe",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C++ 生成优化程序(.run)",
            "command": "g++ -fdiagnostics-color=always -std=c++23 -O2 ${file} -o ${fileDirname}/${fileBasenameNoExtension}.run",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C++ 生成优化程序(.exe)",
            "command": "g++ -fdiagnostics-color=always -std=c++23 -O2 ${file} -o ${fileDirname}\\${fileBasenameNoExtension}.exe",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C++ 生成可调试程序(.run)",
            "command": "g++ -fdiagnostics-color=always -ggdb -std=c++23 ${file} -o ${fileDirname}/${fileBasenameNoExtension}_debug.run",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "type": "shell",
            "label": "C++ 生成可调试程序(.exe)",
            "command": "g++ -fdiagnostics-color=always -ggdb -std=c++23 ${file} -o ${fileDirname}\\${fileBasenameNoExtension}_debug.exe",
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        },
        {
            "type": "shell",
            "label": "Python 运行程序",
            "command": "python ${file}"
        },{
            "type": "shell",
            "label": "Python3 运行程序",
            "command": "python3 ${file}"
        }
    ],
    "version": "2.0.0"
}
```
## launch.json
```json
{
    "configurations": [
        {
            "name": "C: (gdb) 启动(.run)",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}_debug.run",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "/usr/bin/gdb",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "将反汇编风格设置为 Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C 生成可调试程序(.run)"
        },
        {
            "name": "C: gdb) 启动(.exe)",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}_debug.exe",
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "E:\\mingw64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "将反汇编风格设置为 Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C 生成可调试程序(.exe)"
        },
        {
            "name": "C++: (gdb) 启动(.run)",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}_debug.run",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "/usr/bin/gdb",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "将反汇编风格设置为 Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C++ 生成可调试程序(.run)"
        },
        {
            "name": "C++: (gdb) 启动(.exe)",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}_debug.exe",
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "D:\\Program\\MinGW\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "将反汇编风格设置为 Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C++ 生成可调试程序(.exe)"
        }
    ],
    "version": "0.2.0"
}
```
