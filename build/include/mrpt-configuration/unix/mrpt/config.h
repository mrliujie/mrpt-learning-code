/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2018, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */


#ifndef MRPT_CONFIG_H
#define MRPT_CONFIG_H


/** Tell Eigen libray to include MRPT's plugin for Eigen::MatrixBase
  */
#define EIGEN_MATRIXBASE_PLUGIN <mrpt/math/eigen_plugins.h>

/** Implementation of the methods declared above, if needed
  */
#define EIGEN_MATRIXBASE_PLUGIN_POST_IMPL <mrpt/math/eigen_plugins_impl.h>

/** If defined, security checks (ASSERT_'s) will be performed in many MRPT classes even
  *  if "_DEBUG" is not declared, which is then the default behavior.
  */
#define MRPT_ALWAYS_CHECKS_DEBUG                     0
#define MRPT_ALWAYS_CHECKS_DEBUG_MATRICES            0

/** MRPT_BUILT_AS_DLL is defined only if MRPT has been built
  *   as a shared library (.dll/.so) vs. a static library (.lib/.a).
  *  Additionally, MRPT_EXPORTS will be defined only when compiling
  *   the DLLs, not when the user imports them.
  */
#define MRPT_BUILT_AS_DLL

/** Includes the OpenCV library, required for image manipulation. */
#define MRPT_HAS_OPENCV          1

// Version as text:
#define MRPT_OPENCV_VERSION      "3.3.1"

// Version as hexadecimal number: eg. 1.0.0 -> 0x100
#define MRPT_OPENCV_VERSION_NUM  0x331

/** Includes OpenGL & GLUT libraries, required for CDisplayWindows3D to work. */
#define MRPT_HAS_OPENGL_GLUT      1

/** Has PGR Fly Capture 2? */
#define MRPT_HAS_FLYCAPTURE2 0

/** Has PGR Triclops? */
#define MRPT_HAS_TRICLOPS 0

/** Define for including Phidget interface kit interface through the vendor's proprietary API (libPhidget). \sa CStereoGrabber_SVS  */
#define MRPT_HAS_PHIDGET        0

/** Define for including SVS interface through the vendor's proprietary API. \sa CStereoGrabber_SVS */
#define MRPT_HAS_SVS        0

/* do we have MESA Imaging SwissRange 3D camera driver? */
#define MRPT_HAS_SWISSRANGE       0

/* do we have support for XBox Kinect? */
#define MRPT_HAS_KINECT       1

/** Define for including DUO3D interface through the vendor's proprietary API, which enables the definition of some classes in the MRVL namespace. \sa CDUO3DCamera  */
#define MRPT_HAS_DUO3D        0

/* Kinect SDK variants: */
#define MRPT_HAS_KINECT_FREENECT         1
#define MRPT_HAS_KINECT_FREENECT_SYSTEM  0

/* OpenNI2 lib: */
#define MRPT_HAS_OPENNI2                 0

/* PCL (The pointclouds library): */
#define MRPT_HAS_PCL           1

/** The file ftdi.h exists (Linux only) */
#define MRPT_HAS_FTDI             0
#define MRPT_FTDI_VERSION         0x0


/** Support for the liblas library (A standard for LiDAR data format)  */
#define MRPT_HAS_LIBLAS           0

/** wxWidgets is present in the system (required for UTILS::CDisplayWindow, etc.) */
#define MRPT_HAS_WXWIDGETS        1

#define MRPT_HAS_Qt5              1

/** Has MRPT libjpeg? And whether it's in the system (Linux) or built-in (Windows, some rare cases in Linux). */
#define MRPT_HAS_JPEG             1
#define MRPT_HAS_JPEG_SYSTEM      1

/** Matlab wrapper is available */
#define MRPT_HAS_MATLAB           0

/** VTK libs are available */
#define MRPT_HAS_VTK 1

/** jsoncpp is present */
#define MRPT_HAS_JSONCPP 1

/* Automatic definition of OS-macros */
#if defined(_WIN32) || defined(_WIN32_)  || defined(WIN32) || defined(_WIN64)
    #define MRPT_OS_WINDOWS
#elif defined(unix) || defined(__unix__) || defined(__unix)
    #define MRPT_OS_LINUX
#elif defined(__APPLE__)
    #define MRPT_OS_APPLE
#else
    #error Unsupported platform (Found neither _WIN32_, __unix__ or __APPLE__)
#endif


/** The size of cells in mrpt::maps::COccupancyGridMap2D */
#define	OCCUPANCY_GRIDMAP_CELL_SIZE_8BITS

/** Enable Katakana, Hiragana & Kanji character sets in CMRPTCanvas.
  *  Disable this to save executable sizes if these fonts will be not used. */
#define MRPT_HAS_ASIAN_FONTS 1

/** Only for Linux: the inotify kernel module has been found. Requires kernel 2.6.13.  */
#define MRPT_HAS_INOTIFY 1

/** The architecture is 32 or 64 bit wordsize:  */
#define MRPT_WORD_SIZE	64

/** Use optimized functions with the SSE2 machine instructions set */
#if defined WIN32 && (!defined WIN64 || defined EM64T) && \
 (_MSC_VER >= 1400) || (defined __SSE2__ && defined __GNUC__ && __GNUC__ >= 4)
	#define MRPT_HAS_SSE2  1   // This value can be set to 0 from CMake with DISABLE_SSE2
