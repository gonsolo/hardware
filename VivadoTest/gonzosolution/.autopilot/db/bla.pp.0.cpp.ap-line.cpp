#pragma line 1 "VivadoTest/bla.cpp"
#pragma line 1 "VivadoTest/bla.cpp" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 153 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************
#pragma empty_line
 *
 * $Id$
 */
#pragma line 145 "C:/Xilinx/Vivado_HLS/2015.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
#pragma empty_line
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;
#pragma empty_line
    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return(...) __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));
#pragma empty_line
    void __xilinx_ip_top(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
}
#pragma line 407 "C:/Xilinx/Vivado_HLS/2015.4/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 7 "<command line>" 2
#pragma line 1 "<built-in>" 2
#pragma line 1 "VivadoTest/bla.cpp" 2
#pragma line 1 "VivadoTest/bla.h" 1
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\array" 1 3
// <array> -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009, 2010 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file include/array
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\array" 3
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\array" 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
// Core algorithmic facilities -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_algobase.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file c++config.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// The current version of the C++ library in compressed ISO date format.
#pragma empty_line
#pragma empty_line
// Macros for visibility.
// _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
// _GLIBCXX_VISIBILITY_ATTR
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// If this is not supplied by the OS-specific or CPU-specific
// headers included below, it will be defined to an empty default.
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Macros for deprecated.
// _GLIBCXX_DEPRECATED
// _GLIBCXX_DEPRECATED_ATTR
#pragma line 63 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Macros for activating various namespace association modes.
// _GLIBCXX_NAMESPACE_ASSOCIATION_DEBUG
// _GLIBCXX_NAMESPACE_ASSOCIATION_PARALLEL
// _GLIBCXX_NAMESPACE_ASSOCIATION_VERSION
#pragma empty_line
// Guide to libstdc++ namespaces.
/*
  namespace std
  {
    namespace __debug { }
    namespace __parallel { }
    namespace __norm { } // __normative, __shadow, __replaced
    namespace __cxx1998 { }
#pragma empty_line
    namespace tr1 { }
  }
*/
#pragma line 90 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace association for profile
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Defined if any namespace association modes are active.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Macros for namespace scope. Either namespace std:: or the name
// of some nested namespace within it.
// _GLIBCXX_STD
// _GLIBCXX_STD_D
// _GLIBCXX_STD_P
//
// Macros for enclosing namespaces and possibly nested namespaces.
// _GLIBCXX_BEGIN_NAMESPACE
// _GLIBCXX_END_NAMESPACE
// _GLIBCXX_BEGIN_NESTED_NAMESPACE
// _GLIBCXX_END_NESTED_NAMESPACE
#pragma line 187 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for debug mode.
#pragma line 197 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for parallel mode.
#pragma line 207 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for profile mode
#pragma line 217 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for versioning mode.
#pragma line 238 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// XXX GLIBCXX_ABI Deprecated
// Define if compatibility should be provided for -mlong-double-64
#pragma empty_line
#pragma empty_line
// Namespace associations for long double 128 mode.
#pragma line 258 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Defines for C compatibility. In particular, define extern "C"
// linkage only when using C++.
#pragma line 272 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// First includes.
#pragma empty_line
// Pick up any OS-specific definitions.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-
#pragma empty_line
// Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008,
// 2009  Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file os_defines.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.
#pragma empty_line
//  Define as 0, if you want, to enable inlining of gthread functions.
//  By default, don't pollute libstdc++ with win32api names.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Don't let win32api windef.h define min and max as macros
// if included after c++config.h.
#pragma line 57 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 3
// See libstdc++/20806.
#pragma empty_line
#pragma empty_line
// See  libstdc++/37522.
#pragma line 276 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
#pragma empty_line
// Pick up any CPU-specific definitions.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-
#pragma empty_line
// Copyright (C) 2005, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cpu_defines.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma line 279 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
#pragma empty_line
// If platform uses neither visibility nor psuedo-visibility,
// specify empty default for namespace annotation macros.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Allow use of "export template." This is currently not a feature
// that g++ supports.
// #define _GLIBCXX_EXPORT_TEMPLATE 1
#pragma empty_line
// Allow use of the GNU syntax extension, "extern template." This
// extension is fully documented in the g++ manual, but in a nutshell,
// it inhibits all implicit instantiations and is used throughout the
// library to avoid multiple weak definitions for required types that
// are already explicitly instantiated in the library binary. This
// substantially reduces the binary size of resulting executables.
#pragma empty_line
// Special case: _GLIBCXX_EXTERN_TEMPLATE == -1 disallows extern
// templates only in basic_string, thus activating its debug-mode
// checks even at -O0.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Assert.
// Avoid the use of assert, because we're trying to keep the <cassert>
// include out of the mix.
#pragma line 339 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.
#pragma empty_line
// Create a boolean flag to be used to determine if --fast-math is set.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).
#pragma empty_line
#pragma empty_line
// For example, <windows.h> is known to #define min and max as macros...
#pragma line 379 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// End of prewritten config; the discovered settings follow.
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */
#pragma empty_line
/* Define to 1 if you have the `acosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `acosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `asinf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `asinl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target assembler supports .symver directive. */
/* #undef _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE */
#pragma empty_line
/* Define to 1 if you have the `atan2f' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atan2l' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atanl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target assembler supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_CC_TLS */
#pragma empty_line
/* Define to 1 if you have the `ceilf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `ceill' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <complex.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `cosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `coshf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `coshl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `cosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef _GLIBCXX_HAVE_DLFCN_H */
#pragma empty_line
/* Define if EBADMSG exists. */
/* #undef _GLIBCXX_HAVE_EBADMSG */
#pragma empty_line
/* Define if ECANCELED exists. */
/* #undef _GLIBCXX_HAVE_ECANCELED */
#pragma empty_line
/* Define if EIDRM exists. */
/* #undef _GLIBCXX_HAVE_EIDRM */
#pragma empty_line
/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */
#pragma empty_line
/* Define if ENODATA exists. */
/* #undef _GLIBCXX_HAVE_ENODATA */
#pragma empty_line
/* Define if ENOLINK exists. */
/* #undef _GLIBCXX_HAVE_ENOLINK */
#pragma empty_line
/* Define if ENOSR exists. */
/* #undef _GLIBCXX_HAVE_ENOSR */
#pragma empty_line
/* Define if ENOSTR exists. */
/* #undef _GLIBCXX_HAVE_ENOSTR */
#pragma empty_line
/* Define if ENOTRECOVERABLE exists. */
/* #undef _GLIBCXX_HAVE_ENOTRECOVERABLE */
#pragma empty_line
/* Define if ENOTSUP exists. */
/* #undef _GLIBCXX_HAVE_ENOTSUP */
#pragma empty_line
/* Define if EOVERFLOW exists. */
/* #undef _GLIBCXX_HAVE_EOVERFLOW */
#pragma empty_line
/* Define if EOWNERDEAD exists. */
/* #undef _GLIBCXX_HAVE_EOWNERDEAD */
#pragma empty_line
/* Define if EPROTO exists. */
/* #undef _GLIBCXX_HAVE_EPROTO */
#pragma empty_line
/* Define if ETIME exists. */
/* #undef _GLIBCXX_HAVE_ETIME */
#pragma empty_line
/* Define if ETXTBSY exists. */
/* #undef _GLIBCXX_HAVE_ETXTBSY */
#pragma empty_line
/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_EXECINFO_H */
#pragma empty_line
/* Define to 1 if you have the `expf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `expl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fabsf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fabsl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <fenv.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `finite' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */
#pragma empty_line
/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */
#pragma empty_line
/* Define to 1 if you have the <float.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `floorf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `floorl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fmodf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fmodl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fpclass' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */
#pragma empty_line
/* Define to 1 if you have the `frexpf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `frexpl' function. */
#pragma empty_line
#pragma empty_line
/* Define if _Unwind_GetIPInfo is available. */
#pragma empty_line
#pragma empty_line
/* Define if gthr-default.h exists (meaning that threading support is
   enabled). */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypot' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypotf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypotl' function. */
