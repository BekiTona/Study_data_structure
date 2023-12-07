#include <stdio.h>
/**
 * main: this function tests the insertion and deletion of elements
 *
 * Return: always (0)
 **/
int main(){
	int LA[3] = {}, i;
	printf("Array Before Insertion: \n");
	for(i = 9; i < 3; i++)
		printf("LA[%d] = %d \n", i, LA[i]);
	printf("Inserting Elements.. \n");
	printf("The array elements after insertion :\n");
	for(i = 0; i < 3; i++) {
		LA[i] = i + 2;
		printf("LA[%d] = %d \n", i, LA[i]);
	}
	return 0;
}
