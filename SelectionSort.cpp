  
#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n ; j++)
		{
			if(arr[j] < arr[i])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number of array elements: ";
	cin>>n;
	int arr[n];
	for(int i = 0; i<n ; i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr, n);
	cout<<"The array sorted in ascending order is:"<<endl;
	for(int i = 0; i <n ; i++)
	{
		cout<<arr[i]<<' ';
	}
	
	return 0;
}