#pragma empty_line
#pragma empty_line
/* Define if you have the iconv() function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef _GLIBCXX_HAVE_IEEEFP_H */
#pragma empty_line
/* Define if int64_t is available in <stdint.h>. */
#pragma empty_line
#pragma empty_line
/* Define if int64_t is a long. */
/* #undef _GLIBCXX_HAVE_INT64_T_LONG */
#pragma empty_line
/* Define if int64_t is a long long. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <inttypes.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `isinf' function. */
/* #undef _GLIBCXX_HAVE_ISINF */
#pragma empty_line
/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */
#pragma empty_line
/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */
#pragma empty_line
/* Define to 1 if you have the `isnan' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */
#pragma empty_line
/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */
#pragma empty_line
/* Defined if iswblank exists. */
#pragma empty_line
#pragma empty_line
/* Define if LC_MESSAGES is available in <locale.h>. */
/* #undef _GLIBCXX_HAVE_LC_MESSAGES */
#pragma empty_line
/* Define to 1 if you have the `ldexpf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `ldexpl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_AS */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_DATA */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_FSIZE */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_RSS */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_VMEM */
#pragma empty_line
/* Define if futex syscall is available. */
/* #undef _GLIBCXX_HAVE_LINUX_FUTEX */
#pragma empty_line
/* Define to 1 if you have the <locale.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `log10f' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `log10l' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `logf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `logl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_ENDIAN_H */
#pragma empty_line
/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_PARAM_H */
#pragma empty_line
/* Define if mbstate_t exists in wchar.h. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <memory.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modff' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modfl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */
#pragma empty_line
/* Define if poll is available in <poll.h>. */
/* #undef _GLIBCXX_HAVE_POLL */
#pragma empty_line
/* Define to 1 if you have the `powf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `powl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */
#pragma empty_line
/* Define to 1 if you have the `setenv' function. */
/* #undef _GLIBCXX_HAVE_SETENV */
#pragma empty_line
/* Define to 1 if you have the `sincos' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sincosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sincosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinhf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinhl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sqrtf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sqrtl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdbool.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdint.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdlib.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define if strerror_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_L */
#pragma empty_line
/* Define if strerror_r is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_R */
#pragma empty_line
/* Define to 1 if you have the <strings.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <string.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `strtof' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `strtold' function. */
#pragma empty_line
#pragma empty_line
/* Define if strxfrm_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRXFRM_L */
#pragma empty_line
/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_FILIO_H */
#pragma empty_line
/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IOCTL_H */
#pragma empty_line
/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IPC_H */
#pragma empty_line
/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */
#pragma empty_line
/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */
#pragma empty_line
/* Define to 1 if you have the <sys/param.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_RESOURCE_H */
#pragma empty_line
/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SEM_H */
#pragma empty_line
/* Define to 1 if you have the <sys/stat.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/time.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/types.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_UIO_H */
#pragma empty_line
/* Define if S_IFREG is available in <sys/stat.h>. */
/* #undef _GLIBCXX_HAVE_S_IFREG */
#pragma empty_line
/* Define if S_IFREG is available in <sys/stat.h>. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanhf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanhl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <tgmath.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target supports thread-local storage. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <unistd.h> header file. */
#pragma empty_line
#pragma empty_line
/* Defined if vfwscanf exists. */
#pragma empty_line
#pragma empty_line
/* Defined if vswscanf exists. */
#pragma empty_line
#pragma empty_line
/* Defined if vwscanf exists. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <wchar.h> header file. */
#pragma empty_line
#pragma empty_line
/* Defined if wcstof exists. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <wctype.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define if writev is available in <sys/uio.h>. */
/* #undef _GLIBCXX_HAVE_WRITEV */
#pragma empty_line
/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */
#pragma empty_line
/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */
#pragma empty_line
/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */
#pragma empty_line
/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */
#pragma empty_line
/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */
#pragma empty_line
/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */
#pragma empty_line
/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */
#pragma empty_line
/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */
#pragma empty_line
/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */
#pragma empty_line
/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */
#pragma empty_line
/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */
#pragma empty_line
/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */
#pragma empty_line
/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */
#pragma empty_line
/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */
#pragma empty_line
/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */
#pragma empty_line
/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */
#pragma empty_line
/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */
#pragma empty_line
/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */
#pragma empty_line
/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */
#pragma empty_line
/* Define to 1 if you have the `_finitef' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */
#pragma empty_line
/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */
#pragma empty_line
/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */
#pragma empty_line
/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */
#pragma empty_line
/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */
#pragma empty_line
/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */
#pragma empty_line
/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */
#pragma empty_line
/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */
#pragma empty_line
/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */
#pragma empty_line
/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */
#pragma empty_line
/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */
#pragma empty_line
/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */
#pragma empty_line
/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */
#pragma empty_line
/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */
#pragma empty_line
/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */
#pragma empty_line
/* Define to 1 if you have the `_isnanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */
#pragma empty_line
/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */
#pragma empty_line
/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */
#pragma empty_line
/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */
#pragma empty_line
/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */
#pragma empty_line
/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */
#pragma empty_line
/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */
#pragma empty_line
/* Define to 1 if you have the `_modf' function. */
/* #undef _GLIBCXX_HAVE__MODF */
#pragma empty_line
/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */
#pragma empty_line
/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */
#pragma empty_line
/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */
#pragma empty_line
/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */
#pragma empty_line
/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */
#pragma empty_line
/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */
#pragma empty_line
/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */
#pragma empty_line
/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */
#pragma empty_line
/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */
#pragma empty_line
/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */
#pragma empty_line
/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */
#pragma empty_line
/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */
#pragma empty_line
/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */
#pragma empty_line
/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */
#pragma empty_line
/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */
#pragma empty_line
/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */
#pragma empty_line
/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */
#pragma empty_line
/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */
#pragma empty_line
/* Define as const if the declaration of iconv() needs const. */
#pragma empty_line
#pragma empty_line
/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#pragma empty_line
#pragma empty_line
/* Name of package */
/* #undef _GLIBCXX_PACKAGE */
#pragma empty_line
/* Define to the address where bug reports for this package should be sent. */
#pragma empty_line
#pragma empty_line
/* Define to the full name of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the full name and version of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the one symbol short name of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the home page for this package. */
#pragma empty_line
#pragma empty_line
/* Define to the version of this package. */
#pragma empty_line
#pragma empty_line
/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */
#pragma empty_line
/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */
#pragma empty_line
/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */
#pragma empty_line
/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */
#pragma empty_line
/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */
#pragma empty_line
/* Define to 1 if you have the ANSI C header files. */
#pragma empty_line
#pragma empty_line
/* Version number of package */
/* #undef _GLIBCXX_VERSION */
#pragma empty_line
/* Define if builtin atomic operations for bool are supported on this host. */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for short are supported on this host.
   */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for int are supported on this host. */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for long long are supported on this
   host. */
#pragma empty_line
#pragma empty_line
/* Define to use concept checking code from the boost libraries. */
/* #undef _GLIBCXX_CONCEPT_CHECKS */
#pragma empty_line
/* Define if a fully dynamic basic_string is wanted. */
#pragma empty_line
#pragma empty_line
/* Define if gthreads library is available. */
/* #undef _GLIBCXX_HAS_GTHREADS */
#pragma empty_line
/* Define to 1 if a full hosted library is built, or 0 if freestanding. */
#pragma empty_line
#pragma empty_line
/* Define if compatibility should be provided for -mlong-double-64. */
#pragma empty_line
/* Define if ptrdiff_t is int. */
/* #undef _GLIBCXX_PTRDIFF_T_IS_INT */
#pragma empty_line
/* Define if using setrlimit to set resource limits during "make check" */
/* #undef _GLIBCXX_RES_LIMITS */
#pragma empty_line
/* Define if size_t is unsigned int. */
/* #undef _GLIBCXX_SIZE_T_IS_UINT */
#pragma empty_line
/* Define if the compiler is configured for setjmp/longjmp exceptions. */
#pragma empty_line
#pragma empty_line
/* Define if EOF == -1, SEEK_CUR == 1, SEEK_END == 2. */
#pragma empty_line
#pragma empty_line
/* Define to use symbol versioning in the shared library. */
#pragma empty_line
#pragma empty_line
/* Define to use darwin versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_DARWIN */
#pragma empty_line
/* Define to use GNU versioning in the shared library. */
#pragma empty_line
#pragma empty_line
/* Define to use GNU namespace versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU_NAMESPACE */
#pragma empty_line
/* Define if C99 functions or macros from <wchar.h>, <math.h>, <complex.h>,
   <stdio.h>, and <stdlib.h> can be used or exposed. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <complex.h> should be used in <complex>. Using
   compiler builtins for these functions requires corresponding C99 library
   functions to be present. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <complex.h> should be used in <tr1/complex>.
   Using compiler builtins for these functions requires corresponding C99
   library functions to be present. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <ctype.h> should be imported in <tr1/cctype> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <fenv.h> should be imported in <tr1/cfenv> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if wchar_t C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions or macros in <math.h> should be imported in
   <tr1/cmath> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 types in <stdint.h> should be imported in <tr1/cstdint> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Defined if clock_gettime has monotonic clock support. */
/* #undef _GLIBCXX_USE_CLOCK_MONOTONIC */
#pragma empty_line
/* Defined if clock_gettime has realtime clock support. */
/* #undef _GLIBCXX_USE_CLOCK_REALTIME */
#pragma empty_line
/* Define if ISO/IEC TR 24733 decimal floating point types are supported on
   this host. */
/* #undef _GLIBCXX_USE_DECIMAL_FLOAT */
#pragma empty_line
/* Defined if gettimeofday is available. */
#pragma empty_line
#pragma empty_line
/* Define if LFS support is available. */
#pragma empty_line
#pragma empty_line
/* Define if code specialized for long long should be used. */
#pragma empty_line
#pragma empty_line
/* Defined if nanosleep is available. */
/* #undef _GLIBCXX_USE_NANOSLEEP */
#pragma empty_line
/* Define if NLS translations are to be used. */
/* #undef _GLIBCXX_USE_NLS */
#pragma empty_line
/* Define if /dev/random and /dev/urandom are available for the random_device
   of TR1 (Chapter 5.1). */
#pragma empty_line
#pragma empty_line
/* Defined if sched_yield is available. */
/* #undef _GLIBCXX_USE_SCHED_YIELD */
#pragma empty_line
/* Define if code specialized for wchar_t should be used. */
#pragma line 61 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(sizeof(int)) size_t;
#pragma line 56 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  using ::ptrdiff_t;
  using ::size_t;
#pragma empty_line
}
#pragma line 62 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
// Function-Based Exception Support -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2004, 2005, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file functexcept.h
 *  This header provides support for -fno-exceptions.
 */
