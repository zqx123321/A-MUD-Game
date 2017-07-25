#pragma once
#include<iostream>
#include"Game_Map.h"
#include<fstream>
#include<iostream>

using namespace std;

class System {
public:
	int welcomePage();//欢迎页
	void introducePage();//游戏介绍界面
	int chooseRolePage();//选择人物界面

	void showInfoEachBoss(int gameLevel);
	void showInfoEach(vector<Game_Map>&map);//地图显示

	bool isDropEquipment(int choice);//是否掉落装备

	void operateBag(Game_Role& role, int choice);//操作背包
private:
};