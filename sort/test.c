#include "sort.h"

int main(){
	int i;
	int array[100000] = {0};
	for(i = 0; i < 100000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	quick_sort(array, 0, length-1);
	//bubble_sort(array, length);
	for(i = 0; i < length; i++){
		printf("%d ", array[i]);
	}
}