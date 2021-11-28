/*
 * =====================================================================================
 *
 *       Filename:  fast.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/28/2021 16:45:00
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  George Potoshin (GP), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef FANCY_AST_FAST_H
#define FANCY_AST_FAST_H

#include <stdint.h>

typedef uint32_t fast_stat;
typedef void* fast_info;
typedef struct Fast_element fast_element;

#define FAST_FANCTION 0x000000
#define FAST_OPERATOR 0x000001
#define FAST_VARIABLE 0x000002

struct Fast_element{
	fast_stat type;
	fast_info info;
	fast_element next;
};

#endif
