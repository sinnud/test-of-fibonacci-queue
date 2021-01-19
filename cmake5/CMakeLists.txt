cmake_minimum_required(VERSION 2.8.9)
project (TestLibrary)
 
#For the shared library:
set ( PROJECT_LINK_LIBS libtestStudent.so )
link_directories( ../cmake3 )
#link_directories( ~/lib )

#For the static library:
#set ( PROJECT_LINK_LIBS libtestStudent.a )
#link_directories( ~/exploringBB/extras/cmake/studentlib_static/build )
 
include_directories(../cmake3/include)
 
add_executable(libtest.exe src/libtest.cpp)
target_link_libraries(libtest.exe ${PROJECT_LINK_LIBS} )