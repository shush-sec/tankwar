#include "stdafx.h"
#include "Draw.h"
//设置控制台窗口
 bool Draw::SetWindowSize(char* pszWindowTitle, int nX, int nY)
{
	char setConsole[30];
	sprintf_s(setConsole, "mode con cols=%d lines=%d", WINDOWS_WIDTH, WINDOWS_HIGH);
	system(setConsole);
	/*
	HANDLE hStdIn, hStdOut;
	hStdIn = GetStdHandle((STD_INPUT_HANDLE));
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//获取最大控制台窗口大小
	COORD pos = GetLargestConsoleWindowSize(hStdOut);
	COORD bufferSize = { pos.X , pos.Y };

	if (!SetConsoleScreenBufferSize(hStdOut, bufferSize))
	{
	printf("buffer error(%d,%d)%d\n", pos.X , pos.Y, GetLastError());
	return false;
	}

	SMALL_RECT srctWindow = { 0, 0, nX*2+1, nY+1};
	if (!SetConsoleWindowInfo(hStdOut, true, &srctWindow))
	{
	printf("size error %d\n", GetLastError());
	return false;
	}

	COORD buffer = { nX + 1, nY + 1 };
	if (!SetConsoleScreenBufferSize(hStdOut, buffer))
	{
	printf("buffer error(%d,%d)%d\n", buffer.X, buffer.Y, GetLastError());
	return false;
	}*/
	SetConsoleTitleA(pszWindowTitle);
	return true;
}
//打印地图
void Draw::DrawMap(int nMap[][MAP_WIDTH])
{
	for (int i = 0; i <MAP_WIDTH; i++)
	{
		for (int j = 0; j <MAP_HIGH; j++)
		{
			if (nMap[j][i] == WALL_A)
				writeChar(i, j, "▓", BACKGROUND_RED);
			else if (nMap[j][i] == WALL_B)
				writeChar(i, j, "▓", BACKGROUND_RED  );
			else if (nMap[j][i] == WALL_C)
				writeChar(i, j, "〓", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			else if (nMap[j][i] == WALL_D)
				writeChar(i, j, "≈", FOREGROUND_GREEN);
			else if (nMap[j][i] == WALL_H)
				writeChar(i, j, "§", BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
			else if (nMap[j][i] == WALL_G)
				writeChar(i, j, "☆", FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
		}
	}
}
//打印字符
void Draw::writeChar(int x, int y, char * pszChar, char wArr)
{
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);

	COORD loc;
	loc.X = x * 2;
	loc.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), loc);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wArr);

	std::cout<<pszChar;
}


