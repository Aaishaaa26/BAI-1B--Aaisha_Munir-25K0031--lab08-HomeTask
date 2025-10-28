#include<stdio.h>
#define MONTH 12
#define YEAR 2
int main(){
	int album[YEAR][MONTH]={
	{12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
	{10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
	};
	size_t i,j;
	for(i=0;i<YEAR;i++){
		for(j=0;j<MONTH;j++){
			printf("Year %d, Month %d: %d photos\n", i+1, j+1,album[i][j]);
	    }
	}
	return 0;
}
