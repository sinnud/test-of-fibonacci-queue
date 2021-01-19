cmake_minimum_required(VERSION 2.8.9)
project(database_test)

# use libpq to connect to postgresql database
set ( PROJECT_LINK_LIBS libpq.so )
link_directories( /usr/lib/x86_64-linux-gnu )

#Bring the headers, such as Student.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(dbtest.exe ${SOURCES})

# add lib above for connection to postgresql
target_link_libraries(dbtest.exe ${PROJECT_LINK_LIBS} )