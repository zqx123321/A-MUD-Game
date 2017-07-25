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

	Game_Role playRole(0, 0, 0, 0, "����", 1);
	Game_Role WuKong(110, 30, 25, 2, "���", 1);
	Game_Role TangSeng(100, 50, 30, 1, "��ɮ", 2);
	Game_Role BaJie(160, 30, 20, 5, "�˽�", 3);
	Game_Role ShaSeng(130, 40, 25, 3, "ɳɮ", 4);

	vector<Game_Map>map;

	void initMap(vector<Game_Map>&map,int mapLevel);

	System newSystem; //����ϵͳ����
	Game_Fight newFight;

	int welChoose = newSystem.welcomePage(); //��ӭҳ��ѡ��
	int roleChoose;//����ѡ��
				   //�µ���Ϸ

	int gameLevel=1;

	if (welChoose == 1) {
		system("cls");
		newSystem.introducePage();
		roleChoose = newSystem.chooseRolePage();
		
		switch (roleChoose)
		{
		case 1:
			/*���������*/playRole = WuKong; break;
		case 2:
			/*������ ɮ*/playRole = TangSeng; break;
		case 3:
			/*������˽�*/playRole = BaJie; break;
		case 4:
			/*����ɳ ɮ*/playRole = ShaSeng; break;
		}
		

	initMap(map,gameLevel);
	}
	//��ȡ��Ϸ
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
		//	�˳���Ϸ
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<endl<<endl<<"��ӭ�´�������"<<endl;
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

		//��Ϸ��������
		while(1){
			HANDLE hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole,  14);
			cout<<"1.ѡ��ؿ�      2.�ҵı���        3.�˳���Ϸ"<<endl;
			int newChoice=inputCheck(3);
			if(newChoice==1)break;
			if(newChoice==2){
				while(1){
					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, 11);
					cout<<"1.����װ��      2.ж��װ��      3.ʹ��װ��      4.����"<<endl;
					int nextChoice=inputCheck(4);		

					system("cls");
					playRole.showInfo();
					if(nextChoice==4)break;
			
					newSystem.operateBag(playRole,nextChoice);
				}
			
			}
			if(newChoice==3){
				//�˳���Ϸ
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 14);
				cout<<endl<<endl<<"��ӭ�´�������"<<endl;
				return;
			}
		}
		newSystem.showInfoEach(map);

		playChoice=inputCheck(map.size());
		
		

	
		system("cls");
		playRole.showInfo();

			
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "��" << playChoice << "��" << '\t';

		map[playChoice - 1].showInfo();
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"1.��ʼս��    2.�ҵı���"<<endl;

		choice=inputCheck(2);

		if(choice == 2){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<endl<<"��ѡ����Ҫִ�еĲ�����"<<endl;
			while(1){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout<<"1.����װ��      2.ж��װ��      3.ʹ��װ��      4.����"<<endl;
				int nextChoice=inputCheck(4);
				if(nextChoice==4)break;

				system("cls");
				playRole.showInfo();


				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout << "��" << playChoice << "��" << '\t';

				map[playChoice - 1].showInfo();
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 10);
				cout << "1.��ʼս��    2.�ҵı���" << endl;

				newSystem.operateBag(playRole,nextChoice);
			}

		}
		void playFright();
		playFright();
		//��һ��С��
		Game_Monster monster_1=map[playChoice-1].generateMonster(0);

		system("cls");

		playRole.showInfo();

		cout<<"С��1:  ";
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
			bool isDropPillOfHP = newSystem.isDropEquipment(8);//���� ����װ������ ���� ��ģ�� ������Ʒ����
			if (isDropPillOfHP) {
				//��һ�����ʵ�����Ʒ
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout << "��ϲ��õ�����Ʒ  ��ҩ(HP+50)" << endl;
				playRole.addRoleHP(50);
			}
			Sleep(1000);
			bool isDropPillOfMP = newSystem.isDropEquipment(8);
			if (isDropPillOfMP) {
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 11);
				cout << "��ϲ��õ�����Ʒ  ������(MP+30)" << endl;
				playRole.addRoleHP(30);
			}
		}
		cout<<endl<<endl<<"��������󽫳��ֵڶ���С��......"<<endl;

		system("pause");

		//�ڶ���С��
		Game_Monster monster_2=map[playChoice-1].generateMonster(1);

		system("cls");

		playRole.showInfo();

		cout<<"С��2:  ";

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
			//��һ�����ʵ�����Ʒ
			bool isDropPillOfHP = newSystem.isDropEquipment(8);//���� ����װ������ ���� ��ģ�� ������Ʒ����
			if (isDropPillOfHP) {
				cout << "��ϲ��õ�����Ʒ  ��ҩ(HP+50)" << endl;
				playRole.addRoleHP(50);
			}
			Sleep(1000);
			bool isDropPillOfMP = newSystem.isDropEquipment(8);
			if (isDropPillOfMP) {
				cout << "��ϲ��õ�����Ʒ  ������(MP+30)" << endl;
				playRole.addRoleHP(30);
			}
		}
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<endl<<"���Ѿ��������С�֣���������󽫳��ֱ��ؿ���Boss......"<<endl;
		system("pause");
		system("cls");
		newSystem.showInfoEachBoss(playChoice);
		system("pause");

		//�ؿ�BOSS
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
			//��һ�����ʵ���װ��
			bool isdropEquipment = newSystem.isDropEquipment(playChoice);
			if (isdropEquipment) {
				srand((unsigned)time(NULL));
				int num=rand()%(boss.getEquipmentNum());
				playRole.getEquipment(boss.getTakeEquipment(num));
				cout << endl << "��ϲ��õ���װ��:" << boss.getTakeEquipment(num).getName() << endl << endl;
			}
		}
		playRole.saveRole();
		saveMap(map);
		if(playChoice==map.size()){
			if(gameLevel==10){
				cout<<endl<<endl<<"��ϲ���Ѿ�ͨ�أ���"<<endl;
			}
			else {
				gameLevel++;
				initMap(map,gameLevel);
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 13);
				cout<<"��ϲ������µ�ͼ��"<<map[gameLevel-1].getName()<<"!"<<endl;
			}
		}
		playRole.saveRole();
		//�ؿ�ͨ�����Զ��浵
		saveMap(map);
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<"�浵�ɹ���"<<endl;
		int nextChoice;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<endl<<"1.������Ϸ        2.�˳���Ϸ "<<endl;

		nextChoice=inputCheck(2);

		if(nextChoice==2) return;
	
	}

} 