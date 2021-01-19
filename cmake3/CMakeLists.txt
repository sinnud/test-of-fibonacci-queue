cmake_minimum_required(VERSION 2.8.9)
project(library_test)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as Student.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(testStudent SHARED ${SOURCES})
#add_library(testStudent STATIC ${SOURCES})
# A statically-linked library is created at compile time to contain all of the code 
# relating the library — essentially it makes copies of any dependency code, including 
# that in other libraries. This results in a library that is typically larger in size 
# than the equivalent shared library, but because all of the dependencies are determined
# at compile time, there are fewer run-time loading costs and the library may be more
# platform independent. Unless you are certain that you require a static library,
# you should use a shared library as there will be fewer code duplications and the shared 
# library can be updated (e.g., for error correction) without recompilation.

#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
# install(TARGETS testStudent DESTINATION /usr/lib)
install(TARGETS testStudent DESTINATION ~/lib)