
#include "stdafx.h"
#include "Control.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Control con;
	con.init();
	while (true)
	{
		int option = Draw::showOption();
		switch (option)
		{
		case 0:con.gameStart(1);			 break;	 //单人游戏
		case 1:con.gameStart(2);			 break;	 //双人游戏
		case 2:Draw::editMap();      	 break;	 //编辑地图
		case 3:Draw::showConfig();	     break;	 //设置
		case 4:Draw::help();		     break;	 //游戏帮助
		case 5:return 0;			     break;	 //退出游戏
		}
	}
	return 0;
}