#pragma empty_line
//
// ISO C++ 14882: 19.1  Exception classes
//
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
// -fno-exceptions Support -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2006, 2007, 2008, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
//
// ISO C++ 14882: 19.1  Exception classes
//
#pragma empty_line
/** @file exception_defines.h
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Iff -fno-exceptions, transform error handling code to work without it.
#pragma line 38 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  // Helper for exception objects in <except>
  void
  __throw_bad_exception(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helper for exception objects in <new>
  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helper for exception objects in <typeinfo>
  void
  __throw_bad_cast(void) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <stdexcept>
  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_length_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_range_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <ios>
  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_system_error(int) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_future_error(int) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <functional>
  void
  __throw_bad_function_call() __attribute__((__noreturn__));
#pragma empty_line
}
#pragma line 63 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++
#pragma empty_line
// Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 36 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
//
// This file provides some compile-time information about various types.
// These representations were designed, on purpose, to be constant-expressions
// and not types as found in <bits/type_traits.h>.  In particular, they
// can be used in control structures and the optimizer hopefully will do
// the obvious thing.
//
// Why integral expressions, and not functions nor types?
// Firstly, these compile-time entities are used as template-arguments
// so function return values won't work:  We need compile-time entities.
// We're left with types and constant  integral expressions.
// Secondly, from the point of view of ease of use, type-based compile-time
// information is -not- *that* convenient.  On has to write lots of
// overloaded functions and to hope that the compiler will select the right
// one. As a net effect, the overall structure isn't very clear at first
// glance.
// Thirdly, partial ordering and overload resolution (of function templates)
// is highly costly in terms of compiler-resource.  It is a Good Thing to
// keep these resource consumption as least as possible.
//
// See valarray_array.h for a case use.
//
// -- Gaby (dosreis@cmla.ens-cachan.fr) 2000-03-06.
//
// Update 2005: types are also provided and <bits/type_traits.h> has been
// removed.
//
#pragma empty_line
// Forward declaration hack, should really include this from somewhere.
namespace __gnu_cxx {
#pragma empty_line
  template<typename _Iterator, typename _Container>
    class __normal_iterator;
#pragma empty_line
}
#pragma empty_line
namespace std {
#pragma empty_line
  struct __true_type { };
  struct __false_type { };
#pragma empty_line
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
#pragma empty_line
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
#pragma empty_line
  // N.B. The conversions to bool are needed due to the issue
  // explained in c++/19404.
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
  // Compare for equality of types.
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  // Holds if the template-argument is a void type.
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Integer types
  //
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  // Thirteen specializations (yes there are eleven standard integer
  // types; <em>long long</em> and <em>unsigned long long</em> are
  // supported as extensions)
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Floating point types
  //
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  // three specializations (float, double and 'long double')
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Pointer types
  //
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Normal iterator type
  //
  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // An arithmetic type is an integer type or a floating point type
  //
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
#pragma empty_line
  //
  // A fundamental type is `void' or and arithmetic type
  //
  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };
#pragma empty_line
  //
  // A scalar type is an arithmetic type or a pointer type
  // 
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
#pragma empty_line
  //
  // For use in std::copy and std::find overloads for streambuf iterators.
  //
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Move iterator type
  //
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Iterator>
    class move_iterator;
#pragma empty_line
  template<typename _Iterator>
    struct __is_move_iterator< move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;
#pragma empty_line
      template<typename _Up>
        struct _Wrap_type
 { };
#pragma empty_line
      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);
#pragma empty_line
      template<typename _Up>
        static __two __test(...);
#pragma empty_line
    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
}
#pragma line 64 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
// -*- C++ -*-
#pragma empty_line
// Copyright (C) 2005, 2006, 2007, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.
#pragma empty_line
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file ext/type_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // Define a nested type if some predicate holds.
  template<bool, typename>
    struct __enable_if
    { };
#pragma empty_line
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
#pragma empty_line
#pragma empty_line
  // Conditional expression for types. If true, first, if false, second.
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
#pragma empty_line
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
#pragma empty_line
#pragma empty_line
  // Given an integral builtin type, return the corresponding unsigned type.
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
  // Declare but don't define.
  template<>
    struct __add_unsigned<bool>;
#pragma empty_line
  template<>
    struct __add_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
  // Given an integral builtin type, return the corresponding signed type.
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
#pragma empty_line
  // Declare but don't define.
  template<>
    struct __remove_unsigned<bool>;
#pragma empty_line
  template<>
    struct __remove_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
  // For use in string and vstring.
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
#pragma empty_line
#pragma empty_line
  // For complex and cmath
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
#pragma empty_line
  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };
#pragma empty_line
  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };
#pragma empty_line
}
#pragma line 65 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
// -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.
#pragma empty_line
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // Compile time constants for builtin types.
  // Sadly std::numeric_limits member functions cannot be used for this.
#pragma line 51 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {
      // Only integers for initialization of member constant.
      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);
#pragma empty_line
      // NB: these two also available in std::numeric_limits as compile
      // time constants, but <limits> is big and we avoid including it.
      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
#pragma line 96 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {
      // Only floating point types. See N1822. 
      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);
#pragma empty_line
      // See above comment...
      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;
#pragma empty_line
  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };
#pragma empty_line
}
#pragma line 66 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
// Pair implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_pair.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file move.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 35 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
// Concept-checking control -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file concept_check.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 33 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
// All places in libstdc++-v3 where these are used, or /might/ be used, or
// don't need to be used, or perhaps /should/ be used, are commented with
// "concept requirements" (and maybe some more text).  So grep like crazy
// if you're looking for additional places to use these.
#pragma empty_line
// Concept-checking code is off by default unless users turn it on via
// configure options or editing c++config.h.
#pragma line 36 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\type_traits" 1 3
// C++0x type_traits -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009, 2010 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\type_traits" 3
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\type_traits" 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 42 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\type_traits" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\tr1_impl/type_traits" 1 3
// TR1 type_traits -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file tr1_impl/type_traits
*  This is an internal header file, included by other library headers.
*  You should not attempt to use it directly.
*/
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  /**
   * @defgroup metaprogramming Type Traits
   * @ingroup utilities
   *
   * Compile time type transformation and information.
   * @{
   */
#pragma empty_line
  // For use in __is_convertible_simple.
  struct __sfinae_types
  {
    typedef char __one;
    typedef struct { char __arr[2]; } __two;
  };
#pragma line 63 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\tr1_impl/type_traits" 3
  // helper classes [4.3].
#pragma empty_line
  /// integral_constant
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static const _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
    };
#pragma empty_line
  /// typedef for true_type
  typedef integral_constant<bool, true> true_type;
#pragma empty_line
  /// typedef for false_type
  typedef integral_constant<bool, false> false_type;
#pragma empty_line
  template<typename _Tp, _Tp __v>
    const _Tp integral_constant<_Tp, __v>::value;
#pragma empty_line
  /// remove_cv
  template<typename>
    struct remove_cv;
#pragma empty_line
  template<typename>
    struct __is_void_helper
    : public false_type { };
  template<> struct __is_void_helper<void> : public integral_constant<bool, true> { };
#pragma empty_line
  // primary type categories [4.5.1].
#pragma empty_line
  /// is_void
  template<typename _Tp>
    struct is_void
    : public integral_constant<bool, (__is_void_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  template<typename>
    struct __is_integral_helper
    : public false_type { };
  template<> struct __is_integral_helper<bool> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<signed char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned char> : public integral_constant<bool, true> { };
#pragma empty_line
  template<> struct __is_integral_helper<wchar_t> : public integral_constant<bool, true> { };
#pragma empty_line
#pragma empty_line
  template<> struct __is_integral_helper<char16_t> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<char32_t> : public integral_constant<bool, true> { };
#pragma empty_line
  template<> struct __is_integral_helper<short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long long> : public integral_constant<bool, true> { };
#pragma empty_line
  /// is_integral
  template<typename _Tp>
    struct is_integral
    : public integral_constant<bool, (__is_integral_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  template<typename>
    struct __is_floating_point_helper
    : public false_type { };
  template<> struct __is_floating_point_helper<float> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<double> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<long double> : public integral_constant<bool, true> { };
#pragma empty_line
  /// is_floating_point
  template<typename _Tp>
    struct is_floating_point
    : public integral_constant<bool, (__is_floating_point_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  /// is_array
  template<typename>
    struct is_array
    : public false_type { };
#pragma empty_line
  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };
#pragma empty_line
  template<typename>
    struct __is_pointer_helper
    : public false_type { };
  template<typename _Tp> struct __is_pointer_helper<_Tp*> : public integral_constant<bool, true> { };
#pragma empty_line
  /// is_pointer
  template<typename _Tp>
    struct is_pointer
    : public integral_constant<bool, (__is_pointer_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  /// is_reference
  template<typename _Tp>
    struct is_reference;
#pragma empty_line
  /// is_function
  template<typename _Tp>
    struct is_function;
#pragma empty_line
  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_object_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, !is_function<_Tp>::value> { };
#pragma empty_line
#pragma empty_line
  /// is_member_object_pointer
  template<typename _Tp>
    struct is_member_object_pointer
    : public integral_constant<bool, (__is_member_object_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_function_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, is_function<_Tp>::value> { };
#pragma empty_line
#pragma empty_line
  /// is_member_function_pointer
  template<typename _Tp>
    struct is_member_function_pointer
    : public integral_constant<bool, (__is_member_function_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  /// is_enum
  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };
#pragma empty_line
  /// is_union
  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };
#pragma empty_line
  /// is_class
  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };
#pragma empty_line
  /// is_function
  template<typename>
    struct is_function
    : public false_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };
#pragma empty_line
  // composite type traits [4.5.2].
#pragma empty_line
  /// is_arithmetic
  template<typename _Tp>
    struct is_arithmetic
    : public integral_constant<bool, (is_integral<_Tp>::value
          || is_floating_point<_Tp>::value)>
    { };
#pragma empty_line
  /// is_fundamental
  template<typename _Tp>
    struct is_fundamental
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_void<_Tp>::value)>
    { };
