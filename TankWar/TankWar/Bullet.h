#pragma once
#include "Draw.h"
class CBullet:virtual public Draw
{
public:
	CBullet();
	~CBullet() ;
	//CBullet();
	void InitBullet(int tankID, int bulletX, int bulletY, int direction, bool isValid, clock_t sTime, int oldX, int oldY);
	bool printBullet( );
	void move(int direction);
	void moveBulletAuto();
	void loopMove();
	void clearBullet();
	 int getBulletX();
	 int getBulletY();
	 int getDirection();
	bool getIsValid();
	void setIsValid(bool valid);
	void setsTime(clock_t c);
	clock_t getsTime();
	
//private:
	 int BulletID;			//子弹编号
	 int TankID;			//坦克ID
	 int BulletX;			//子弹x坐标
	 int BulletY;			//子弹y坐标
	 int Direction;		    //子弹方向
	bool isValid;			//子弹是否有效
	 int oldBulletX;
	 int oldBulletY;
	clock_t sendTime;					//子弹发射的时间
	 int nLevel;			//子弹等级
protected:
	//static list<CBullet> ListBullet;

};

