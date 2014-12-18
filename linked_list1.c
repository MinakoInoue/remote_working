#include <stdio.h>

typedef struct{
	int num;
	char name[30];
	int score;
} HOGE;



void add(void){

}

void del(void){

}

void show(void){

}

void insert(void){

}


int main(void){
	int i;

	HOGE std[100] = {
		{1,"aqram",175},
		{4,"ysk",178},
		{8,"usa",174},
		{10,"zukky",180},
	};

	for(i = 0; i < 4; i++){
		printf("%d %s %d\n",
				std[i].num, std[i].name, std[i].score);
	}

	return 0;

}
