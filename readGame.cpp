#pragma once
#include<iostream>
#include"Game_Map.h"
#include<fstream>
#include"Game_Skill.h"

using namespace std;

//��ȡ��Ϸ�浵
void readGame(Game_Role&role){

	Game_Skill& obtainSkill(vector<Game_Skill>roleSkill, int num);

	ifstream file("role.dat",ios_base::in||ios::binary);
	ifstream stringFile("string.dat",ios_base::in||ios::binary);
	int id;
	int level;
	int value_HP;
	int value_MP;
	int value_Attack;
	int value_Defend;
	int max_exp;
	int max_HP;

	int max_MP;

	string name;
	int value_exp;
	bool isEquipedWeapon ;//�Ƿ�װ������
	bool isEquipedArmour ;//�Ƿ�װ������
	bool isEquipedTalismann ;//�Ƿ�װ������
	bool isEquipedOrnament ;//�Ƿ�װ������

	//���������ȡ
	file.read(reinterpret_cast<char*>(&id),sizeof(id));
	file.read(reinterpret_cast<char*>(&level),sizeof(level));
	file.read(reinterpret_cast<char*>(&value_Attack),sizeof(value_Attack));
	file.read(reinterpret_cast<char*>(&value_Defend),sizeof(value_Defend));
	file.read(reinterpret_cast<char*>(&value_exp),sizeof(value_exp));
	file.read(reinterpret_cast<char*>(&value_HP),sizeof(value_HP));
	file.read(reinterpret_cast<char*>(&value_MP),sizeof(value_MP));
	file.read(reinterpret_cast<char*>(&max_HP),sizeof(max_HP));
	file.read(reinterpret_cast<char*>(&max_MP),sizeof(max_MP));
	file.read(reinterpret_cast<char*>(&max_exp), sizeof(max_exp));
	//file.read(reinterpret_cast<char*>(&name),sizeof(name));
	file.read(reinterpret_cast<char*>(&isEquipedArmour),sizeof(isEquipedArmour));
	file.read(reinterpret_cast<char*>(&isEquipedWeapon),sizeof(isEquipedWeapon));
	file.read(reinterpret_cast<char*>(&isEquipedOrnament),sizeof(isEquipedOrnament));
	file.read(reinterpret_cast<char*>(&isEquipedTalismann),sizeof(isEquipedTalismann));
	
	int num;
	file.read(reinterpret_cast<char*>(&num),sizeof(num));
	//file>>name;
	getline(stringFile,name);
	vector<Game_Skill>skill;
	vector<Game_Equipment>allEquipment;//ӵ�е�װ��
	vector<Game_Equipment>Equiped;//��װ������������

	//���ܶ�ȡ
	for(int i=0;i<num;i++){
		string nameSkill;
		int MP;
		double pro;
		
		file.read(reinterpret_cast<char*>(&MP),sizeof(MP));
		file.read(reinterpret_cast<char*>(&pro),sizeof(pro));
		getline(stringFile,nameSkill);

		Game_Skill temp(pro,MP,nameSkill);
		skill.push_back(temp);
	}
	int num_2;
	file.read(reinterpret_cast<char*>(&num_2),sizeof(num_2));
	for(int i=0;i<num_2;i++){
		string name;
		int addHP;//����HP
		int addMP;//����MP
		int addAttack;//���ӹ�����
		int addDefend;//���ӷ���
		int type;//װ������
		
		file.read(reinterpret_cast<char*>(&addHP),sizeof(addHP));
		file.read(reinterpret_cast<char*>(&addMP),sizeof(addMP));
		file.read(reinterpret_cast<char*>(&addAttack),sizeof(addAttack));
		file.read(reinterpret_cast<char*>(&addDefend),sizeof(addDefend));
		file.read(reinterpret_cast<char*>(&type),sizeof(type));
		getline(stringFile,name);

		Game_Equipment temp(name,addHP,addMP,addAttack,addDefend,type);
		allEquipment.push_back(temp);
	}
	int num_3;
	file.read(reinterpret_cast<char*>(&num_3),sizeof(num_3));
	//װ����ȡ
	for(int i=0;i<num_3;i++){
		string name;
		int addHP;//����HP
		int addMP;//����MP
		int addAttack;//���ӹ�����
		int addDefend;//���ӷ���
		int type;//װ������
		
		file.read(reinterpret_cast<char*>(&addHP),sizeof(addHP));
		file.read(reinterpret_cast<char*>(&addMP),sizeof(addMP));
		file.read(reinterpret_cast<char*>(&addAttack),sizeof(addAttack));
		file.read(reinterpret_cast<char*>(&addDefend),sizeof(addDefend));
		file.read(reinterpret_cast<char*>(&type),sizeof(type));
		getline(stringFile,name);

		Game_Equipment temp(name,addHP,addMP,addAttack,addDefend,type);
		Equiped.push_back(temp);
	}
	role.setValues(max_HP,max_MP,value_Attack,value_Defend,name,id,value_exp,max_exp,level,value_HP,value_MP,skill,allEquipment,Equiped,isEquipedWeapon,isEquipedArmour,isEquipedOrnament,isEquipedTalismann);
	file.close();
}

//��ͼ��ȡ
void readMap(vector<Game_Map>&map){
	void initMap(vector<Game_Map>&map,int mapLevel);
	ifstream file("map.dat",ios_base::in||ios::binary);
	int Level;
	file.read(reinterpret_cast<char*>(&Level),sizeof(Level));
	file.close();
	for(int i=0;i<Level;i++){
		initMap(map,i);
	}
}