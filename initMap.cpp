#pragma once
#include<iostream>
#include<vector>
#include"Game_Map.h"
#include"Game_Equipment.h"

using namespace std;


//��ʼ����ͼ  �����ؿ��е�С�� BOSS �Ѿ�BOSS�ļ��ܺ�Я����װ��
void initMap(vector<Game_Map>&map,int mapLevel){

	switch (mapLevel){
	case 1:{
		Game_Monster monster(30,10,"�����",30);
		Game_Boss boss(150,15,"��ҹ����",50);
		Game_Equipment equipment("������", 10, 5, 0, 1, 2);
		boss.pushEquipment(equipment);
		Game_Map map_1("���",monster,boss);
		map.push_back(map_1);
		
		   };break;
	case 2:{
		Game_Monster monster(100,15,"���Ƚ�ʬ",40);
		Game_Boss boss(300,20,"�ڰ��޳�",60);
		Game_Equipment equipment("��ɷȨ��", 0, 0, 10, 0, 1);
		Game_Equipment equipment_2("�Ͻ����", 30, 10, 0, 3, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("�޳���",monster,boss);
		map.push_back(map_1);	   
		
		   };break;
	case 3:{
		Game_Monster monster(120,20,"��ҹ����",50);
		Game_Boss boss(350,25,"һ�������ع���",70);
		Monster_Skill skill(1.2,"ǧ������");
		boss.pushSkill(skill);
		Game_Equipment equipment("��ɲ����", 40, 20, 0, 4, 2);
		Game_Equipment equipment_2("��������", 30, 30, 0, 4, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("���Ź�",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 4:{
		Game_Monster monster(140,25,"ţͷ",60);
		Game_Boss boss(380,28,"�����й�",80);
		Monster_Skill skill(1.2,"ĩ������");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"����");
		boss.pushSkill(skill_2);
		Game_Equipment equipment("������", 0, 0, 40, 0, 1);
		Game_Equipment equipment_2("��ɷ�Ž�", 50, 20, 15, 0, 4);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("�йٵ�",monster,boss);
		map.push_back(map_1);
		
		   };break;
	case 5:{
		Game_Monster monster(200,30,"����",70);
		Game_Boss boss(500,30,"�������������",90);
		Monster_Skill skill(1.5,"��������");
		boss.pushSkill(skill);
		Game_Equipment equipment("�ۿ�������", 0, 0, 65, 0, 1);
		Game_Equipment equipment_2("��Ԫ����", 80, 20, 25, 20, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("���޵�",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 6:{
		Game_Monster monster(220,35,"��ͯ ",80);
		Game_Boss boss(600,35,"ҹ��",100);
		Monster_Skill skill(1.5,"��ʴ֮ҧ");
		boss.pushSkill(skill);
		Game_Equipment equipment("Ѫ��ħ��", 100, 30, 0, 30, 2);
		Game_Equipment equipment_2("Ѫ��ħͯ", 50, 60, 30, 10, 4);
		Game_Equipment equipment_3("Ѫ������", 60, 30, 20, 10, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		boss.pushEquipment(equipment_3);
		Game_Map map_1("�κ���",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 7:{
		Game_Monster monster(250,40,"�߾�",90);
		Game_Boss boss(750,40,"����",110);
		Monster_Skill skill(1.5,"�����ξ�");
		boss.pushSkill(skill);
		Game_Equipment equipment("�����޽�", 0, 0, 100, 0, 1);
		Game_Equipment equipment_2("���׼��Ǽ�", 100, 30, 10, 50, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("����̨",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 8:{
		Game_Monster monster(300,45,"��ܾ�",100);
		Game_Boss boss(850,50,"������",120);
		Monster_Skill skill(1.2,"����");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"�ٻ�ˮ��");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"ˮ������");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("��Ԫ����ɡ", 80, 80, 0, 30, 4);
		Game_Equipment equipment_2("�ز�֮��",100, 60, 20, 20, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("������",monster,boss);
		map.push_back(map_1);	 
		
		   };break;
	case 9:{
		Game_Monster monster(400,60,"��Ѫ��ѻ",100);
		Game_Boss boss(1000,60,"�ε���",120);
		Monster_Skill skill(1.2,"����");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"����Ĺ��");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"ʮ������");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("����ն����", 0, 0, 150, 0, 1);
		Game_Equipment equipment_2("��껨׹", 100, 60, 30, 30, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("��������",monster,boss);
		map.push_back(map_1);	 
		
		   };break;
	case 10:{
		Game_Monster monster(500,85,"ת�ֻ���",100);
		Game_Boss boss(1500,100,"ת����",120);
		Monster_Skill skill(1.2,"������ѹ");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"��������");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"�ֻ�֮��");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("����֮��", 0, 0, 300, 0, 1);
		Game_Equipment equipment_2("̫������", 100, 100, 50, 50, 4);
		Game_Equipment equipment_3("ͨ�챬������", 200, 50, 0, 100, 2);
		Game_Equipment equipment_4("ɽ�����ͼ", 150, 80, 50, 50, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		boss.pushEquipment(equipment_3);
		boss.pushEquipment(equipment_4);
		Game_Map map_1("ת�ֵ�",monster,boss);
		map.push_back(map_1);	 
		   };break;
	}



}