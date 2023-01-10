cmake_minimum_required(VERSION 3.21)
project(C11space)

set(CMAKE_CXX_STANDARD 11)

#add_executable(C11space main.cpp )
add_executable(C11space Datastructure/08.Graph/Graph.cpp)

# 遍历项目根目录下所有的.cpp文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
