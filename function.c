#include <stdio.h>


int result_1, result_2;

int F_1(int value1, int value2){
	result_1 = value1+value2;
	printf("varlue1: %d\nvarlue2: %d\n", value1, value2);	
	return result_1;
}
int F_2(int value1, int value2){
	result_2 = value1 * value2;
	return result_2;
}

//*** MAIN ***

int sum, sum2;


int main()
{
	int a=10;
    int b=20;
    
	F_1(a, b);  //function1
	F_2(a, b);  //function2
	
	sum = result_1;
	sum2 = result_2;
	printf("SUM_1a+b = %d\nSUM_2a*b = %d\n",sum, sum2);
	
	return 0;
}
