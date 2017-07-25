#include<iostream>
#include<string>
#include<windows.h>
#include"Game_Monster.h"

using namespace std;



Game_Monster::Game_Monster(int max_HP,int value_Attack,string name,int value_exp){

	this->max_HP=max_HP;

	this->value_HP=max_HP;

	this->value_Attack=value_Attack;

	this->name=name;
	
	this->value_exp=value_exp;
}

int Game_Monster::giveAttack(){
	cout<<name<<"进行普通攻击，造成"<<this->value_Attack<<"点伤害"<<endl;
	return this->value_Attack;

}

//怪物收到伤害
void Game_Monster::getHurt(int value_Hurt){

	this->value_HP-=value_Hurt;


}


bool Game_Monster::checkHP(){
	return (this->value_HP>0?true:false);

}


string Game_Monster::getName(){
	return this->name;
}

//怪物信息展示
void Game_Monster::showInfo(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout<<"怪物名称："<<this->name<<"        "<<"HP:"<<this->value_HP<<"/"<<this->max_HP<<endl<<endl;

}

Game_Boss::Game_Boss(int max_HP,int value_Attack,string name,int value_exp):Game_Monster(max_HP,value_Attack,name,value_exp){

	this->max_HP=max_HP;

	this->value_HP=max_HP;

	this->value_Attack=value_Attack;

	this->name=name;
	
	this->value_exp=value_exp;


}

//将技能PUSH进怪物的技能存储VECTOR
void Game_Boss:: pushSkill(Monster_Skill &skill){

	this->monsterSkill.push_back(skill);

}

void Game_Boss::pushEquipment(Game_Equipment &equipment) {
	this->takeEquipment.push_back(equipment);
}


//怪物技能攻击
int Game_Boss::skillAttack(int num){
	//技能比例倍乘普通攻击返回伤害值
	int hurt=this->monsterSkill[num].getProportion()*this->value_Attack;
	cout<<name<<"使用"<<monsterSkill[num].getName()<<"技能,造成"<<hurt<<"点伤害"<<endl;
	return (hurt);

}