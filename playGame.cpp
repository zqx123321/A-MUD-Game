#pragma once

#include<iostream>
#include<windows.h>
#include<vector>
#include"Game_Map.h"
#include"Game_Equipment.h"
#include"Game_System.h"
#include<time.h>
#include"Game_Fight.h"

using namespace std;


void playGame(){
	int inputCheck(int num);
	void saveMap(vector<Game_Map>&map);

	Game_Role playRole(0, 0, 0, 0, "人物", 1);
	Game_Role WuKong(110, 30, 25, 2, "悟空", 1);
	Game_Role TangSeng(100, 50, 30, 1, "唐僧", 2);
	Game_Role BaJie(160, 30, 20, 5, "八戒", 3);
	Game_Role ShaSeng(130, 40, 25, 3, "沙僧", 4);

	vector<Game_Map>map;

	void initMap(vector<Game_Map>&map,int mapLevel);

	System newSystem; //创建系统函数
	Game_Fight newFight;

	int welChoose = newSystem.welcomePage(); //欢迎页的选择
	int roleChoose;//人物选择
				   //新的游戏

	int gameLevel=1;

	if (welChoose == 1) {
		system("cls");
		newSystem.introducePage();
		roleChoose = newSystem.chooseRolePage();
		
		switch (roleChoose)
		{
		case 1:
			/*创建孙悟空*/playRole = WuKong; break;
		case 2:
			/*创建唐 僧*/playRole = TangSeng; break;
		case 3:
			/*创建猪八戒*/playRole = BaJie; break;
		case 4:
			/*创建沙 僧*/playRole = ShaSeng; break;
		}
		

	initMap(map,gameLevel);
	}
	//读取游戏
	else if (welChoose == 2) {
		void readMap(vector<Game_Map>&map);
		system("cls");
		void readGame(Game_Role&role);
		readGame(playRole);
		readMap(map);
		gameLevel=map.size();

	}

	while(1){
		void playPeace();
		playPeace();
		HANDLE hConsole;
		if (welChoose == 3){
		//	退出游戏
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<endl<<endl<<"欢迎下次再来！"<<endl;
			break;
		}
		system("cls");
		int choice;
		int result;
		int playChoice;
		playRole.fullHP();
		playRole.fullMP();
again:
		playRole.showInfo();

		//游戏操作主线
		while(1){
			HANDLE hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole,  14);
			cout<<"1.选择关卡      2.我的背包        3.退出游戏"<<endl;
			int newChoice=inputCheck(3);
			if(newChoice==1)break;
			if(newChoice==2){
				while(1){
					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, 11);
					cout<<"1.所有装备      2.卸下装备      3.使用装备      4.返回"<<endl;
					int nextChoice=inputCheck(4);		

					system("cls");
					playRole.showInfo();
					if(nextChoice==4)break;
			
					newSystem.operateBag(playRole,nextChoice);
				}
			
			}
			if(newChoice==3){
				//退出游戏
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 14);
				cout<<endl<<endl<<"欢迎下次再来！"<<endl;
				return;
			}
		}
		newSystem.showInfoEach(map);

		playChoice=inputCheck(map.size());
		
		

	
		system("cls");
		playRole.showInfo();

			
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "第" << playChoice << "关" << '\t';

		map[playChoice - 1].showInfo();
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"1.开始战斗    2.我的背包"<<endl;

		choice=inputCheck(2);

		if(choice == 2){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<endl<<"请选择你要执行的操作："<<endl;
			while(1){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout<<"1.所有装备      2.卸下装备      3.使用装备      4.返回"<<endl;
				int nextChoice=inputCheck(4);
				if(nextChoice==4)break;

				system("cls");
				playRole.showInfo();


				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout << "第" << playChoice << "关" << '\t';

				map[playChoice - 1].showInfo();
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 10);
				cout << "1.开始战斗    2.我的背包" << endl;

				newSystem.operateBag(playRole,nextChoice);
			}

		}
		void playFright();
		playFright();
		//第一个小怪
		Game_Monster monster_1=map[playChoice-1].generateMonster(0);

		system("cls");

		playRole.showInfo();

		cout<<"小怪1:  ";
		monster_1.showInfo();
		
		result=newFight.frightEach(playRole,monster_1);


		if (result == 1) {
			playRole.fullMP();
			playRole.fullHP();
			system("pause");
			system("cls");
			goto again;
		}
		else {
			bool isDropPillOfHP = newSystem.isDropEquipment(8);//调用 掉落装备概率 函数 来模拟 掉落物品概率
			if (isDropPillOfHP) {
				//有一定几率掉落物品
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout << "恭喜获得掉落物品  金疮药(HP+50)" << endl;
				playRole.addRoleHP(50);
			}
			Sleep(1000);
			bool isDropPillOfMP = newSystem.isDropEquipment(8);
			if (isDropPillOfMP) {
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout << "恭喜获得掉落物品  凝神丸(MP+30)" << endl;
				playRole.addRoleHP(30);
			}
		}
		cout<<endl<<endl<<"按任意键后将出现第二个小怪......"<<endl;

		system("pause");

		//第二个小怪
		Game_Monster monster_2=map[playChoice-1].generateMonster(1);

		system("cls");

		playRole.showInfo();

		cout<<"小怪2:  ";

		monster_2.showInfo();

		result=newFight.frightEach(playRole,monster_2);

		if (result == 1) {
			playRole.fullMP();
			playRole.fullHP();
			system("pause");
			system("cls");
			goto again;
		}
		else {
			//有一定几率掉落物品
			bool isDropPillOfHP = newSystem.isDropEquipment(8);//调用 掉落装备概率 函数 来模拟 掉落物品概率
			if (isDropPillOfHP) {
				cout << "恭喜获得掉落物品  金疮药(HP+50)" << endl;
				playRole.addRoleHP(50);
			}
			Sleep(1000);
			bool isDropPillOfMP = newSystem.isDropEquipment(8);
			if (isDropPillOfMP) {
				cout << "恭喜获得掉落物品  凝神丸(MP+30)" << endl;
				playRole.addRoleHP(30);
			}
		}
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<endl<<"你已经清除所有小怪，按任意键后将出现本关卡的Boss......"<<endl;
		system("pause");
		system("cls");
		newSystem.showInfoEachBoss(playChoice);
		system("pause");

		//关卡BOSS
		Game_Boss boss=map[playChoice-1].generateBoss();

		system("cls");

		playRole.showInfo();

		cout<<"Boss:  ";

		boss.showInfo();

		result=newFight.frightBoss(playRole,boss);

		if (result == 1) {
			playRole.fullMP();
			playRole.fullHP();
			system("pause");
			system("cls");
			goto again;
		}
		else {
			//有一定几率掉落装备
			bool isdropEquipment = newSystem.isDropEquipment(playChoice);
			if (isdropEquipment) {
				srand((unsigned)time(NULL));
				int num=rand()%(boss.getEquipmentNum());
				playRole.getEquipment(boss.getTakeEquipment(num));
				cout << endl << "恭喜获得掉落装备:" << boss.getTakeEquipment(num).getName() << endl << endl;
			}
		}
		playRole.saveRole();
		saveMap(map);
		if(playChoice==map.size()){
			if(gameLevel==10){
				cout<<endl<<endl<<"恭喜你已经通关！！"<<endl;
			}
			else {
				gameLevel++;
				initMap(map,gameLevel);
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 13);
				cout<<"恭喜你解锁新地图："<<map[gameLevel-1].getName()<<"!"<<endl;
			}
		}
		playRole.saveRole();
		//关卡通过后自动存档
		saveMap(map);
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<"存档成功！"<<endl;
		int nextChoice;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<endl<<"1.继续游戏        2.退出游戏 "<<endl;

		nextChoice=inputCheck(2);

		if(nextChoice==2) return;
	
	}

} 