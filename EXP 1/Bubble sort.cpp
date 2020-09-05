#include<iostream>
using namespace std;

void swapping(int &a, int &b) // for swapping the values.
{     
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) //for displaying the array.
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) // for bubbleshorting.
{
   for(int i = 0; i<size; i++) 
   {
      int swaps = 0;         
      for(int j = 0; j<size-i-1; j++) 
	  {
         if(array[j] > array[j+1])      // comparing the values
		 {       
            swapping(array[j], array[j+1]); // swaping them.
            swaps = 1;    
         }
      }
      if(swaps!=1)
         break;       
   }
}
int main() // main function 
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
