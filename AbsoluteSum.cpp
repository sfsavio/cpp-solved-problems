/*
- STATUS: SOLVED
- Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.
- The term "absolute value" means to remove any negative sign in front of a number, and to think of all numbers as positive (or zero).
- All the elements in the given array are integers.
*/
#include<iostream>

void sumArray(int *array);

int main () {
	int array[] = {1, -2, 3, -4};
	
	sumArray(array);

	return 0;

}
	  
void sumArray (int *ptr_array) {
	//std::cout<<ptr_array[0];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		if (ptr_array[i] < 0) ptr_array[i] = ptr_array[i] * -1;
		std::cout<<ptr_array[i] << "\n";
		sum = sum + ptr_array[i];
	}	
	std::cout<<"\n\nsum: "<< sum;
}




