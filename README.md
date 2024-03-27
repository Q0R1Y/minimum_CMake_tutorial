# CMake Tutorial

## Target
Target is what you want to build(library and executable) or have already built(third-party library).  
Target can be imagined as objects. It has compile definitions, compile options, compile features, include directories and library dependencies.  


## Commands

### `command_name(space separated list of strings)`

- `add_executable(<name> <option> <sources>...)`  
Add an executable target called `<name>` to be built from the source files listed.  
`<option>` specify the platform your target for.  
you can add sources file for this target by `target_sources()`.  
You can import target or alias target by this command.[more info](https://cmake.org/cmake/help/latest/command/add_executable.html)  

- `add_library(<name> <type> <sources>...)`  
Add a library target called `<name>` to be built from the source files listed in the command invocation.  
If no `<type>` is given the default is `STATIC`.  
[more about `<type>`](https://cmake.org/cmake/help/latest/command/add_library.html#normal-libraries)  

- `target_sources(<target> <sources>...)`  
Specifies sources to use when building a target and/or its dependents.  
The named `<target>` must have been created by a command such as add_executable() or add_library() or add_custom_target() and must not be an ALIAS target.  

- `find_package(name [REQUIRED])`  
Find a package.  
`name` specify the name of library.  
`REQUIRED` represents this package is a necessary dependency.



- `target_include_directories(<target> <directories>...)`  
Specifies include directories to use when compiling a given target.  
- `target_compile_definitioons(<target> <definitions>...)`  
Specifies compile definitions to use when compiling a given `<target>`.
- `target_compile_options(<target> <options>...)`  
These `<options>` are used when compiling the given `<target>`.  
In fact, this command adds options to the `COMPILE_OPTIONS` or `INTERFACE_COMPILE_OPTIONS` target properties.  
[more info](https://cmake.org/cmake/help/latest/command/target_compile_options.html#command:target_compile_options)

- `target_compile_features(<target> <feature>...)`  
Specifies compiler features required when compiling a given target.

- `target_link_directories(<target> <directories>...)`  
Specifies the paths in which the linker should search for libraries when linking a given target.  
Each `<directories>` can be an absolute or relative path, with the latter being interpreted as relative to the current source directory. These items will be added to the link command.

- `target_link_libraries(<target>... <item>...)`  
Specify libraries or flags to use when linking a given target and/or its dependents.  
The named `<target>` must have been created by a command such as add_executable() or add_library() and must not be an ALIAS target.  
The `<item>` can be:  
	- A library target name
	- A full path to a library file
	- A plain library name
	- A link flag

  [(more info about `<item>`)](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)

- `target_link_options(<target> <options>...)`  
Add options to the link step for an executable or library target.

- `add_subdirectory()`  




## Usage  
You can use cmake generate Makefile, Ninja or some other 


# Reference
[Effective Modern CMake](https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1)  
[Effective CMake](https://github.com/boostcon/cppnow_presentations_2017/blob/master/05-19-2017_friday/effective_cmake__daniel_pfeifer__cppnow_05-19-2017.pdf)  
[CMake Reference Documentation](https://cmake.org/cmake/help/latest/)