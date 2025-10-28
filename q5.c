#include <stdio.h>
#define ROWS 4
#define COLS 4
int main() {
    int temperature[ROWS][COLS] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
    size_t i,j;
    for(i = 0; i < ROWS; i++){
    	for(j = 0; j < COLS; j++){
    		if(i > 0 && j > 0 && i < ROWS && j < COLS ){
    			if((temperature[i][j] < temperature[i+1][j]) && (temperature[i][j] < temperature[i-1][j]) 
				&& (temperature[i][j] < temperature[i][j+1]) && (temperature[i][j] < temperature[i][j-1])){
					printf("-At Position (%d,%d) with temperature %d°C\n", i+1, j+1,temperature[i][j]);
				}
			}
		}
	}
    return 0;
}