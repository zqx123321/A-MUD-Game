#include<iostream>
#include<sstream>
#include<string>


using namespace std;

//类模板，将字符串转化为任意类型
template<class T>
inline T fromString(const string &str){
	istringstream is(str);
	T v;
	is>>v;
	return v;
}


/*输入检测函数 参数num为可输入数字的总个数*/
int inputCheck(int num){

	int *Rule=new int [num]();

	for(int i=0;i<num;i++)
		Rule[i]=i+1;
	string input;
	

	while (1)
	{
		cin>>input;
		int num=fromString<int>(input);
		for(int i=0;i<num;i++)
			if(num==Rule[i]) return num;
		cout<<"输入的数字不正确，请重新输入："<<endl;
	}

}