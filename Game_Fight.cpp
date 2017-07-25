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

/*�Ե����Դ���ʱ��Ϊ����
����Ϊ���ÿʱÿ�̶��ڱ䣬���Կ����ǵ�ÿʱÿ�����ɵ����ֶ���ͬ�ҵȼ��ʣ���
���ﵽ�����������Ŀ�ģ������ﵽ������ʵ�Ŀ��*/
int Game_Fight::getKindAttack(Game_Role&role,Game_Boss&boss){

	srand((unsigned)time(NULL));
	int skillNum=boss.getSkillNum();
	int attackNum=rand()%(skillNum+1);
	if(attackNum==0)return( boss.giveAttack());
	else return(boss.skillAttack(attackNum-1)-role.getDefend());

}

//������ͨ��������ɵĵ��˺�
int Game_Fight::normalAttack(Game_Role&role,Game_Monster&monster){
	int hurt=role.normalAttack();
	return (hurt);
}

//�������＼�ܹ�������ɵ��˺�
int Game_Fight::skillAttack(Game_Role&role,Game_Monster&monster){

	int inputCheck(int num);
	role.showSkill();
	int choice;
	int num=role.getSkillNum();
	choice=inputCheck(num);
	if(!role.checkMP(role.getskillMP(choice-1))){
		cout<<"MP���㣡"<<endl;
		return 0;
	}
	int hurt=role.skillAttack(choice-1);
	return hurt;
}

//ս�����ĺ���
/*�ȼ��س�����͹���Ļ�����Ϣ���������е��ø��ʺ���
������ʾ����ս�����˺��Ͷ�ս��Ϣ����*/
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
		cout<<"��"<<i<<"�غ�"<<endl;

		cout<<"1.��ͨ����  2.���ܹ���"<<endl;;
		choice=inputCheck(2);

		
		int hurt=0;

		if(choice==1) hurt=normalAttack(role,monster);
		else{
			if(!role.getSkillNum()){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout<<"û�м��ܣ�����ʹ�� "<<endl;cout<<endl;
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
		cout<<endl<<role.getName()<<"����"<<monster.getName()<<"���"<<hurt<<"���˺�"<<endl<<endl;
		if(!monster.checkHP()){ 
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<monster.getName()<<"������,���"<<monster.giveExp()<<"�㾭��"<<endl;
			role.getExp(monster.giveExp());
			role.checkExp();
			return -1;
		}
		role.getHurt(monster.giveAttack()-role.getDefend());
		
		if(!role.checkHP()){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 12);
			cout<<endl<<role.getName()<<"������"<<endl<<endl;
			cout<<endl<<"��ȥ�������ߵĵȼ�����ø��õ�װ��������ս��!"<<endl<<endl;
			return 1;
		}
		i++;
		cout<<endl;
		system("pause");
	}
}

//��boss��ս��
/*�ȼ��س������boss�Ļ�����Ϣ���������е��ø��ʺ���
������ʾ����ս�����˺��Ͷ�ս��Ϣ����
ע�⣺�˺����е�bossӦ��Ҳ��*/
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
		cout<<"��"<<i<<"�غ�"<<endl;

		cout<<"1.��ͨ����  2.���ܹ���"<<endl;

		choice=inputCheck(2);

		int hurt=0;

		if(choice==1) hurt=normalAttack(role,boss);
		else{
			if(!role.getSkillNum()){
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 12);
				cout<<"û�м��ܣ�����ʹ�� "<<endl;
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
		cout<<endl<<role.getName()<<"����"<<boss.getName()<<"���"<<hurt<<"���˺�"<<endl<<endl;
		if(!boss.checkHP()){ 
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 11);
			cout<<boss.getName()<<"������,���"<<boss.giveExp()<<"�㾭��"<<endl;
			role.getExp(boss.giveExp());
			role.checkExp();
			return -1;
		}
		role.getHurt(getKindAttack(role,boss));

		if (!role.checkHP()) {
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 12);
			cout << endl << role.getName() << "������" << endl << endl;
			cout << endl << "��ȥ�������ߵĵȼ�����ø��õ�װ��������ս��!" << endl << endl;
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
	cout << endl << "���������¹������";
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
			cout << '\a';//������ʾ�������  
		}
	}
	finish = clock();//��Ϸ����ʱ��
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
