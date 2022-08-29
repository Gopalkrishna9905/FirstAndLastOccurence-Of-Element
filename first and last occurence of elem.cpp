#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key)
{
	int start =0;
	int end= n-1;
	int mid= start + (end-start)/2;
	
	int ans = -1;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			end= mid-1;
		}
		else if(arr[mid]>key)
		{
			end= mid-1;
		}
		else{
			start = mid+1;
		}
		mid= start + (end-start)/2;
	}
	return ans;
}


int lastOccuerence(int arr[],int n,int key)
{
		int start =0;
	int end= n-1;
	int mid= start + (end-start)/2;
	
	int ans = -1;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
		    ans = mid;
			start= mid+1;
		}
		else if(arr[mid]>key)
		{
			end= mid-1;
		}
		else{
			start = mid+1;
		}
		mid= start + (end-start)/2;
	}
	return ans;
}


int main()
{
	int arr[]={12,14,15,17,18,18,18,19,20};
	int n=  sizeof(arr)/sizeof(arr[0]);
	
	int x  =firstOcc(arr,n,18);
	cout<<" The first occurence is : " <<x <<endl;
	
	int y  =lastOccuerence(arr,n,18);
	cout<<" The last occurence is : " <<y <<endl;
}
