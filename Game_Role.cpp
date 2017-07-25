#include<iostream>
#include <algorithm> 
#include"Game_Role.h"
#include<vector>
#include<fstream>
#include<ostream>
#include<Windows.h>
#include"Game_Fight.h"
using namespace std;


Game_Role::Game_Role(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp,int level){

	this->max_HP=max_HP;
	this->max_MP=max_MP;
	this->value_HP=max_HP;
	this->value_MP=max_MP;
	this->value_Attack=value_Attack;
	this->value_Defend=value_Defend;
	this->name=name;
	this->id=id;
	this->value_exp=0;
	this->level=1;
	this->max_exp = 50;
	this->isEquipedArmour=false;
	this->isEquipedWeapon=false;
	this->isEquipedOrnament=false;
	this->isEquipedTalismann=false;
}

void Game_Role::setValues(int max_HP,int max_MP,int value_Attack,int value_Defend,string name,int id,int value_exp,int max_exp,int level,int value_HP,
						int value_MP,vector<Game_Skill>roleSkill,vector<Game_Equipment>allEquipment,vector<Game_Equipment>Equiped,bool isEquipedWeapon,bool isEquipedArmour,bool isEquipedTalismann,bool isEquipedOrnament){

						this->max_HP=max_HP;
						this->max_MP=max_MP;
						this->value_HP=max_HP;
						this->value_MP=max_MP;
						this->value_Attack=value_Attack;
						this->value_Defend=value_Defend;
						this->name=name;
						this->id=id;
						this->value_exp=value_exp;
						this->level=level;
						this->max_exp = max_exp;
						this->isEquipedArmour=isEquipedArmour;
						this->isEquipedWeapon=isEquipedWeapon;
						this->isEquipedOrnament=isEquipedOrnament;
						this->isEquipedTalismann=isEquipedTalismann;
						for(int i=0;i<roleSkill.size();i++)
							this->roleSkill.push_back(roleSkill[i]);
						for(int i=0;i<allEquipment.size();i++)
							this->allEquipment.push_back(allEquipment[i]);
						for(int i=0;i<Equiped.size();i++)
							this->Equiped.push_back(Equiped[i]);
}

//人物普通攻击 攻击值乘以operateGame操作返回值 
int Game_Role::normalAttack(){
	Game_Fight newFight;
	return this->value_Attack*newFight.operateGame();

}

//人物收到伤害
void Game_Role::getHurt(int value_Hurt){

	this->value_HP-=value_Hurt;

}

string Game_Role::getName(){
	return this->name;
}

//检查人物是否死亡
bool Game_Role::checkHP(){
	return (this->value_HP>0?true:false);

}

//检查人物MP是否足够触发技能
bool Game_Role::checkMP(int needMP){
	return (this->value_MP>needMP?true:false);
}


void Game_Role::getExp(int value_exp){
	this->value_exp+=value_exp;
}

//经验检验函数  若达到一定经验即可升级
void Game_Role::checkExp(){

	void checkSkill(vector<Game_Skill>&roleSkill,int level, int id);
	int current_Level=getLvel(value_exp);
	if(level!=current_Level){
		level=current_Level;
		cout<<"恭喜你升到"<<level<<"级"<<endl;
		addmax_exp();
		this->value_Attack+=10;
		this->value_Defend+=3;
		this->max_HP+=20;
		this->max_MP+=10;
		this->value_HP=this->max_HP;
		this->value_MP=this->max_MP;

		checkSkill(this->roleSkill,level,id);
	}
}

//人物信息展示
void Game_Role::showInfo(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"当前角色名称："<<this->name<<"\t等级："<<this->level<<"\t\t经验："<<this->value_exp<<"/"<<this->max_exp<<endl<<endl
		<<"HP:"<<this->value_HP<<"/"<<this->max_HP<<'\t'
		<<"MP:"<<this->value_MP<<"/"<<this->max_MP<<'\t'
		<<"攻击："<<this->value_Attack<<"\t防御："<<this->value_Defend<<endl;
	showEquiped();
}       

