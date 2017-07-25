#pragma once
#include<iostream>
#include<vector>

#include"Game_Monster.h"


#include"Game_Role.h"




using namespace std;




class Game_Map
{
public:
	Game_Map(string name,Game_Monster monster,Game_Boss boss);


	string getName(){return name;}

	Game_Monster& generateMonster(int num){
		return this->smallMonster[num];
	}


	Game_Boss& generateBoss(){
		return this->bigBoss[0];
	}

	void showInfo();

private:

	vector<Game_Monster>smallMonster;

	vector<Game_Boss>bigBoss;

	string name;

};





