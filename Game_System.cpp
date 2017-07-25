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
	cout << "1、新的开始\t2、继续游戏\t3、退出游戏" << endl;
	choose = inputCheck(3);
	return choose;

}

void System::introducePage() {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "故事背景" << endl << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "    唐僧师徒历经九九八十难，终于取得真经，修成正果。可当他们回到长安城时，狂岚四起，黑白无常现于狂岚之间，背后隐隐若现，又是什么黑暗的力量？招魂幡，锁魂链。四方天崩地裂，发出撕心裂肺的呼喊声。稳地处，乃冥府之鬼城。永远的黑夜无理的审判冤魂的战意和平的冥界被黑暗所控！与此同时刚修得正果的猪八戒因贪食被牛魔王之子——圣婴大王所捕，白骨精之亡魂现身于冥界的角落，十位阎罗稳坐，黑暗秦广王的虐杀，楚江王的疯狂，宋帝王的怨恨，五官王的憎恶，阎罗王的愚昧，卞城王的贪婪，泰山王的残忍，都市王的陷阱，平等王的酷刑，转轮王的阴谋，一切，又将重新开始。" << endl;
	cout << endl;
	system("pause");
	system("cls");
	cout<<"天际渐黑，大地昏沉。悟空以如意金箍棒直破魔心，三藏颂九环圣经封其胫骨。平天魔王撕牙咧嘴，张牙舞爪。战斗穿越回到七天前，牛魔王变回人形态。"<<endl;
	system("pause");
    cout<<"“师傅，怎么回事？难道我们打败牛魔王都是幻觉吗？”七天以来战斗所造成的疲惫使得我颤抖的双手已经握不住如意金箍棒了。我揉一揉困倦的双眼，充满疑惑的又喊了句“师傅”。"<<
       "师傅没有回答我，他显得很冷静，时不时张望四周。果然我们与牛魔王的决战，已经有位高深莫测的鬼神介入，他扭曲了时空。"<<
       "牛魔王挥舞着巨斧，然后用力劈开地面，接着大吼“用不着你来救我！”从劈开的火山岩石下面穿出来一个黑衣人，“这是主人的命令！”黑衣人张开双臂，披风遮天般的抖动，变大，紧接着披风内闪现出两个模糊的身影，一胖一瘦，一黑一白，他们架起牛魔王。黑衣人指着师傅“金蝉子，这不是你的能力所能插手的，三界早晚都会被我主人所统治！”就这样伴随着黑衣人的笑声，在我们的视野里瞬间消失了。"<<
      "“黑衣人是谁，他怎么能逆转时空？”“他怎么叫师傅金蝉子？”“牛魔王被压到哪儿啦？”“这个世界是怎么了？”我的脑海里充满着疑惑。"<<endl;
	system("pause");
	system("cls");
	cout<<" “悟空，看来我们得去趟地府了。”沉寂了许久，师傅终于开口了。"<<
      "“刚那黑衣人是谁？”我积压在心头很久的疑问，“师傅你认识他吗？”"<<
      "“我不知道黑衣人是谁，但是我能认出押走牛魔王的两个鬼差，悟空，你也认识的。”"<<
       "海里不断浮现那两个的模糊的身影，一胖一瘦，一黑一白。“黑无常和白无常！！！”我脱口而出。"<<
      " 师傅抖了抖九环禅杖，指向西方，很酷的说了句“出发！！！”"<<
       "鬼城酆都就在牛魔谷的西方，是人鬼混杂的地方，也是通往地府的必经之路。踏入鬼城，一切都显得阴森恐怖，"<<
       "废弃的房屋在街道的两侧，破碎的瓦砾洒落在街道中，枯藤老树还有昏鸦。一阵邪风吹来，先是卷起地上的沙砾。我伸手去遮挡，只听见“吱”的一声，两侧的木门就这么打开了。我闻到了从两侧房屋内传来的妖气，警觉的拔出背后的如意金箍棒。枯树上红眼的乌鸦便“嘎，嘎”的全飞了起来。"<<endl;
	system("pause");
	system("cls");
}

