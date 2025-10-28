#include <stdio.h>
#define NUMCLASS 3
#define GRADE 4
int main() {
	float avg;
    int i,j,num,count,total,gradeBook[NUMCLASS][GRADE] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };

    for(i = 0; i < NUMCLASS; i++){
    	total=0,count=0,num=i;
        for(j = 0; j < GRADE; j++) {
        	++count;
        	total= total + gradeBook[i][j];
        } 
		avg = (float) total/count;
        printf("The Average Score For Class %d is: %.2f\n",++num,avg); 
	}
   
    
    return 0;
}
