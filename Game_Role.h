#pragma once
#include<iostream>

#include<string>
#include <algorithm> 
#include"Game_Skill.h"
#include"Game_Equipment.h"
#include<vector>

using namespace std;

//hp+20 mp+15 att+10 def=3

class Game_Role/*人物类,此类用id来区分不同的角色，其中
				*1........悟空
				*2........唐僧
				*3........八戒
				*4........沙僧
*/
{
public:

	Game_Role(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp=0,int level=1);
	void setValues(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp,int max_exp,int level,int value_HP,
		int value_MP,vector<Game_Skill>roleSkill,vector<Game_Equipment>allEquipment,vector<Game_Equipment>Equiped,bool isEquipedWeapon,bool isEquipedArmour,
		bool isEquipedOrnament,bool isEquipedTalismann );
	Game_Role(Game_Role& role);

	int normalAttack();//普通攻击，返回伤害值

	void getHurt(int value_Hurt);//受到攻击


	bool checkHP();//检查是否死亡

	string getName();//获取人物角色名称
	
	void getExp(int value_exp);

	void checkExp();

	void showInfo();//展示人物信息

	void showSkill();

	int skillAttack(int num);



	bool checkMP(int needMP);

	int getSkillNum(){return this->roleSkill.size();}

	int getskillMP(int num){return this->roleSkill[num].getMP();}

	void fullHP(){this->value_HP=this->max_HP;}
	void fullMP(){this->value_MP=this->max_MP;}

	vector<Game_Skill>& getSkill(){return this->roleSkill;}

	void clearSkill(){roleSkill.clear();}
	void getEquipment(Game_Equipment &equipment);//获得装备
	void dressEquip(int index);//穿上装备
	void undressEquip(int index);//卸下装备
	int showAllEquip();//显示所有装备
	int showEquiped();//显示已装备的装备
	int getEquipedNum(){return this->Equiped.size();}//已装备的装备数量
	int getAllEquipNum(){return this->allEquipment.size();}//总共拥有的装备数量
	void saveRole();//存储人物数据

	void addRoleHP(int addHP);
	void addRoleMP(int addMP);

	void showEquipedInfo(int index){this->allEquipment[index].showInfo();}//显示装备信息
	void addmax_exp();

	int getId(){return this->id;}

	int getDefend(){return this->value_Defend;}
	int getLvel(int value_exp);//升级函数

	int operateEquip(int index);
	//int getEquipType(int choice){return this->allEquipment[choice].getType();}

private:


	int value_HP;
	int value_MP;
	int value_Attack;
	int value_Defend;
	int max_exp;

	int max_HP;

	int max_MP;

	int id;
	string name;
	int value_exp;
	int level;

	vector<Game_Skill>roleSkill; //人物技能
	vector<Game_Equipment>allEquipment;//拥有的装备
	vector<Game_Equipment>Equiped;//已装备的武器防具
	
	bool isEquipedWeapon ;//是否装备武器
	bool isEquipedArmour ;//是否装备防具
	bool isEquipedTalismann ;//是否装备武器
	bool isEquipedOrnament ;//是否装备防具


};


