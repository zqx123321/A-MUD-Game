#pragma once
#include<iostream>
#include<vector>
#include <time.h> 
#include"Game_Map.h"
#include"Game_System.h"
#include<istream>
#include<ostream>
#include<fstream>
#include<Windows.h>
using namespace std;


int System::welcomePage() {
	int inputCheck(int num);
	int choose;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	cout << "          ****************************************************************************************************************************************" << endl;
	cout << "          *                                                                                                                                      *" << endl;
	cout << "          *    00            00                             00                  0000000000000000000000000         000       00        00         *" << endl;
	cout << "          *    00      00    00                   0000000000000000000000                 00   00                   00        0       00          *" << endl;
	cout << "          *    00      00    00                   00     0        00                     00   00                    0  000000000000 000000000000 *" << endl;
	cout << "          *  000000  000000000000000              00    0         00             00000000000000000000000                   00      00            *" << endl;
	cout << "          *  000000    00    00   00              00   00         00             00      00   00      00           00      00     0  000000000   *" << endl;
	cout << "          *    00      00    00   00              00 00 0     0000000000         00      00   00      00            00     00                00  *" << endl;
	cout << "          *    00      00         00              00    0         00             00      00   00      00             0     000000000        00   *" << endl;
	cout << "          *    00      00         00              00    0     00  00             00      00   00      00                  00      00       0     *" << endl;
	cout << "          *    00      00      0  00              00    0      0  00             00     00    00      00                 00      00      00      *" << endl;
	cout << "          *    00      00       000               00    0         00             00    00      00000  00           0    00      00  000000000000 *" << endl;
	cout << "          *    00      00              0          00    0     0   00             00   0               00          00   00      00        00      *" << endl;
	cout << "          * 00000000   000            00         00     0     00  00             00                   00         000  00   0  00       0 00      *" << endl;
	cout << "          * 00000000    000000000000000         00      0       00               00000000000000000000000        000  00     00          000      *" << endl;
	cout << "          *                                                                                                                                      *" << endl;
	cout << "          ****************************************************************************************************************************************" << endl;
	cout << endl << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "1���µĿ�ʼ\t2��������Ϸ\t3���˳���Ϸ" << endl;
	choose = inputCheck(3);
	return choose;

}

