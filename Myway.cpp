#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdlib.h>
#pragma comment(lib, "winmm.lib")

BOOL PlaySound( LPCTSTR pszSound, HMODULE hmod, DWORD fdwSound );
using namespace std;
int main()
{ 
cout<<"\n And now the end is here\n ";
PlaySound(TEXT("C:\myway.wav"), NULL, SND_SYNC);

	cout<<"\n Musica 'My way' Frank Sinatra \n ";
	cout<<"\n cover por Takahata101\n";
	system("pause");
	return 0;
}
