这是我用来学习的仓库
# 文件说明
> .run: Linux系统下的程序
> .exe: Windows系统下的程序
> main: 主要的源文件/程序
> _debug: 调试用程序
> _SB: 整活用
# 编译命令
所有程序都是用 Visual Studio Code 写的，以下是编译使用的 tasks.json 文件:
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
            "label": "C++ 生成可调试程序(.exe)",
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
        }
    ],
    "version": "2.0.0"
}
```
