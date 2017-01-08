#include <iostream>
#include <cmath>
#define REPETITIONS 500000

using namespace std;

//This method takes an array as input, and computes the sum of sine values of the inputs in the array.
void approach1(const int arr[], int arrSize) {
double sine_sum = 0;
for(int i = 0; i < arrSize; i++) {
    sine_sum += sin(arr[i]); 
    cout << sine_sum << endl;
}
 cout << "The sum of sine numbers is:" << sine_sum << endl;
}

//This method demonstrates the concept of loop unrolling 
void approach2(int arr[], int arrSize) {
double sine_sum = 0;
for(int i = 0; i < arrSize; i =i+3) {
   sine_sum += sin(arr[i]);
   sine_sum += sin(arr[i+1]);
   sine_sum += sin(arr[i+2]);
  cout << sine_sum << endl;   
  }
 cout << "the sum of sine numbers is:" << sine_sum << endl;
 
}

int main() {
    int array[REPETITIONS]; //array declaration
   for(int i = 0; i < REPETITIONS; i++) {
       array[i] = i; //initialization
  }
    approach2(array, REPETITIONS);// <-- just change this line
return 0;
}