void System::introducePage() {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "���±���" << endl << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "    ��ɮʦͽ�����žŰ�ʮ�ѣ�����ȡ���澭���޳��������ɵ����ǻص�������ʱ��������𣬺ڰ��޳����ڿ��֮�䣬�����������֣�����ʲô�ڰ����������л�ᦣ����������ķ�������ѣ�����˺���ѷεĺ��������ȵش�����ڤ��֮��ǡ���Զ�ĺ�ҹ���������ԩ���ս���ƽ��ڤ�类�ڰ����أ����ͬʱ���޵���������˽���̰ʳ��ţħ��֮�ӡ���ʥӤ�����������׹Ǿ�֮����������ڤ��Ľ��䣬ʮλ�����������ڰ��ع�����Űɱ���������ķ���ε�����Թ�ޣ���������������������������������̰����̩ɽ���Ĳ��̣������������壬ƽ�����Ŀ��̣�ת��������ı��һ�У��ֽ����¿�ʼ��" << endl;
	cout << endl;
	system("pause");
	system("cls");
	cout<<"��ʽ��ڣ���ػ�������������𹿰�ֱ��ħ�ģ������̾Ż�ʥ�������ֹǡ�ƽ��ħ��˺�����죬������צ��ս����Խ�ص�����ǰ��ţħ���������̬��"<<endl;
	system("pause");
    cout<<"��ʦ������ô���£��ѵ����Ǵ��ţħ�����ǻþ��𣿡���������ս������ɵ�ƣ��ʹ���Ҳ�����˫���Ѿ��ղ�ס����𹿰��ˡ�����һ�������˫�ۣ������ɻ���ֺ��˾䡰ʦ������"<<
       "ʦ��û�лش��ң����Եú��侲��ʱ��ʱ�������ܡ���Ȼ������ţħ���ľ�ս���Ѿ���λ����Ī��Ĺ�����룬��Ť����ʱ�ա�"<<
       "ţħ�������ž޸���Ȼ�������������棬���Ŵ���ò����������ң����������Ļ�ɽ��ʯ���洩����һ�������ˣ����������˵�������������ſ�˫�ۣ����������Ķ�������󣬽��������������ֳ�����ģ������Ӱ��һ��һ�ݣ�һ��һ�ף����Ǽ���ţħ����������ָ��ʦ��������ӣ��ⲻ������������ܲ��ֵģ����������ᱻ��������ͳ�Σ��������������ź����˵�Ц���������ǵ���Ұ��˲����ʧ�ˡ�"<<
      "����������˭������ô����תʱ�գ���������ô��ʦ������ӣ�����ţħ����ѹ���Ķ��������������������ô�ˣ����ҵ��Ժ���������ɻ�"<<endl;
	system("pause");
	system("cls");
	cout<<" ����գ��������ǵ�ȥ�˵ظ��ˡ�����������ã�ʦ�����ڿ����ˡ�"<<
      "�����Ǻ�������˭�����һ�ѹ����ͷ�ܾõ����ʣ���ʦ������ʶ���𣿡�"<<
      "���Ҳ�֪����������˭�����������ϳ�Ѻ��ţħ������������գ���Ҳ��ʶ�ġ���"<<
       "���ﲻ�ϸ�����������ģ������Ӱ��һ��һ�ݣ�һ��һ�ס������޳��Ͱ��޳������������ѿڶ�����"<<
      " ʦ�����˶��Ż����ȣ�ָ���������ܿ��˵�˾䡰������������"<<
       "���ۺ������ţħ�ȵ����������˹���ӵĵط���Ҳ��ͨ���ظ��ıؾ�֮·��̤���ǣ�һ�ж��Ե���ɭ�ֲ���"<<
       "�����ķ����ڽֵ������࣬��������������ڽֵ��У������������л�ѻ��һ��а�紵�������Ǿ�����ϵ�ɳ����������ȥ�ڵ���ֻ������֨����һ���������ľ�ž���ô���ˡ����ŵ��˴����෿���ڴ����������������İγ����������𹿰��������Ϻ��۵���ѻ�㡰�£��¡���ȫ����������"<<endl;
	system("pause");
	system("cls");
}

int System::chooseRolePage() {
	int inputCheck(int num);
	int choose;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "��ѡ�񵽵ظ�����ս���" << endl << endl;

	SetConsoleTextAttribute(hConsole, 14);
	cout << "1�������\t2���� ɮ\t3����˽�\t4��ɳ ɮ" << endl;
	choose = inputCheck(4);
	return choose;
}

void System::showInfoEach(vector<Game_Map>&map) {
	void drawMap(int level);
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "��������Ҫѡ��Ĺؿ���" << endl << endl;
	drawMap(map.size());
}


//������Ʒ ��װ���ĸ��ʺ���
bool System::isDropEquipment(int choice)
{
	//���������
	srand((unsigned)time(NULL));
	int randomNumber = 1 + rand() % 10;
	bool isdropEquipment;
	switch (choice)
	{
	case 1:isdropEquipment = true; break;
	case 2:isdropEquipment = true; break;
	case 3:
		if (randomNumber != 1) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 4:
		if (randomNumber != 1 && randomNumber != 2) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 5:
		if (randomNumber != 1 && randomNumber != 2 && randomNumber != 3 && randomNumber != 4) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 6:
		if (randomNumber == 1 || randomNumber == 2 || randomNumber == 3 || randomNumber == 4) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 7:
		if (randomNumber == 1 || randomNumber == 2) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 8:
		if (randomNumber == 1 || randomNumber == 2) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 9:
		if (randomNumber == 1 || randomNumber == 2) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	case 10:
		if (randomNumber == 1 || randomNumber == 2) isdropEquipment = true;
		else isdropEquipment = false;
		break;
	}
	return isdropEquipment;
}

