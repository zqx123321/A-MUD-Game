#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


void playStart(){
	PlaySound (TEXT("��ʼ.wav"), NULL, SND_ASYNC | SND_NODEFAULT);
}

void playFright(){
	PlaySound (TEXT("ս��.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

}


void playPeace(){
	PlaySound (TEXT("ƽ��.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

}