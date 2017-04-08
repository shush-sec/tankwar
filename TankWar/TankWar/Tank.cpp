
#include "stdafx.h"
#include "Tank.h"

#pragma region
CTank::CTank()
{

}
CTank::CTank(int tankID, int tankX, int tankY, char dire, int maxHP)
{
	TankID = tankID;
	TankX = tankX;
	TankY = tankY;
	Direction = dire;
	nGoDirection = dire;
	nMaxHP = maxHP;
	TankTime1 = clock();
	TankTime2 = clock();
	TankTime2 = clock();
	isValid = true;
}
int CTank::getId()
{
	return TankID;
}
char CTank::getDirection()
{
	return Direction;
}
int CTank::getPosX()
{
	return TankX;
}
int CTank::getPosY()
{
	return TankY;
}
int CTank::getMaxHP()
{
	return nMaxHP;
}

void CTank::setnMaxHP(int maxHP)
{
	nMaxHP = maxHP;
}
void CTank::setValid(bool valid)
{
	isValid = valid;
}
bool CTank::getValid()
{
	return isValid;
}
#pragma endregion

//打印 坦克
void CTank::printTank()
{
	 
	if (TankID < 2 ) //TankID 小于2为 我方坦克
	{
		if (TankID == 0)
		{
			//将玩家1坦克写到地图
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					CData::SetTypeOfMap(TankX + j, TankY + i, TANK_C);
				}
			}
		}
		else
		{	//将玩家2坦克写到地图
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					CData::SetTypeOfMap(TankX + j, TankY + i, TANK_A);
				}
			}
		}
		if (this->Direction == UP)
		{
			Draw::writeChar(this->TankX, this->TankY, "  □  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "□□□", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "□  □", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == LEFT)
		{
			Draw::writeChar(this->TankX, this->TankY, "  □□", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "□□  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "  □□", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == DOWN)
		{
			Draw::writeChar(this->TankX, this->TankY, "□  □", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "□□□", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "  □  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == RIGHT)
		{
			Draw::writeChar(this->TankX, this->TankY, "□□  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "  □□", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "□□  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	else     //敌方坦克
	{

		//将坦克坐标写到地图
		for ( int i = 0  ; i < 3; i++){
			for (int j = 0  ; j < 3; j++){
				CData::SetTypeOfMap(TankX + j, TankY + i, TANK_B1+TankID-2);   //TANK_B1
			}
		}
		if (this->Direction == UP)
		{
			Draw::writeChar(this->TankX, this->TankY, "  ■  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "■■■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "■  ■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == LEFT)
		{
			Draw::writeChar(this->TankX, this->TankY, "  ■■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "■■  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "  ■■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == DOWN)
		{
			Draw::writeChar(this->TankX, this->TankY, "■  ■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "■■■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "  ■  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (this->Direction == RIGHT)
		{
			Draw::writeChar(this->TankX, this->TankY, "■■  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 1, "  ■■", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			Draw::writeChar(this->TankX, this->TankY + 2, "■■  ", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	
}
bool CTank::tankIsThrough(int posX, int posY, int direction)
{
	bool bRef = false;
	//碰壁检测
	switch (direction)
	{
	case UP:
		//如果是空道 则通过
		if (CData::GetTypeOfMap(posX, posY - 1) == WALL__
			&& CData::GetTypeOfMap(posX + 1, posY - 1) == WALL__
			&& CData::GetTypeOfMap(posX + 2, posY - 1) == WALL__)
		{
			bRef = true;
		}
		break;
	case DOWN:
		if (CData::GetTypeOfMap(posX, posY + 3) == WALL__
			&& CData::GetTypeOfMap(posX + 1, posY + 3) == WALL__
			&& CData::GetTypeOfMap(posX + 2, posY + 3) == WALL__)
		{
			bRef = true;

		}
		break;
	case LEFT:
		if (CData::GetTypeOfMap(posX - 1, posY) == WALL__
			&& CData::GetTypeOfMap(posX - 1, posY + 1) == WALL__
			&& CData::GetTypeOfMap(posX - 1, posY + 2) == WALL__)
		{
			bRef = true;

		}
		break;
	case RIGHT:
		if (CData::GetTypeOfMap(posX + 3, posY) == WALL__
			&& CData::GetTypeOfMap(posX + 3, posY + 1) == WALL__
			&& CData::GetTypeOfMap(posX + 3, posY + 2) == WALL__)
		{
			bRef = true;
		}

		break;
	}
	return bRef;
}
//清除坦克
void CTank::clearTank()
{
	//信息更新到地图
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			CData::SetTypeOfMap(TankX + i, TankY + j, WALL__);
			Draw::writeChar(TankX + j, TankY + i, "  ", 0);
		}
	}
}

//功能：移动坦克
//参数：移动的方向
//返回值：无
void CTank::move(int direction)
{
	round(time(NULL));
	//判断坦克是否可以通过
	if (tankIsThrough(this->TankX,this->TankY, direction))
	{
		switch (direction)
		{
		case UP:
			this->clearTank();
			this->TankY--;
			this->Direction = UP;
			this->printTank();
			break;
		case DOWN:
			this->clearTank();
			this->TankY++;
			this->Direction = DOWN;
			this->printTank();
			break;
		case LEFT:
			this->clearTank();
			this->TankX--;
			this->Direction = LEFT;
			this->printTank();
			break;
		case RIGHT:
			this->clearTank();
			this->TankX++;
			this->Direction = RIGHT;
			this->printTank();
			break;
		}
	}
	else    //不能通过就只打印
	{
		if (TankID >= 2)   //用于敌方坦克在碰到障碍物时改变方向
		{
			switch (this->Direction)
			{
			case UP:
				 this->Direction = (int)rand() % 4; break;
			case DOWN:
				this->Direction = (int)rand() % 4; break;
			case LEFT:
				this->Direction = (int)rand() % 4; break;
			case RIGHT:
				this->Direction = (int)rand() % 4; break;
			}
		}
		else
		{
			this->Direction = direction;
		}
		
		this->printTank();
	}
}
 

// //移动所有敌方坦克
// void CTank::  moveAllTankAuto()
// {
// 	for (int i = 0; i < countEnemyTank;i++)
// 	{
// 		if (VTank[i + 2].isValid)
// 		{
// 			VTank[i + 2].moveAuto();
// 		}
// 	}
// }

// 发射子弹
// void CTank::sendBullet()
// {
// 	//生成一个子弹
// 	clock_t firstTime = clock();
// 	switch (this->Direction)
// 	{
// 	case UP:
// 		bullet = { this->TankID, this->TankX + 1, this->TankY - 1, this->Direction, true, firstTime, this->TankX + 1, this->TankY - 1 };
// 		break;
// 	case DOWN:
// 		bullet = { this->TankID, this->TankX + 1, this->TankY + 3, this->Direction, true, firstTime, this->TankX + 1, this->TankY + 3 };
// 		break;
// 	case LEFT:
// 		bullet = { this->TankID, this->TankX - 1, this->TankY + 1, this->Direction, true, firstTime, this->TankX - 1, this->TankY + 1 };
// 		break;
// 	case RIGHT:
// 		bullet = { this->TankID, this->TankX + 3, this->TankY + 1, this->Direction, true, firstTime, this->TankX + 3, this->TankY + 1 };
// 		break;
// 	}
// 	//将子弹存入VBullet容器
// 	ListBullet.push_back(bullet);
// 	//移动第一步
// 	bullet.move(this->Direction);
// 
// }


