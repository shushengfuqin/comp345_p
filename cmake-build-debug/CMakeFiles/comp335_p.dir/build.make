# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gin/CLionProjects/comp345_p

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gin/CLionProjects/comp345_p/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/comp335_p.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/comp335_p.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/comp335_p.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/comp335_p.dir/flags.make

CMakeFiles/comp335_p.dir/main.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/main.cpp.o: ../main.cpp
CMakeFiles/comp335_p.dir/main.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/comp335_p.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/main.cpp.o -MF CMakeFiles/comp335_p.dir/main.cpp.o.d -o CMakeFiles/comp335_p.dir/main.cpp.o -c /Users/gin/CLionProjects/comp345_p/main.cpp

CMakeFiles/comp335_p.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/main.cpp > CMakeFiles/comp335_p.dir/main.cpp.i

CMakeFiles/comp335_p.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/main.cpp -o CMakeFiles/comp335_p.dir/main.cpp.s

CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o: ../OrdersDriver.cpp
CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o -MF CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o.d -o CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o -c /Users/gin/CLionProjects/comp345_p/OrdersDriver.cpp

CMakeFiles/comp335_p.dir/OrdersDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/OrdersDriver.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/OrdersDriver.cpp > CMakeFiles/comp335_p.dir/OrdersDriver.cpp.i

CMakeFiles/comp335_p.dir/OrdersDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/OrdersDriver.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/OrdersDriver.cpp -o CMakeFiles/comp335_p.dir/OrdersDriver.cpp.s

CMakeFiles/comp335_p.dir/Orders.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/Orders.cpp.o: ../Orders.cpp
CMakeFiles/comp335_p.dir/Orders.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/comp335_p.dir/Orders.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/Orders.cpp.o -MF CMakeFiles/comp335_p.dir/Orders.cpp.o.d -o CMakeFiles/comp335_p.dir/Orders.cpp.o -c /Users/gin/CLionProjects/comp345_p/Orders.cpp

CMakeFiles/comp335_p.dir/Orders.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/Orders.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/Orders.cpp > CMakeFiles/comp335_p.dir/Orders.cpp.i

CMakeFiles/comp335_p.dir/Orders.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/Orders.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/Orders.cpp -o CMakeFiles/comp335_p.dir/Orders.cpp.s

CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o: ../src/Cards/CardsDriver.cpp
CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o -MF CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o.d -o CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o -c /Users/gin/CLionProjects/comp345_p/src/Cards/CardsDriver.cpp

CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/src/Cards/CardsDriver.cpp > CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.i

CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/src/Cards/CardsDriver.cpp -o CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.s

CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o: ../src/Cards/Cards.cpp
CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o -MF CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o.d -o CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o -c /Users/gin/CLionProjects/comp345_p/src/Cards/Cards.cpp

CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/src/Cards/Cards.cpp > CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.i

CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/src/Cards/Cards.cpp -o CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.s

CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o: ../GameEngineDriver.cpp
CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o -MF CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o.d -o CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o -c /Users/gin/CLionProjects/comp345_p/GameEngineDriver.cpp

CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/GameEngineDriver.cpp > CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.i

CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/GameEngineDriver.cpp -o CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.s

CMakeFiles/comp335_p.dir/GameEngine.cpp.o: CMakeFiles/comp335_p.dir/flags.make
CMakeFiles/comp335_p.dir/GameEngine.cpp.o: ../GameEngine.cpp
CMakeFiles/comp335_p.dir/GameEngine.cpp.o: CMakeFiles/comp335_p.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/comp335_p.dir/GameEngine.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/comp335_p.dir/GameEngine.cpp.o -MF CMakeFiles/comp335_p.dir/GameEngine.cpp.o.d -o CMakeFiles/comp335_p.dir/GameEngine.cpp.o -c /Users/gin/CLionProjects/comp345_p/GameEngine.cpp

CMakeFiles/comp335_p.dir/GameEngine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comp335_p.dir/GameEngine.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gin/CLionProjects/comp345_p/GameEngine.cpp > CMakeFiles/comp335_p.dir/GameEngine.cpp.i

CMakeFiles/comp335_p.dir/GameEngine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comp335_p.dir/GameEngine.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gin/CLionProjects/comp345_p/GameEngine.cpp -o CMakeFiles/comp335_p.dir/GameEngine.cpp.s

# Object files for target comp335_p
comp335_p_OBJECTS = \
"CMakeFiles/comp335_p.dir/main.cpp.o" \
"CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o" \
"CMakeFiles/comp335_p.dir/Orders.cpp.o" \
"CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o" \
"CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o" \
"CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o" \
"CMakeFiles/comp335_p.dir/GameEngine.cpp.o"

# External object files for target comp335_p
comp335_p_EXTERNAL_OBJECTS =

comp335_p: CMakeFiles/comp335_p.dir/main.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/OrdersDriver.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/Orders.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/src/Cards/CardsDriver.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/src/Cards/Cards.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/GameEngineDriver.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/GameEngine.cpp.o
comp335_p: CMakeFiles/comp335_p.dir/build.make
comp335_p: CMakeFiles/comp335_p.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable comp335_p"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/comp335_p.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/comp335_p.dir/build: comp335_p
.PHONY : CMakeFiles/comp335_p.dir/build

CMakeFiles/comp335_p.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/comp335_p.dir/cmake_clean.cmake
.PHONY : CMakeFiles/comp335_p.dir/clean

CMakeFiles/comp335_p.dir/depend:
	cd /Users/gin/CLionProjects/comp345_p/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gin/CLionProjects/comp345_p /Users/gin/CLionProjects/comp345_p /Users/gin/CLionProjects/comp345_p/cmake-build-debug /Users/gin/CLionProjects/comp345_p/cmake-build-debug /Users/gin/CLionProjects/comp345_p/cmake-build-debug/CMakeFiles/comp335_p.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/comp335_p.dir/depend
