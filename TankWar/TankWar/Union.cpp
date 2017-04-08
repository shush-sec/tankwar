#include "stdafx.h"
#include "Union.h"
#include "Control.h"
#include "Draw.h"



//敌军被子弹击中 更新HP、更新计分板
void CUnion::enemyBeAttack(int posX, int posY)
{
	int tank = CData::GetTypeOfMap(posX, posY);
	VTank[tank + 2].clearTank();
	VTank[tank + 2].setnMaxHP(VTank[tank + 2].getMaxHP() - 1);
	Control::updateTableau();
}


//功能：处理子弹碰到障碍物
//参数：坐标位置的物质类型
void CUnion::attackSomeThing(int mapType, CBullet& bullet)
{
	//如果坐标位置是敌方坦克并且是我方发的子弹子弹才做处理
	if (mapType >= TANK_B1&& mapType <= TANK_B6 && bullet.TankID < 2)
	{
		int enemyTankID = mapType - 0x10 + 1;
		VTank[enemyTankID].clearTank();
		VTank[enemyTankID].setnMaxHP(VTank[enemyTankID].getMaxHP() - 1);
		Control::updateTableau();
		bullet.setIsValid(false);
	}
	//如果坐标位置是我方坦克并且是敌方发射的子弹
	else if ((mapType == TANK_C || mapType == TANK_A) && bullet.TankID >= 2)
	{
		if (mapType == TANK_C)
		{
			VTank[0].setnMaxHP(VTank[0].getMaxHP() - 1);
			Control::updateMyTableau();
			bullet.setIsValid(false);
		}
		else
		{
			VTank[1].setnMaxHP(VTank[1].getMaxHP() - 1);
			Control::updateMyTableau();
			bullet.setIsValid(false);
		}

	}
	//如果是可破坏的墙则摧毁
	else if (mapType == WALL_A || mapType == WALL_H)
	{
		CData::SetTypeOfMap(bullet.BulletX, bullet.BulletY, WALL__);
		Draw::writeChar(bullet.BulletX, bullet.BulletY, "  ", 0);
		bullet.setIsValid(false);
	}
	bullet.setIsValid(false);

}

list<CBullet> CUnion::ListBullet;

vector<CTank> CUnion::VTank;
