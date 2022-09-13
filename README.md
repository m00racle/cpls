# My C++ Training Repo

For the whole repo for the course visit: [ TPayneExperience/
Lets_Learn_Cpp](https://github.com/TPayneExperience/Lets_Learn_Cpp).

Course videos are in [this YouTube Playlist](https://youtube.com/playlist?list=PL82YdDfxhWsCyZLsg_kXhH8sy5ixQNras)

> Always follow the directory structure in the template folder.

## NOTE: For MacOS Clang++ 
In using some code in this repo you need to adjust the args in compiling the code. Add ***-std=c++11*** to the compiler command.

For VS Code user set the task.json as this:
### For MacOS
```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: clang++ build active file",
			"command": "/usr/bin/clang++",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				// this will make all cpp files in the source or project folder to be compiled
				"${fileDirname}/**.cpp",
				// this will include all headers related to the working directory: consult the template folder.
				"-I${fileDirname}",
				"-I${fileDirname}/../headers",
				"-std=c++17",
				// I already tested Clang++ 17 version and it works so far for all examples
				"-o",
				"${fileDirname}/${fileBasenameNoExtension}.out"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: /usr/bin/clang++"
		}
	]
}
```
As you can see I add "-std=c++11" on the "args" [] JSON data. More on it such as the reason behind this read these Stack Overflow forum posts:
1. [error: non-aggregate type 'vector<string>' cannot be initialized with an initializer list](https://stackoverflow.com/questions/35214494/error-non-aggregate-type-vectorstring-cannot-be-initialized-with-an-initial)
1. [Error: non-aggregate type 'vector<int>' cannot be initialized with an initializer list](https://stackoverflow.com/questions/39022787/error-non-aggregate-type-vectorint-cannot-be-initialized-with-an-initialize)

### For Windows
```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: g++.exe build active file",
			"command": "E:\\appsInstalled\\MSYS2\\mingw64\\bin\\g++.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${fileDirname}/**.cpp",
				"-I${fileDirname}",
				"-I${fileDirname}/../headers",
				"-IE:/Cpls/basics/libs/boost_1_78_0",
				"-IE:/Cpls/basics/libs/GSL-main/include/gsl",
				"-std=c++17",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: E:\\appsInstalled\\MSYS2\\mingw64\\bin\\g++.exe"
		}
	]
}
```
#### New C++ Compiler Settings for Windows
If you using Clang++ for Windows these settings are for you:

`task.json`:
```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: clang++.exe build active file",
			"command": "E:\\appsInstalled\\MSYS2\\ucrt64\\bin\\clang++.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${fileDirname}/**.cpp",
				"-I${fileDirname}",
				"-I${fileDirname}/../headers",
				"-std=c++17",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: E:\\appsInstalled\\MSYS2\\ucrt64\\bin\\clang++.exe"
		}
	]
}	
```

`c_cpp_properties.json`:
```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "E:/Cpls/basics/libs/GSL-main/include/gsl",
                "E:/Cpls/basics/libs/boost_1_78_0",
                "E:/Cpls/basics/basic-10/headers",
                "E:/Cpls/heading1/headers"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "compilerPath": "E:\\appsInstalled\\MSYS2\\ucrt64\\bin\\clang++.exe",
            "cStandard": "c17",
            "intelliSenseMode": "windows-clang-x64"
        }
    ],
    "version": 4
}	
```

`launch.json` :
```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "clang++.exe - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "E:\\appsInstalled\\MSYS2\\ucrt64\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: clang++.exe build active file"
        }
    ]
}	
```

This is additional : `settings.json` :
```c++
{
    "files.associations": {
        "ostream": "cpp",
        "iostream": "cpp"
    },
    "emmet.includeLanguages": {},
    "C_Cpp.errorSquiggles": "Enabled"
}	
```
> PS: Add the library path manually for compiler 

> NOTE: c_cpp_properties.json is for local intellisense not compiling!!