//人物技能展示
void Game_Role::showSkill(){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	for(int i=0;i<this->roleSkill.size();i++)
		cout<<i+1<<"."<<roleSkill[i].getName()<<"  ";
	cout<<endl;
}

//人物技能攻击 技能权重乘以普通攻击返回伤害
int Game_Role::skillAttack(int num){
	this->value_MP-=this->roleSkill[num].getMP();
	return this->roleSkill[num].getProportion()*this->value_Attack;
}


Game_Role::Game_Role(Game_Role& role){
	this->max_HP=role.max_HP;
	this->max_MP=role.max_MP;
	this->value_HP=role.max_HP;
	this->value_MP=role.max_MP;
	this->value_Attack=role.value_Attack;
	this->value_Defend=role.value_Defend;
	this->name=role.name;
	this->id=role.id;
	this->value_exp=role.value_exp;
	this->level=role.level;
	this->isEquipedArmour=role.isEquipedArmour;
	this->isEquipedWeapon=role.isEquipedWeapon;
	for(int i=0;i<role.getSkillNum();i++){
		this->roleSkill.push_back(role.roleSkill[i]);
	}
	for(int i=0;i<role.getEquipedNum();i++){
		this->allEquipment.push_back(role.allEquipment[i]);
	}
	for(int i=0;i<role.getEquipedNum();i++){
		this->Equiped.push_back(role.Equiped[i]);
	}
}


int Game_Role::getLvel(int value_exp) {
	double temp = 4 * value_exp / 25.0 + 1;
	int level = (1 + sqrt(temp)) / 2.0;
	return level;
}



void Game_Role::getEquipment(Game_Equipment &equipment) {
	this->allEquipment.push_back(equipment);
}


int Game_Role::operateEquip(int index){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	int inputCheck(int num);
	if (allEquipment[index-1].getType() == 1){
		if(isEquipedWeapon==true){
			cout<<"当前人物已经装备武器，是否将其替换？"<<endl;
			cout<<"1.是        2.否"<<endl;
			int choice= inputCheck(2);
			if(choice==2)return 0;
			for(int i=1;i<=Equiped.size();i++)
				if(Equiped[i-1].getType()==1){
					undressEquip(i);
					break;
				}
		}
		dressEquip(index);
	}
	else if (allEquipment[index-1].getType() == 2){
		if(isEquipedArmour==true){
			cout<<"当前人物已经装备防具，是否将其替换？"<<endl;
			cout<<"1.是        2.否"<<endl;
			int choice= inputCheck(2);
			if(choice==2)return 0;
			for(int i=1;i<=Equiped.size();i++)
				if(Equiped[i-1].getType()==2){
					undressEquip(i);
					break;
				}
		}
		dressEquip(index);
	}
	else if (allEquipment[index-1].getType() == 3){
		if(isEquipedOrnament==true){
			cout<<"当前人物已经装备饰品，是否将其替换？"<<endl;
			cout<<"1.是        2.否"<<endl;
			int choice= inputCheck(2);
			if(choice==2)return 0;
			for(int i=1;i<=Equiped.size();i++)
				if(Equiped[i-1].getType()==3){
					undressEquip(i);
					break;
				}
		}
		dressEquip(index);
	}
	else if (allEquipment[index-1].getType() == 4){
		if(isEquipedTalismann==true){
			cout<<"当前人物已经装备法宝，是否将其替换？"<<endl;
			cout<<"1.是        2.否"<<endl;
			int choice= inputCheck(2);
			if(choice==2)return 0;
			for(int i=1;i<=Equiped.size();i++)
				if(Equiped[i-1].getType()==4){
					undressEquip(i);
					break;
				}
		}
		dressEquip(index);
	}
	return 1;

}

