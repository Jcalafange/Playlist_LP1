# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build"

# Include any dependencies generated for this target.
include CMakeFiles/testes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testes.dir/flags.make

CMakeFiles/testes.dir/src/teste.cpp.o: CMakeFiles/testes.dir/flags.make
CMakeFiles/testes.dir/src/teste.cpp.o: ../src/teste.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testes.dir/src/teste.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testes.dir/src/teste.cpp.o -c "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/teste.cpp"

CMakeFiles/testes.dir/src/teste.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testes.dir/src/teste.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/teste.cpp" > CMakeFiles/testes.dir/src/teste.cpp.i

CMakeFiles/testes.dir/src/teste.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testes.dir/src/teste.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/teste.cpp" -o CMakeFiles/testes.dir/src/teste.cpp.s

CMakeFiles/testes.dir/src/playlist.cpp.o: CMakeFiles/testes.dir/flags.make
CMakeFiles/testes.dir/src/playlist.cpp.o: ../src/playlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testes.dir/src/playlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testes.dir/src/playlist.cpp.o -c "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/playlist.cpp"

CMakeFiles/testes.dir/src/playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testes.dir/src/playlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/playlist.cpp" > CMakeFiles/testes.dir/src/playlist.cpp.i

CMakeFiles/testes.dir/src/playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testes.dir/src/playlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/playlist.cpp" -o CMakeFiles/testes.dir/src/playlist.cpp.s

CMakeFiles/testes.dir/src/sistema.cpp.o: CMakeFiles/testes.dir/flags.make
CMakeFiles/testes.dir/src/sistema.cpp.o: ../src/sistema.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/testes.dir/src/sistema.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testes.dir/src/sistema.cpp.o -c "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/sistema.cpp"

CMakeFiles/testes.dir/src/sistema.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testes.dir/src/sistema.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/sistema.cpp" > CMakeFiles/testes.dir/src/sistema.cpp.i

CMakeFiles/testes.dir/src/sistema.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testes.dir/src/sistema.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/src/sistema.cpp" -o CMakeFiles/testes.dir/src/sistema.cpp.s

# Object files for target testes
testes_OBJECTS = \
"CMakeFiles/testes.dir/src/teste.cpp.o" \
"CMakeFiles/testes.dir/src/playlist.cpp.o" \
"CMakeFiles/testes.dir/src/sistema.cpp.o"

# External object files for target testes
testes_EXTERNAL_OBJECTS =

testes: CMakeFiles/testes.dir/src/teste.cpp.o
testes: CMakeFiles/testes.dir/src/playlist.cpp.o
testes: CMakeFiles/testes.dir/src/sistema.cpp.o
testes: CMakeFiles/testes.dir/build.make
testes: CMakeFiles/testes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable testes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testes.dir/build: testes

.PHONY : CMakeFiles/testes.dir/build

CMakeFiles/testes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testes.dir/clean

CMakeFiles/testes.dir/depend:
	cd "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1" "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1" "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build" "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build" "/mnt/c/Users/jotav/Área de Trabalho/mySpace/cppSidemar/Playlist_LP1/build/CMakeFiles/testes.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/testes.dir/depend