int System::chooseRolePage() {
	int inputCheck(int num);
	int choose;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "请选择到地府的主战人物：" << endl << endl;

	SetConsoleTextAttribute(hConsole, 14);
	cout << "1、孙悟空\t2、唐 僧\t3、猪八戒\t4、沙 僧" << endl;
	choose = inputCheck(4);
	return choose;
}

void System::showInfoEach(vector<Game_Map>&map) {
	void drawMap(int level);
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "请输入你要选择的关卡：" << endl << endl;
	drawMap(map.size());
}


//掉落物品 、装备的概率函数
bool System::isDropEquipment(int choice)
{
	//产生随机数
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

//操作背包
void System::operateBag(Game_Role & role, int choice)
{
	int inputCheck(int num);
	HANDLE hConsole;
	if (choice == 1) {
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout<<endl<<"所有装备："<<endl;
		role.showAllEquip();
		while (1)
		{
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<"1.查看装备属性      2.返回"<<endl;
			int newChoice=inputCheck(2);
			system("cls");
			role.showInfo();
			if(newChoice==2)return;
			role.showAllEquip();
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<"请输入要查看的装备序号："<<endl;
			newChoice=inputCheck(role.getAllEquipNum());
			cout<<endl<<endl;
			role.showEquipedInfo(newChoice-1);
		}
	}
	else if (choice == 2) {
		if(!role.getEquipedNum()){
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 14);
			cout<<endl<<"当前人物未装备任何装备！"<<endl<<endl;
			return;
		}
		int count = role.showEquiped();
		if (count) {
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 13);
			cout << "请选择你要卸下的装备：";
			int equipChoice = inputCheck(role.getEquipedNum());
			role.undressEquip(equipChoice);
			cout << "成功卸下所选装备" << endl;
			role.showEquiped();
		}
	}
	else {
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 13);
		if(!role.getAllEquipNum()){
			cout<<endl<<"当前人物未获得任何装备！"<<endl<<endl;
			return;
		}
		cout << endl << "请选择你要装备的物品：" << endl;
		int count = role.showAllEquip();
		if (count) {
			int equipChoice = inputCheck(role.getAllEquipNum());

			int result = role.operateEquip(equipChoice);
			if (result) {
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 13);
				cout << "已成功使用所选装备" << endl;
			}
			role.showEquiped();
		}
	}
}
//每关的BOSS背景介绍
void System::showInfoEachBoss(int gameLevel){
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	switch (gameLevel)
	{
	case 1:
		cout<<"接下来是一片漫长的死寂：枯叶打着旋儿缓慢的往下坠落，心脏的每次跳动似乎间隔了许久，我脑袋里一片空白，僵硬的身躯动弹不得。“砰”的一声，师傅重重的把九环禅杖扎进地里，“何方妖魔，鬼鬼祟祟，三藏在此，何不现身！”枯叶落地后伴着风沙沙作响，乌鸦扑扑高飞消失在黑夜中。朦胧的街道深处，有抹微弱的火光晃动，渐渐地，传来蹒跚的步履声。"<<
        "一位提着灯笼的老者走入了我的眼帘。他朝我们慈祥的笑了笑，然后友善的问了句“两位师傅，不像是本地人，是来化缘的吗？”师傅拔起九环禅杖，行了个礼“老人家，我们路经宝地，想找个落脚之处，麻烦指引方向。”"<<
      "“呵呵，是来住宿的啊，随我来吧。”于是我们跟着蹒跚的老者，走进了一间客栈。"<<endl;
		break;
	case 2:
		cout<<"黑白无常，又称黑白双煞，是随着转轮王一起将牛魔王抓走的黑白双煞。多年来镇守无常巷，以勾人魂魄而不断增强自己功力。"<<endl;
		break;
	case 3:
		cout<<"秦广王蒋，凡善人寿终之日，及有接引往生。凡勾到功过两平之男妇，送文第十殿发放，仍投人世，或男转为女，或女转为男，较量富贵贫贱，以了冤缘相报。凡恶多善少者，使入殿右高台，名为孽镜台，台高一丈，镜大十围，向东悬挂，上横七字，曰:孽镜台前无好人，押赴多恶之魂，自见在世之心之险，死赴地狱之险。那时方知万两黄金带不来，一生惟有孽随身，入台照过之後，批解第二殿，用刑发狱受苦。"<<endl;
		break;
	case 4:
		cout<<"生前为官清正，死后当了阎罗王最亲信的查案判官，主管查案司，赏善罚恶，管人生死，权冠古今，你们看他手握“生死薄”和勾魂笔，只需一勾一点，谁该死谁该活便只在须臾之间。"<<endl;
		break;
	case 5:
		cout<<"五殿阎罗天子曰。吾本前居第一殿，因怜屈死。屡放还阳伸雪。降调司掌大海之底东北沃 石下。叫唤大地狱。并十六诛心小地狱。凡一切鬼犯，发至本殿者，已经诸狱受罪多年，即有在前四殿，查核无甚大过。每各按期七日。解到本殿；亦查毫不作恶。尸至五七日，未有不腐者，鬼犯皆说在世尚有未了善愿，或称修盖寺院桥梁街路。开河淘井。或集劝善书章未成。或放生之数未满。或父母尊亲生养死葬之事未备。或受恩而未报答。"<<endl;
		break;
	case 6:
		cout<<"他的头发冒绿色的火焰，高达数丈，像蜡烛一样燃烧。他的眼睛一个生在顶门上，一个长在下巴上，形状怪异，有的是三角形，有的是半月形。他的鼻子，一孔朝天，一孔向地，好像蜗牛的触角，有时伸出，有时缩回。他的耳朵，一个在前边，一个在后边，他的形状太恐怖了，令人见了以后，吓得全身发抖。他不喜欢帮助人，专门喜欢散殃害人。"<<endl;
		break;
	case 7:
		cout<<"昔日孟姜女哭倒长城之后，眼见长城之下尸骸无数，再也找不到丈夫的尸骨。为了能忘记这些痛苦万分的记忆，就熬制了能使人忘记记忆的孟婆汤。后来上天念她思夫之情感天动地，就免了她的轮回之苦。让她在奈何桥畔熬制孟婆汤，让参与轮回的阴魂们忘记前世的一切。"<<endl;
		break;
	case 8:
		cout<<"殿阎王指冥界掌管地狱的十个阎王，其中掌管第二殿的就是楚江王。楚江王历主掌大海之底，正南方沃焦石下的活大地狱。楚江王掌管的地狱纵横八千里（五百由旬）；另设十六小地狱。其诞辰为农历三月初一。"<<endl;
		break;
	case 9:
		cout<<"十殿阎王指冥界掌管地狱的十个阎王，其中掌管第三殿的就是宋帝王。宋帝王余，司掌大海之底，东南沃石下，黑绳大地狱。宋帝王掌管的地狱纵广亦五百由旬，亦另设十六小地狱。宋帝王性情仁孝，心地纯净，然嫉恶如仇，明查秋毫，对散播邪知邪见者，诳诞不经胆大妄为者，忘恩负义污蔑于人者，或嗜杀成性残酷狠毒者，或为恶人狡辩脱罪者等等，绝不宽恕，必押堕本殿所设之种种地狱。"<<endl;
		break;
	case 10:
		cout<<"此王身具三十二相，即位时，由天感得轮宝，转其轮宝，而降伏四方，故曰转轮王。专司各殿解到鬼魂分别核定发往投生。转轮王。殿居幽冥沃石外，正东直对世界五浊之处。设有金银玉石木板奈何等桥六座。专司各殿解到鬼魂。分别核定，发往四大部 洲何处，该为男女寿夭富贵贫贱之家投生者。逐名详细开载。月汇知一殿，注册送呈酆都，阴律凡胎卵湿化。无足两足四足多足等类 ，死就为；轮推磨转。或年季生死。或朝生暮死。翻覆变换。为不定杀。为必定杀之类。概令转劫所内。查较过犯。分发各方受报，岁终汇解酆都。"<<endl;
		break;
	}
}
