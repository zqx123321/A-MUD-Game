#include<iostream>
#include<vector>
#include<string>

#include"Game_Skill.h"


using namespace std;

//���ѧ��ʲô���ļ���
void checkSkill(vector<Game_Skill>&roleSkill,int level, int id){
	switch (id){
	case 1:{//��յļ���
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"����ն");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"����ͻ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"������");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"����籩");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"��ħն");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 2:{//��ɮ�ļ���
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"����ն");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"ˮ��Ӱ");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"�콵��¶");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"�Ż�ʥ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"ˮħ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 3:{
		switch (level){
		case 2:{//�˽�ļ���
			Game_Skill skill_1(1.2,10,"ս��ŭ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"ʥ��֮ǽ");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"��ʯ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"��ת��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"��ħ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
	case 4:{//ɳɮ�ļ���
		switch (level){
		case 2:{
			Game_Skill skill_1(1.2,10,"�ڿջ�");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 3:{
			Game_Skill skill_1(1.5,20,"��Ҷ����");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 5:{
			Game_Skill skill_1(2,30,"�׶�����");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 7:{
			Game_Skill skill_1(2.5,40,"�Ͷ���");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		case 10:{
			Game_Skill skill_1(3,50,"ľħ��");
			cout<<"��ϲ��ϰ���¼���"<<skill_1.getName()<<endl;
			roleSkill.push_back(skill_1);
			   }break;
		}
	 };break;
		}


}