#pragma once
#include<iostream>
#include"Game_Role.h"
#include"Game_Monster.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<string>
using namespace std;

class Game_Fight {
public:
	int getKindAttack(Game_Role&role, Game_Boss&boss);//BOSSս�� ��ͨ����
	int normalAttack(Game_Role&role, Game_Monster&monster);//С��ս�� ��ͨ����
	int skillAttack(Game_Role&role, Game_Monster&monster);//���ܹ���
	int frightEach(Game_Role&role, Game_Monster&monster);//��С��ս��
	int frightBoss(Game_Role&role, Game_Boss&boss);//��BOSSս��
	string getRandomStr(int length);
	double operateGame();
};