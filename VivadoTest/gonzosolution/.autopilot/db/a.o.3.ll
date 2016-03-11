; ModuleID = 'C:/Users/gonso/work/hardware/VivadoTest/gonzosolution/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@gonzomain_str = internal unnamed_addr constant [10 x i8] c"gonzomain\00" ; [#uses=1 type=[10 x i8]*]

; [#uses=6]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @gonzomain([8 x i32]* %output_M_instance, [8 x i32]* byval %input_M_instance) {
  call void (...)* @_ssdm_op_SpecBitsMap([8 x i32]* %output_M_instance), !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([8 x i32]* %input_M_instance), !map !13
  call void (...)* @_ssdm_op_SpecTopModule([10 x i8]* @gonzomain_str) nounwind
  call void @llvm.dbg.value(metadata !{[8 x i32]* %output_M_instance}, i64 0, metadata !17), !dbg !124 ; [debug line = 3:27] [debug variable = output._M_instance]
  call void @llvm.dbg.declare(metadata !{[8 x i32]* %input_M_instance}, metadata !125), !dbg !127 ; [debug line = 3:51] [debug variable = input._M_instance]
  br label %1, !dbg !128                          ; [debug line = 5:15]

; <label>:1                                       ; preds = %2, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %2 ]             ; [#uses=3 type=i4]
  %exitcond = icmp eq i4 %i, -8, !dbg !128        ; [#uses=1 type=i1] [debug line = 5:15]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %i_1 = add i4 %i, 1, !dbg !131                  ; [#uses=1 type=i4] [debug line = 5:28]
  br i1 %exitcond, label %3, label %2, !dbg !128  ; [debug line = 5:15]

; <label>:2                                       ; preds = %1
  %p_n_assign = zext i4 %i to i64, !dbg !132      ; [#uses=2 type=i64] [debug line = 6:15]
  call void @llvm.dbg.value(metadata !{[8 x i32]* %input_M_instance}, i64 0, metadata !134), !dbg !139 ; [debug line = 150:7@6:15] [debug variable = array<int, 8>._M_instance]
  call void @llvm.dbg.value(metadata !{i64 %p_n_assign}, i64 0, metadata !140), !dbg !141 ; [debug line = 150:28@6:15] [debug variable = __n]
  %input_M_instance_addr = getelementptr [8 x i32]* %input_M_instance, i64 0, i64 %p_n_assign, !dbg !142 ; [#uses=1 type=i32*] [debug line = 151:9@6:15]
  %input_M_instance_load = load i32* %input_M_instance_addr, align 4, !dbg !132 ; [#uses=1 type=i32] [debug line = 6:15]
  %tmp = add nsw i32 %input_M_instance_load, 3, !dbg !132 ; [#uses=1 type=i32] [debug line = 6:15]
  call void @llvm.dbg.value(metadata !{[8 x i32]* %output_M_instance}, i64 0, metadata !144), !dbg !149 ; [debug line = 146:7@6:3] [debug variable = array<int, 8>._M_instance]
  call void @llvm.dbg.value(metadata !{i64 %p_n_assign}, i64 0, metadata !150), !dbg !151 ; [debug line = 146:28@6:3] [debug variable = __n]
  %output_M_instance_addr = getelementptr [8 x i32]* %output_M_instance, i64 0, i64 %p_n_assign, !dbg !152 ; [#uses=1 type=i32*] [debug line = 147:9@6:3]
  store i32 %tmp, i32* %output_M_instance_addr, align 4, !dbg !148 ; [debug line = 6:3]
  call void @llvm.dbg.value(metadata !{i4 %i_1}, i64 0, metadata !154), !dbg !131 ; [debug line = 5:28] [debug variable = i]
  br label %1, !dbg !131                          ; [debug line = 5:28]

; <label>:3                                       ; preds = %1
  ret void, !dbg !155                             ; [debug line = 8:1]
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=0]
declare i16 @_ssdm_op_HSub(...)

; [#uses=0]
declare i16 @_ssdm_op_HMul(...)

; [#uses=0]
declare i16 @_ssdm_op_HDiv(...)

; [#uses=0]
declare i16 @_ssdm_op_HAdd(...)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0}

!0 = metadata !{metadata !1, [1 x i32]* @llvm_global_ctors_0}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 31, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"llvm.global_ctors.0", metadata !5, metadata !"", i32 0, i32 31}
!5 = metadata !{metadata !6}
!6 = metadata !{i32 0, i32 0, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"output._M_instance", metadata !11, metadata !"int", i32 0, i32 31}
!11 = metadata !{metadata !12}
!12 = metadata !{i32 0, i32 7, i32 1}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"input._M_instance", metadata !11, metadata !"int", i32 0, i32 31}
!17 = metadata !{i32 790531, metadata !18, metadata !"output._M_instance", null, i32 3, metadata !121, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!18 = metadata !{i32 786689, metadata !19, metadata !"output", metadata !20, i32 16777219, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!19 = metadata !{i32 786478, i32 0, metadata !20, metadata !"gonzomain", metadata !"gonzomain", metadata !"_Z9gonzomainRSt5arrayIiLy8EES0_", metadata !20, i32 3, metadata !21, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 3} ; [ DW_TAG_subprogram ]
!20 = metadata !{i32 786473, metadata !"VivadoTest/bla.cpp", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!21 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !22, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!22 = metadata !{null, metadata !23, metadata !120}
!23 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !24} ; [ DW_TAG_reference_type ]
!24 = metadata !{i32 786454, null, metadata !"EightInts", metadata !20, i32 6, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_typedef ]
!25 = metadata !{i32 786434, metadata !26, metadata !"array<int, 8>", metadata !27, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !28, i32 0, null, metadata !117} ; [ DW_TAG_class_type ]
!26 = metadata !{i32 786489, null, metadata !"std", metadata !27, i32 30} ; [ DW_TAG_namespace ]
!27 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Ctr1_impl/array", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!28 = metadata !{metadata !29, metadata !35, metadata !43, metadata !47, metadata !52, metadata !59, metadata !60, metadata !61, metadata !67, metadata !72, metadata !73, metadata !74, metadata !75, metadata !76, metadata !77, metadata !78, metadata !84, metadata !85, metadata !89, metadata !94, metadata !98, metadata !99, metadata !100, metadata !103, metadata !106, metadata !107, metadata !108, metadata !112}
!29 = metadata !{i32 786445, metadata !25, metadata !"_M_instance", metadata !27, i32 66, i64 256, i64 32, i64 0, i32 0, metadata !30} ; [ DW_TAG_member ]
!30 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !31, metadata !33, i32 0, i32 0} ; [ DW_TAG_array_type ]
!31 = metadata !{i32 786454, metadata !25, metadata !"value_type", metadata !27, i32 51, i64 0, i64 0, i64 0, i32 0, metadata !32} ; [ DW_TAG_typedef ]
!32 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!33 = metadata !{metadata !34}
!34 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!35 = metadata !{i32 786478, i32 0, metadata !25, metadata !"fill", metadata !"fill", metadata !"_ZNSt5arrayIiLy8EE4fillERKi", metadata !27, i32 73, metadata !36, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 73} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !37, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!37 = metadata !{null, metadata !38, metadata !39}
!38 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !25} ; [ DW_TAG_pointer_type ]
!39 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !40} ; [ DW_TAG_reference_type ]
!40 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_const_type ]
!41 = metadata !{metadata !42}
!42 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!43 = metadata !{i32 786478, i32 0, metadata !25, metadata !"swap", metadata !"swap", metadata !"_ZNSt5arrayIiLy8EE4swapERS0_", metadata !27, i32 80, metadata !44, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 80} ; [ DW_TAG_subprogram ]
!44 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !45, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!45 = metadata !{null, metadata !38, metadata !46}
!46 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_reference_type ]
!47 = metadata !{i32 786478, i32 0, metadata !25, metadata !"begin", metadata !"begin", metadata !"_ZNSt5arrayIiLy8EE5beginEv", metadata !27, i32 85, metadata !48, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 85} ; [ DW_TAG_subprogram ]
!48 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !49, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!49 = metadata !{metadata !50, metadata !38}
!50 = metadata !{i32 786454, metadata !25, metadata !"iterator", metadata !27, i32 58, i64 0, i64 0, i64 0, i32 0, metadata !51} ; [ DW_TAG_typedef ]
!51 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !31} ; [ DW_TAG_pointer_type ]
!52 = metadata !{i32 786478, i32 0, metadata !25, metadata !"begin", metadata !"begin", metadata !"_ZNKSt5arrayIiLy8EE5beginEv", metadata !27, i32 89, metadata !53, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 89} ; [ DW_TAG_subprogram ]
!53 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !54, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!54 = metadata !{metadata !55, metadata !57}
!55 = metadata !{i32 786454, metadata !25, metadata !"const_iterator", metadata !27, i32 59, i64 0, i64 0, i64 0, i32 0, metadata !56} ; [ DW_TAG_typedef ]
!56 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !40} ; [ DW_TAG_pointer_type ]
!57 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !58} ; [ DW_TAG_pointer_type ]
!58 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !25} ; [ DW_TAG_const_type ]
!59 = metadata !{i32 786478, i32 0, metadata !25, metadata !"end", metadata !"end", metadata !"_ZNSt5arrayIiLy8EE3endEv", metadata !27, i32 93, metadata !48, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 93} ; [ DW_TAG_subprogram ]
!60 = metadata !{i32 786478, i32 0, metadata !25, metadata !"end", metadata !"end", metadata !"_ZNKSt5arrayIiLy8EE3endEv", metadata !27, i32 97, metadata !53, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 97} ; [ DW_TAG_subprogram ]
!61 = metadata !{i32 786478, i32 0, metadata !25, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNSt5arrayIiLy8EE6rbeginEv", metadata !27, i32 101, metadata !62, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 101} ; [ DW_TAG_subprogram ]
!62 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !63, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!63 = metadata !{metadata !64, metadata !38}
!64 = metadata !{i32 786454, metadata !25, metadata !"reverse_iterator", metadata !27, i32 62, i64 0, i64 0, i64 0, i32 0, metadata !65} ; [ DW_TAG_typedef ]
!65 = metadata !{i32 786434, null, metadata !"reverse_iterator<int *>", metadata !66, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!66 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cbits/stl_iterator.h", metadata !"c:/Users/gonso/work/hardware", null} ; [ DW_TAG_file_type ]
!67 = metadata !{i32 786478, i32 0, metadata !25, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNKSt5arrayIiLy8EE6rbeginEv", metadata !27, i32 105, metadata !68, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 105} ; [ DW_TAG_subprogram ]
!68 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !69, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!69 = metadata !{metadata !70, metadata !57}
!70 = metadata !{i32 786454, metadata !25, metadata !"const_reverse_iterator", metadata !27, i32 63, i64 0, i64 0, i64 0, i32 0, metadata !71} ; [ DW_TAG_typedef ]
!71 = metadata !{i32 786434, null, metadata !"reverse_iterator<const int *>", metadata !66, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!72 = metadata !{i32 786478, i32 0, metadata !25, metadata !"rend", metadata !"rend", metadata !"_ZNSt5arrayIiLy8EE4rendEv", metadata !27, i32 109, metadata !62, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 109} ; [ DW_TAG_subprogram ]
!73 = metadata !{i32 786478, i32 0, metadata !25, metadata !"rend", metadata !"rend", metadata !"_ZNKSt5arrayIiLy8EE4rendEv", metadata !27, i32 113, metadata !68, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 113} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786478, i32 0, metadata !25, metadata !"cbegin", metadata !"cbegin", metadata !"_ZNKSt5arrayIiLy8EE6cbeginEv", metadata !27, i32 118, metadata !53, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 118} ; [ DW_TAG_subprogram ]
!75 = metadata !{i32 786478, i32 0, metadata !25, metadata !"cend", metadata !"cend", metadata !"_ZNKSt5arrayIiLy8EE4cendEv", metadata !27, i32 122, metadata !53, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 122} ; [ DW_TAG_subprogram ]
!76 = metadata !{i32 786478, i32 0, metadata !25, metadata !"crbegin", metadata !"crbegin", metadata !"_ZNKSt5arrayIiLy8EE7crbeginEv", metadata !27, i32 126, metadata !68, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 126} ; [ DW_TAG_subprogram ]
!77 = metadata !{i32 786478, i32 0, metadata !25, metadata !"crend", metadata !"crend", metadata !"_ZNKSt5arrayIiLy8EE5crendEv", metadata !27, i32 130, metadata !68, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 130} ; [ DW_TAG_subprogram ]
!78 = metadata !{i32 786478, i32 0, metadata !25, metadata !"size", metadata !"size", metadata !"_ZNKSt5arrayIiLy8EE4sizeEv", metadata !27, i32 136, metadata !79, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 136} ; [ DW_TAG_subprogram ]
!79 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !80, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!80 = metadata !{metadata !81, metadata !57}
!81 = metadata !{i32 786454, null, metadata !"size_type", metadata !27, i32 60, i64 0, i64 0, i64 0, i32 0, metadata !82} ; [ DW_TAG_typedef ]
!82 = metadata !{i32 786454, null, metadata !"size_t", metadata !27, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !83} ; [ DW_TAG_typedef ]
!83 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!84 = metadata !{i32 786478, i32 0, metadata !25, metadata !"max_size", metadata !"max_size", metadata !"_ZNKSt5arrayIiLy8EE8max_sizeEv", metadata !27, i32 139, metadata !79, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 139} ; [ DW_TAG_subprogram ]
!85 = metadata !{i32 786478, i32 0, metadata !25, metadata !"empty", metadata !"empty", metadata !"_ZNKSt5arrayIiLy8EE5emptyEv", metadata !27, i32 142, metadata !86, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 142} ; [ DW_TAG_subprogram ]
!86 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !87, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!87 = metadata !{metadata !88, metadata !57}
!88 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!89 = metadata !{i32 786478, i32 0, metadata !25, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !27, i32 146, metadata !90, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 146} ; [ DW_TAG_subprogram ]
!90 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !91, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!91 = metadata !{metadata !92, metadata !38, metadata !81}
!92 = metadata !{i32 786454, metadata !25, metadata !"reference", metadata !27, i32 56, i64 0, i64 0, i64 0, i32 0, metadata !93} ; [ DW_TAG_typedef ]
!93 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_reference_type ]
!94 = metadata !{i32 786478, i32 0, metadata !25, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !27, i32 150, metadata !95, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 150} ; [ DW_TAG_subprogram ]
!95 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !96, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!96 = metadata !{metadata !97, metadata !57, metadata !81}
!97 = metadata !{i32 786454, metadata !25, metadata !"const_reference", metadata !27, i32 57, i64 0, i64 0, i64 0, i32 0, metadata !39} ; [ DW_TAG_typedef ]
!98 = metadata !{i32 786478, i32 0, metadata !25, metadata !"at", metadata !"at", metadata !"_ZNSt5arrayIiLy8EE2atEy", metadata !27, i32 154, metadata !90, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 154} ; [ DW_TAG_subprogram ]
!99 = metadata !{i32 786478, i32 0, metadata !25, metadata !"at", metadata !"at", metadata !"_ZNKSt5arrayIiLy8EE2atEy", metadata !27, i32 162, metadata !95, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 162} ; [ DW_TAG_subprogram ]
!100 = metadata !{i32 786478, i32 0, metadata !25, metadata !"front", metadata !"front", metadata !"_ZNSt5arrayIiLy8EE5frontEv", metadata !27, i32 170, metadata !101, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 170} ; [ DW_TAG_subprogram ]
!101 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !102, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!102 = metadata !{metadata !92, metadata !38}
!103 = metadata !{i32 786478, i32 0, metadata !25, metadata !"front", metadata !"front", metadata !"_ZNKSt5arrayIiLy8EE5frontEv", metadata !27, i32 174, metadata !104, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 174} ; [ DW_TAG_subprogram ]
!104 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !105, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!105 = metadata !{metadata !97, metadata !57}
!106 = metadata !{i32 786478, i32 0, metadata !25, metadata !"back", metadata !"back", metadata !"_ZNSt5arrayIiLy8EE4backEv", metadata !27, i32 178, metadata !101, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 178} ; [ DW_TAG_subprogram ]
!107 = metadata !{i32 786478, i32 0, metadata !25, metadata !"back", metadata !"back", metadata !"_ZNKSt5arrayIiLy8EE4backEv", metadata !27, i32 182, metadata !104, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 182} ; [ DW_TAG_subprogram ]
!108 = metadata !{i32 786478, i32 0, metadata !25, metadata !"data", metadata !"data", metadata !"_ZNSt5arrayIiLy8EE4dataEv", metadata !27, i32 186, metadata !109, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 186} ; [ DW_TAG_subprogram ]
!109 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !110, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!110 = metadata !{metadata !111, metadata !38}
!111 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !32} ; [ DW_TAG_pointer_type ]
!112 = metadata !{i32 786478, i32 0, metadata !25, metadata !"data", metadata !"data", metadata !"_ZNKSt5arrayIiLy8EE4dataEv", metadata !27, i32 190, metadata !113, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !41, i32 190} ; [ DW_TAG_subprogram ]
!113 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !114, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!114 = metadata !{metadata !115, metadata !57}
!115 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !116} ; [ DW_TAG_pointer_type ]
!116 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !32} ; [ DW_TAG_const_type ]
!117 = metadata !{metadata !118, metadata !119}
!118 = metadata !{i32 786479, null, metadata !"_Tp", metadata !32, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!119 = metadata !{i32 786480, null, metadata !"_Nm", metadata !83, i64 8, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!120 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !24} ; [ DW_TAG_const_type ]
!121 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !122} ; [ DW_TAG_pointer_type ]
!122 = metadata !{i32 786438, metadata !26, metadata !"array<int, 8>", metadata !27, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !123, i32 0, null, metadata !117} ; [ DW_TAG_class_field_type ]
!123 = metadata !{metadata !29}
!124 = metadata !{i32 3, i32 27, metadata !19, null}
!125 = metadata !{i32 790531, metadata !126, metadata !"input._M_instance", null, i32 3, metadata !122, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!126 = metadata !{i32 786689, metadata !19, metadata !"input", metadata !20, i32 33554435, metadata !120, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!127 = metadata !{i32 3, i32 51, metadata !19, null}
!128 = metadata !{i32 5, i32 15, metadata !129, null}
!129 = metadata !{i32 786443, metadata !130, i32 5, i32 2, metadata !20, i32 1} ; [ DW_TAG_lexical_block ]
!130 = metadata !{i32 786443, metadata !19, i32 3, i32 58, metadata !20, i32 0} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 5, i32 28, metadata !129, null}
!132 = metadata !{i32 6, i32 15, metadata !133, null}
!133 = metadata !{i32 786443, metadata !129, i32 5, i32 33, metadata !20, i32 2} ; [ DW_TAG_lexical_block ]
!134 = metadata !{i32 790531, metadata !135, metadata !"array<int, 8>._M_instance", null, i32 150, metadata !138, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!135 = metadata !{i32 786689, metadata !136, metadata !"this", metadata !27, i32 16777366, metadata !137, i32 64, metadata !132} ; [ DW_TAG_arg_variable ]
!136 = metadata !{i32 786478, i32 0, metadata !26, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !27, i32 150, metadata !95, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !94, metadata !41, i32 151} ; [ DW_TAG_subprogram ]
!137 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !58} ; [ DW_TAG_pointer_type ]
!138 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !122} ; [ DW_TAG_pointer_type ]
!139 = metadata !{i32 150, i32 7, metadata !136, metadata !132}
!140 = metadata !{i32 786689, metadata !136, metadata !"__n", metadata !27, i32 33554582, metadata !81, i32 0, metadata !132} ; [ DW_TAG_arg_variable ]
!141 = metadata !{i32 150, i32 28, metadata !136, metadata !132}
!142 = metadata !{i32 151, i32 9, metadata !143, metadata !132}
!143 = metadata !{i32 786443, metadata !136, i32 151, i32 7, metadata !27, i32 3} ; [ DW_TAG_lexical_block ]
!144 = metadata !{i32 790531, metadata !145, metadata !"array<int, 8>._M_instance", null, i32 146, metadata !138, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!145 = metadata !{i32 786689, metadata !146, metadata !"this", metadata !27, i32 16777362, metadata !147, i32 64, metadata !148} ; [ DW_TAG_arg_variable ]
!146 = metadata !{i32 786478, i32 0, metadata !26, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !27, i32 146, metadata !90, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !89, metadata !41, i32 147} ; [ DW_TAG_subprogram ]
!147 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !25} ; [ DW_TAG_pointer_type ]
!148 = metadata !{i32 6, i32 3, metadata !133, null}
!149 = metadata !{i32 146, i32 7, metadata !146, metadata !148}
!150 = metadata !{i32 786689, metadata !146, metadata !"__n", metadata !27, i32 33554578, metadata !81, i32 0, metadata !148} ; [ DW_TAG_arg_variable ]
!151 = metadata !{i32 146, i32 28, metadata !146, metadata !148}
!152 = metadata !{i32 147, i32 9, metadata !153, metadata !148}
!153 = metadata !{i32 786443, metadata !146, i32 147, i32 7, metadata !27, i32 4} ; [ DW_TAG_lexical_block ]
!154 = metadata !{i32 786688, metadata !129, metadata !"i", metadata !20, i32 5, metadata !32, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!155 = metadata !{i32 8, i32 1, metadata !130, null}
