cmake_minimum_required(VERSION 3.14)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories("Final Project")
include_directories("Final Project/Debug")
include_directories("Final Project/x64")
include_directories("Final Project/x64/Debug")
include_directories("Final Project/x64/Release")

add_executable(Final_Project
        "Final Project/Debug/Final Project.pch"
        "Final Project/x64/Debug/Final Project.pch"
        "Final Project/x64/Release/Final Project.pch"
        "Final Project/Final Project.vcxproj"
        "Final Project/Final Project.vcxproj.filters"
        "Final Project/Final Project.vcxproj.user"
        "Final Project/hxlib.h"
        "Final Project/main.cpp"
        "Final Project/stdafx.cpp"
        "Final Project/stdafx.h"
        "Final Project/targetver.h"
        "x64/Debug/Final Project.exe"
        "x64/Debug/Final Project.ilk"
        "x64/Debug/Final Project.pdb"
        "x64/Release/Final Project.exe"
        "x64/Release/Final Project.iobj"
        "x64/Release/Final Project.ipdb"
        "x64/Release/Final Project.pdb"
        "Final Project.sln")