void Game_Role::dressEquip(int index)
{

	Equiped.push_back(allEquipment[index - 1]);
	max_HP += allEquipment[index - 1].getAddHP();//增加HP
	value_HP+=allEquipment[index - 1].getAddHP();//增加HP
	max_MP += allEquipment[index - 1].getAddMP();//增加MP
	value_MP+=allEquipment[index - 1].getAddMP();//增加MP
	value_Attack += allEquipment[index - 1].getAddAttack();//增加攻击力
	value_Defend += allEquipment[index - 1].getAddAttack();//增加防御
	int type=allEquipment[index - 1].getType();
	switch (type)
	{
	case 1:isEquipedWeapon=true;break;
	case 2:isEquipedArmour=true;break;
	case 3:isEquipedOrnament=true;break;
	case 4:isEquipedTalismann=true;break;
	}
	
}


void Game_Role::undressEquip(int index)
{
	int type=Equiped[index - 1].getType();
	switch (type)
	{
	case 1:isEquipedWeapon=false;break;
	case 2:isEquipedArmour=false;break;
	case 3:isEquipedOrnament=false;break;
	case 4:isEquipedTalismann=false;break;
	}
	max_HP -= Equiped[index - 1].getAddHP();
	value_HP-=Equiped[index - 1].getAddHP();
	max_MP -= Equiped[index - 1].getAddMP();
	value_MP-=Equiped[index - 1].getAddMP();
	value_Attack -= Equiped[index - 1].getAddAttack();
	value_Defend -= Equiped[index - 1].getAddAttack();

	Game_Equipment removeEquip = Equiped[index - 1];


	Equiped.erase(remove(Equiped.begin(), Equiped.end(), removeEquip), Equiped.end());
	
	
	
	
}


int Game_Role::showAllEquip()
{
	int inputCheck(int num);
	int equipmentChoice;//用于选择装备

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	cout <<endl;
	if (!allEquipment.size()) {
		cout << "背包中无装备！" << endl<<endl;
		return 0;
	}
	int count = 0;
	for (int i=0; i < this->allEquipment.size(); i++) {
		string type;
		if(allEquipment[i].getType()==1)type="武器";
		else if(allEquipment[i].getType()==2) type="防具";
		else if(allEquipment[i].getType()==3) type="饰品";
		else if(allEquipment[i].getType()==4) type="法宝";
		cout << i + 1 << "." << allEquipment[i].getName() << "("<<type<<")"<<"\t\t\t";
		count++;
		if (count % 4 == 0) cout << endl;
	}
	cout << endl << endl;
}

int Game_Role::showEquiped()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	cout << endl<<"当前装备： ";
	if(!Equiped.size()){
		cout<<"无"<<endl<<endl;
		return 0;
	}
	string type;
	for (int i = 0; i < this->Equiped.size(); i++) {
		if(Equiped[i].getType()==1)type="武器";
		else if(Equiped[i].getType()==2) type="防具";
		else if(Equiped[i].getType()==3) type="饰品";
		else if(Equiped[i].getType()==4) type="法宝";
		cout << i + 1 << "." << Equiped[i].getName() << "("<<type<<")"<<"    ";
	}
	cout<<endl<<endl;
	return 1;
}