//第一个界面，显示主菜单
int Draw::showOption()
{
	//清屏
	Draw::clearConsole(8);
	Draw::writeChar(15, 11, "坦克大战 v1.0", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	char  ch;
	int option = 0;
	
	writeChar(13, 13 , "→", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	char * options[] = { "单人游戏", "双人游戏", "编辑地图", "设    置", "游戏帮助", "退    出" };
	for (int i = 0; i < 6; i++)
	{
		writeChar(15, 13 + i, options[i], FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	}


	while (true)
	{
		if (_kbhit())
		{
			ch = _getch();

			if (ch == 27)	//esc
			{
				return -1;
			}
			if (ch == 72 || ch == 80||ch == '\r')  //只检测上下键
			{

				if (ch == 72)	//UP
				{
					writeChar(12, 13 + option, "    ", 0);
					option--;
				}
				else if (ch == 80)	//DOWN
				{
					writeChar(12, 13 + option, "    ",0);
					option++;
				}
				if (option < 0)
				{
					option = 0;
				}
				else if (option >= 6)
				{
					option--;
				}
				//处理按上下键之后的显示
				writeChar(13, 13 + option, "                        ",0);
				Sleep(100);
				writeChar(13, 13 + option, "→", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				writeChar(15, 13 + option, options[option], FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				
				if (ch == '\r')
				{
					return option;
				}
			}
		
		}
	}
}
//设置界面
void Draw::showConfig()
{
	Draw::clearConsole(8);
	char  ch;
	int option = 0;
	int num;
	char * charNum = new char[4];
	writeChar(13, 13, "→", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	char * options[] = { "敌方坦克数量", "敌方坦克攻击力", "敌方坦克血量", "敌方坦克移动速度", "敌方坦克自动寻路", "退    出" };
	int optionsNum[] = { countEnemyTank,speedMoveBullet, enemyTankHP,speedMoveTank, 0 };

	//显示选项
	for (int i = 0; i < 6; i++)
	{
		writeChar(15, 13 + i, options[i], FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	}
	//显示选项后的参数
	for (int i = 0; i < 5; i++)
	{
		(char *)_itoa_s(optionsNum[i], charNum, 6, 10);
		writeChar(25, 13 + i, charNum, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	}
	//接受按键
	while (true)
	{
		if (_kbhit())
		{
			ch = _getch();

			//如果退出
			if ((ch == '\r')|| ch == 27)
			{
				//将设置更新
				countEnemyTank = optionsNum[0];
				speedMoveBullet = optionsNum[1];
				enemyTankHP = optionsNum[2];
				speedMoveTank = optionsNum[3];
				return;
			}

			//只检测上下键
			if (ch == 72 || ch == 80 || ch == '\r')
			{

				if (ch == 72)	//UP
				{
					//清除箭头
					writeChar(12, 13 + option, "    ", 0);
					option--;
				}
				else if (ch == 80)	//DOWN
				{
					writeChar(12, 13 + option, "    ", 0);
					option++;
				}
				//防止选项超
				if (option < 0)
				{
					option = 0;
				}
				else if (option >= 6)
				{
					option--;
				}

			}
			//检测左右键
			if (ch == 75 || ch == 77)
			{
				if (ch == 75)  //LEFT
				{
					num = --optionsNum[option];
				}
				else if (ch = 77)   //RIGHT
				{
					num = ++optionsNum[option];
				}

				//防止参数超出范围
				if (optionsNum[option] <= 0)	//限制所有参数最小值为1，第四个参数为0;
				{
					if (option != 4)
					{
						optionsNum[option] = 1;
					}
					else
					{
						optionsNum[option] = 0;
					}
				}
				else if (optionsNum[0] > 4)	 //限制敌方坦克的最大值为4
				{
					optionsNum[0] = 4;
				}
				else if (optionsNum[4] > 1)	//限制第四个参数的最大值为1
				{
					optionsNum[4] = 1;
				}

				(char *)_itoa_s(num, charNum, 6, 10);

				writeChar(25, 13 + option, charNum, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

			}
			//处理按上下键之后的显示
			writeChar(25, 13 + option, "                ", 0);
			writeChar(13, 13 + option, "→", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			writeChar(15, 13 + option, options[option], FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			if (option < 5)
			{
				(char *)_itoa_s(optionsNum[option], charNum, 6, 10);
				writeChar(25, 13 + option, charNum, FOREGROUND_GREEN| FOREGROUND_INTENSITY);

			}
		}
	}
}


//清除指定行的内容
void Draw::clearConsole(int x)
{
	for (int i = 0; i < x;i++)
	{
		writeChar(0, 13+i, "                                                                                                     ", 0);
	}
	
}
//打印帮助
void Draw::help()
{
	Draw::clearConsole(8);
	writeChar(15, 13, "玩家1 通过轻击键盘w、 s、 a、 d四个键控制坦克向上、下、左、右移动，", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	writeChar(15, 14, "      通过轻击空格发射子弹。", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	writeChar(15, 15, "玩家2 通过轻击键盘↑、↓、←、→四个键控制坦克向上、下、左、右移动，", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	writeChar(15, 16, "      通过轻击键盘j发射子弹。", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			if (ch == '\r')
			{
				return;
			}
		}
	}
	
}
void Draw::editMap()
{

}

int Draw::myTankHP;

int Draw::countMyTank;
int Draw::speedMoveBullet;

int Draw::speedMoveTank;

int Draw::countEnemyTank;
int Draw::enemyTankHP;	//敌方坦克血值