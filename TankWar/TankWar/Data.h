#pragma once
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::list;

#pragma region 全局参数定义

#define SPEEDDISTANTBULLET	1200	    //敌方发射子弹的间隔时间

//窗口大小
#define WINDOWS_WIDTH 120   
#define WINDOWS_HIGH  41

//地图大小
#define MAP_WIDTH 45					//地图宽
#define MAP_HIGH  40					//地图高


#define UP    0
#define DOWN  1
#define LEFT  2
#define RIGHT 3

#pragma endregion

#pragma region 常用图案

#define WALL__      0x00  // "  " 空道（不可破话，  可通过）				
#define WALL_A      0x01  // "▓" 土墙（  可破坏，不可通过）		
#define WALL_B      0x02  // "卍" 土墙（  可破坏, 不可通过，土墙的破坏形态）
#define WALL_C      0x03  // "〓" 铁墙 (不可破坏, 不可通过)
#define WALL_D      0x04  // "≈" 河流（不可破坏,   子弹可通过，坦克不可通过）
#define WALL_E      0x05  // "≡" 丛林（不可破坏，  可通过，可以隐身）	
#define WALL_G      0x06  // "☆" 箱子（不可破坏，  可拾取，加属性）
#define WALL_H      0x07  // "§" 基地（  可破坏，不可通过)

#define TANK_C       0x10  //  "□"	//我方坦克1
#define TANK_B1      0x11  //  "■"	//敌方坦克1
#define TANK_B2      0x12  //  "■"	//敌方坦克2
#define TANK_B3      0x13  //  "■"	//敌方坦克3
#define TANK_B4      0x14  //  "■"	//敌方坦克4
#define TANK_B5      0x15  //  "■"	//敌方坦克5
#define TANK_B6      0x16  //  "■"	//敌方坦克6
#define TANK_A       0x19  //  "□" //我方坦克2
#define TANK_D       0x18  //  "◇"
#define TANK_E       0x17  //  "○"

#define BLOOD_0     0x20   //  "  "
#define BLOOD_1     0x21   //  "①"
#define BLOOD_2     0x22   //  "②"
#define BLOOD_3     0x23   //  "③"
#define BLOOD_4     0x24   //  "④"
#define BLOOD_5     0x25   //  "⑤"
#define BLOOD_6     0x26   //  "⑥"
#define BLOOD_7     0x27   //  "⑦"
#define BLOOD_8     0x28   //  "⑧"
#define BLOOD_9     0x29   //  "⑨"

#define MISSIL_0    0x30   //  "  "
#define MISSIL_1    0x31   //  "○"
#define MISSIL_2    0x32   //  "●"
#define MISSIL_3    0x33   //  "¤"
#define MISSIL_4    0x34   //  "◇"
#define MISSIL_5    0x35   //  "◎"
#define MISSIL_6    0x36   //  "↑"
#define MISSIL_7    0x37   //  "↓"
#define MISSIL_8    0x38   //  "←"
#define MISSIL_9    0x39   //  "→"
#pragma endregion

class CData
{
public:
	static int GetTypeOfMap(int x, int y);
	static void SetTypeOfMap(int x, int y, int type);

	static int g_sysMap00[MAP_HIGH][MAP_WIDTH];

};

#pragma region 地图
extern int g_sysMap01[MAP_HIGH][MAP_WIDTH];

#pragma endregion