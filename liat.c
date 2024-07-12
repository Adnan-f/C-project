#include "liat.h"

void file_treat(FILE* f, char* var, char* argv[]){
	int a=0, t=0, j=0;
	int n=0;
	n=atoi(argv[1]);
	printf("%d", n);
	f=fopen(argv[2], "r");
	
	for (int i=0;i<10000;i++){
		fscanf(f, "%c", &var[i]);	
	}
	for (int i=0; i<10000; i++){
		if(var[i]=='\n') a++;
	}
	for (j=0; j<10000; j++){
		if(var[j]=='\n') {
			t++;
		}
		if (a-t==n) break;
	}
	for (int k=j; k<10000; k++){
		printf("%c", var[k]);
	}
	//printf("%d", a);
	fclose(f);
}
char* alloc(){
	char*M=NULL;
	M=(char*)malloc(10000*sizeof(char));
	return (M);
}
