set lang "C++"
set moduleName "gonzomain"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "output"
set BitWidth0 "256"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "2"
set Reference0 "1"
set Dims0 [list 0]
set Interface0 "wire"
set structMem0 ""
set PortName00 "_M_instance"
set BitWidth00 "256"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list  8]
set Interface00 "wire"
set DataType00 "int"
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set DataType0tp1 "long long unsigned int"
set structParameter0 [list [list typename _Tp] [list $DataType0tp1 _Nm] ]
set DataType0ta0 "int"
set structArgument0 [list $DataType0ta0 8 ]
set SpaceName00 "std"
set NameSpace0 [list  [list  space $SpaceName00] ]
set structIsPacked0 "0"
set DataType0 [list "std::array<int, 8>" "struct array" $structMem0 0 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "input"
set BitWidth1 "256"
set ArrayOpt1 ""
set Const1 "1"
set Volatile1 "0"
set Pointer1 "0"
set Reference1 "0"
set Dims1 [list 0]
set Interface1 "wire"
set structMem1 ""
set PortName10 "_M_instance"
set BitWidth10 "256"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list  8]
set Interface10 "wire"
set DataType10 "int"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set DataType1tp1 "long long unsigned int"
set structParameter1 [list [list typename _Tp] [list $DataType1tp1 _Nm] ]
set DataType1ta0 "int"
set structArgument1 [list $DataType1ta0 8 ]
set SpaceName10 "std"
set NameSpace1 [list  [list  space $SpaceName10] ]
set structIsPacked1 "0"
set DataType1 [list "std::array<int, 8>" "struct array" $structMem1 0 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