#pragma empty_line
  /// is_object
  template<typename _Tp>
    struct is_object
    : public integral_constant<bool, !(is_function<_Tp>::value
           || is_reference<_Tp>::value
           || is_void<_Tp>::value)>
    { };
#pragma empty_line
  /// is_member_pointer
  template<typename _Tp>
    struct is_member_pointer;
#pragma empty_line
  /// is_scalar
  template<typename _Tp>
    struct is_scalar
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_enum<_Tp>::value
          || is_pointer<_Tp>::value
          || is_member_pointer<_Tp>::value)>
    { };
#pragma empty_line
  /// is_compound
  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };
#pragma empty_line
  /// is_member_pointer
  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, true> { };
#pragma empty_line
  template<typename _Tp>
  struct is_member_pointer
    : public integral_constant<bool, (__is_member_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };
#pragma empty_line
  // type properties [4.5.3].
  /// is_const
  template<typename>
    struct is_const
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };
#pragma empty_line
  /// is_volatile
  template<typename>
    struct is_volatile
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };
#pragma empty_line
  /// is_empty
  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };
#pragma empty_line
  /// is_polymorphic
  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };
#pragma empty_line
  /// is_abstract
  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };
#pragma empty_line
  /// has_virtual_destructor
  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };
#pragma empty_line
  /// alignment_of
  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };
#pragma empty_line
  /// rank
  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };
#pragma empty_line
  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
#pragma empty_line
  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
#pragma empty_line
  /// extent
  template<typename, unsigned _Uint = 0>
    struct extent
    : public integral_constant<std::size_t, 0> { };
#pragma empty_line
  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };
#pragma empty_line
  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };
#pragma empty_line
  // relationships between types [4.6].
#pragma empty_line
  /// is_same
  template<typename, typename>
    struct is_same
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };
#pragma empty_line
  // const-volatile modifications [4.7.1].
#pragma empty_line
  /// remove_const
  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };
#pragma empty_line
  /// remove_volatile
  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };
#pragma empty_line
  /// remove_cv
  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };
#pragma empty_line
  /// add_const
  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };
#pragma empty_line
  /// add_volatile
  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };
#pragma empty_line
  /// add_cv
  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };
#pragma empty_line
  // array modifications [4.7.3].
#pragma empty_line
  /// remove_extent
  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };
#pragma empty_line
  /// remove_all_extents
  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };
#pragma empty_line
  // pointer modifications [4.7.4].
#pragma empty_line
  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };
#pragma empty_line
  /// remove_pointer
  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };
#pragma empty_line
  template<typename>
    struct remove_reference;
#pragma empty_line
  /// add_pointer
  template<typename _Tp>
    struct add_pointer
    { typedef typename remove_reference<_Tp>::type* type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  // @} group metaprogramming
#pragma empty_line
#pragma empty_line
}
#pragma line 51 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\type_traits" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std
{
  /**
   * @addtogroup metaprogramming
   * @{
   */
#pragma empty_line
  // Primary classification traits.
#pragma empty_line
  /// is_lvalue_reference
  template<typename>
    struct is_lvalue_reference
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };
#pragma empty_line
  /// is_rvalue_reference
  template<typename>
    struct is_rvalue_reference
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };
#pragma empty_line
  // Secondary classification traits.
#pragma empty_line
  /// is_reference
  template<typename _Tp>
    struct is_reference
    : public integral_constant<bool, (is_lvalue_reference<_Tp>::value
          || is_rvalue_reference<_Tp>::value)>
    { };
#pragma empty_line
  // Reference transformations.
#pragma empty_line
  /// remove_reference
  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp,
    bool = !is_reference<_Tp>::value && !is_void<_Tp>::value,
    bool = is_rvalue_reference<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true, false>
    { typedef _Tp& type; };
#pragma empty_line
  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, false, true>
    { typedef typename remove_reference<_Tp>::type& type; };
#pragma empty_line
  /// add_lvalue_reference
  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };
#pragma empty_line
  template<typename _Tp,
    bool = !is_reference<_Tp>::value && !is_void<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&& type; };
#pragma empty_line
  /// add_rvalue_reference
  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };
#pragma empty_line
  // Scalar properties and transformations.
#pragma empty_line
  template<typename _Tp,
    bool = is_integral<_Tp>::value,
    bool = is_floating_point<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };
#pragma empty_line
  template<typename _Tp>
    struct __is_signed_helper<_Tp, false, true>
    : public true_type { };
#pragma empty_line
  template<typename _Tp>
    struct __is_signed_helper<_Tp, true, false>
    : public integral_constant<bool, static_cast<bool>(_Tp(-1) < _Tp(0))>
    { };
#pragma empty_line
  /// is_signed
  template<typename _Tp>
    struct is_signed
    : public integral_constant<bool, __is_signed_helper<_Tp>::value>
    { };
#pragma empty_line
  /// is_unsigned
  template<typename _Tp>
    struct is_unsigned
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          && !is_signed<_Tp>::value)>
    { };
#pragma empty_line
  // Member introspection.
#pragma empty_line
  /// is_trivial
  template<typename _Tp>
    struct is_trivial
    : public integral_constant<bool, __is_trivial(_Tp)>
    { };
#pragma empty_line
  /// is_standard_layout
  template<typename _Tp>
    struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)>
    { };
#pragma empty_line
  /// is_pod
  // Could use is_standard_layout && is_trivial instead of the builtin.
  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };
#pragma empty_line
  template<typename _Tp>
    typename add_rvalue_reference<_Tp>::type declval();
#pragma empty_line
  template<typename _Tp, typename... _Args>
    class __is_constructible_helper
    : public __sfinae_types
    {
      template<typename _Tp1, typename... _Args1>
        static decltype(_Tp1(declval<_Args1>()...), __one()) __test(int);
#pragma empty_line
      template<typename, typename...>
        static __two __test(...);
#pragma empty_line
    public:
      static const bool __value = sizeof(__test<_Tp, _Args...>(0)) == 1;
    };
#pragma empty_line
  template<typename _Tp, typename _Arg>
    class __is_constructible_helper<_Tp, _Arg>
    : public __sfinae_types
    {
      template<typename _Tp1, typename _Arg1>
        static decltype(static_cast<_Tp1>(declval<_Arg1>()), __one())
 __test(int);
#pragma empty_line
      template<typename, typename>
        static __two __test(...);
#pragma empty_line
    public:
      static const bool __value = sizeof(__test<_Tp, _Arg>(0)) == 1;
    };
#pragma empty_line
  /// is_constructible
  // XXX FIXME
  // The C++0x specifications require front-end support, see N2255.
  template<typename _Tp, typename... _Args>
    struct is_constructible
    : public integral_constant<bool,
          __is_constructible_helper<_Tp,
        _Args...>::__value>
    { };
#pragma empty_line
  /// has_trivial_default_constructor
  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { };
#pragma empty_line
  /// has_trivial_copy_constructor
  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { };
#pragma empty_line
  /// has_trivial_assign
  template<typename _Tp>
    struct has_trivial_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { };
#pragma empty_line
  /// has_trivial_destructor
  template<typename _Tp>
    struct has_trivial_destructor
    : public integral_constant<bool, __has_trivial_destructor(_Tp)>
    { };
#pragma empty_line
  /// has_nothrow_default_constructor
  template<typename _Tp>
    struct has_nothrow_default_constructor
    : public integral_constant<bool, __has_nothrow_constructor(_Tp)>
    { };
#pragma empty_line
  /// has_nothrow_copy_constructor
  template<typename _Tp>
    struct has_nothrow_copy_constructor
    : public integral_constant<bool, __has_nothrow_copy(_Tp)>
    { };
#pragma empty_line
  /// has_nothrow_assign
  template<typename _Tp>
    struct has_nothrow_assign
    : public integral_constant<bool, __has_nothrow_assign(_Tp)>
    { };
#pragma empty_line
  // Relationships between types.
#pragma empty_line
  /// is_base_of
  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };
#pragma empty_line
  template<typename _From, typename _To,
    bool = (is_void<_From>::value || is_void<_To>::value
     || is_function<_To>::value || is_array<_To>::value)>
    struct __is_convertible_helper
    { static const bool __value = (is_void<_From>::value
       && is_void<_To>::value); };
#pragma empty_line
  template<typename _From, typename _To>
    class __is_convertible_helper<_From, _To, false>
    : public __sfinae_types
    {
      static __one __test(_To);
      static __two __test(...);
#pragma empty_line
    public:
      static const bool __value = sizeof(__test(declval<_From>())) == 1;
    };
#pragma empty_line
  /// is_convertible
  // XXX FIXME
  // The C++0x specifications require front-end support, see N2255.
  template<typename _From, typename _To>
    struct is_convertible
    : public integral_constant<bool,
          __is_convertible_helper<_From, _To>::__value>
    { };
#pragma empty_line
  /// is_explicitly_convertible
  template<typename _From, typename _To>
    struct is_explicitly_convertible
    : public is_constructible<_To, _From>
    { };
#pragma empty_line
  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__)) { } __align;
      };
    };
#pragma empty_line
  /**
   *  @brief Alignment type.
   *
   *  The value of _Align is a default-alignment which shall be the
   *  most stringent alignment requirement for any C++ object type
   *  whose size is no greater than _Len (3.9). The member typedef
   *  type shall be a POD type suitable for use as uninitialized
   *  storage for any object whose size is at most _Len and whose
   *  alignment is a divisor of _Align.
  */
  template<std::size_t _Len, std::size_t _Align =
    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };
