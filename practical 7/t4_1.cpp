# include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter size of the array:-\n";
	cin>>n;
	int a[n][n],b[n][n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"New matrix is:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[0][i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
