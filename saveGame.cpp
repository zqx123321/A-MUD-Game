#pragma once
#include<iostream>
#include<istream>

#include<ostream>
#include<fstream>

#include"Game_Map.h"



using namespace std;

//¥Ê¥¢”Œœ∑µÿÕº
void saveMap(vector<Game_Map>&map){
	ofstream file("map.dat");
	int Level=map.size()+1;
	file.write(reinterpret_cast<char*>(&Level),sizeof(Level));
	file.close();
}
