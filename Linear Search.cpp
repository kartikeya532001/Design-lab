#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
		  if (arr[i] == x) 
            return i; 
			return -1; 
} 
  
int main() 
{ 
    int arr[] = { 2, 3, 4, 10, 12,13,14,15,16,17,18,19,20,22,24,26,28,34,56,58,64,66,68,70,73,75,78,80,82,84 }; 
    int x = 68; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"The size of array:"<<n<<endl;
    int result = search(arr, n, x); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<x<<" "<<"Element is present at index " <<result+1; 
   return 0; 
} 
