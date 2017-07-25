#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


void playStart(){
	PlaySound (TEXT("开始.wav"), NULL, SND_ASYNC | SND_NODEFAULT);
}

void playFright(){
	PlaySound (TEXT("战斗.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

}


void playPeace(){
	PlaySound (TEXT("平静.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

}