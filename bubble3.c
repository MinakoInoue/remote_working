#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int x[SIZE];
void sort();

void sort(void){
	int i,j,k,num;
	int n = 20;
	k = n - 1;

	for(i = 0; i < k; i++){
		for(j = k; j > i; j--){
			if(x[j-1] > x[j]){
				num  = x[j];
				x[j] = x[j-1];
				x[j-1] = num;
			}
		}
	}
}

int main(void){
	int i;
	int ransu;
	srand(time(NULL));

	printf("before sort\n");
	for(i = 0; i < 20; i++){
		ransu = rand()%100;
		x[i] = ransu;
		printf("%d\n", x[i]);
	}

	sort();

	printf("after sort\n");

	for(i = 0; i < 20; i++){
		printf("%d\n", x[i]);
	}
	return 0;
}
