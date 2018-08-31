#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<char>>mat(m,vector<char>(n,' '));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(auto it=mat.begin();it!=mat.end();it++)
	{
		for(auto it1=(*it).begin();it1!=(*it).end();it1++)
		{
			cout<<*it1;
		}
		cout<<endl;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(mat[j][i]=='x') continue;
			if(mat[j][i]=='.') continue;

			int now=j;
			int k=j+1;
			while(k<n)
			{
				if(mat[k][i]=='x') break;
				if(mat[k][i]=='o') break;
				swap(mat[k][i],mat[now][i]);
				now++;
				k++;
			}
			if(k==n)
			{
				mat[now][i]='.';
			}
			
		}
	}
	for(auto it=mat.begin();it!=mat.end();it++)
	{
		for(auto it1=(*it).begin();it1!=(*it).end();it1++)
		{
			cout<<*it1;
		}
		cout<<endl;
	}
	return 0;
}