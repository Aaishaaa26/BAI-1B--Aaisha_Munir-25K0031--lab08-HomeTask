#include <stdio.h>
int main(){
	int i,j,k, space=5;
	char alphabet ='A';
	for(i=1; i<=5; i++){
		for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=1; k<=i;k++){
			printf("*");
		}
		printf("\t | \t");
		for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=1; k<=i;k++){
			printf("%d", k);
		}
		printf("\t | \t");
			for(j = space; j > 0; j--){
			printf(" ");
		}
		for(k=0; k<i;k++){
			printf("%c",alphabet+k);
		}
		printf("\n");
		--space;
	}
	return 0;
}