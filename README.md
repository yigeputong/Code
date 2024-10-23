这是我用来学习的仓库
# 编译命令
所有程序都是用 VSCode 写的，以下是编译使用的 tasks.json 文件:
## C++
```json
{
    "tasks": [
        {
            //适用于 Linux，最终发布的程序
            "type": "shell",
            "label": "g++ 生成优化程序(.run)",
            "command": "g++ -fdiagnostics-color=always -std=c++23 -O2 ${file} -o ${fileDirname}/${fileBasenameNoExtension}.run",
            "options": {
                "cwd": "~/Code/C++"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            //适用于 Windows，最终发布的程序
            "type": "shell",
            "label": "g++ 生成优化程序(.exe)",
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
            //适用于 Linux，调试用程序
            "type": "shell",
            "label": "g++ 生成可调试程序(.run)",
            "command": "g++ -fdiagnostics-color=always -ggdb -std=c++23 ${file} -o ${fileDirname}/${fileBasenameNoExtension}_debug.run",
            "options": {
                "cwd": "~/Code/C++"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            //适用于 Windows，调试用程序，默认使用此任务
            "type": "shell",
            "label": "g++ 生成可调试程序(.exe)",
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
_以后还会添加其他语言的 tasks.json 文件_