#pragma empty_line
#pragma empty_line
  // Define a nested type if some predicate holds.
  // Primary template.
  /// enable_if
  template<bool, typename _Tp = void>
    struct enable_if
    { };
#pragma empty_line
  // Partial specialization for true.
  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };
#pragma empty_line
#pragma empty_line
  // A conditional expression, but for types. If true, first, if false, second.
  // Primary template.
  /// conditional
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };
#pragma empty_line
  // Partial specialization for false.
  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };
#pragma empty_line
#pragma empty_line
  // Decay trait for arrays and functions, used for perfect forwarding
  // in make_pair, make_tuple, etc.
  template<typename _Up,
    bool _IsArray = is_array<_Up>::value,
    bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;
#pragma empty_line
  // NB: DR 705.
  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };
#pragma empty_line
  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };
#pragma empty_line
  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };
#pragma empty_line
  /// decay
  template<typename _Tp>
    class decay
    {
      typedef typename remove_reference<_Tp>::type __remove_type;
#pragma empty_line
    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };
#pragma empty_line
#pragma empty_line
  // Utility for constructing identically cv-qualified types.
  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;
#pragma empty_line
  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };
#pragma empty_line
  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };
#pragma empty_line
  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };
#pragma empty_line
  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };
#pragma empty_line
  template<typename _Qualified, typename _Unqualified,
    bool _IsConst = is_const<_Qualified>::value,
    bool _IsVol = is_volatile<_Qualified>::value>
    class __match_cv_qualifiers
    {
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;
#pragma empty_line
    public:
      typedef typename __match::__type __type;
    };
#pragma empty_line
#pragma empty_line
  // Utility for finding the unsigned versions of signed integral types.
  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
#pragma empty_line
  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_unsigned_selector;
#pragma empty_line
  template<typename _Tp>
    class __make_unsigned_selector<_Tp, true, false>
    {
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;
#pragma empty_line
    public:
      typedef typename __cv_unsigned::__type __type;
    };
#pragma empty_line
  template<typename _Tp>
    class __make_unsigned_selector<_Tp, false, true>
    {
      // With -fshort-enums, an enum may be as small as a char.
      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      typedef conditional<__b2, unsigned int, unsigned long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;
#pragma empty_line
    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };
#pragma empty_line
  // Given an integral/enum type, return the corresponding unsigned
  // integer type.
  // Primary template.
  /// make_unsigned
  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };
#pragma empty_line
  // Integral, but don't define.
  template<>
    struct make_unsigned<bool>;
#pragma empty_line
#pragma empty_line
  // Utility for finding the signed versions of unsigned integral types.
  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };
#pragma empty_line
  template<>
    struct __make_signed<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };
#pragma empty_line
  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };
#pragma empty_line
  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };
#pragma empty_line
  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };
#pragma empty_line
#pragma empty_line
  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_signed_selector;
#pragma empty_line
  template<typename _Tp>
    class __make_signed_selector<_Tp, true, false>
    {
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;
#pragma empty_line
    public:
      typedef typename __cv_signed::__type __type;
    };
#pragma empty_line
  template<typename _Tp>
    class __make_signed_selector<_Tp, false, true>
    {
      // With -fshort-enums, an enum may be as small as a char.
      typedef signed char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(signed short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(signed int);
      typedef conditional<__b2, signed int, signed long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, signed short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;
#pragma empty_line
    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };
#pragma empty_line
  // Given an integral/enum type, return the corresponding signed
  // integer type.
  // Primary template.
  /// make_signed
  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };
#pragma empty_line
  // Integral, but don't define.
  template<>
    struct make_signed<bool>;
#pragma empty_line
  /// common_type
  template<typename... _Tp>
    struct common_type;
#pragma empty_line
  template<typename _Tp>
    struct common_type<_Tp>
    { typedef _Tp type; };
#pragma empty_line
  template<typename _Tp, typename _Up>
    struct common_type<_Tp, _Up>
    { typedef decltype(true ? declval<_Tp>() : declval<_Up>()) type; };
#pragma empty_line
  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    {
      typedef typename
        common_type<typename common_type<_Tp, _Up>::type, _Vp...>::type type;
    };
  // @} group metaprogramming
#pragma empty_line
  /// declval
  template<typename _Tp>
    struct __declval_protector
    {
      static const bool __stop = false;
      static typename add_rvalue_reference<_Tp>::type __delegate();
    };
#pragma empty_line
  template<typename _Tp>
    inline typename add_rvalue_reference<_Tp>::type
    declval()
    {
      static_assert(__declval_protector<_Tp>::__stop,
      "declval() must not be used!");
      return __declval_protector<_Tp>::__delegate();
    }
}
#pragma line 39 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  /// identity
  template<typename _Tp>
    struct identity
    {
      typedef _Tp type;
    };
#pragma empty_line
  /// forward (as per N2835)
  /// Forward lvalues as rvalues.
  template<typename _Tp>
    inline typename enable_if<!is_lvalue_reference<_Tp>::value, _Tp&&>::type
    forward(typename std::identity<_Tp>::type& __t)
    { return static_cast<_Tp&&>(__t); }
#pragma empty_line
  /// Forward rvalues as rvalues.
  template<typename _Tp>
    inline typename enable_if<!is_lvalue_reference<_Tp>::value, _Tp&&>::type
    forward(typename std::identity<_Tp>::type&& __t)
    { return static_cast<_Tp&&>(__t); }
#pragma empty_line
  // Forward lvalues as lvalues.
  template<typename _Tp>
    inline typename enable_if<is_lvalue_reference<_Tp>::value, _Tp>::type
    forward(typename std::identity<_Tp>::type __t)
    { return __t; }
#pragma empty_line
  // Prevent forwarding rvalues as const lvalues.
  template<typename _Tp>
    inline typename enable_if<is_lvalue_reference<_Tp>::value, _Tp>::type
    forward(typename std::remove_reference<_Tp>::type&& __t) = delete;
#pragma empty_line
  /**
   *  @brief Move a value.
   *  @ingroup mutating_algorithms
   *  @param  __t  A thing of arbitrary type.
   *  @return Same, moved.
  */
  template<typename _Tp>
    inline typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t)
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
#pragma empty_line
  /// declval, from type_traits.
#pragma empty_line
}
#pragma line 95 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
#pragma empty_line
  /**
   *  @brief Swaps two values.
   *  @ingroup mutating_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   Nothing.
  */
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 809. std::swap should be overloaded for array types.
  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }
#pragma empty_line
}
#pragma line 61 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3
 // std::swap
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  /// pair holds two objects of arbitrary type.
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type; ///<  @c first_type is the first bound type
      typedef _T2 second_type; ///<  @c second_type is the second bound type
#pragma empty_line
      _T1 first; ///< @c first is a copy of the first object
      _T2 second; ///< @c second is a copy of the second object
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 265.  std::pair::pair() effects overly restrictive
      /** The default constructor creates @c first and @c second using their
       *  respective default constructors.  */
      pair()
      : first(), second() { }
#pragma empty_line
      /** Two objects may be passed to a @c pair constructor to be copied.  */
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
#pragma empty_line
#pragma empty_line
      // DR 811.
      template<class _U1, class = typename
        std::enable_if<std::is_convertible<_U1, _T1>::value>::type>
        pair(_U1&& __x, const _T2& __y)
 : first(std::forward<_U1>(__x)),
   second(__y) { }
#pragma empty_line
      template<class _U2, class = typename
        std::enable_if<std::is_convertible<_U2, _T2>::value>::type>
        pair(const _T1& __x, _U2&& __y)
 : first(__x),
   second(std::forward<_U2>(__y)) { }
#pragma empty_line
      template<class _U1, class _U2, class = typename
        std::enable_if<std::is_convertible<_U1, _T1>::value
         && std::is_convertible<_U2, _T2>::value>::type>
        pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)),
   second(std::forward<_U2>(__y)) { }
#pragma empty_line
#pragma empty_line
      /** There is also a templated copy ctor for the @c pair class itself.  */
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
#pragma empty_line
#pragma empty_line
      template<class _U1, class _U2>
        pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }
#pragma empty_line
      pair&
      operator=(pair&& __p)
      {
 first = std::move(__p.first);
 second = std::move(__p.second);
 return *this;
      }
#pragma empty_line
      template<class _U1, class _U2>
        pair&
        operator=(pair<_U1, _U2>&& __p)
 {
   first = std::move(__p.first);
   second = std::move(__p.second);
   return *this;
 }
#pragma empty_line
      void
      swap(pair& __p)
      {
 using std::swap;
 swap(first, __p.first);
 swap(second, __p.second);
      }
#pragma empty_line
    };
#pragma empty_line
  /// Two pairs of the same type are equal iff their members are equal.
  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }
#pragma empty_line
  /// <http://gcc.gnu.org/onlinedocs/libstdc++/manual/utilities.html>
  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }
#pragma empty_line
  /// Uses @c operator== to find the result.
  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
#pragma empty_line
#pragma empty_line
  /// See std::pair::swap().
  // Note:  no std::swap overloads in C++03 mode, this has performance
  //        implications, see, eg, libstdc++/38466.
  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    { __x.swap(__y); }
#pragma empty_line
#pragma empty_line
  /**
   *  @brief A convenience wrapper for creating a pair from two objects.
   *  @param  x  The first object.
   *  @param  y  The second object.
   *  @return   A newly-constructed pair<> object of the appropriate type.
   *
   *  The standard requires that the objects be passed by reference-to-const,
   *  but LWG issue #181 says they should be passed by const value.  We follow
   *  the LWG by default.
   */
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 181.  make_pair() unintended behavior
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    class reference_wrapper;
#pragma empty_line
  // Helper which adds a reference to a type when given a reference_wrapper
  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __strip_reference_wrapper<const reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
 typename decay<_Tp>::type>::__type __type;
    };
