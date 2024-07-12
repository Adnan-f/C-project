#include "liat.h"
int main(int argc, char* argv[]){
	
	FILE* f=NULL;
	
	char* var=NULL;
	var=alloc();
	
	file_treat(f,var, argv);
	return 0;
}

