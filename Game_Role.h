#pragma once
#include<iostream>

#include<string>
#include <algorithm> 
#include"Game_Skill.h"
#include"Game_Equipment.h"
#include<vector>

using namespace std;

//hp+20 mp+15 att+10 def=3

class Game_Role/*������,������id�����ֲ�ͬ�Ľ�ɫ������
				*1........���
				*2........��ɮ
				*3........�˽�
				*4........ɳɮ
*/
{
public:

	Game_Role(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp=0,int level=1);
	void setValues(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp,int max_exp,int level,int value_HP,
		int value_MP,vector<Game_Skill>roleSkill,vector<Game_Equipment>allEquipment,vector<Game_Equipment>Equiped,bool isEquipedWeapon,bool isEquipedArmour,
		bool isEquipedOrnament,bool isEquipedTalismann );
	Game_Role(Game_Role& role);

	int normalAttack();//��ͨ�����������˺�ֵ

	void getHurt(int value_Hurt);//�ܵ�����


	bool checkHP();//����Ƿ�����

	string getName();//��ȡ�����ɫ����
	
	void getExp(int value_exp);

	void checkExp();

	void showInfo();//չʾ������Ϣ

	void showSkill();

	int skillAttack(int num);



	bool checkMP(int needMP);

	int getSkillNum(){return this->roleSkill.size();}

	int getskillMP(int num){return this->roleSkill[num].getMP();}

	void fullHP(){this->value_HP=this->max_HP;}
	void fullMP(){this->value_MP=this->max_MP;}

	vector<Game_Skill>& getSkill(){return this->roleSkill;}

	void clearSkill(){roleSkill.clear();}
	void getEquipment(Game_Equipment &equipment);//���װ��
	void dressEquip(int index);//����װ��
	void undressEquip(int index);//ж��װ��
	int showAllEquip();//��ʾ����װ��
	int showEquiped();//��ʾ��װ����װ��
	int getEquipedNum(){return this->Equiped.size();}//��װ����װ������
	int getAllEquipNum(){return this->allEquipment.size();}//�ܹ�ӵ�е�װ������
	void saveRole();//�洢��������

	void addRoleHP(int addHP);
	void addRoleMP(int addMP);

	void showEquipedInfo(int index){this->allEquipment[index].showInfo();}//��ʾװ����Ϣ
	void addmax_exp();

	int getId(){return this->id;}

	int getDefend(){return this->value_Defend;}
	int getLvel(int value_exp);//��������

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

	vector<Game_Skill>roleSkill; //���＼��
	vector<Game_Equipment>allEquipment;//ӵ�е�װ��
	vector<Game_Equipment>Equiped;//��װ������������
	
	bool isEquipedWeapon ;//�Ƿ�װ������
	bool isEquipedArmour ;//�Ƿ�װ������
	bool isEquipedTalismann ;//�Ƿ�װ������
	bool isEquipedOrnament ;//�Ƿ�װ������


};


