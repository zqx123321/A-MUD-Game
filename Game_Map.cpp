#pragma once
#include<iostream>
#include"Game_Map.h"
#include"Game_Monster.h"
#include<fstream>
#include<ostream>
#include"Game_Role.h"
#include<windows.h>
using namespace std;


Game_Map::Game_Map(string name,Game_Monster monster,Game_Boss boss):smallMonster(2,monster),bigBoss(1,boss){
	this->name=name;
}

//显示关卡信息
void Game_Map::showInfo(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout<<name<<"   小怪："<<smallMonster[0].getName()<<"   boss："<<bigBoss[0].getName()<<endl<<endl;
}

