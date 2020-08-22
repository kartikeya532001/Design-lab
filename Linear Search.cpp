
#include<iostream> 
using namespace std; 
  

int search(int arr[], int n, int x) // seraching the element.
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) // comparing the to be searched and the elements present in the array.
            return i; 
    return -1; 
} 
  
 
int main() // main function.
{ 
    int arr[100],k;
	cout<<"Enter the size of array: ";
	cin>>k;
	cout<<"Enter the elements of array:  ";
	for (int z=0;z<k;z++) // taking input of the array.
	cin>>arr[z]; 
    int x ;
	cout<<"Enter the element to searched: ";
	cin>>x; // taking input of the element to be searched.
    int index = search(arr, k, x); // calling the function to perform the searching.
    if (index == -1) 
        cout << "Element is not present in the array"; 
    else
        cout << "Element found at position " << index+1; 
  
    return 0; 
}
