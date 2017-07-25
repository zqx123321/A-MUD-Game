#include<iostream>
#include<vector>
#include<string>

#include"Game_Skill.h"


using namespace std;

//检测学会什么样的技能
void checkSkill(vector<Game_Skill>&roleSkill,int level, int id){
	switch (id){
	case 1:{//悟空的技能
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"升龙斩");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"火炎突击");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"烈焰闪");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"烈焰风暴");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"火魔斩");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 2:{//唐僧的技能
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"冰龙斩");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"水幻影");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"天降甘露");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"九环圣经");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"水魔爆");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 3:{
		switch (level){
		case 2:{//八戒的技能
			Game_Skill skill_1(1.2,10,"战争怒吼");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"圣域之墙");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"巨石破");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"旋转球");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"土魔刺");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 4:{//沙僧的技能
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"腾空击");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"绿叶旋风");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"巫毒娃娃");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"猛毒素");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"木魔舞");
			cout<<"恭喜你习得新技能"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
		}


}