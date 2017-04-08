#pragma once
#include "Bullet.h"
#include "Tank.h"

class CUnion
{
public:

	//敌军被子弹击中 更新HP、更新计分板
	void CUnion::enemyBeAttack(int posX, int posY);

	static void attackSomeThing(int mapType, CBullet& tank);

	static vector<CTank> VTank;
	static list<CBullet> ListBullet;

};