#pragma empty_line
  // NB: DR 706.
  template<class _T1, class _T2>
    inline pair<typename __decay_and_strip<_T1>::__type,
  typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      return pair<typename __decay_and_strip<_T1>::__type,
           typename __decay_and_strip<_T2>::__type>
 (std::forward<_T1>(__x), std::forward<_T2>(__y));
    }
#pragma empty_line
#pragma empty_line
}
#pragma line 67 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
// Types used in iterator implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator_base_types.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file contains all of the general iterator-related utility types,
 *  such as iterator_traits and struct iterator.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 63 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 66 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @defgroup iterators Iterators
   *  Abstractions for uniform iterating through various underlying types.
  */
  //@{ 
#pragma empty_line
  /**
   *  @defgroup iterator_tags Iterator Tags
   *  These are empty types, used to distinguish different iterators.  The
   *  distinction is not made by what they contain, but simply by what they
   *  are.  Different underlying algorithms can then be used based on the
   *  different operations supported by different iterator types.
  */
  //@{ 
  ///  Marking input iterators.
  struct input_iterator_tag { };
#pragma empty_line
  ///  Marking output iterators.
  struct output_iterator_tag { };
#pragma empty_line
  /// Forward iterators support a superset of input iterator operations.
  struct forward_iterator_tag : public input_iterator_tag { };
#pragma empty_line
  /// Bidirectional iterators support a superset of forward iterator
  /// operations.
  struct bidirectional_iterator_tag : public forward_iterator_tag { };
#pragma empty_line
  /// Random-access iterators support a superset of bidirectional
  /// iterator operations.
  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
  //@}
#pragma empty_line
  /**
   *  @brief  Common %iterator class.
   *
   *  This class does nothing but define nested typedefs.  %Iterator classes
   *  can inherit from this class to save some work.  The typedefs are then
   *  used in specializations and overloading.
   *
   *  In particular, there are no default implementations of requirements
   *  such as @c operator++ and the like.  (How could there be?)
  */
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {
      /// One of the @link iterator_tags tag types@endlink.
      typedef _Category iterator_category;
      /// The type "pointed to" by the iterator.
      typedef _Tp value_type;
      /// Distance between iterators is represented as this type.
      typedef _Distance difference_type;
      /// This type represents a pointer-to-value_type.
      typedef _Pointer pointer;
      /// This type represents a reference-to-value_type.
      typedef _Reference reference;
    };
#pragma empty_line
  /**
   *  @brief  Traits class for iterators.
   *
   *  This class does nothing but define nested typedefs.  The general
   *  version simply @a forwards the nested typedefs from the Iterator
   *  argument.  Specialized versions for pointers and pointers-to-const
   *  provide tighter, more correct semantics.
  */
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };
#pragma empty_line
  /// Partial specialization for pointer types.
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };
#pragma empty_line
  /// Partial specialization for const pointer types.
  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };
#pragma empty_line
  /**
   *  This function is not a part of the C++ standard but is syntactic
   *  sugar for internal library use only.
  */
  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }
#pragma empty_line
  //@}
#pragma empty_line
}
#pragma line 68 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
// Functions used by iterators -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator_base_funcs.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file contains all of the general iterator-related utility
 *  functions, such as distance() and advance().
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 63 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }
#pragma empty_line
  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      return __last - __first;
    }
#pragma empty_line
  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  first  An input iterator.
   *  @param  last  An input iterator.
   *  @return  The distance between them.
   *
   *  Returns @c n such that first + n == last.  This requires that @p last
   *  must be reachable from @p first.  Note that @c n may be negative.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {
      // concept requirements -- taken care of in __distance
      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }
#pragma empty_line
  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {
      // concept requirements
#pragma empty_line
      while (__n--)
 ++__i;
    }
#pragma empty_line
  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }
#pragma empty_line
  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      __i += __n;
    }
#pragma empty_line
  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  i  An input iterator.
   *  @param  n  The @a delta by which to change @p i.
   *  @return  Nothing.
   *
   *  This increments @p i by @p n.  For bidirectional and random access
   *  iterators, @p n may be negative, in which case @p i is decremented.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {
      // concept requirements -- taken care of in __advance
      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  template<typename _ForwardIterator>
    inline typename
    __gnu_cxx::__enable_if<__is_iterator<_ForwardIterator>::__value,
      _ForwardIterator>::__type
    next(_ForwardIterator __x, typename
  iterator_traits<_ForwardIterator>::difference_type __n = 1)
    {
      std::advance(__x, __n);
      return __x;
    }
#pragma empty_line
  template<typename _BidirectionalIterator>
    inline typename
    __gnu_cxx::__enable_if<__is_iterator<_BidirectionalIterator>::__value,
      _BidirectionalIterator>::__type
    prev(_BidirectionalIterator __x, typename
  iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
    {
      std::advance(__x, -__n);
      return __x;
    }
#pragma empty_line
}
#pragma line 69 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
// Iterators -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file implements reverse_iterator, back_insert_iterator,
 *  front_insert_iterator, insert_iterator, __normal_iterator, and their
 *  supporting functions and overloaded operators.
 */
#pragma line 68 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
#pragma empty_line
  /**
   * @addtogroup iterators
   * @{
   */
#pragma empty_line
  // 24.4.1 Reverse iterators
  /**
   *  Bidirectional and random access iterators have corresponding reverse
   *  %iterator adaptors that iterate through the data structure in the
   *  opposite direction.  They have the same signatures as the corresponding
   *  iterators.  The fundamental relation between a reverse %iterator and its
   *  corresponding %iterator @c i is established by the identity:
   *  @code
   *      &*(reverse_iterator(i)) == &*(i - 1)
   *  @endcode
   *
   *  <em>This mapping is dictated by the fact that while there is always a
   *  pointer past the end of an array, there might not be a valid pointer
   *  before the beginning of an array.</em> [24.4.1]/1,2
   *
   *  Reverse iterators can be tricky and surprising at first.  Their
   *  semantics make sense, however, and the trickiness is a side effect of
   *  the requirement that the iterators must be safe.
  */
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;
#pragma empty_line
      /**
       *  The default constructor default-initializes member @p current.
       *  If it is a pointer, that means it is zero-initialized.
      */
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 235 No specification of default ctor for reverse_iterator
      reverse_iterator() : current() { }
#pragma empty_line
      /**
       *  This %iterator will move in the opposite direction that @p x does.
      */
      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }
#pragma empty_line
      /**
       *  The copy constructor is normal.
      */
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }
#pragma empty_line
      /**
       *  A reverse_iterator across other types can be copied in the normal
       *  fashion.
      */
      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }
#pragma empty_line
      /**
       *  @return  @c current, the %iterator used for underlying work.
      */
      iterator_type
      base() const
      { return current; }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      pointer
      operator->() const
      { return &(operator*()); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
#pragma empty_line
  //@{
  /**
   *  @param  x  A %reverse_iterator.
   *  @param  y  A %reverse_iterator.
   *  @return  A simple bool.
   *
   *  Reverse iterators forward many operations to their underlying base()
   *  iterators.  Others are implemented in terms of one another.
   *
  */
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 280. Comparison of reverse_iterator to const reverse_iterator.
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
#pragma empty_line
    // DR 685.
    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    { return __y.base() - __x.base(); }
  //@}
#pragma empty_line
  // 24.4.2.2.1 back_insert_iterator
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator appends it to the container using
   *  push_back.
   *
   *  Tip:  Using the back_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /// The only way to create this %iterator is with a container.
      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the end, if you like).  Assigning a value to the %iterator will
       *  always append the value to the end of the container.
      */
#pragma line 427 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_back(__value);
 return *this;
      }
#pragma empty_line
      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_back(std::move(__value));
 return *this;
      }
#pragma empty_line
#pragma empty_line
      /// Simply returns *this.
      back_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of back_insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating back_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
#pragma empty_line
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator prepends it to the container using
   *  push_front.
   *
   *  Tip:  Using the front_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /// The only way to create this %iterator is with a container.
      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the front, if you like).  Assigning a value to the %iterator will
       *  always prepend the value to the front of the container.
      */
#pragma line 517 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_front(__value);
 return *this;
      }
#pragma empty_line
      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_front(std::move(__value));
 return *this;
      }
#pragma empty_line
#pragma empty_line
      /// Simply returns *this.
      front_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of front_insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating front_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
#pragma empty_line
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator inserts it in the container at the
   *  %iterator's position, rather than overwriting the value at that
   *  position.
   *
   *  (Sequences will actually insert a @e copy of the value before the
   *  %iterator's position.)
   *
   *  Tip:  Using the inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /**
       *  The only way to create this %iterator is with a container and an
       *  initial position (a normal %iterator into the container).
      */
      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator maintains its own position in the
       *  container.  Assigning a value to the %iterator will insert the
       *  value into the container at the place before the %iterator.
       *
       *  The position is maintained such that subsequent assignments will
       *  insert values immediately after one another.  For example,
       *  @code
       *     // vector v contains A and Z
       *
       *     insert_iterator i (v, ++v.begin());
       *     i = 1;
       *     i = 2;
       *     i = 3;
       *
       *     // vector v contains A, 1, 2, 3, and Z
       *  @endcode
      */
#pragma line 629 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
#pragma empty_line
      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 iter = container->insert(iter, std::move(__value));
 ++iter;
 return *this;
      }
#pragma empty_line
#pragma empty_line
      /// Simply returns *this.
      insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }
