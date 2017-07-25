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
	int getKindAttack(Game_Role&role, Game_Boss&boss);//BOSS战斗 普通攻击
	int normalAttack(Game_Role&role, Game_Monster&monster);//小怪战斗 普通攻击
	int skillAttack(Game_Role&role, Game_Monster&monster);//技能攻击
	int frightEach(Game_Role&role, Game_Monster&monster);//与小怪战斗
	int frightBoss(Game_Role&role, Game_Boss&boss);//与BOSS战斗
	string getRandomStr(int length);
	double operateGame();
};