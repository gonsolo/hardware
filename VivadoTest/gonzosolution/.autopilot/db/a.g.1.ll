; ModuleID = 'C:/Users/gonso/work/hardware/VivadoTest/gonzosolution/.autopilot/db/a.g.1.bc'
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
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %output}, i64 0, metadata !130), !dbg !131 ; [debug line = 3:27] [debug variable = output]
  call void @llvm.dbg.declare(metadata !{%"struct.std::array.1"* %input}, metadata !132), !dbg !133 ; [debug line = 3:51] [debug variable = input]
  br label %1, !dbg !134                          ; [debug line = 5:15]

; <label>:1                                       ; preds = %2, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %2 ]            ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %i, 8, !dbg !134        ; [#uses=1 type=i1] [debug line = 5:15]
  br i1 %exitcond, label %3, label %2, !dbg !134  ; [debug line = 5:15]

; <label>:2                                       ; preds = %1
  %__n.assign = sext i32 %i to i64, !dbg !137     ; [#uses=2 type=i64] [debug line = 6:15]
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %input}, i64 0, metadata !139), !dbg !141 ; [debug line = 150:7@6:15] [debug variable = this]
  call void @llvm.dbg.value(metadata !{i64 %__n.assign}, i64 0, metadata !142), !dbg !143 ; [debug line = 150:28@6:15] [debug variable = __n]
  %input.addr = getelementptr inbounds %"struct.std::array.1"* %input, i64 0, i32 0, i64 %__n.assign, !dbg !144 ; [#uses=1 type=i32*] [debug line = 151:9@6:15]
  %input.load = load i32* %input.addr, align 4, !dbg !137 ; [#uses=1 type=i32] [debug line = 6:15]
  %tmp = add nsw i32 %input.load, 3, !dbg !137    ; [#uses=1 type=i32] [debug line = 6:15]
  call void @llvm.dbg.value(metadata !{%"struct.std::array.1"* %output}, i64 0, metadata !146), !dbg !149 ; [debug line = 146:7@6:3] [debug variable = this]
  call void @llvm.dbg.value(metadata !{i64 %__n.assign}, i64 0, metadata !150), !dbg !151 ; [debug line = 146:28@6:3] [debug variable = __n]
  %output.addr = getelementptr inbounds %"struct.std::array.1"* %output, i64 0, i32 0, i64 %__n.assign, !dbg !152 ; [#uses=1 type=i32*] [debug line = 147:9@6:3]
  store i32 %tmp, i32* %output.addr, align 4, !dbg !148 ; [debug line = 6:3]
  %i.1 = add nsw i32 %i, 1, !dbg !154             ; [#uses=1 type=i32] [debug line = 5:28]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !155), !dbg !154 ; [debug line = 5:28] [debug variable = i]
  br label %1, !dbg !154                          ; [debug line = 5:28]

; <label>:3                                       ; preds = %1
  ret void, !dbg !156                             ; [debug line = 8:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/Users/gonso/work/hardware/VivadoTest/gonzosolution/.autopilot/db/bla.pragma.2.cpp", metadata !"c:/Users/gonso/work/hardware", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !117} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !107, metadata !108, metadata !109, metadata !116}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"gonzomain", metadata !"gonzomain", metadata !"_Z9gonzomainRSt5arrayIiLy8EES0_", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%"struct.std::array.1"*, %"struct.std::array.1"*)* @gonzomain, null, null, metadata !27, i32 3} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"VivadoTest/bla.cpp", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !106}
!9 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_reference_type ]
!10 = metadata !{i32 786454, null, metadata !"EightInts", metadata !6, i32 6, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!11 = metadata !{i32 786434, metadata !12, metadata !"array<int, 8>", metadata !13, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !14, i32 0, null, metadata !103} ; [ DW_TAG_class_type ]
!12 = metadata !{i32 786489, null, metadata !"std", metadata !13, i32 30} ; [ DW_TAG_namespace ]
!13 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Ctr1_impl/array", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!14 = metadata !{metadata !15, metadata !21, metadata !29, metadata !33, metadata !38, metadata !45, metadata !46, metadata !47, metadata !53, metadata !58, metadata !59, metadata !60, metadata !61, metadata !62, metadata !63, metadata !64, metadata !70, metadata !71, metadata !75, metadata !80, metadata !84, metadata !85, metadata !86, metadata !89, metadata !92, metadata !93, metadata !94, metadata !98}
!15 = metadata !{i32 786445, metadata !11, metadata !"_M_instance", metadata !13, i32 66, i64 256, i64 32, i64 0, i32 0, metadata !16} ; [ DW_TAG_member ]
!16 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !17, metadata !19, i32 0, i32 0} ; [ DW_TAG_array_type ]
!17 = metadata !{i32 786454, metadata !11, metadata !"value_type", metadata !13, i32 51, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_typedef ]
!18 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!21 = metadata !{i32 786478, i32 0, metadata !11, metadata !"fill", metadata !"fill", metadata !"_ZNSt5arrayIiLy8EE4fillERKi", metadata !13, i32 73, metadata !22, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 73} ; [ DW_TAG_subprogram ]
!22 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !23, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!23 = metadata !{null, metadata !24, metadata !25}
!24 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !11} ; [ DW_TAG_pointer_type ]
!25 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !26} ; [ DW_TAG_reference_type ]
!26 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !17} ; [ DW_TAG_const_type ]
!27 = metadata !{metadata !28}
!28 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!29 = metadata !{i32 786478, i32 0, metadata !11, metadata !"swap", metadata !"swap", metadata !"_ZNSt5arrayIiLy8EE4swapERS0_", metadata !13, i32 80, metadata !30, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 80} ; [ DW_TAG_subprogram ]
!30 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !31, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!31 = metadata !{null, metadata !24, metadata !32}
!32 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_reference_type ]
!33 = metadata !{i32 786478, i32 0, metadata !11, metadata !"begin", metadata !"begin", metadata !"_ZNSt5arrayIiLy8EE5beginEv", metadata !13, i32 85, metadata !34, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 85} ; [ DW_TAG_subprogram ]
!34 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !35, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!35 = metadata !{metadata !36, metadata !24}
!36 = metadata !{i32 786454, metadata !11, metadata !"iterator", metadata !13, i32 58, i64 0, i64 0, i64 0, i32 0, metadata !37} ; [ DW_TAG_typedef ]
!37 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!38 = metadata !{i32 786478, i32 0, metadata !11, metadata !"begin", metadata !"begin", metadata !"_ZNKSt5arrayIiLy8EE5beginEv", metadata !13, i32 89, metadata !39, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 89} ; [ DW_TAG_subprogram ]
!39 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !40, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!40 = metadata !{metadata !41, metadata !43}
!41 = metadata !{i32 786454, metadata !11, metadata !"const_iterator", metadata !13, i32 59, i64 0, i64 0, i64 0, i32 0, metadata !42} ; [ DW_TAG_typedef ]
!42 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !26} ; [ DW_TAG_pointer_type ]
!43 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !44} ; [ DW_TAG_pointer_type ]
!44 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_const_type ]
!45 = metadata !{i32 786478, i32 0, metadata !11, metadata !"end", metadata !"end", metadata !"_ZNSt5arrayIiLy8EE3endEv", metadata !13, i32 93, metadata !34, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 93} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786478, i32 0, metadata !11, metadata !"end", metadata !"end", metadata !"_ZNKSt5arrayIiLy8EE3endEv", metadata !13, i32 97, metadata !39, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 97} ; [ DW_TAG_subprogram ]
!47 = metadata !{i32 786478, i32 0, metadata !11, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNSt5arrayIiLy8EE6rbeginEv", metadata !13, i32 101, metadata !48, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 101} ; [ DW_TAG_subprogram ]
!48 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !49, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!49 = metadata !{metadata !50, metadata !24}
!50 = metadata !{i32 786454, metadata !11, metadata !"reverse_iterator", metadata !13, i32 62, i64 0, i64 0, i64 0, i32 0, metadata !51} ; [ DW_TAG_typedef ]
!51 = metadata !{i32 786434, null, metadata !"reverse_iterator<int *>", metadata !52, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!52 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cbits/stl_iterator.h", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!53 = metadata !{i32 786478, i32 0, metadata !11, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNKSt5arrayIiLy8EE6rbeginEv", metadata !13, i32 105, metadata !54, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 105} ; [ DW_TAG_subprogram ]
!54 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !55, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!55 = metadata !{metadata !56, metadata !43}
!56 = metadata !{i32 786454, metadata !11, metadata !"const_reverse_iterator", metadata !13, i32 63, i64 0, i64 0, i64 0, i32 0, metadata !57} ; [ DW_TAG_typedef ]
!57 = metadata !{i32 786434, null, metadata !"reverse_iterator<const int *>", metadata !52, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!58 = metadata !{i32 786478, i32 0, metadata !11, metadata !"rend", metadata !"rend", metadata !"_ZNSt5arrayIiLy8EE4rendEv", metadata !13, i32 109, metadata !48, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 109} ; [ DW_TAG_subprogram ]
!59 = metadata !{i32 786478, i32 0, metadata !11, metadata !"rend", metadata !"rend", metadata !"_ZNKSt5arrayIiLy8EE4rendEv", metadata !13, i32 113, metadata !54, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 113} ; [ DW_TAG_subprogram ]
!60 = metadata !{i32 786478, i32 0, metadata !11, metadata !"cbegin", metadata !"cbegin", metadata !"_ZNKSt5arrayIiLy8EE6cbeginEv", metadata !13, i32 118, metadata !39, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 118} ; [ DW_TAG_subprogram ]
!61 = metadata !{i32 786478, i32 0, metadata !11, metadata !"cend", metadata !"cend", metadata !"_ZNKSt5arrayIiLy8EE4cendEv", metadata !13, i32 122, metadata !39, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 122} ; [ DW_TAG_subprogram ]
!62 = metadata !{i32 786478, i32 0, metadata !11, metadata !"crbegin", metadata !"crbegin", metadata !"_ZNKSt5arrayIiLy8EE7crbeginEv", metadata !13, i32 126, metadata !54, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 126} ; [ DW_TAG_subprogram ]
!63 = metadata !{i32 786478, i32 0, metadata !11, metadata !"crend", metadata !"crend", metadata !"_ZNKSt5arrayIiLy8EE5crendEv", metadata !13, i32 130, metadata !54, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 130} ; [ DW_TAG_subprogram ]
!64 = metadata !{i32 786478, i32 0, metadata !11, metadata !"size", metadata !"size", metadata !"_ZNKSt5arrayIiLy8EE4sizeEv", metadata !13, i32 136, metadata !65, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 136} ; [ DW_TAG_subprogram ]
!65 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !66, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!66 = metadata !{metadata !67, metadata !43}
!67 = metadata !{i32 786454, null, metadata !"size_type", metadata !13, i32 60, i64 0, i64 0, i64 0, i32 0, metadata !68} ; [ DW_TAG_typedef ]
!68 = metadata !{i32 786454, null, metadata !"size_t", metadata !13, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !69} ; [ DW_TAG_typedef ]
!69 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!70 = metadata !{i32 786478, i32 0, metadata !11, metadata !"max_size", metadata !"max_size", metadata !"_ZNKSt5arrayIiLy8EE8max_sizeEv", metadata !13, i32 139, metadata !65, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 139} ; [ DW_TAG_subprogram ]
!71 = metadata !{i32 786478, i32 0, metadata !11, metadata !"empty", metadata !"empty", metadata !"_ZNKSt5arrayIiLy8EE5emptyEv", metadata !13, i32 142, metadata !72, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 142} ; [ DW_TAG_subprogram ]
!72 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !73, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!73 = metadata !{metadata !74, metadata !43}
!74 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!75 = metadata !{i32 786478, i32 0, metadata !11, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !13, i32 146, metadata !76, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 146} ; [ DW_TAG_subprogram ]
!76 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !77, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!77 = metadata !{metadata !78, metadata !24, metadata !67}
!78 = metadata !{i32 786454, metadata !11, metadata !"reference", metadata !13, i32 56, i64 0, i64 0, i64 0, i32 0, metadata !79} ; [ DW_TAG_typedef ]
!79 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !17} ; [ DW_TAG_reference_type ]
!80 = metadata !{i32 786478, i32 0, metadata !11, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !13, i32 150, metadata !81, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 150} ; [ DW_TAG_subprogram ]
!81 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !82, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!82 = metadata !{metadata !83, metadata !43, metadata !67}
!83 = metadata !{i32 786454, metadata !11, metadata !"const_reference", metadata !13, i32 57, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_typedef ]
!84 = metadata !{i32 786478, i32 0, metadata !11, metadata !"at", metadata !"at", metadata !"_ZNSt5arrayIiLy8EE2atEy", metadata !13, i32 154, metadata !76, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 154} ; [ DW_TAG_subprogram ]
!85 = metadata !{i32 786478, i32 0, metadata !11, metadata !"at", metadata !"at", metadata !"_ZNKSt5arrayIiLy8EE2atEy", metadata !13, i32 162, metadata !81, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 162} ; [ DW_TAG_subprogram ]
!86 = metadata !{i32 786478, i32 0, metadata !11, metadata !"front", metadata !"front", metadata !"_ZNSt5arrayIiLy8EE5frontEv", metadata !13, i32 170, metadata !87, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 170} ; [ DW_TAG_subprogram ]
!87 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !88, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!88 = metadata !{metadata !78, metadata !24}
!89 = metadata !{i32 786478, i32 0, metadata !11, metadata !"front", metadata !"front", metadata !"_ZNKSt5arrayIiLy8EE5frontEv", metadata !13, i32 174, metadata !90, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 174} ; [ DW_TAG_subprogram ]
!90 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !91, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!91 = metadata !{metadata !83, metadata !43}
!92 = metadata !{i32 786478, i32 0, metadata !11, metadata !"back", metadata !"back", metadata !"_ZNSt5arrayIiLy8EE4backEv", metadata !13, i32 178, metadata !87, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 178} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786478, i32 0, metadata !11, metadata !"back", metadata !"back", metadata !"_ZNKSt5arrayIiLy8EE4backEv", metadata !13, i32 182, metadata !90, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 182} ; [ DW_TAG_subprogram ]
!94 = metadata !{i32 786478, i32 0, metadata !11, metadata !"data", metadata !"data", metadata !"_ZNSt5arrayIiLy8EE4dataEv", metadata !13, i32 186, metadata !95, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 186} ; [ DW_TAG_subprogram ]
!95 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !96, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!96 = metadata !{metadata !97, metadata !24}
!97 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !18} ; [ DW_TAG_pointer_type ]
!98 = metadata !{i32 786478, i32 0, metadata !11, metadata !"data", metadata !"data", metadata !"_ZNKSt5arrayIiLy8EE4dataEv", metadata !13, i32 190, metadata !99, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 190} ; [ DW_TAG_subprogram ]
!99 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !100, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!100 = metadata !{metadata !101, metadata !43}
!101 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !102} ; [ DW_TAG_pointer_type ]
!102 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_const_type ]
!103 = metadata !{metadata !104, metadata !105}
!104 = metadata !{i32 786479, null, metadata !"_Tp", metadata !18, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!105 = metadata !{i32 786480, null, metadata !"_Nm", metadata !69, i64 8, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!106 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_const_type ]
!107 = metadata !{i32 786478, i32 0, metadata !12, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !13, i32 150, metadata !81, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !80, metadata !27, i32 151} ; [ DW_TAG_subprogram ]
!108 = metadata !{i32 786478, i32 0, metadata !12, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !13, i32 146, metadata !76, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !75, metadata !27, i32 147} ; [ DW_TAG_subprogram ]
!109 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"_ZN36ssdm_global_array_blapp0cppaplinecppC1Ev", metadata !6, i32 12, metadata !110, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !115, metadata !27, i32 12} ; [ DW_TAG_subprogram ]
!110 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !111, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!111 = metadata !{null, metadata !112}
!112 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !113} ; [ DW_TAG_pointer_type ]
!113 = metadata !{i32 786434, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !6, i32 10, i64 8, i64 8, i32 0, i32 0, null, metadata !114, i32 0, null, null} ; [ DW_TAG_class_type ]
!114 = metadata !{metadata !115}
!115 = metadata !{i32 786478, i32 0, metadata !113, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"", metadata !6, i32 12, metadata !110, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !27, i32 12} ; [ DW_TAG_subprogram ]
!116 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"ssdm_global_array_blapp0cppaplinecpp", metadata !"_ZN36ssdm_global_array_blapp0cppaplinecppC2Ev", metadata !6, i32 12, metadata !110, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !115, metadata !27, i32 12} ; [ DW_TAG_subprogram ]
!117 = metadata !{metadata !118}
!118 = metadata !{metadata !119, metadata !121, metadata !122, metadata !124, metadata !125, metadata !126, metadata !127, metadata !129}
!119 = metadata !{i32 786484, i32 0, metadata !120, metadata !"count", metadata !"count", metadata !"count", metadata !120, i32 5, metadata !102, i32 1, i32 1, i32 8} ; [ DW_TAG_variable ]
!120 = metadata !{i32 786473, metadata !"VivadoTest/bla.h", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!121 = metadata !{i32 786484, i32 0, null, metadata !"ssdm_global_array_ins", metadata !"ssdm_global_array_ins", metadata !"_ZL21ssdm_global_array_ins", metadata !6, i32 16, metadata !113, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!122 = metadata !{i32 786484, i32 0, null, metadata !"__digits", metadata !"__digits", metadata !"_ZN9__gnu_cxx24__numeric_traits_integer8__digitsE", metadata !123, i32 74, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!123 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cext/numeric_traits.h", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!124 = metadata !{i32 786484, i32 0, null, metadata !"__max_digits10", metadata !"__max_digits10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating14__max_digits10E", metadata !123, i32 109, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!125 = metadata !{i32 786484, i32 0, null, metadata !"__digits10", metadata !"__digits10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating10__digits10E", metadata !123, i32 115, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!126 = metadata !{i32 786484, i32 0, null, metadata !"__max_exponent10", metadata !"__max_exponent10", metadata !"_ZN9__gnu_cxx25__numeric_traits_floating16__max_exponent10E", metadata !123, i32 118, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!127 = metadata !{i32 786484, i32 0, null, metadata !"value", metadata !"value", metadata !"_ZNSt10tuple_sizeISt5arrayIT_XT0_EEE5valueE", metadata !13, i32 262, metadata !128, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!128 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !68} ; [ DW_TAG_const_type ]
!129 = metadata !{i32 786484, i32 0, null, metadata !"count", metadata !"count", metadata !"_ZL5count", metadata !120, i32 5, metadata !102, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!130 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!131 = metadata !{i32 3, i32 27, metadata !5, null}
!132 = metadata !{i32 786689, metadata !5, metadata !"input", metadata !6, i32 33554435, metadata !106, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!133 = metadata !{i32 3, i32 51, metadata !5, null}
!134 = metadata !{i32 5, i32 15, metadata !135, null}
!135 = metadata !{i32 786443, metadata !136, i32 5, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 786443, metadata !5, i32 3, i32 58, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!137 = metadata !{i32 6, i32 15, metadata !138, null}
!138 = metadata !{i32 786443, metadata !135, i32 5, i32 33, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!139 = metadata !{i32 786689, metadata !107, metadata !"this", metadata !13, i32 16777366, metadata !140, i32 64, metadata !137} ; [ DW_TAG_arg_variable ]
!140 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !44} ; [ DW_TAG_pointer_type ]
!141 = metadata !{i32 150, i32 7, metadata !107, metadata !137}
!142 = metadata !{i32 786689, metadata !107, metadata !"__n", metadata !13, i32 33554582, metadata !67, i32 0, metadata !137} ; [ DW_TAG_arg_variable ]
!143 = metadata !{i32 150, i32 28, metadata !107, metadata !137}
!144 = metadata !{i32 151, i32 9, metadata !145, metadata !137}
!145 = metadata !{i32 786443, metadata !107, i32 151, i32 7, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!146 = metadata !{i32 786689, metadata !108, metadata !"this", metadata !13, i32 16777362, metadata !147, i32 64, metadata !148} ; [ DW_TAG_arg_variable ]
!147 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!148 = metadata !{i32 6, i32 3, metadata !138, null}
!149 = metadata !{i32 146, i32 7, metadata !108, metadata !148}
!150 = metadata !{i32 786689, metadata !108, metadata !"__n", metadata !13, i32 33554578, metadata !67, i32 0, metadata !148} ; [ DW_TAG_arg_variable ]
!151 = metadata !{i32 146, i32 28, metadata !108, metadata !148}
!152 = metadata !{i32 147, i32 9, metadata !153, metadata !148}
!153 = metadata !{i32 786443, metadata !108, i32 147, i32 7, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!154 = metadata !{i32 5, i32 28, metadata !135, null}
!155 = metadata !{i32 786688, metadata !135, metadata !"i", metadata !6, i32 5, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!156 = metadata !{i32 8, i32 1, metadata !136, null}
