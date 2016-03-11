; ModuleID = 'C:/Users/gonso/work/VivadoTest/gonzosolution/.autopilot/db/a.o.3.bc'
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
  call void @llvm.dbg.value(metadata !{[8 x i32]* %output_M_instance}, i64 0, metadata !17), !dbg !121 ; [debug line = 4:36] [debug variable = output._M_instance]
  call void @llvm.dbg.declare(metadata !{[8 x i32]* %input_M_instance}, metadata !122), !dbg !124 ; [debug line = 4:73] [debug variable = input._M_instance]
  br label %1, !dbg !125                          ; [debug line = 6:15]

; <label>:1                                       ; preds = %2, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %2 ]             ; [#uses=3 type=i4]
  %exitcond = icmp eq i4 %i, -8, !dbg !125        ; [#uses=1 type=i1] [debug line = 6:15]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %i_1 = add i4 %i, 1, !dbg !128                  ; [#uses=1 type=i4] [debug line = 6:28]
  br i1 %exitcond, label %3, label %2, !dbg !125  ; [debug line = 6:15]

; <label>:2                                       ; preds = %1
  %p_n_assign = zext i4 %i to i64, !dbg !129      ; [#uses=2 type=i64] [debug line = 7:15]
  call void @llvm.dbg.value(metadata !{[8 x i32]* %input_M_instance}, i64 0, metadata !131), !dbg !136 ; [debug line = 150:7@7:15] [debug variable = array<int, 8>._M_instance]
  call void @llvm.dbg.value(metadata !{i64 %p_n_assign}, i64 0, metadata !137), !dbg !138 ; [debug line = 150:28@7:15] [debug variable = __n]
  %input_M_instance_addr = getelementptr [8 x i32]* %input_M_instance, i64 0, i64 %p_n_assign, !dbg !139 ; [#uses=1 type=i32*] [debug line = 151:9@7:15]
  %input_M_instance_load = load i32* %input_M_instance_addr, align 4, !dbg !129 ; [#uses=1 type=i32] [debug line = 7:15]
  %tmp = add nsw i32 %input_M_instance_load, 3, !dbg !129 ; [#uses=1 type=i32] [debug line = 7:15]
  call void @llvm.dbg.value(metadata !{[8 x i32]* %output_M_instance}, i64 0, metadata !141), !dbg !146 ; [debug line = 146:7@7:3] [debug variable = array<int, 8>._M_instance]
  call void @llvm.dbg.value(metadata !{i64 %p_n_assign}, i64 0, metadata !147), !dbg !148 ; [debug line = 146:28@7:3] [debug variable = __n]
  %output_M_instance_addr = getelementptr [8 x i32]* %output_M_instance, i64 0, i64 %p_n_assign, !dbg !149 ; [#uses=1 type=i32*] [debug line = 147:9@7:3]
  store i32 %tmp, i32* %output_M_instance_addr, align 4, !dbg !145 ; [debug line = 7:3]
  call void @llvm.dbg.value(metadata !{i4 %i_1}, i64 0, metadata !151), !dbg !128 ; [debug line = 6:28] [debug variable = i]
  br label %1, !dbg !128                          ; [debug line = 6:28]

; <label>:3                                       ; preds = %1
  ret void, !dbg !152                             ; [debug line = 9:1]
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
!17 = metadata !{i32 790531, metadata !18, metadata !"output._M_instance", null, i32 4, metadata !118, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!18 = metadata !{i32 786689, metadata !19, metadata !"output", metadata !20, i32 16777220, metadata !23, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!19 = metadata !{i32 786478, i32 0, metadata !20, metadata !"gonzomain", metadata !"gonzomain", metadata !"_Z9gonzomainRSt5arrayIiLy8EES0_", metadata !20, i32 4, metadata !21, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !40, i32 4} ; [ DW_TAG_subprogram ]
!20 = metadata !{i32 786473, metadata !"VivadoTest/bla.cpp", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!21 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !22, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!22 = metadata !{null, metadata !23, metadata !56}
!23 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !24} ; [ DW_TAG_reference_type ]
!24 = metadata !{i32 786434, metadata !25, metadata !"array<int, 8>", metadata !26, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !27, i32 0, null, metadata !115} ; [ DW_TAG_class_type ]
!25 = metadata !{i32 786489, null, metadata !"std", metadata !26, i32 30} ; [ DW_TAG_namespace ]
!26 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Ctr1_impl/array", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!27 = metadata !{metadata !28, metadata !34, metadata !42, metadata !45, metadata !50, metadata !57, metadata !58, metadata !59, metadata !65, metadata !70, metadata !71, metadata !72, metadata !73, metadata !74, metadata !75, metadata !76, metadata !82, metadata !83, metadata !87, metadata !92, metadata !96, metadata !97, metadata !98, metadata !101, metadata !104, metadata !105, metadata !106, metadata !110}
!28 = metadata !{i32 786445, metadata !24, metadata !"_M_instance", metadata !26, i32 66, i64 256, i64 32, i64 0, i32 0, metadata !29} ; [ DW_TAG_member ]
!29 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !30, metadata !32, i32 0, i32 0} ; [ DW_TAG_array_type ]
!30 = metadata !{i32 786454, metadata !24, metadata !"value_type", metadata !26, i32 51, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_typedef ]
!31 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!32 = metadata !{metadata !33}
!33 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!34 = metadata !{i32 786478, i32 0, metadata !24, metadata !"fill", metadata !"fill", metadata !"_ZNSt5arrayIiLy8EE4fillERKi", metadata !26, i32 73, metadata !35, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 73} ; [ DW_TAG_subprogram ]
!35 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !36, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!36 = metadata !{null, metadata !37, metadata !38}
!37 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !24} ; [ DW_TAG_pointer_type ]
!38 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !39} ; [ DW_TAG_reference_type ]
!39 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !30} ; [ DW_TAG_const_type ]
!40 = metadata !{metadata !41}
!41 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!42 = metadata !{i32 786478, i32 0, metadata !24, metadata !"swap", metadata !"swap", metadata !"_ZNSt5arrayIiLy8EE4swapERS0_", metadata !26, i32 80, metadata !43, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 80} ; [ DW_TAG_subprogram ]
!43 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !44, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!44 = metadata !{null, metadata !37, metadata !23}
!45 = metadata !{i32 786478, i32 0, metadata !24, metadata !"begin", metadata !"begin", metadata !"_ZNSt5arrayIiLy8EE5beginEv", metadata !26, i32 85, metadata !46, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 85} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !47, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!47 = metadata !{metadata !48, metadata !37}
!48 = metadata !{i32 786454, metadata !24, metadata !"iterator", metadata !26, i32 58, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_typedef ]
!49 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !30} ; [ DW_TAG_pointer_type ]
!50 = metadata !{i32 786478, i32 0, metadata !24, metadata !"begin", metadata !"begin", metadata !"_ZNKSt5arrayIiLy8EE5beginEv", metadata !26, i32 89, metadata !51, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 89} ; [ DW_TAG_subprogram ]
!51 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !52, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!52 = metadata !{metadata !53, metadata !55}
!53 = metadata !{i32 786454, metadata !24, metadata !"const_iterator", metadata !26, i32 59, i64 0, i64 0, i64 0, i32 0, metadata !54} ; [ DW_TAG_typedef ]
!54 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !39} ; [ DW_TAG_pointer_type ]
!55 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !56} ; [ DW_TAG_pointer_type ]
!56 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !24} ; [ DW_TAG_const_type ]
!57 = metadata !{i32 786478, i32 0, metadata !24, metadata !"end", metadata !"end", metadata !"_ZNSt5arrayIiLy8EE3endEv", metadata !26, i32 93, metadata !46, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 93} ; [ DW_TAG_subprogram ]
!58 = metadata !{i32 786478, i32 0, metadata !24, metadata !"end", metadata !"end", metadata !"_ZNKSt5arrayIiLy8EE3endEv", metadata !26, i32 97, metadata !51, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 97} ; [ DW_TAG_subprogram ]
!59 = metadata !{i32 786478, i32 0, metadata !24, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNSt5arrayIiLy8EE6rbeginEv", metadata !26, i32 101, metadata !60, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 101} ; [ DW_TAG_subprogram ]
!60 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !61, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!61 = metadata !{metadata !62, metadata !37}
!62 = metadata !{i32 786454, metadata !24, metadata !"reverse_iterator", metadata !26, i32 62, i64 0, i64 0, i64 0, i32 0, metadata !63} ; [ DW_TAG_typedef ]
!63 = metadata !{i32 786434, null, metadata !"reverse_iterator<int *>", metadata !64, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!64 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cbits/stl_iterator.h", metadata !"c:/Users/gonso/work", null} ; [ DW_TAG_file_type ]
!65 = metadata !{i32 786478, i32 0, metadata !24, metadata !"rbegin", metadata !"rbegin", metadata !"_ZNKSt5arrayIiLy8EE6rbeginEv", metadata !26, i32 105, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 105} ; [ DW_TAG_subprogram ]
!66 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !67, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!67 = metadata !{metadata !68, metadata !55}
!68 = metadata !{i32 786454, metadata !24, metadata !"const_reverse_iterator", metadata !26, i32 63, i64 0, i64 0, i64 0, i32 0, metadata !69} ; [ DW_TAG_typedef ]
!69 = metadata !{i32 786434, null, metadata !"reverse_iterator<const int *>", metadata !64, i32 95, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!70 = metadata !{i32 786478, i32 0, metadata !24, metadata !"rend", metadata !"rend", metadata !"_ZNSt5arrayIiLy8EE4rendEv", metadata !26, i32 109, metadata !60, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 109} ; [ DW_TAG_subprogram ]
!71 = metadata !{i32 786478, i32 0, metadata !24, metadata !"rend", metadata !"rend", metadata !"_ZNKSt5arrayIiLy8EE4rendEv", metadata !26, i32 113, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 113} ; [ DW_TAG_subprogram ]
!72 = metadata !{i32 786478, i32 0, metadata !24, metadata !"cbegin", metadata !"cbegin", metadata !"_ZNKSt5arrayIiLy8EE6cbeginEv", metadata !26, i32 118, metadata !51, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 118} ; [ DW_TAG_subprogram ]
!73 = metadata !{i32 786478, i32 0, metadata !24, metadata !"cend", metadata !"cend", metadata !"_ZNKSt5arrayIiLy8EE4cendEv", metadata !26, i32 122, metadata !51, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 122} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786478, i32 0, metadata !24, metadata !"crbegin", metadata !"crbegin", metadata !"_ZNKSt5arrayIiLy8EE7crbeginEv", metadata !26, i32 126, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 126} ; [ DW_TAG_subprogram ]
!75 = metadata !{i32 786478, i32 0, metadata !24, metadata !"crend", metadata !"crend", metadata !"_ZNKSt5arrayIiLy8EE5crendEv", metadata !26, i32 130, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 130} ; [ DW_TAG_subprogram ]
!76 = metadata !{i32 786478, i32 0, metadata !24, metadata !"size", metadata !"size", metadata !"_ZNKSt5arrayIiLy8EE4sizeEv", metadata !26, i32 136, metadata !77, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 136} ; [ DW_TAG_subprogram ]
!77 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !78, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!78 = metadata !{metadata !79, metadata !55}
!79 = metadata !{i32 786454, null, metadata !"size_type", metadata !26, i32 60, i64 0, i64 0, i64 0, i32 0, metadata !80} ; [ DW_TAG_typedef ]
!80 = metadata !{i32 786454, null, metadata !"size_t", metadata !26, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !81} ; [ DW_TAG_typedef ]
!81 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!82 = metadata !{i32 786478, i32 0, metadata !24, metadata !"max_size", metadata !"max_size", metadata !"_ZNKSt5arrayIiLy8EE8max_sizeEv", metadata !26, i32 139, metadata !77, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 139} ; [ DW_TAG_subprogram ]
!83 = metadata !{i32 786478, i32 0, metadata !24, metadata !"empty", metadata !"empty", metadata !"_ZNKSt5arrayIiLy8EE5emptyEv", metadata !26, i32 142, metadata !84, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 142} ; [ DW_TAG_subprogram ]
!84 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !85, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!85 = metadata !{metadata !86, metadata !55}
!86 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!87 = metadata !{i32 786478, i32 0, metadata !24, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !26, i32 146, metadata !88, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 146} ; [ DW_TAG_subprogram ]
!88 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !89, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!89 = metadata !{metadata !90, metadata !37, metadata !79}
!90 = metadata !{i32 786454, metadata !24, metadata !"reference", metadata !26, i32 56, i64 0, i64 0, i64 0, i32 0, metadata !91} ; [ DW_TAG_typedef ]
!91 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !30} ; [ DW_TAG_reference_type ]
!92 = metadata !{i32 786478, i32 0, metadata !24, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !26, i32 150, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 150} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !94, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!94 = metadata !{metadata !95, metadata !55, metadata !79}
!95 = metadata !{i32 786454, metadata !24, metadata !"const_reference", metadata !26, i32 57, i64 0, i64 0, i64 0, i32 0, metadata !38} ; [ DW_TAG_typedef ]
!96 = metadata !{i32 786478, i32 0, metadata !24, metadata !"at", metadata !"at", metadata !"_ZNSt5arrayIiLy8EE2atEy", metadata !26, i32 154, metadata !88, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 154} ; [ DW_TAG_subprogram ]
!97 = metadata !{i32 786478, i32 0, metadata !24, metadata !"at", metadata !"at", metadata !"_ZNKSt5arrayIiLy8EE2atEy", metadata !26, i32 162, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 162} ; [ DW_TAG_subprogram ]
!98 = metadata !{i32 786478, i32 0, metadata !24, metadata !"front", metadata !"front", metadata !"_ZNSt5arrayIiLy8EE5frontEv", metadata !26, i32 170, metadata !99, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 170} ; [ DW_TAG_subprogram ]
!99 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !100, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!100 = metadata !{metadata !90, metadata !37}
!101 = metadata !{i32 786478, i32 0, metadata !24, metadata !"front", metadata !"front", metadata !"_ZNKSt5arrayIiLy8EE5frontEv", metadata !26, i32 174, metadata !102, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 174} ; [ DW_TAG_subprogram ]
!102 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !103, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!103 = metadata !{metadata !95, metadata !55}
!104 = metadata !{i32 786478, i32 0, metadata !24, metadata !"back", metadata !"back", metadata !"_ZNSt5arrayIiLy8EE4backEv", metadata !26, i32 178, metadata !99, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 178} ; [ DW_TAG_subprogram ]
!105 = metadata !{i32 786478, i32 0, metadata !24, metadata !"back", metadata !"back", metadata !"_ZNKSt5arrayIiLy8EE4backEv", metadata !26, i32 182, metadata !102, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 182} ; [ DW_TAG_subprogram ]
!106 = metadata !{i32 786478, i32 0, metadata !24, metadata !"data", metadata !"data", metadata !"_ZNSt5arrayIiLy8EE4dataEv", metadata !26, i32 186, metadata !107, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 186} ; [ DW_TAG_subprogram ]
!107 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{metadata !109, metadata !37}
!109 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !31} ; [ DW_TAG_pointer_type ]
!110 = metadata !{i32 786478, i32 0, metadata !24, metadata !"data", metadata !"data", metadata !"_ZNKSt5arrayIiLy8EE4dataEv", metadata !26, i32 190, metadata !111, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !40, i32 190} ; [ DW_TAG_subprogram ]
!111 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !112, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!112 = metadata !{metadata !113, metadata !55}
!113 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !114} ; [ DW_TAG_pointer_type ]
!114 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_const_type ]
!115 = metadata !{metadata !116, metadata !117}
!116 = metadata !{i32 786479, null, metadata !"_Tp", metadata !31, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!117 = metadata !{i32 786480, null, metadata !"_Nm", metadata !81, i64 8, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!118 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !119} ; [ DW_TAG_pointer_type ]
!119 = metadata !{i32 786438, metadata !25, metadata !"array<int, 8>", metadata !26, i32 49, i64 256, i64 32, i32 0, i32 0, null, metadata !120, i32 0, null, metadata !115} ; [ DW_TAG_class_field_type ]
!120 = metadata !{metadata !28}
!121 = metadata !{i32 4, i32 36, metadata !19, null}
!122 = metadata !{i32 790531, metadata !123, metadata !"input._M_instance", null, i32 4, metadata !119, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!123 = metadata !{i32 786689, metadata !19, metadata !"input", metadata !20, i32 33554436, metadata !56, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!124 = metadata !{i32 4, i32 73, metadata !19, null}
!125 = metadata !{i32 6, i32 15, metadata !126, null}
!126 = metadata !{i32 786443, metadata !127, i32 6, i32 2, metadata !20, i32 1} ; [ DW_TAG_lexical_block ]
!127 = metadata !{i32 786443, metadata !19, i32 4, i32 80, metadata !20, i32 0} ; [ DW_TAG_lexical_block ]
!128 = metadata !{i32 6, i32 28, metadata !126, null}
!129 = metadata !{i32 7, i32 15, metadata !130, null}
!130 = metadata !{i32 786443, metadata !126, i32 6, i32 33, metadata !20, i32 2} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 790531, metadata !132, metadata !"array<int, 8>._M_instance", null, i32 150, metadata !135, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!132 = metadata !{i32 786689, metadata !133, metadata !"this", metadata !26, i32 16777366, metadata !134, i32 64, metadata !129} ; [ DW_TAG_arg_variable ]
!133 = metadata !{i32 786478, i32 0, metadata !25, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNKSt5arrayIiLy8EEixEy", metadata !26, i32 150, metadata !93, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !92, metadata !40, i32 151} ; [ DW_TAG_subprogram ]
!134 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !56} ; [ DW_TAG_pointer_type ]
!135 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !119} ; [ DW_TAG_pointer_type ]
!136 = metadata !{i32 150, i32 7, metadata !133, metadata !129}
!137 = metadata !{i32 786689, metadata !133, metadata !"__n", metadata !26, i32 33554582, metadata !79, i32 0, metadata !129} ; [ DW_TAG_arg_variable ]
!138 = metadata !{i32 150, i32 28, metadata !133, metadata !129}
!139 = metadata !{i32 151, i32 9, metadata !140, metadata !129}
!140 = metadata !{i32 786443, metadata !133, i32 151, i32 7, metadata !26, i32 3} ; [ DW_TAG_lexical_block ]
!141 = metadata !{i32 790531, metadata !142, metadata !"array<int, 8>._M_instance", null, i32 146, metadata !135, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!142 = metadata !{i32 786689, metadata !143, metadata !"this", metadata !26, i32 16777362, metadata !144, i32 64, metadata !145} ; [ DW_TAG_arg_variable ]
!143 = metadata !{i32 786478, i32 0, metadata !25, metadata !"operator[]", metadata !"operator[]", metadata !"_ZNSt5arrayIiLy8EEixEy", metadata !26, i32 146, metadata !88, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !87, metadata !40, i32 147} ; [ DW_TAG_subprogram ]
!144 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !24} ; [ DW_TAG_pointer_type ]
!145 = metadata !{i32 7, i32 3, metadata !130, null}
!146 = metadata !{i32 146, i32 7, metadata !143, metadata !145}
!147 = metadata !{i32 786689, metadata !143, metadata !"__n", metadata !26, i32 33554578, metadata !79, i32 0, metadata !145} ; [ DW_TAG_arg_variable ]
!148 = metadata !{i32 146, i32 28, metadata !143, metadata !145}
!149 = metadata !{i32 147, i32 9, metadata !150, metadata !145}
!150 = metadata !{i32 786443, metadata !143, i32 147, i32 7, metadata !26, i32 4} ; [ DW_TAG_lexical_block ]
!151 = metadata !{i32 786688, metadata !126, metadata !"i", metadata !20, i32 6, metadata !31, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!152 = metadata !{i32 9, i32 1, metadata !127, null}
