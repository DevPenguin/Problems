#include <iostream>
using namespace std;


void Reverse(int numbers[], int count);
    
    int main()
    {
    
    int numbers[] = {1,2,3,4,5};
    int count = sizeof numbers / sizeof numbers[0];
    
  	
	Reverse(numbers, count);
		
    return 0;
    }



void Reverse(int numbers[], int count)
{
	for(int i=0; i<count;i++)
	cout << numbers[i];
	
	cout << endl;
  for(int i=0; i < count/2 ; i++)
  {
    int j = count - i - 1;
	int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
    }
	
	for(int i =0; i <count; i++)
		cout << numbers[i];
    }
    
