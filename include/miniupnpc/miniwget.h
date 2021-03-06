/* $Id: miniwget.h,v 1.7 2012/06/23 22:35:59 nanard Exp $ */
/* Project : miniupnp
 * Author : Thomas Bernard
 * Copyright (c) 2005-2012 Thomas Bernard
 * This software is subject to the conditions detailed in the
 * LICENCE file provided in this distribution.
 * */
#ifndef __MINIWGET_H__
#define __MINIWGET_H__

#include "declspec.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBSPEC void * getHTTPResponse(int s, int * size);

LIBSPEC void * miniwget(const char *, int *, unsigned int);

LIBSPEC void * miniwget_getaddr(const char *, int *, char *, int, unsigned int);

int parseURL(const char *, char *, unsigned short *, char * *, unsigned int *);

#ifdef __cplusplus
}
#endif

#endif