#pragma empty_line
  // @} group iterators
#pragma empty_line
}
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // This iterator adapter is @a normal in the sense that it does not
  // change the semantics of any of the operators of its iterator
  // parameter.  Its primary purpose is to convert an iterator that is
  // not a class, e.g. a pointer, into an iterator that is a class.
  // The _Container parameter exists solely so that different containers
  // using this template can instantiate different types, even if the
  // _Iterator parameter is the same.
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;
#pragma empty_line
      __normal_iterator() : _M_current(_Iterator()) { }
#pragma empty_line
      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }
#pragma empty_line
      // Allow iterator to const_iterator conversion
      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }
#pragma empty_line
      // Forward iterator requirements
      reference
      operator*() const
      { return *_M_current; }
#pragma empty_line
      pointer
      operator->() const
      { return _M_current; }
#pragma empty_line
      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }
#pragma empty_line
      // Bidirectional iterator requirements
      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }
#pragma empty_line
      // Random access iterator requirements
      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }
#pragma empty_line
      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }
#pragma empty_line
      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }
#pragma empty_line
      const _Iterator&
      base() const
      { return _M_current; }
    };
#pragma empty_line
  // Note: In what follows, the left- and right-hand-side iterators are
  // allowed to vary in types (conceptually in cv-qualification) so that
  // comparison between cv-qualified and non-cv-qualified iterators be
  // valid.  However, the greedy and unfriendly operators in std::rel_ops
  // will make overload resolution ambiguous (when in scope) if we don't
  // provide overloads whose operands are of the same type.  Can someone
  // remind me what generic programming is about? -- Gaby
#pragma empty_line
  // Forward iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
  // Random access iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // According to the resolution of DR179 not only the various comparison
  // operators but also operator- must accept mixed iterator/const_iterator
  // parameters.
  template<typename _IteratorL, typename _IteratorR, typename _Container>
#pragma empty_line
    // DR 685.
    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    -> decltype(__lhs.base() - __rhs.base())
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   * @addtogroup iterators
   * @{
   */
#pragma empty_line
  // 24.4.3  Move iterators
  /**
   *  Class template move_iterator is an iterator adapter with the same
   *  behavior as the underlying iterator except that its dereference
   *  operator implicitly converts the value returned by the underlying
   *  iterator's dereference operator to an rvalue reference.  Some
   *  generic algorithms can be called with move iterators to replace
   *  copying with moving.
   */
  template<typename _Iterator>
    class move_iterator
    {
    protected:
      _Iterator _M_current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      // NB: DR 680.
      typedef _Iterator pointer;
      typedef value_type&& reference;
#pragma empty_line
      move_iterator()
      : _M_current() { }
#pragma empty_line
      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }
#pragma empty_line
      template<typename _Iter>
 move_iterator(const move_iterator<_Iter>& __i)
 : _M_current(__i.base()) { }
#pragma empty_line
      iterator_type
      base() const
      { return _M_current; }
#pragma empty_line
      reference
      operator*() const
      { return std::move(*_M_current); }
#pragma empty_line
      pointer
      operator->() const
      { return _M_current; }
#pragma empty_line
      move_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }
#pragma empty_line
      move_iterator
      operator++(int)
      {
 move_iterator __tmp = *this;
 ++_M_current;
 return __tmp;
      }
#pragma empty_line
      move_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }
#pragma empty_line
      move_iterator
      operator--(int)
      {
 move_iterator __tmp = *this;
 --_M_current;
 return __tmp;
      }
#pragma empty_line
      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }
#pragma empty_line
      move_iterator&
      operator+=(difference_type __n)
      {
 _M_current += __n;
 return *this;
      }
#pragma empty_line
      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }
#pragma empty_line
      move_iterator&
      operator-=(difference_type __n)
      {
 _M_current -= __n;
 return *this;
      }
#pragma empty_line
      reference
      operator[](difference_type __n) const
      { return std::move(_M_current[__n]); }
    };
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }
#pragma empty_line
  // DR 685.
  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
       const move_iterator<_Iterator>& __x)
    { return __x + __n; }
#pragma empty_line
  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(const _Iterator& __i)
    { return move_iterator<_Iterator>(__i); }
#pragma empty_line
  // @} group iterators
#pragma empty_line
}
#pragma line 70 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
// Debugging support implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2003, 2004, 2005, 2006, 2007, 2008, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file debug/debug.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/** Macros and namespaces used by the implementation outside of debug
 *  wrappers to verify certain properties. The __glibcxx_requires_xxx
 *  macros are merely wrappers around the __glibcxx_check_xxx wrappers
 *  when we are compiling with debug mode, but disappear when we are
 *  in release mode so that there is no checking performed in, e.g.,
 *  the standard library algorithms.
*/
#pragma empty_line
// Debug mode namespaces.
#pragma empty_line
/**
 * @namespace std::__debug
 * @brief GNU debug code, replaces standard behavior with debug behavior.
 */
namespace std
{
  namespace __debug { }
}
#pragma empty_line
/** @namespace __gnu_debug
 *  @brief GNU debug classes for public use.
*/
namespace __gnu_debug
{
  using namespace std::__debug;
}
#pragma line 72 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  // See http://gcc.gnu.org/ml/libstdc++/2004-08/msg00167.html: in a
  // nutshell, we are partially implementing the resolution of DR 187,
  // when it's safe, i.e., the value_types are equal.
  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = std::move(*__a);
          *__a = std::move(*__b);
          *__b = std::move(__tmp);
 }
    };
#pragma empty_line
  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
#pragma empty_line
  /**
   *  @brief Swaps the contents of two iterators.
   *  @ingroup mutating_algorithms
   *  @param  a  An iterator.
   *  @param  b  Another iterator.
   *  @return   Nothing.
   *
   *  This function swaps the values pointed to by two iterators, not the
   *  iterators themselves.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
#pragma empty_line
      // concept requirements
#pragma line 134 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
#pragma empty_line
  /**
   *  @brief Swap the elements of two sequences.
   *  @ingroup mutating_algorithms
   *  @param  first1  A forward iterator.
   *  @param  last1   A forward iterator.
   *  @param  first2  A forward iterator.
   *  @return   An iterator equal to @p first2+(last1-first1).
   *
   *  Swaps each element in the range @p [first1,last1) with the
   *  corresponding element in the range @p [first2,(last1-first1)).
   *  The ranges must not overlap.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @return   The lesser of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
#pragma empty_line
      //return __b < __a ? __b : __a;
      if (__b < __a)
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @return   The greater of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
#pragma empty_line
      //return  __a < __b ? __b : __a;
      if (__a < __b)
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The lesser of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__b, __a) ? __b : __a;
      if (__comp(__b, __a))
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The greater of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__a, __b) ? __b : __a;
      if (__comp(__a, __b))
 return __b;
      return __a;
    }
#pragma empty_line
#pragma empty_line
  // If _Iterator has a base returns it otherwise _Iterator is returned
  // untouched
  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };
#pragma empty_line
  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };
#pragma empty_line
  // If _Iterator is a __normal_iterator return its base (a plain pointer,
  // normally) otherwise return it untouched.  See copy, fill, ... 
  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
  // Likewise, for move_iterator.
  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
  // All of these auxiliary structs serve two purposes.  (1) Replace
  // calls to copy with memmove whenever possible.  (Memmove, not memcpy,
  // because the input and output ranges are permitted to overlap.)
  // (2) If we're using random access iterators, then write the loop as
  // a for loop with an explicit count.
#pragma empty_line
  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = std::move(*__first);
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = std::move(*__first);
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);
#pragma empty_line
      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }
#pragma empty_line
  // Helpers for streambuf iterators (either istream or ostream).
  // NB: avoid including <iosfwd>, relatively large.
  template<typename _CharT>
    struct char_traits;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
#pragma empty_line
  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  An input iterator.
   *  @param  last   An input iterator.
   *  @param  result An output iterator.
   *  @return   result + (first - last)
   *
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).  Result may not be contained within
   *  [first,last); the copy_backward function should be used instead.
   *
   *  Note that the end of the output range is permitted to be contained
   *  within [first,last).
  */
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma empty_line
#pragma empty_line
  /**
   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  An input iterator.
   *  @param  last   An input iterator.
   *  @param  result An output iterator.
   *  @return   result + (first - last)
   *
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).  Result may not be contained within
   *  [first,last); the move_backward function should be used instead.
   *
   *  Note that the end of the output range is permitted to be contained
   *  within [first,last).
  */
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return std::__copy_move_a2<true>(std::__miter_base(__first),
           std::__miter_base(__last), __result);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = std::move(*--__last);
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = std::move(*--__last);
   return __result;
 }
    };
#pragma empty_line
#pragma empty_line
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
#pragma empty_line
  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  A bidirectional iterator.
   *  @param  last   A bidirectional iterator.
   *  @param  result A bidirectional iterator.
   *  @return   result - (first - last)
   *
   *  The function has the same effect as copy, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range [first,last).  Use copy instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma empty_line
#pragma empty_line
  /**
   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  A bidirectional iterator.
   *  @param  last   A bidirectional iterator.
   *  @param  result A bidirectional iterator.
   *  @return   result - (first - last)
   *
   *  The function has the same effect as move, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range [first,last).  Use move instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return std::__copy_move_backward_a2<true>(std::__miter_base(__first),
      std::__miter_base(__last),
      __result);
    }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }
#pragma empty_line
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }
#pragma empty_line
  // Specialization: for char types we can use memset.
  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
#pragma empty_line
  /**
   *  @brief Fills the range [first,last) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  first  A forward iterator.
   *  @param  last   A forward iterator.
   *  @param  value  A reference-to-const of arbitrary type.
   *  @return   Nothing.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @c wmemset.
  */
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }
#pragma empty_line
  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
