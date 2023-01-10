cmake_minimum_required(VERSION 3.21)
project(C11space)

set(CMAKE_CXX_STANDARD 11)

# 遍历项目根目录下所有的.cpp文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()


add_executable(Day01 C++primer/Day01.cpp)
add_executable(Graph Datastructure/07.Graph/Graph.cpp)
add_executable(Day02 C++primer/Day02.cpp)