#include<string>
#include<iostream>


using namespace std;

/*��ÿ�ؽ�������һ�ؿ�����ʱ����ص�ͼ��
��ͼ����״��һֻ���ȵ�Ƥ����*/
void drawMap(int level)
{

	cout << "	1.���" << "	// �� ������| " << endl;
	if(level<=1)return;
	cout << "		/ ������ ��| " << "2.�޳���" << endl;
	if(level<=2)return;
	cout << "	3.���Ź�" << "����\ ��  �������� " << endl;
	if(level<=3)return;
	cout << "		�������������c���� / ��" << "4.�йٵ�" << endl;
	if(level<=4)return;
	cout << "		/����������`  \\ " << endl;
	cout << "		|��*���񡡡� \\���� /" << endl;
	cout << "		(�� �ء������� | �ܡ�" << endl;
	cout << "	5.���޵�" << "��	��    ����" << endl;
	if(level<=5)return;
	cout << "		/ /���� / /�� | �ܣ�" << "6.�κ���" << endl;
	if(level<=6)return;
	cout << "		\\_)����(_���� ������" << "7.����̨" << endl;
	if(level<=7)return;
	cout << "		 |              ��" << "8.������" << endl;
	if(level<=8)return;
	cout << "	9.��������" << "  |            /" << endl;
	if(level<=9)return;
	cout << "		 |            \\" << endl;
	cout << "		 (/^^^^^^^^^^(/" << "10.ת�ֵ�" << endl;

}