
project(Vivado)
add_executable(vivado
	testbench.cpp
	BBox.h
	Gonzo.h Gonzo.cpp
	Hardware.h Hardware.cpp
	Interface.h Interface.cpp
	Software.h Software.cpp
	TriangleMesh.h TriangleMesh.cpp
)

