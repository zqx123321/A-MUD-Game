#include<iostream>
#include<sstream>
#include<string>


using namespace std;

//��ģ�壬���ַ���ת��Ϊ��������
template<class T>
inline T fromString(const string &str){
	istringstream is(str);
	T v;
	is>>v;
	return v;
}


/*�����⺯�� ����numΪ���������ֵ��ܸ���*/
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
		cout<<"��������ֲ���ȷ�����������룺"<<endl;
	}

}