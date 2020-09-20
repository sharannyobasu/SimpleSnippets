#include<iostream>
using namespace std;
int main()
{
	int num,n,i;
	cout<<"Enter number of elements : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Please enter element to search : "<<endl;
	cin>>num;
	int temp=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cout<<"Element found at position : "<<i+1<<endl;
			temp=0;
		}
	
	}
	if(temp==-1)
	{
		cout<<"Not found !"<<endl;
	}
	return 0;
	
}
