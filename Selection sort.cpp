#include<iostream>
using namespace std;
void swapping(int &a, int &b) // for swapping the values.
 {         
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size)  //for displaying the array.
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) // for selectionshorting.
{
   int i, j, imin;
   for(i = 0; i<size-1; i++) 
   {
      imin = i;   // finding lowest index
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swapping(array[i], array[imin]); // swaping them.
   }
   }
int main() 
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