//��������
void System::operateBag(Game_Role & role, int choice)
{
	int inputCheck(int num);
	HANDLE hConsole;
	if (choice == 1) {
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<"����װ����"<<endl;
		role.showAllEquip();
		while (1)
		{
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<"1.�鿴װ������      2.����"<<endl;
			int newChoice=inputCheck(2);
			system("cls");
			role.showInfo();
			if(newChoice==2)return;
			role.showAllEquip();
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<"������Ҫ�鿴��װ����ţ�"<<endl;
			newChoice=inputCheck(role.getAllEquipNum());
			cout<<endl<<endl;
			role.showEquipedInfo(newChoice-1);
		}
	}
	else if (choice == 2) {
		if(!role.getEquipedNum()){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<endl<<"��ǰ����δװ���κ�װ����"<<endl<<endl;
			return;
		}
		int count = role.showEquiped();
		if (count) {
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 13);
			cout << "��ѡ����Ҫж�µ�װ����";
			int equipChoice = inputCheck(role.getEquipedNum());
			role.undressEquip(equipChoice);
			cout << "�ɹ�ж����ѡװ��" << endl;
			role.showEquiped();
		}
	}
	else {
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 13);
		if(!role.getAllEquipNum()){
			cout<<endl<<"��ǰ����δ����κ�װ����"<<endl<<endl;
			return;
		}
		cout << endl << "��ѡ����Ҫװ������Ʒ��" << endl;
		int count = role.showAllEquip();
		if (count) {
			int equipChoice = inputCheck(role.getAllEquipNum());

			int result = role.operateEquip(equipChoice);
			if (result) {
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 13);
				cout << "�ѳɹ�ʹ����ѡװ��" << endl;
			}
			role.showEquiped();
		}
	}
}
//ÿ�ص�BOSS��������
void System::showInfoEachBoss(int gameLevel){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	switch (gameLevel)
	{
	case 1:
		cout<<"��������һƬ���������ţ���Ҷ������������������׹�䣬�����ÿ�������ƺ��������ã����Դ���һƬ�հף���Ӳ�������������á����顱��һ����ʦ�����صİѾŻ���������������η���ħ�������������ڴˣ��β���������Ҷ��غ���ŷ�ɳɳ���죬��ѻ���˸߷���ʧ�ں�ҹ�С����ʵĽֵ������Ĩ΢���Ļ��ζ��������أ��������ǵĲ�������"<<
        "һλ���ŵ����������������ҵ��������������Ǵ����Ц��Ц��Ȼ�����Ƶ����˾䡰��λʦ���������Ǳ����ˣ�������Ե���𣿡�ʦ������Ż����ȣ����˸������˼ң�����·�����أ����Ҹ����֮�����鷳ָ�����򡣡�"<<
      "���Ǻǣ�����ס�޵İ����������ɡ����������Ǹ������ǵ����ߣ��߽���һ���ջ��"<<endl;
		break;
	case 2:
		cout<<"�ڰ��޳����ֳƺڰ�˫ɷ��������ת����һ��ţħ��ץ�ߵĺڰ�˫ɷ�������������޳���Թ��˻��Ƕ�������ǿ�Լ�������"<<endl;
		break;
	case 3:
		cout<<"�ع�����������������֮�գ����н���������������������ƽ֮�и������ĵ�ʮ��ţ���Ͷ����������תΪŮ����ŮתΪ�У���������ƶ��������ԩԵ�౨������������ߣ�ʹ����Ҹ�̨����Ϊ����̨��̨��һ�ɣ�����ʮΧ�������ң��Ϻ����֣�Ի:����̨ǰ�޺��ˣ�Ѻ�����֮�꣬�Լ�����֮��֮�գ���������֮�ա���ʱ��֪�����ƽ��������һ��Ω����������̨�չ�֮�ᣬ����ڶ�����̷����ܿࡣ"<<endl;
		break;
	case 4:
		cout<<"��ǰΪ�������������������������ŵĲ鰸�й٣����ܲ鰸˾�����Ʒ��񣬹���������Ȩ�ڹŽ����ǿ������ա����������͹���ʣ�ֻ��һ��һ�㣬˭����˭�û��ֻ������֮�䡣"<<endl;
		break;
	case 5:
		cout<<"�����������Ի���᱾ǰ�ӵ�һ������������ŷŻ�����ѩ������˾�ƴ�֮�׶����� ʯ�¡��л����������ʮ������С��������һ�й������������ߣ��Ѿ�����������꣬������ǰ�ĵ������������ÿ���������ա��⵽�������������ʬ�������գ�δ�в����ߣ�����˵��������δ����Ը������޸���Ժ������·�������Ծ�����Ȱ������δ�ɡ������֮��δ������ĸ������������֮��δ�������ܶ���δ����"<<endl;
		break;
	case 6:
		cout<<"����ͷ��ð��ɫ�Ļ��棬�ߴ����ɣ�������һ��ȼ�ա������۾�һ�����ڶ����ϣ�һ�������°��ϣ���״���죬�е��������Σ��е��ǰ����Ρ����ı��ӣ�һ�׳��죬һ����أ�������ţ�Ĵ��ǣ���ʱ�������ʱ���ء����Ķ��䣬һ����ǰ�ߣ�һ���ں�ߣ�������״̫�ֲ��ˣ����˼����Ժ��ŵ�ȫ����������ϲ�������ˣ�ר��ϲ��ɢ�꺦�ˡ�"<<endl;
		break;
	case 7:
		cout<<"�����Ͻ�Ů�޵�����֮���ۼ�����֮��ʬ����������Ҳ�Ҳ����ɷ��ʬ�ǡ�Ϊ����������Щʹ����ֵļ��䣬�Ͱ�������ʹ�����Ǽ������������������������˼��֮����춯�أ������������ֻ�֮�ࡣ�������κ����ϰ������������ò����ֻص�����������ǰ����һ�С�"<<endl;
		break;
	case 8:
		cout<<"������ָڤ���ƹܵ�����ʮ�������������ƹܵڶ���ľ��ǳ������������������ƴ�֮�ף����Ϸ��ֽ�ʯ�µĻ��������������ƹܵĵ����ݺ��ǧ������Ѯ��������ʮ��С�������䵮��Ϊũ�����³�һ��"<<endl;
		break;
	case 9:
		cout<<"ʮ������ָڤ���ƹܵ�����ʮ�������������ƹܵ�����ľ����ε������ε����࣬˾�ƴ�֮�ף�������ʯ�£�������������ε����ƹܵĵ����ݹ��������Ѯ��������ʮ��С�������ε���������Т���ĵش�����Ȼ������������������ɢ��а֪а���ߣ�ڿ������������Ϊ�ߣ������������������ߣ�����ɱ���Բп�ݶ��ߣ���Ϊ���˽Ʊ������ߵȵȣ�������ˡ����Ѻ�鱾������֮���ֵ�����"<<endl;
		break;
	case 10:
		cout<<"���������ʮ���࣬��λʱ������е��ֱ���ת���ֱ����������ķ�����Իת������ר˾����⵽���ֱ�˶�����Ͷ����ת�����������ڤ��ʯ�⣬����ֱ����������֮�������н�����ʯľ���κε���������ר˾����⵽��ꡣ�ֱ�˶��������Ĵ� �޺δ�����Ϊ��Ů��ز����ƶ��֮��Ͷ���ߡ�������ϸ���ء��»�֪һ�ע���ͳ�ۺ�������ɷ�̥��ʪ���������������������� ������Ϊ������ĥת�����꼾����������ĺ���������任��Ϊ����ɱ��Ϊ�ض�ɱ֮�ࡣ����ת�����ڡ���Ϲ������ַ������ܱ������ջ��ۺ����"<<endl;
		break;
	}
}
