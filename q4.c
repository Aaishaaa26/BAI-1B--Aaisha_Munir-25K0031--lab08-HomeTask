#include <stdio.h>
int main(){
	int row,col,count=0, seats[4][4]= {
	{1, 0, 1},
	{0, 0, 1},
	{1, 1, 0}
	};
	for(row = 0; row < 3; row++){
		for(col = 0; col < 3; col++){
			if(seats[row][col] == 0){
				++count;
		    }
		}
	}
	printf("Total Available Seats Are: %d\nThe Position Of Available Seats Are:\n", count);
	for(row = 0; row < 3; row++){
		for(col = 0; col < 3; col++){
			if(seats[row][col]==0){
				printf("Row Number: %d, Seat Number: %d\n",row+1, col+1 );
			}
		}
	}
	return 0;
}