void Game_Role::saveRole(){
	ofstream file ("role.dat",ios_base::binary);
	ofstream stringFile("string.dat",ios_base::binary);
	file.write(reinterpret_cast<char*>(&id),sizeof(id));
	file.write(reinterpret_cast<char*>(&level),sizeof(level));
	file.write(reinterpret_cast<char*>(&value_Attack),sizeof(value_Attack));
	file.write(reinterpret_cast<char*>(&value_Defend),sizeof(value_Defend));
	file.write(reinterpret_cast<char*>(&value_exp),sizeof(value_exp));
	file.write(reinterpret_cast<char*>(&value_HP),sizeof(value_HP));
	file.write(reinterpret_cast<char*>(&value_MP),sizeof(value_MP));
	file.write(reinterpret_cast<char*>(&max_HP),sizeof(max_HP));
	file.write(reinterpret_cast<char*>(&max_MP),sizeof(max_MP));
	file.write(reinterpret_cast<char*>(&max_exp), sizeof(max_exp));
	file.write(reinterpret_cast<char*>(&isEquipedArmour),sizeof(isEquipedArmour));
	file.write(reinterpret_cast<char*>(&isEquipedWeapon),sizeof(isEquipedWeapon));
	file.write(reinterpret_cast<char*>(&isEquipedOrnament),sizeof(isEquipedOrnament));
	file.write(reinterpret_cast<char*>(&isEquipedTalismann),sizeof(isEquipedTalismann));
	
	int num=roleSkill.size();
	file.write(reinterpret_cast<char*>(&num),sizeof(num));
	stringFile<<name<<endl;

	for(int i=0;i<roleSkill.size();i++){
		string nameSkill=roleSkill[i].getName();
		int MP=roleSkill[i].getMP();
		double pro=roleSkill[i].getProportion();
		//file.write(reinterpret_cast<char*>(&nameSkill),sizeof(nameSkill));
		
		file.write(reinterpret_cast<char*>(&MP),sizeof(MP));
		file.write(reinterpret_cast<char*>(&pro),sizeof(pro));
		stringFile<<nameSkill<<endl;
	}
	int num_2=allEquipment.size();
	file.write(reinterpret_cast<char*>(&num_2),sizeof(num_2));
	for(int i=0;i<allEquipment.size();i++){
		string name=allEquipment[i].getName();
		int addHP=allEquipment[i].getAddHP();
		int addMP=allEquipment[i].getAddMP();
		int addAttack=allEquipment[i].getAddAttack();
		int addDefend=allEquipment[i].getAddDefend();
		int type=allEquipment[i].getType();
		
		file.write(reinterpret_cast<char*>(&addHP),sizeof(addHP));
		file.write(reinterpret_cast<char*>(&addMP),sizeof(addMP));
		file.write(reinterpret_cast<char*>(&addAttack),sizeof(addAttack));
		file.write(reinterpret_cast<char*>(&addDefend),sizeof(addDefend));
		file.write(reinterpret_cast<char*>(&type),sizeof(type));
		stringFile<<name<<endl;
	}
	int num_3=Equiped.size();
	file.write(reinterpret_cast<char*>(&num_3),sizeof(num_3));
	for(int i=0;i<Equiped.size();i++){
		string name=Equiped[i].getName();
		int addHP=Equiped[i].getAddHP();
		int addMP=Equiped[i].getAddMP();
		int addAttack=Equiped[i].getAddAttack();
		int addDefend=Equiped[i].getAddDefend();
		int type=Equiped[i].getType();
		
		file.write(reinterpret_cast<char*>(&addHP),sizeof(addHP));
		file.write(reinterpret_cast<char*>(&addMP),sizeof(addMP));
		file.write(reinterpret_cast<char*>(&addAttack),sizeof(addAttack));
		file.write(reinterpret_cast<char*>(&addDefend),sizeof(addDefend));
		file.write(reinterpret_cast<char*>(&type),sizeof(type));
		stringFile<<name<<endl;
	}
	file.close();
	//string nameSkill=roleSkill[i].getName();

}
void Game_Role::addRoleHP(int addHP)
{
	if (this->value_HP + addHP > max_HP) {
		value_HP = max_HP;
	}
	else {
		value_HP += addHP;
	}
}

void Game_Role::addRoleMP(int addMP)
{
	if (this->value_MP + addMP > max_MP) {
		value_MP = max_HP;
	}
	else {
		value_MP += addMP;
	}
}

void Game_Role::addmax_exp()
{
	this->max_exp = max_exp + this->level * 50;
}
