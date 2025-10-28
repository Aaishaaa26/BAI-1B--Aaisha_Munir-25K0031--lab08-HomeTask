#include <stdio.h>
int main(){
	int i,j,k, space=4;
	char alphabet ='A';
	for(i=1; i<=5; i++){
		for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=1; k<=((2*i)-1);k++){
			printf("*");
		}
		for(j = space; j > 0; j--){
			printf(" ");
		}
		printf("\t | \t");
		for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=1; k<=((2*i)-1);k++){
			printf("%d", k);
		}
		for(j = space; j > 0; j--){
			printf(" ");
		}
		printf("\t | \t");
			for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=0; k<((2*i)-1);k++){
			printf("%c",alphabet+k);
		}
		for(j = space; j > 0; j--){
			printf(" ");
		}
		printf("\n");
		--space;
	}
	return 0;
}