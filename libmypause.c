#include "libmypause.h"

void myPause(FILE *in){
	int ch;
	
	//le os caracteres do buffer enquanto nao for igual a tecla ENTER
	do
		ch = fgetc(in); 
	while (ch != EOF && ch != '\n'); 
	clearerr(in);

    //desliga o cursor do terminal
	system("setterm -cursor off");
	printf("Pressione [ENTER] para continuar...");
	getchar();
    
	//liga o cursor do terminal
	system("setterm -cursor on");
}