#pragma empty_line
  /**
   *  @brief Fills the range [first,first+n) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  first  An output iterator.
   *  @param  n      The count of copies to perform.
   *  @param  value  A reference-to-const of arbitrary type.
   *  @return   The iterator at first+n.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @ wmemset.
   *
   *  _GLIBCXX_RESOLVE_LIB_DEFECTS
   *  DR 865. More algorithms that throw away information
  */
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }
#pragma empty_line
  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };
#pragma empty_line
  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }
#pragma empty_line
      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };
#pragma empty_line
  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }
#pragma empty_line
      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };
#pragma empty_line
  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };
#pragma empty_line
  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }
#pragma empty_line
  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);
#pragma empty_line
      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
#pragma empty_line
  /**
   *  @brief Finds the first position in which @a val could be inserted
   *         without changing the ordering.
   *  @param  first   An iterator.
   *  @param  last    Another iterator.
   *  @param  val     The search term.
   *  @return         An iterator pointing to the first element <em>not less
   *                  than</em> @a val, or end() if every element is less than 
   *                  @a val.
   *  @ingroup binary_search_algorithms
  */
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;
#pragma empty_line
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                                  ;
#pragma empty_line
      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;
#pragma empty_line
      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
#pragma empty_line
  /// This is a helper function for the sort routines and for random.tcc.
  //  Precondition: __n > 0.
  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }
#pragma empty_line
  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }
#pragma empty_line
  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }
#pragma empty_line
  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }
#pragma empty_line
}
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @return   A boolean true or false.
   *
   *  This compares the elements of two ranges using @c == and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
#pragma empty_line
  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param binary_pred A binary predicate @link functors
   *                  functor@endlink.
   *  @return         A boolean true or false.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
#pragma empty_line
  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param  last2   An input iterator.
   *  @return   A boolean true or false.
   *
   *  <em>Returns true if the sequence of elements defined by the range
   *  [first1,last1) is lexicographically less than the sequence of elements
   *  defined by the range [first2,last2).  Returns false otherwise.</em>
   *  (Quoted from [25.3.8]/1.)  If the iterators are all character pointers,
   *  then this is an inline call to @c memcmp.
  */
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {
      // concept requirements
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
                                                       ;
#pragma empty_line
      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
#pragma empty_line
  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param  last2   An input iterator.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   A boolean true or false.
   *
   *  The same as the four-parameter @c lexicographical_compare, but uses the
   *  comp parameter instead of @c <.
  */
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
                                                       ;
#pragma empty_line
      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
#pragma empty_line
  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using @c == and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma empty_line
  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param binary_pred A binary predicate @link functors
   *         functor@endlink.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma empty_line
}
#pragma empty_line
// NB: This file is included within many other C++ includes, as a way
// of getting the base algorithms. So, make sure that parallel bits
// come in too if requested. 
#pragma line 42 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\array" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\tr1_impl/array" 1 3
// class template array -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009, 2010 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file tr1_impl/array
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
namespace std
{
#pragma empty_line
#pragma empty_line
  /**
   *  @brief A standard container for storing a fixed size sequence of elements.
   *
   *  @ingroup sequences
   *
   *  Meets the requirements of a <a href="tables.html#65">container</a>, a
   *  <a href="tables.html#66">reversible container</a>, and a
   *  <a href="tables.html#67">sequence</a>.
   *
   *  Sets support random access iterators.
   *
   *  @param  Tp  Type of element. Required to be a complete type.
   *  @param  N  Number of elements.
  */
  template<typename _Tp, std::size_t _Nm>
    struct array
    {
      typedef _Tp value_type;
#pragma empty_line
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
#pragma empty_line
      typedef value_type& reference;
      typedef const value_type& const_reference;
      typedef value_type* iterator;
      typedef const value_type* const_iterator;
      typedef std::size_t size_type;
      typedef std::ptrdiff_t difference_type;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
#pragma empty_line
      // Support for zero-sized arrays mandatory.
      value_type _M_instance[_Nm ? _Nm : 1];
#pragma empty_line
      // No explicit construct/copy/destroy for aggregate type.
#pragma empty_line
      void
#pragma empty_line
      // DR 776.
      fill(const value_type& __u)
#pragma empty_line
#pragma empty_line
#pragma empty_line
      { std::fill_n(begin(), size(), __u); }
#pragma empty_line
      void
      swap(array& __other)
      { std::swap_ranges(begin(), end(), __other.begin()); }
#pragma empty_line
      // Iterators.
      iterator
      begin()
      { return iterator(&_M_instance[0]); }
#pragma empty_line
      const_iterator
      begin() const
      { return const_iterator(&_M_instance[0]); }
#pragma empty_line
      iterator
      end()
      { return iterator(&_M_instance[_Nm]); }
#pragma empty_line
      const_iterator
      end() const
      { return const_iterator(&_M_instance[_Nm]); }
#pragma empty_line
      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }
#pragma empty_line
      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }
#pragma empty_line
      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }
#pragma empty_line
      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }
#pragma empty_line
#pragma empty_line
      const_iterator
      cbegin() const
      { return const_iterator(&_M_instance[0]); }
#pragma empty_line
      const_iterator
      cend() const
      { return const_iterator(&_M_instance[_Nm]); }
#pragma empty_line
      const_reverse_iterator
      crbegin() const
      { return const_reverse_iterator(end()); }
#pragma empty_line
      const_reverse_iterator
      crend() const
      { return const_reverse_iterator(begin()); }
#pragma empty_line
#pragma empty_line
      // Capacity.
      size_type
      size() const { return _Nm; }
#pragma empty_line
      size_type
      max_size() const { return _Nm; }
#pragma empty_line
      bool
      empty() const { return size() == 0; }
#pragma empty_line
      // Element access.
      reference
      operator[](size_type __n)
      { return _M_instance[__n]; }
#pragma empty_line
      const_reference
      operator[](size_type __n) const
      { return _M_instance[__n]; }
#pragma empty_line
      reference
      at(size_type __n)
      {
 if (__n >= _Nm)
   std::__throw_out_of_range(("array::at"));
 return _M_instance[__n];
      }
#pragma empty_line
      const_reference
      at(size_type __n) const
      {
 if (__n >= _Nm)
   std::__throw_out_of_range(("array::at"));
 return _M_instance[__n];
      }
#pragma empty_line
      reference
      front()
      { return *begin(); }
#pragma empty_line
      const_reference
      front() const
      { return *begin(); }
#pragma empty_line
      reference
      back()
      { return _Nm ? *(end() - 1) : *end(); }
#pragma empty_line
      const_reference
      back() const
      { return _Nm ? *(end() - 1) : *end(); }
#pragma empty_line
      _Tp*
      data()
      { return &_M_instance[0]; }
#pragma empty_line
      const _Tp*
      data() const
      { return &_M_instance[0]; }
    };
#pragma empty_line
  // Array comparisons.
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return std::equal(__one.begin(), __one.end(), __two.begin()); }
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator!=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one == __two); }
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator<(const array<_Tp, _Nm>& __a, const array<_Tp, _Nm>& __b)
    {
      return std::lexicographical_compare(__a.begin(), __a.end(),
       __b.begin(), __b.end());
    }
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator>(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return __two < __one; }
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator<=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one > __two); }
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    inline bool
    operator>=(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
    { return !(__one < __two); }
#pragma empty_line
  // Specialized algorithms [6.2.2.2].
  template<typename _Tp, std::size_t _Nm>
    inline void
    swap(array<_Tp, _Nm>& __one, array<_Tp, _Nm>& __two)
    { __one.swap(__two); }
#pragma empty_line
  // Tuple interface to class template array [6.2.2.5].
#pragma empty_line
  /// tuple_size
  template<typename _Tp>
    class tuple_size;
#pragma empty_line
  /// tuple_element
#pragma empty_line
  template<std::size_t _Int, typename _Tp>
#pragma empty_line
#pragma empty_line
#pragma empty_line
    class tuple_element;
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
    struct tuple_size<array<_Tp, _Nm> >
#pragma empty_line
    { static const std::size_t value = _Nm; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp, std::size_t _Nm>
#pragma empty_line
    const std::size_t
#pragma empty_line
#pragma empty_line
#pragma empty_line
    tuple_size<array<_Tp, _Nm> >::value;
#pragma empty_line
#pragma empty_line
  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
#pragma empty_line
#pragma empty_line
#pragma empty_line
    struct tuple_element<_Int, array<_Tp, _Nm> >
    { typedef _Tp type; };
#pragma empty_line
#pragma empty_line
  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline _Tp&
    get(array<_Tp, _Nm>& __arr)
    { return __arr[_Int]; }
#pragma empty_line
#pragma empty_line
  template<std::size_t _Int, typename _Tp, std::size_t _Nm>
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline const _Tp&
    get(const array<_Tp, _Nm>& __arr)
    { return __arr[_Int]; }
#pragma empty_line
#pragma empty_line
}
#pragma line 51 "C:/Xilinx/Vivado_HLS/2015.4/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\array" 2 3
#pragma line 4 "VivadoTest/bla.h" 2
#pragma empty_line
const int count = 8;
typedef std::array<int, count> EightInts;
#pragma empty_line
void gonzomain(EightInts& output, const EightInts input );
#pragma line 2 "VivadoTest/bla.cpp" 2
#pragma empty_line
void gonzomain(EightInts& output, const EightInts input) {
#pragma empty_line
 for(int i = 0; i < count; ++i) {
  output[i] = input[i] + 3;
 }
}
