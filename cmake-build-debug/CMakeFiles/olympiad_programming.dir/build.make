# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Program Files\Software\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Program Files\Software\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Serg\Documents\GitHub\olympiad-programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\olympiad_programming.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\olympiad_programming.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\olympiad_programming.dir\flags.make

CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.obj: CMakeFiles\olympiad_programming.dir\flags.make
CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.obj: ..\two_pointer_method\2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/olympiad_programming.dir/two_pointer_method/2.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.obj /FdCMakeFiles\olympiad_programming.dir\ /FS -c C:\Users\Serg\Documents\GitHub\olympiad-programming\two_pointer_method\2.cpp
<<

CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/olympiad_programming.dir/two_pointer_method/2.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Serg\Documents\GitHub\olympiad-programming\two_pointer_method\2.cpp
<<

CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/olympiad_programming.dir/two_pointer_method/2.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.s /c C:\Users\Serg\Documents\GitHub\olympiad-programming\two_pointer_method\2.cpp
<<

# Object files for target olympiad_programming
olympiad_programming_OBJECTS = \
"CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.obj"

# External object files for target olympiad_programming
olympiad_programming_EXTERNAL_OBJECTS =

olympiad_programming.exe: CMakeFiles\olympiad_programming.dir\two_pointer_method\2.cpp.obj
olympiad_programming.exe: CMakeFiles\olympiad_programming.dir\build.make
olympiad_programming.exe: CMakeFiles\olympiad_programming.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable olympiad_programming.exe"
	"F:\Program Files\Software\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\olympiad_programming.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\olympiad_programming.dir\objects1.rsp @<<
 /out:olympiad_programming.exe /implib:olympiad_programming.lib /pdb:C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug\olympiad_programming.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\olympiad_programming.dir\build: olympiad_programming.exe

.PHONY : CMakeFiles\olympiad_programming.dir\build

CMakeFiles\olympiad_programming.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\olympiad_programming.dir\cmake_clean.cmake
.PHONY : CMakeFiles\olympiad_programming.dir\clean

CMakeFiles\olympiad_programming.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Serg\Documents\GitHub\olympiad-programming C:\Users\Serg\Documents\GitHub\olympiad-programming C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug C:\Users\Serg\Documents\GitHub\olympiad-programming\cmake-build-debug\CMakeFiles\olympiad_programming.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\olympiad_programming.dir\depend

