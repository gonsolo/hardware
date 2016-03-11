; ModuleID = 'C:/Users/gonso/work/VivadoTest/gonzosolution/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

%"struct.std::array.1" = type { [8 x i32] }

@llvm.global_ctors = appending global [1 x { i32, void ()* }] [{ i32, void ()* } { i32 65535, void ()* @_GLOBAL__I_a }] ; [#uses=0 type=[1 x { i32, void ()* }]*]
@gonzomain.str = internal unnamed_addr constant [10 x i8] c"gonzomain\00" ; [#uses=1 type=[10 x i8]*]

; [#uses=6]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @gonzomain(%"struct.std::array.1"* %output, %"struct.std::array.1"* byval %input) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([10 x i8]* @gonzomain.str) nounwind
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %output}, i64 0, metadata !127), !dbg !128 ; [debug line = 4:36] [debug variable = output]
  call void @llvm.dbg.declare(metadata !{%"struct.std::array.1"* %input}, metadata !129), !dbg !130 ; [debug line = 4:73] [debug variable = input]
  br label %1, !dbg !131                          ; [debug line = 6:15]

; <label>:1                                       ; preds = %2, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %2 ]            ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %i, 8, !dbg !131        ; [#uses=1 type=i1] [debug line = 6:15]
  br i1 %exitcond, label %3, label %2, !dbg !131  ; [debug line = 6:15]

; <label>:2                                       ; preds = %1
  %__n.assign = sext i32 %i to i64, !dbg !134     ; [#uses=2 type=i64] [debug line = 7:15]
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %input}, i64 0, metadata !136), !dbg !138 ; [debug line = 150:7@7:15] [debug variable = this]
  call void @llvm.dbg.value(metadata !{i64 %__n.assign}, i64 0, metadata !139), !dbg !140 ; [debug line = 150:28@7:15] [debug variable = __n]
  %input.addr = getelementptr inbounds %"struct.std::array.1"* %input, i64 0, i32 0, i64 %__n.assign, !dbg !141 ; [#uses=1 type=i32*] [debug line = 151:9@7:15]
  %input.load = load i32* %input.addr, align 4, !dbg !134 ; [#uses=1 type=i32] [debug line = 7:15]
  %tmp = add nsw i32 %input.load, 3, !dbg !134    ; [#uses=1 type=i32] [debug line = 7:15]
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %output}, i64 0, metadata !143), !dbg !146 ; [debug line = 146:7@7:3] [debug variable = this]
  call void @llvm.dbg.value(metadata !{i64 %__n.assign}, i64 0, metadata !147), !dbg !148 ; [debug line = 146:28@7:3] [debug variable = __n]
  %output.addr = getelementptr inbounds %"struct.std::array.1"* %output, i64 0, i32 0, i64 %__n.assign, !dbg !149 ; [#uses=1 type=i32*] [debug line = 147:9@7:3]
  store i32 %tmp, i32* %output.addr, align 4, !dbg !145 ; [debug line = 7:3]
  %i.1 = add nsw i32 %i, 1, !dbg !151             ; [#uses=1 type=i32] [debug line = 6:28]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !152), !dbg !151 ; [debug line = 6:28] [debug variable = i]
  br label %1, !dbg !151                          ; [debug line = 6:28]

; <label>:3                                       ; preds = %1
  ret void, !dbg !153                             ; [debug line = 9:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/Users/gonso/work/VivadoTest/gonzosolution/.autopilot/db/bla.pragma.2.cpp", metadata !"c:/Users/gonso/work", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !114} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !104, metadata !105, metadata !106, metadata !113}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"gonzomain", metadata !"gonzomain", metadata !"_Z9gonzomainRSt5arrayIiLy8EES0_", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%"struct.std::array.1"*, %"struct.std::array.1"*)* @gonzomain, null, null, metadata !26, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"VivadoTest/bla.cpp", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !42}
!9 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_reference_type ]
!10 = metadata !{i32 786434, metadata !11, metadata !"array<int, 8>", metadata !12, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !13, i32 0, null, metadata !101} ; [ DW_TAG_class_type ]
!11 = metadata !{i32 786489, null, metadata !"std", metadata !12, i32 30} ; [ DW_TAG_namespace ]
!12 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Ctr1_impl/array", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!13 = metadata !{metadata !14, metadata !20, metadata !28, metadata !31, metadata !36, metadata !43, metadata !44, metadata !45, metadata !51, metadata !56, metadata !57, metadata !58, metadata !59, metadata !60, metadata !61, metadata !62, metadata !68, metadata !69, metadata !73, metadata !78, metadata !82, metadata !83, metadata !84, metadata !87, metadata !90, metadata !91, metadata !92, metadata !96}
!14 = metadata !{i32 786445, metadata !10, metadata !"_M_instance", metadata !12, i32 66, i64 256, i64 32, i64 0, i32 0, metadata !15} ; [ DW_TAG_member ]
!15 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !16, metadata !18, i32 0, i32 0} ; [ DW_TAG_array_type ]
!16 = metadata !{i32 786454, metadata !10, metadata !"value_type", metadata !12, i32 51, i64 0, i64 0, i64 0, i32 0, metadata !17} ; [ DW_TAG_typedef ]
!17 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!18 = metadata !{metadata !19}
!19 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!20 = metadata !{i32 786478, i32 0, metadata !10, metadata !"fill", metadata !"fill", metadata !"_ZNSt5arrayIiLy8EE4fillERKi", metadata !12, i32 73, metadata !21, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 73} ; [ DW_TAG_subprogram ]
!21 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !22, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!22 = metadata !{null, metadata !23, metadata !24}
!23 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !10} ; [ DW_TAG_pointer_type ]
!24 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_reference_type ]
!25 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !16} ; [ DW_TAG_const_type ]
!26 = metadata !{metadata !27}
!27 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!28 = metadata !{i32 786478, i32 0, metadata !10, metadata !"swap", metadata !"swap", metadata !"_ZNSt5arrayIiLy8EE4swapERS0_", metadata !12, i32 80, metadata !29, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 80} ; [ DW_TAG_subprogram ]
!29 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !30, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!30 = metadata !{null, metadata !23, metadata !9}
!31 = metadata !{i32 786478, i32 0, metadata !10, metadata !"begin", metadata !"begin", metadata !"_ZNSt5arrayIiLy8EE5beginEv", metadata !12, i32 85, metadata !32, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 85} ; [ DW_TAG_subprogram ]
!32 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !33, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!33 = metadata !{metadata !34, metadata !23}
!34 = metadata !{i32 786454, metadata !10, metadata !"iterator", metadata !12, i32 58, i64 0, i64 0, i64 0, i32 0, metadata !35} ; [ DW_TAG_typedef ]
!35 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!36 = metadata !{i32 786478, i32 0, metadata !10, metadata !"begin", metadata !"begin", metadata !"_ZNKSt5arrayIiLy8EE5beginEv", metadata !12, i32 89, metadata !37, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 89} ; [ DW_TAG_subprogram ]
!37 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !38, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!38 = metadata !{metadata !39, metadata !41}
!39 = metadata !{i32 786454, metadata !10, metadata !"const_iterator", metadata !12, i32 59, i64 0, i64 0, i64 0, i32 0, metadata !40} ; [ DW_TAG_typedef ]
!40 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !25} ; [ DW_TAG_pointer_type ]
!41 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !42} ; [ DW_TAG_pointer_type ]
!42 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_const_type ]
!43 = metadata !{i32 786478, i32 0, metadata !10, metadata !"end", metadata !"end", metadata !"_ZNSt5arrayIiLy8EE3endEv", metadata !12, i32 93, metadata !32, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 93} ; [ DW_TAG_subprogram ]
!44 = metadata !{i32 786478, i32 0, metadata !10, metadata !"end", metadata !"end", metadata !"_ZNKSt5arrayIiLy8EE3endEv", metadata !12, i32 97, metadata !37, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 97} ; [ DW_TAG_subprogram ]
!45 = metadata !{i32 786478, i32 0, metadata !10, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNSt5arrayIiLy8EE6rbeginEv", metadata !12, i32 101, metadata !46, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 101} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !47, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!47 = metadata !{metadata !48, metadata !23}
!48 = metadata !{i32 786454, metadata !10, metadata !"reverse_iterator", metadata !12, i32 62, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_typedef ]
!49 = metadata !{i32 786434, null, metadata !"reverse_iterator<int *>", metadata !50, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!50 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cbits/stl_iterator.h", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!51 = metadata !{i32 786478, i32 0, metadata !10, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNKSt5arrayIiLy8EE6rbeginEv", metadata !12, i32 105, metadata !52, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 105} ; [ DW_TAG_subprogram ]
!52 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !53, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!53 = metadata !{metadata !54, metadata !41}
!54 = metadata !{i32 786454, metadata !10, metadata !"const_reverse_iterator", metadata !12, i32 63, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_typedef ]
!55 = metadata !{i32 786434, null, metadata !"reverse_iterator<const int *>", metadata !50, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!56 = metadata !{i32 786478, i32 0, metadata !10, metadata !"rend", metadata !"rend", metadata !"_ZNSt5arrayIiLy8EE4rendEv", metadata !12, i32 109, metadata !46, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 109} ; [ DW_TAG_subprogram ]
!57 = metadata !{i32 786478, i32 0, metadata !10, metadata !"rend", metadata !"rend", metadata !"_ZNKSt5arrayIiLy8EE4rendEv", metadata !12, i32 113, metadata !52, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 113} ; [ DW_TAG_subprogram ]
!58 = metadata !{i32 786478, i32 0, metadata !10, metadata !"cbegin", metadata !"cbegin", metadata !"_ZNKSt5arrayIiLy8EE6cbeginEv", metadata !12, i32 118, metadata !37, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 118} ; [ DW_TAG_subprogram ]
!59 = metadata !{i32 786478, i32 0, metadata !10, metadata !"cend", metadata !"cend", metadata !"_ZNKSt5arrayIiLy8EE4cendEv", metadata !12, i32 122, metadata !37, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 122} ; [ DW_TAG_subprogram ]
!60 = metadata !{i32 786478, i32 0, metadata !10, metadata !"crbegin", metadata !"crbegin", metadata !"_ZNKSt5arrayIiLy8EE7crbeginEv", metadata !12, i32 126, metadata !52, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 126} ; [ DW_TAG_subprogram ]
!61 = metadata !{i32 786478, i32 0, metadata !10, metadata !"crend", metadata !"crend", metadata !"_ZNKSt5arrayIiLy8EE5crendEv", metadata !12, i32 130, metadata !52, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 130} ; [ DW_TAG_subprogram ]
!62 = metadata !{i32 786478, i32 0, metadata !10, metadata !"size", metadata !"size", metadata !"_ZNKSt5arrayIiLy8EE4sizeEv", metadata !12, i32 136, metadata !63, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 136} ; [ DW_TAG_subprogram ]
!63 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !64, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!64 = metadata !{metadata !65, metadata !41}
!65 = metadata !{i32 786454, null, metadata !"size_type", metadata !12, i32 60, i64 0, i64 0, i64 0, i32 0, metadata !66} ; [ DW_TAG_typedef ]
!66 = metadata !{i32 786454, null, metadata !"size_t", metadata !12, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !67} ; [ DW_TAG_typedef ]
!67 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!68 = metadata !{i32 786478, i32 0, metadata !10, metadata !"max_size", metadata !"max_size", metadata !"_ZNKSt5arrayIiLy8EE8max_sizeEv", metadata !12, i32 139, metadata !63, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 139} ; [ DW_TAG_subprogram ]
!69 = metadata !{i32 786478, i32 0, metadata !10, metadata !"empty", metadata !"empty", metadata !"_ZNKSt5arrayIiLy8EE5emptyEv", metadata !12, i32 142, metadata !70, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 142} ; [ DW_TAG_subprogram ]
!70 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !71, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!71 = metadata !{metadata !72, metadata !41}
!72 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!73 = metadata !{i32 786478, i32 0, metadata !10, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !12, i32 146, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 146} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{metadata !76, metadata !23, metadata !65}
!76 = metadata !{i32 786454, metadata !10, metadata !"reference", metadata !12, i32 56, i64 0, i64 0, i64 0, i32 0, metadata !77} ; [ DW_TAG_typedef ]
!77 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !16} ; [ DW_TAG_reference_type ]
!78 = metadata !{i32 786478, i32 0, metadata !10, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !12, i32 150, metadata !79, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 150} ; [ DW_TAG_subprogram ]
!79 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !80, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!80 = metadata !{metadata !81, metadata !41, metadata !65}
!81 = metadata !{i32 786454, metadata !10, metadata !"const_reference", metadata !12, i32 57, i64 0, i64 0, i64 0, i32 0, metadata !24} ; [ DW_TAG_typedef ]
!82 = metadata !{i32 786478, i32 0, metadata !10, metadata !"at", metadata !"at", metadata !"_ZNSt5arrayIiLy8EE2atEy", metadata !12, i32 154, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 154} ; [ DW_TAG_subprogram ]
!83 = metadata !{i32 786478, i32 0, metadata !10, metadata !"at", metadata !"at", metadata !"_ZNKSt5arrayIiLy8EE2atEy", metadata !12, i32 162, metadata !79, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 162} ; [ DW_TAG_subprogram ]
!84 = metadata !{i32 786478, i32 0, metadata !10, metadata !"front", metadata !"front", metadata !"_ZNSt5arrayIiLy8EE5frontEv", metadata !12, i32 170, metadata !85, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 170} ; [ DW_TAG_subprogram ]
!85 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !86, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!86 = metadata !{metadata !76, metadata !23}
!87 = metadata !{i32 786478, i32 0, metadata !10, metadata !"front", metadata !"front", metadata !"_ZNKSt5arrayIiLy8EE5frontEv", metadata !12, i32 174, metadata !88, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 174} ; [ DW_TAG_subprogram ]
!88 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !89, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!89 = metadata !{metadata !81, metadata !41}
!90 = metadata !{i32 786478, i32 0, metadata !10, metadata !"back", metadata !"back", metadata !"_ZNSt5arrayIiLy8EE4backEv", metadata !12, i32 178, metadata !85, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 178} ; [ DW_TAG_subprogram ]
!91 = metadata !{i32 786478, i32 0, metadata !10, metadata !"back", metadata !"back", metadata !"_ZNKSt5arrayIiLy8EE4backEv", metadata !12, i32 182, metadata !88, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 182} ; [ DW_TAG_subprogram ]
!92 = metadata !{i32 786478, i32 0, metadata !10, metadata !"data", metadata !"data", metadata !"_ZNSt5arrayIiLy8EE4dataEv", metadata !12, i32 186, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 186} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !94, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!94 = metadata !{metadata !95, metadata !23}
!95 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!96 = metadata !{i32 786478, i32 0, metadata !10, metadata !"data", metadata !"data", metadata !"_ZNKSt5arrayIiLy8EE4dataEv", metadata !12, i32 190, metadata !97, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 190} ; [ DW_TAG_subprogram ]
!97 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !98, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!98 = metadata !{metadata !99, metadata !41}
!99 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !100} ; [ DW_TAG_pointer_type ]
!100 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !17} ; [ DW_TAG_const_type ]
!101 = metadata !{metadata !102, metadata !103}
!102 = metadata !{i32 786479, null, metadata !"_Tp", metadata !17, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!103 = metadata !{i32 786480, null, metadata !"_Nm", metadata !67, i64 8, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!104 = metadata !{i32 786478, i32 0, metadata !11, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !12, i32 150, metadata !79, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !78, metadata !26, i32 151} ; [ DW_TAG_subprogram ]
!105 = metadata !{i32 786478, i32 0, metadata !11, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !12, i32 146, metadata !74, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !73, metadata !26, i32 147} ; [ DW_TAG_subprogram ]
!106 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"_ZN36ssdm_global_array_blapp0cppaplinecppC1Ev", metadata !6, i32 13, metadata !107, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !112, metadata !26, i32 13} ; [ DW_TAG_subprogram ]
!107 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{null, metadata !109}
!109 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !110} ; [ DW_TAG_pointer_type ]
!110 = metadata !{i32 786434, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !6, i32 11, i64 8, i64 8, i32 0, i32 0, null, metadata !111, i32 0, null, null} ; [ DW_TAG_class_type ]
!111 = metadata !{metadata !112}
!112 = metadata !{i32 786478, i32 0, metadata !110, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"", metadata !6, i32 13, metadata !107, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !26, i32 13} ; [ DW_TAG_subprogram ]
!113 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"_ZN36ssdm_global_array_blapp0cppaplinecppC2Ev", metadata !6, i32 13, metadata !107, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !112, metadata !26, i32 13} ; [ DW_TAG_subprogram ]
!114 = metadata !{metadata !115}
!115 = metadata !{metadata !116, metadata !118, metadata !119, metadata !121, metadata !122, metadata !123, metadata !124, metadata !126}
!116 = metadata !{i32 786484, i32 0, metadata !117, metadata !"count", metadata !"count", metadata !"count", metadata !117, i32 3, metadata !100, i32 1, i32 1, i32 8} ; [ DW_TAG_variable ]
!117 = metadata !{i32 786473, metadata !"VivadoTest/bla.h", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!118 = metadata !{i32 786484, i32 0, null, metadata !"ssdm_global_array_ins", metadata !"ssdm_global_array_ins", metadata !"_ZL21ssdm_global_array_ins", metadata !6, i32 17, metadata !110, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!119 = metadata !{i32 786484, i32 0, null, metadata !"__digits", metadata !"__digits", metadata !"_ZN9__gnu_cxx24__numeric_traits_integer8__digitsE", metadata !120, i32 74, metadata !100, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!120 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cext/numeric_traits.h", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!121 = metadata !{i32 786484, i32 0, null, metadata !"__max_digits10", metadata !"__max_digits10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating14__max_digits10E", metadata !120, i32 109, metadata !100, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!122 = metadata !{i32 786484, i32 0, null, metadata !"__digits10", metadata !"__digits10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating10__digits10E", metadata !120, i32 115, metadata !100, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!123 = metadata !{i32 786484, i32 0, null, metadata !"__max_exponent10", metadata !"__max_exponent10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating16__max_exponent10E", metadata !120, i32 118, metadata !100, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!124 = metadata !{i32 786484, i32 0, null, metadata !"value", metadata !"value", metadata !"_ZNSt10tuple_sizeISt5arrayIT_XT0_EEE5valueE", metadata !12, i32 262, metadata !125, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!125 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !66} ; [ DW_TAG_const_type ]
!126 = metadata !{i32 786484, i32 0, null, metadata !"count", metadata !"count", metadata !"_ZL5count", metadata !117, i32 3, metadata !100, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!127 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!128 = metadata !{i32 4, i32 36, metadata !5, null}
!129 = metadata !{i32 786689, metadata !5, metadata !"input", metadata !6, i32 33554436, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!130 = metadata !{i32 4, i32 73, metadata !5, null}
!131 = metadata !{i32 6, i32 15, metadata !132, null}
!132 = metadata !{i32 786443, metadata !133, i32 6, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 786443, metadata !5, i32 4, i32 80, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!134 = metadata !{i32 7, i32 15, metadata !135, null}
!135 = metadata !{i32 786443, metadata !132, i32 6, i32 33, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 786689, metadata !104, metadata !"this", metadata !12, i32 16777366, metadata !137, i32 64, metadata !134} ; [ DW_TAG_arg_variable ]
!137 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !42} ; [ DW_TAG_pointer_type ]
!138 = metadata !{i32 150, i32 7, metadata !104, metadata !134}
!139 = metadata !{i32 786689, metadata !104, metadata !"__n", metadata !12, i32 33554582, metadata !65, i32 0, metadata !134} ; [ DW_TAG_arg_variable ]
!140 = metadata !{i32 150, i32 28, metadata !104, metadata !134}
!141 = metadata !{i32 151, i32 9, metadata !142, metadata !134}
!142 = metadata !{i32 786443, metadata !104, i32 151, i32 7, metadata !12, i32 3} ; [ DW_TAG_lexical_block ]
!143 = metadata !{i32 786689, metadata !105, metadata !"this", metadata !12, i32 16777362, metadata !144, i32 64, metadata !145} ; [ DW_TAG_arg_variable ]
!144 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!145 = metadata !{i32 7, i32 3, metadata !135, null}
!146 = metadata !{i32 146, i32 7, metadata !105, metadata !145}
!147 = metadata !{i32 786689, metadata !105, metadata !"__n", metadata !12, i32 33554578, metadata !65, i32 0, metadata !145} ; [ DW_TAG_arg_variable ]
!148 = metadata !{i32 146, i32 28, metadata !105, metadata !145}
!149 = metadata !{i32 147, i32 9, metadata !150, metadata !145}
!150 = metadata !{i32 786443, metadata !105, i32 147, i32 7, metadata !12, i32 4} ; [ DW_TAG_lexical_block ]
!151 = metadata !{i32 6, i32 28, metadata !132, null}
!152 = metadata !{i32 786688, metadata !132, metadata !"i", metadata !6, i32 6, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!153 = metadata !{i32 9, i32 1, metadata !133, null}
