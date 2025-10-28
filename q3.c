#include <stdio.h>
int main(){
	int i, j, inverse[4][4], image[4][4]={
	{1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 1, 0, 0},
    {0, 0, 1, 1}
	};
	printf("Original image:\n"); //display asked for orginal image
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d",image[i][j]);
		}
		printf("\n");
	}
	printf("============================================\nOriginal image: \t Inverted Image:\n"); /*
	displaying original and inverted image side by side*/
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(image[i][j] == 0){
				inverse[i][j] = 1;
			}
			else{
				inverse[i][j] = 0;
			}
			printf("%3d",image[i][j]);
		}
		printf("\t\t");
		for(j = 0; j < 4; j++){
			printf("%3d",inverse[i][j]);
		}
		printf("\n");
	}
	return 0;
}
