/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
//
//  cl_dll.h
//

// 4-23-98  JOHN
#pragma once
//
//  This DLL is linked by the client when they first initialize.
// This DLL is responsible for the following tasks:
//		- Loading the HUD graphics upon initialization
//		- Drawing the HUD graphics every frame
//		- Handling the custum HUD-update packets
//
typedef unsigned char byte;
typedef unsigned short word;
typedef float vec_t;
typedef int (*pfnUserMsgHook)(const char *pszName, int iSize, void *pbuf);
#define _cdecl
#include "util_vector.h"
#ifdef _WIN32
#define EXPORT	_declspec( dllexport )
#else
#define EXPORT
#define stricmp strcasecmp
#define strnicmp strncasecmp
#define stristr	strcasestr
#define strnistr strncasestr
#endif
#include "../engine/cdll_int.h"
#include "../dlls/cdll_dll.h"
#include "render_api.h"
#include "mobility_int.h"
extern cl_enginefunc_t gEngfuncs;
extern render_api_t gRenderAPI;
extern mobile_engfuncs_t gMobileAPI;
extern int g_iXash;
