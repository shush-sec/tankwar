#include "stdafx.h"
#include "Bullet.h"
#include "Union.h"
using  namespace std;

#pragma region  
CBullet::CBullet() :isValid(true)
{

}

CBullet::~CBullet()
{
	
}
 int CBullet::getBulletX()
{
	return BulletX;
}
 int CBullet::getBulletY()
{
	return BulletY;
}
 int CBullet::getDirection()
{
	return Direction;
}
void  CBullet::setsTime(clock_t c)
{
	sendTime = c;
}
clock_t CBullet::getsTime()
{
	return sendTime;
}

bool CBullet::getIsValid()
{
	return isValid;
}
void CBullet::setIsValid(bool valid)
{
	isValid = valid;
}
#pragma endregion 

//清除子弹
void CBullet::clearBullet()
{
	int bOldIsThrough = CData::GetTypeOfMap(this->oldBulletX, this->oldBulletY);
	//为了防止贴墙发子弹导致清除墙
	if (bOldIsThrough == WALL__ || bOldIsThrough == WALL_A
		|| bOldIsThrough == WALL_H || bOldIsThrough == MISSIL_1
		|| bOldIsThrough == MISSIL_2)
	{
		CData::SetTypeOfMap(this->oldBulletX, this->oldBulletY, WALL__);
		Draw::writeChar(this->oldBulletX, this->oldBulletY, "  ", 0);
	}

}

//功能：子弹向指定的方向移动一步
//参数：移动的方向
//返回值：无
void CBullet::move(int direction)
{
	this->clearBullet();
	if (this->printBullet())
	{
		this->oldBulletY = BulletY;
		this->oldBulletX = BulletX;
		switch (direction)
		{
		case UP:
			--BulletY;
			break;
		case DOWN:
			++BulletY;
			break;
		case LEFT:
			--BulletX;
			break;
		case RIGHT:
			++BulletX;
			break;
		}
	}
}

//打印子弹如果是空道才打印返回true,否则返回false,然后调用attackSomeThing()
bool CBullet::printBullet()
{
	int mapType = CData::GetTypeOfMap(this->BulletX, this->BulletY);
	//如果碰到空道并且没有碰到坦克则打印子弹
	if (mapType == WALL__)
	{
		if (TankID < 2)
		{
			CData::SetTypeOfMap(this->BulletX, this->BulletY, MISSIL_1);
			Draw::writeChar(BulletX, BulletY, "○", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else    //打印敌方子弹
		{
			CData::SetTypeOfMap(this->BulletX, this->BulletY, MISSIL_2);
			Draw::writeChar(BulletX, BulletY, "●", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		return true;
	}
	else
	{
		CUnion::attackSomeThing(mapType,*this);
		return false;
	}

}

//std::vector<CTank>::iterator itr;



void CBullet::InitBullet(int tankID, int bulletX, int bulletY, int direction, bool isValid, clock_t sTime, int oldX, int oldY)
{
	TankID = tankID; 
	BulletX = bulletX;
	BulletY = bulletY;
	Direction = direction;
	this->isValid = isValid; 
	this->sendTime = sTime;
	oldBulletX = oldX;
	oldBulletY = oldY;
}
