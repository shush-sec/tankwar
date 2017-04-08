#pragma once
#include "Draw.h"

class CTank :virtual public Draw
{
public:
	CTank();
	CTank(int tankID, int tankX, int tankY, char dire,int nMaxHP);
	void printTank();
	
	void move(int direction);
	
	
	void clearTank();
	int getId();
	char getDirection();
	int getPosX();
	int getPosY();	
	int getMaxHP();
	 bool getValid();
	void setnMaxHP(int maxHP);
	void setValid(bool valid);
	//检测坐标内是否有某坦克
	static bool isTank(int x, int y, CTank & tank);

	//static bool tankIsThroughTank(int posX, int posY, int direction);//----------------
	static  bool tankIsThrough(int posX, int  posY, int  direction);
//protected:
	 int TankID;     //坦克编号 编号0和1为玩家坦克
	 int TankX;		 //x坐标
	 int TankY;
	 int Direction; //坦克方向
	int nMaxHP;				//坦克最大血量
	clock_t TankTime1;		//用于控制坦克移动速度
	clock_t TankTime2;		//用于控制坦克发射子弹的速度
	clock_t TankTime3;
	 int nLevel;	 //坦克等级
	int nCurHP;				//坦克当前血量
	int nOriginSpeed;		//坦克原始速度
	int nSpeed;				//坦克当前速度
	int nGoDirection;		//坦克想要改变的方向
	int nKill;				//坦克杀敌数
	int nDie;				//坦克死亡次数
	bool isValid;			//坦克是否死亡/
protected:
	//static vector<CTank> VTank;
	
};