#else
	#define MRPT_HAS_SSE2  0
#endif



/** Use optimized functions with the SSE3 machine instructions set */
#if defined WIN32 && (!defined WIN64 || defined EM64T) && \
 (_MSC_VER >= 1500) || (defined __SSE3__ && defined __GNUC__ && __GNUC__ >= 4)
	#define MRPT_HAS_SSE3  1   // This value can be set to 0 from CMake with DISABLE_SSE3
#else
	#define MRPT_HAS_SSE3  0
#endif

/** Use optimized functions with the SSE4 machine instructions set */
#define MRPT_HAS_SSE4_1  1   // This value can be set to 0 from CMake with DISABLE_SSE4_1
#define MRPT_HAS_SSE4_2  1   // This value can be set to 0 from CMake with DISABLE_SSE4_2
#define MRPT_HAS_SSE4_A  0   // This value can be set to 0 from CMake with DISABLE_SSE4_A

/** Whether to include RoboPeak LIDAR: */
#define MRPT_HAS_ROBOPEAK_LIDAR 1

/** Whether to include the xSens MTi device interface: */
#define MRPT_HAS_xSENS_MT3 1
#define MRPT_HAS_xSENS_MT4 1
/** Whether to include the Intersense device interface: */
#define MRPT_HAS_INTERSENSE 0

/** Whether to include the NITE2 library: */
#define MRPT_HAS_NITE2 0

/** Whether to compile support for .gz compressed I/O streams: */
#define MRPT_HAS_GZ_STREAMS 1

/** Whether ZLIB is present.  */
#define MRPT_HAS_ZLIB 1
#define MRPT_HAS_ZLIB_SYSTEM 1

/** Whether libassimp is present.  */
#define MRPT_HAS_ASSIMP 1
#define MRPT_HAS_ASSIMP_SYSTEM 1

/** Whether libdc1394-2 is installed in the system.  */
#define MRPT_HAS_LIBDC1394_2 0

/** Whether libudev-dev is installed in the system.  */
#define MRPT_HAS_LIBUDEV 1

/** Whether ffmpeg C libraries are installed in the system or (in win32), their precompiled libraries.
  */
#define MRPT_HAS_FFMPEG 1

/** Are we in a big-endian system? (Intel, amd, etc.. are little-endian) */
#define MRPT_IS_BIG_ENDIAN 0

/** Has SuiteSparse sublibs? */
#define MRPT_HAS_SUITESPARSE 1

/** Has NationalInstruments headers/libraries? */
#define MRPT_HAS_NIDAQMXBASE 0
#define MRPT_HAS_NIDAQMX 0

/** Do we have yaml-cpp? */
#define MRPT_HAS_YAMLCPP        1
#define MRPT_HAS_YAMLCPP_SYSTEM 1

/** Do we have PCAP? */
#define MRPT_HAS_LIBPCAP        0


/** Standard headers */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

#ifndef HAVE_STDINT_H
#define HAVE_STDINT_H 1
#endif

#ifndef HAVE_WINSOCK2_H
/* #undef HAVE_WINSOCK2_H */
#endif

#ifndef HAVE_ALLOCA_H
#define HAVE_ALLOCA_H 1
#endif

#ifndef HAVE_LINUX_SERIAL_H
#define HAVE_LINUX_SERIAL_H 1
#endif

#ifndef HAVE_LINUX_INPUT_H
#define HAVE_LINUX_INPUT_H 1
#endif

// Has <malloc.h>?
#ifndef HAVE_MALLOC_H
#define HAVE_MALLOC_H 1
#endif

// Has <malloc/malloc.h>?
#ifndef HAVE_MALLOC_MALLOC_H
/* #undef HAVE_MALLOC_MALLOC_H */
#endif

#ifndef HAVE_FREEGLUT_EXT_H
#define HAVE_FREEGLUT_EXT_H 1
#endif

/** Standard functions */
#ifndef HAVE_TIMEGM
#define HAVE_TIMEGM
#endif

#ifndef HAVE_MKGMTIME
/* #undef HAVE_MKGMTIME */
#endif

#ifndef HAVE_ALLOCA
#define HAVE_ALLOCA
#endif

#ifndef HAVE_GETTID
/* #undef HAVE_GETTID */
#endif

#ifndef HAVE_SINCOS
#define HAVE_SINCOS
#endif

#ifndef HAVE_LRINT
/* #undef HAVE_LRINT */
#endif

#ifndef HAVE_OPENTHREAD
/* #undef HAVE_OPENTHREAD */
#endif

#ifndef HAVE_STRTOK_R
#define HAVE_STRTOK_R
#endif

#ifndef HAVE_ALIGNED_MALLOC
/* #undef HAVE_ALIGNED_MALLOC */
#endif

/* Standard types  */
#ifndef HAVE_LONG_DOUBLE
#define HAVE_LONG_DOUBLE
#endif

/* Defined only if MRPT is being build/was built with precompiled
    headers enabled */
/* #undef MRPT_ENABLE_PRECOMPILED_HDRS */

// -------------------------------
//			Some checks:
// -------------------------------
#if !defined(MRPT_OS_WINDOWS) && !defined(MRPT_OS_LINUX) && !defined(MRPT_OS_APPLE)
#error Neither OS detected from MRPT_OS_LINUX, MRPT_OS_APPLE or MRPT_OS_WINDOWS!
#endif


#endif
