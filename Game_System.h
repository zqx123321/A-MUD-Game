#pragma once
#include<iostream>
#include"Game_Map.h"
#include<fstream>
#include<iostream>

using namespace std;

class System {
public:
	int welcomePage();//��ӭҳ
	void introducePage();//��Ϸ���ܽ���
	int chooseRolePage();//ѡ���������

	void showInfoEachBoss(int gameLevel);
	void showInfoEach(vector<Game_Map>&map);//��ͼ��ʾ

	bool isDropEquipment(int choice);//�Ƿ����װ��

	void operateBag(Game_Role& role, int choice);//��������
private:
};