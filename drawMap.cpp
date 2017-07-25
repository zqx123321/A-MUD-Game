#include<string>
#include<iostream>


using namespace std;

/*在每关结束和下一关开启的时候加载地图，
地图的形状是一只呆萌的皮卡丘*/
void drawMap(int level)
{

	cout << "	1.鬼城" << "	// ＼ 　　∠| " << endl;
	if(level<=1)return;
	cout << "		/ │　　 ／| " << "2.无常巷" << endl;
	if(level<=2)return;
	cout << "	3.鬼门关" << "│　\ ＿  ＜　　　 " << endl;
	if(level<=3)return;
	cout << "		│　　　　　ヽ　　 / 〉" << "4.判官殿" << endl;
	if(level<=4)return;
	cout << "		/　　　　　`  \\ " << endl;
	cout << "		|●　*　●　　 \\〈　 /" << endl;
	cout << "		(　 へ　　　　 | ＼〈" << endl;
	cout << "	5.阎罗殿" << "│	　    ／／" << endl;
	if(level<=5)return;
	cout << "		/ /　　 / /＜ | ＼＼" << "6.奈何桥" << endl;
	if(level<=6)return;
	cout << "		\\_)　　(_／　 │／／" << "7.望乡台" << endl;
	if(level<=7)return;
	cout << "		 |              ／" << "8.活大地狱" << endl;
	if(level<=8)return;
	cout << "	9.黑绳地狱" << "  |            /" << endl;
	if(level<=9)return;
	cout << "		 |            \\" << endl;
	cout << "		 (/^^^^^^^^^^(/" << "10.转轮殿" << endl;

}