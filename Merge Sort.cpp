#include <iostream>
 
using namespace std;
 

void Merge(int *a, int low, int high, int mid) // function for merging the string.
{
	
	int i, j, k, temp[high-low+1]; // declearing the variables.
	i = low;
	k = 0;
	j = mid + 1;
 
	
	while (i <= mid && j <= high) 
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
 
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
	    Merge(a, low, high, mid);
	}
}
 
int main()
{
	int n, i;
	int arr[]={53,52,39,70,65,31,34,67,22,45,26,46,32,44,87,33,500,55,42,93,39,25,89,100,123,5,6,600,36,66};
	n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array to be sorted is "<<n<<endl;
	MergeSort(arr, 0, n-1);
 
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
	return 0;
}
