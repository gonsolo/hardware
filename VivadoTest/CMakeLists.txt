cmake_minimum_required(VERSION 3.6)

project(Gonzo)

set(CXX_STANDARD "c++14")
if(CMAKE_COMPILER_IS_GNUCXX)
	add_definitions(-std=${CXX_STANDARD})
endif()
if(CMAKE_GENERATOR STREQUAL Xcode)
    set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD ${CXX_STANDARD})
endif()

add_executable(testgonzo
	testbench.cpp
	BBox.h
	Gonzo.h Gonzo.cpp
	Hardware.h Hardware.cpp
	Interface.h Interface.cpp
	Software.h Software.cpp
	TriangleMesh.h TriangleMesh.cpp
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT testgonzo)
