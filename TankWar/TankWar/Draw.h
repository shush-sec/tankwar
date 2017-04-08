#pragma once
#include "Data.h"


  class Draw :public CData
{
public:
	static void writeChar(int x, int y, char * pszChar, char wArr);
	static bool SetWindowSize(char* pszWindowTitle, int nX, int nY);
	static void DrawMap(int nMap[][MAP_WIDTH]);
	//打印记分板
	
	
	//显示选项
	static int showOption();
	static void showConfig();
	static void clearConsole(int x);
	static void help();
	static void editMap();
protected:
	static int countEnemyTank;	//敌方坦克总数量
	static int countMyTank;   //我方坦克总数量
	static int speedMoveTank;	//敌方坦克移动速度
	static int speedMoveBullet;	//子弹飞行速度
	static int enemyTankHP;	//敌方坦克血值
	static int myTankHP;		//我方坦克血值

};

 