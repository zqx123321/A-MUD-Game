#pragma once
#include<iostream>
#include"Game_Role.h"
#include"Game_Monster.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include <conio.h>
#include <time.h>
#include"Game_Fight.h"
using namespace std;

/*以电脑自带的时间为种子
（因为这个每时每刻都在变，所以可以是的每时每刻生成的数字都不同且等几率），
来达到生成随机数的目的，进而达到计算概率的目的*/
int Game_Fight::getKindAttack(Game_Role&role,Game_Boss&boss){

	srand((unsigned)time(NULL));
	int skillNum=boss.getSkillNum();
	int attackNum=rand()%(skillNum+1);
	if(attackNum==0)return( boss.giveAttack());
	else return(boss.skillAttack(attackNum-1)-role.getDefend());

}

//计算普通攻击所造成的的伤害
int Game_Fight::normalAttack(Game_Role&role,Game_Monster&monster){
	int hurt=role.normalAttack();
	return (hurt);
}

//计算人物技能攻击所造成的伤害
int Game_Fight::skillAttack(Game_Role&role,Game_Monster&monster){

	int inputCheck(int num);
	role.showSkill();
	int choice;
	int num=role.getSkillNum();
	choice=inputCheck(num);
	if(!role.checkMP(role.getskillMP(choice-1))){
		cout<<"MP不足！"<<endl;
		return 0;
	}
	int hurt=role.skillAttack(choice-1);
	return hurt;
}

//战斗核心函数
/*先加载出人物和怪物的基本信息，并在其中调用概率函数
并来显示最终战斗的伤害和对战信息与结果*/
int Game_Fight::frightEach(Game_Role&role,Game_Monster&monster){
	HANDLE hConsole;
	int inputCheck(int num);
	int i=1;
	while (1)
	{
		int choice;

		system("cls");
	    role.showInfo();
		monster.showInfo();

	next:
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"第"<<i<<"回合"<<endl;

		cout<<"1.普通攻击  2.技能攻击"<<endl;;
		choice=inputCheck(2);

		
		int hurt=0;

		if(choice==1) hurt=normalAttack(role,monster);
		else{
			if(!role.getSkillNum()){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout<<"没有技能，不可使用 "<<endl;cout<<endl;
				goto next;
			}
			hurt=skillAttack(role,monster);
			if(!hurt){
				goto next;
			}
		} 
		
		monster.getHurt(hurt);
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<role.getName()<<"攻击"<<monster.getName()<<"造成"<<hurt<<"点伤害"<<endl<<endl;
		if(!monster.checkHP()){ 
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<monster.getName()<<"已阵亡,获得"<<monster.giveExp()<<"点经验"<<endl;
			role.getExp(monster.giveExp());
			role.checkExp();
			return -1;
		}
		role.getHurt(monster.giveAttack()-role.getDefend());
		
		if(!role.checkHP()){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 12);
			cout<<endl<<role.getName()<<"已阵亡"<<endl<<endl;
			cout<<endl<<"快去升到更高的等级，获得更好的装备再来挑战吧!"<<endl<<endl;
			return 1;
		}
		i++;
		cout<<endl;
		system("pause");
	}
}

//与boss的战斗
/*先加载出人物和boss的基本信息，并在其中调用概率函数
并来显示最终战斗的伤害和对战信息与结果
注意：此函数中的boss应该也可*/
int Game_Fight::frightBoss(Game_Role&role,Game_Boss&boss){
	HANDLE hConsole;
	int inputCheck(int num);
	int i=1;
	while (1)
	{
		int choice;

		system("cls");
	    role.showInfo();
		boss.showInfo();
	next:
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"第"<<i<<"回合"<<endl;

		cout<<"1.普通攻击  2.技能攻击"<<endl;

		choice=inputCheck(2);

		int hurt=0;

		if(choice==1) hurt=normalAttack(role,boss);
		else{
			if(!role.getSkillNum()){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout<<"没有技能，不可使用 "<<endl;
				goto next;
				continue;
			}

			hurt=skillAttack(role,boss);
			if(!hurt){
				goto next;
			}
		} 
		
		boss.getHurt(hurt);
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<role.getName()<<"攻击"<<boss.getName()<<"造成"<<hurt<<"点伤害"<<endl<<endl;
		if(!boss.checkHP()){ 
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<boss.getName()<<"已阵亡,获得"<<boss.giveExp()<<"点经验"<<endl;
			role.getExp(boss.giveExp());
			role.checkExp();
			return -1;
		}
		role.getHurt(getKindAttack(role,boss));

		if (!role.checkHP()) {
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 12);
			cout << endl << role.getName() << "已阵亡" << endl << endl;
			cout << endl << "快去升到更高的等级，获得更好的装备再来挑战吧!" << endl << endl;
			return 1;
		}
		cout<<endl;
		system("pause");
		i++;
	}

}

string Game_Fight::getRandomStr(int length)
{
	string standardAnwserArray;

	srand((unsigned)time(NULL));

	for (int i = 0; i<length; i++) {

		standardAnwserArray += 'a' + rand() % 26;
	}
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << endl << "请输入以下攻击命令：";
	cout << standardAnwserArray << endl;

	return standardAnwserArray;
}

double Game_Fight::operateGame()
{
	clock_t start, finish;
	string standardAnwserArray = getRandomStr(5);
	start = clock();
	char ch;
	int i = 0;
	while (i<5)
	{
		ch = getch();
		if (ch == standardAnwserArray[i])
		{
			cout << ch;
			i++;
		}
		else
		{
			cout << '\a';//响铃提示输入错误  
		}
	}
	finish = clock();//游戏结束时间
	cout << endl;
	int time = finish - start;
	double scoreProportion;
	if (time <= 2000)
		scoreProportion = 1;
	else if (time <= 2400)
		scoreProportion = 0.8;
	else if (time <= 2800)
		scoreProportion = 0.6;
	else if (time <= 3200)
		scoreProportion = 0.5;
	else if (time <= 3600)
		scoreProportion = 0.4;
	else if (time <= 4000)
		scoreProportion = 0.2;
	else scoreProportion = 0.1;
	standardAnwserArray = "";

	return scoreProportion;
}
