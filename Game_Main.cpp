#include<iostream>
#include"Game_Monster.h"
#include"Game_Role.h"
#include<Windows.h>

using namespace std;

void SetTitle(const TCHAR *chTitle)  
{  
	SetConsoleTitle(LPCWSTR(chTitle));  
}  

//ǿ�ƽ���ȫ��
void FullScreen(){ 
    HWND hwnd=GetForegroundWindow();
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    char setting[30];
    sprintf(setting,"mode con:cols=%d lines=%d",x,y);
    system(setting); 
	SetWindowPos(hwnd,HWND_TOPMOST,0,0,x,y,NULL);
    MoveWindow(hwnd,0,0,x,y,1);
    printf("\n\n");
}

void main(){

	FullScreen();
	SetTitle(TEXT("�ظ����Ρ���Made By Group Nine"));
    void playGame();
	void playStart();
	playStart();
	playGame();
	system("pause");



}