#include<iostream>
#include <algorithm>
using namespace std;
void swap(int *a, int *b);
int main()
{
	bsearch();
	int a[10],n,i,j;
	cout<<"enter the length of array ";
	cin>>n;
	cout<<"enter the "<<n<<" numbers :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a+j,a+j+1);
			
			}
		}
	}
	cout<<"sorted number is :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
