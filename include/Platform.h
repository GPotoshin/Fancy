/*
 * =====================================================================================
 *
 *       Filename:  Platform.h
 *
 *    Description: This header provides platform specific macros 
 *				   (dllimport, deprecated, ...) 
 *
 *        Version:  1.0
 *        Created:  11/28/2021 15:13:13
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  George Potoshin (GP), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef FANCY_PLATFORM_H
#define FANCY_PLATFORM_H

#ifdef __cplusplus
extern "C" {
#endif

/* MSVC DLL import/export. */
#ifdef _MSC_VER
  #ifdef _CINDEX_LIB_
    #define CINDEX_LINK __declspec(dllexport)
  #else
    #define CINDEX_LINK __declspec(dllimport)
  #endif
#else
  #define CINDEX_LINK
#endif

#ifdef __GNUC__
  #define CINDEX_DEPR __attribute__((deprecated))
#else
  #ifdef _MSC_VER
    #define CINDEX_DEPR __declspec(deprecated)
  #else
    #define CINDEX_DEPR
  #endif
#endif

#ifdef __cplusplus
}
#endif
#endif



#endif
