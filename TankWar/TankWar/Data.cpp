#include "stdafx.h"
#include "Data.h"

int g_sysMap01[MAP_HIGH][MAP_WIDTH] = {
	WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, WALL_B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, 0, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_E, WALL_E, WALL_E, WALL_E, WALL_E, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, WALL_D, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_C, 0, 0, 0, WALL_C, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, WALL_A, WALL_A, WALL_A, 0, WALL_A, WALL_A, 0, 0, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_A, WALL_A, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, WALL_A, WALL_A, 0, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, 0, 0, WALL_A, 0, WALL_A, WALL_A, 0, 0, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, WALL_A, 0, 0, WALL_A, 0, WALL_A, 0, WALL_A, 0, 0, 0, WALL_A, 0, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, WALL_A, WALL_A, WALL_A, 0, 0, WALL_A, 0, 0, WALL_A, 0, 0, 0, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C
};

int CData::g_sysMap00[MAP_HIGH][MAP_WIDTH] = {
	WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_C, \
	WALL_C, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_C, \
	WALL_C, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, WALL_A, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, WALL_G, 0, 0, WALL_H, WALL_H, WALL_H, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, WALL_C, \
	WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C, WALL_C
};

int CData::GetTypeOfMap(int posX, int posY)
{ 
	return g_sysMap00[posY][posX];
}

void CData::SetTypeOfMap(int x, int y, int type)
{
	g_sysMap00[y][x] = type;
}

