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
				"-std=c++11",
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

> PS: Add the library path manually for compiler 

> NOTE: c_cpp_properties.json is for local intellisense not compiling!!