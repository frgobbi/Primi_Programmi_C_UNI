#include <stdio.h>

 int main (){
	 int secondi, ore, minuti,app;
	 secondi=0;
	 ore=0;
	 minuti=0;

	 printf("inserire tempo in secondi: ");
	 scanf("%d",&secondi);

	 ore=secondi/3600;
	 app=secondi%3600;
	 minuti=app/60;
	 secondi=app%60;

	 printf("ore: %d-minuti: %d-secondi: %d", ore, minuti, secondi);

}