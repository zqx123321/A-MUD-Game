#pragma once
#include<iostream>
#include<vector>
#include"Game_Map.h"
#include"Game_Equipment.h"

using namespace std;


//初始化地图  包括关卡中的小怪 BOSS 已经BOSS的技能和携带的装备
void initMap(vector<Game_Map>&map,int mapLevel){

	switch (mapLevel){
	case 1:{
		Game_Monster monster(30,10,"鬼灯笼",30);
		Game_Boss boss(150,15,"守夜老者",50);
		Game_Equipment equipment("老者袍", 10, 5, 0, 1, 2);
		boss.pushEquipment(equipment);
		Game_Map map_1("鬼城",monster,boss);
		map.push_back(map_1);
		
		   };break;
	case 2:{
		Game_Monster monster(100,15,"独腿僵尸",40);
		Game_Boss boss(300,20,"黑白无常",60);
		Game_Equipment equipment("地煞权杖", 0, 0, 10, 0, 1);
		Game_Equipment equipment_2("紫金轻甲", 30, 10, 0, 3, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("无常巷",monster,boss);
		map.push_back(map_1);	   
		
		   };break;
	case 3:{
		Game_Monster monster(120,20,"守夜老者",50);
		Game_Boss boss(350,25,"一殿阎罗秦广王",70);
		Monster_Skill skill(1.2,"千斤锁链");
		boss.pushSkill(skill);
		Game_Equipment equipment("罗刹鬼衣", 40, 20, 0, 4, 2);
		Game_Equipment equipment_2("青云手镯", 30, 30, 0, 4, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("鬼门关",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 4:{
		Game_Monster monster(140,25,"牛头",60);
		Game_Boss boss(380,28,"催命判官",80);
		Monster_Skill skill(1.2,"末日审判");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"符咒");
		boss.pushSkill(skill_2);
		Game_Equipment equipment("鬼王剑", 0, 0, 40, 0, 1);
		Game_Equipment equipment_2("天煞古剑", 50, 20, 15, 0, 4);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("判官殿",monster,boss);
		map.push_back(map_1);
		
		   };break;
	case 5:{
		Game_Monster monster(200,30,"马面",70);
		Game_Boss boss(500,30,"五殿阎罗阎罗王",90);
		Monster_Skill skill(1.5,"三道鬼门");
		boss.pushSkill(skill);
		Game_Equipment equipment("帝空漩击棍", 0, 0, 65, 0, 1);
		Game_Equipment equipment_2("混元龙铠", 80, 20, 25, 20, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("阎罗殿",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 6:{
		Game_Monster monster(220,35,"河童 ",80);
		Game_Boss boss(600,35,"夜叉",100);
		Monster_Skill skill(1.5,"腐蚀之咬");
		boss.pushSkill(skill);
		Game_Equipment equipment("血海魔甲", 100, 30, 0, 30, 2);
		Game_Equipment equipment_2("血海魔童", 50, 60, 30, 10, 4);
		Game_Equipment equipment_3("血海妖壳", 60, 30, 20, 10, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		boss.pushEquipment(equipment_3);
		Game_Map map_1("奈何桥",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 7:{
		Game_Monster monster(250,40,"蛇精",90);
		Game_Boss boss(750,40,"孟婆",110);
		Monster_Skill skill(1.5,"阴阳梦境");
		boss.pushSkill(skill);
		Game_Equipment equipment("奢天擂金锤", 0, 0, 100, 0, 1);
		Game_Equipment equipment_2("震雷疾星甲", 100, 30, 10, 50, 2);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("望乡台",monster,boss);
		map.push_back(map_1);	
		
		   };break;
	case 8:{
		Game_Monster monster(300,45,"蟾蜍精",100);
		Game_Boss boss(850,50,"楚江王",120);
		Monster_Skill skill(1.2,"万江流");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"召唤水蛭");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"水蛭再生");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("混元珍珠伞", 80, 80, 0, 30, 4);
		Game_Equipment equipment_2("地藏之戒",100, 60, 20, 20, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("活大地狱",monster,boss);
		map.push_back(map_1);	 
		
		   };break;
	case 9:{
		Game_Monster monster(400,60,"嗜血乌鸦",100);
		Game_Boss boss(1000,60,"宋帝王",120);
		Monster_Skill skill(1.2,"乌羽");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"死亡墓碑");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"十方俱灭");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("阴阳斩龙剑", 0, 0, 150, 0, 1);
		Game_Equipment equipment_2("镇魂花坠", 100, 60, 30, 30, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		Game_Map map_1("黑绳地狱",monster,boss);
		map.push_back(map_1);	 
		
		   };break;
	case 10:{
		Game_Monster monster(500,85,"转轮护卫",100);
		Game_Boss boss(1500,100,"转轮王",120);
		Monster_Skill skill(1.2,"巨轮碾压");
		boss.pushSkill(skill);
		Monster_Skill skill_2(1.5,"能量齿轮");
		boss.pushSkill(skill_2);
		Monster_Skill skill_3(2,"轮回之舞");
		boss.pushSkill(skill_3);
		Game_Equipment equipment("擎天之柱", 0, 0, 300, 0, 1);
		Game_Equipment equipment_2("太极八卦", 100, 100, 50, 50, 4);
		Game_Equipment equipment_3("通天爆裂神铠", 200, 50, 0, 100, 2);
		Game_Equipment equipment_4("山河社稷图", 150, 80, 50, 50, 3);
		boss.pushEquipment(equipment);
		boss.pushEquipment(equipment_2);
		boss.pushEquipment(equipment_3);
		boss.pushEquipment(equipment_4);
		Game_Map map_1("转轮殿",monster,boss);
		map.push_back(map_1);	 
		   };break;
	}



}