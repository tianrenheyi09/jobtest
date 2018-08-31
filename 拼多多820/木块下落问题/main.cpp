#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int hp,n,b;
	cin>>hp>>n>>b;
	int ans=0;
	if(2*n>b)
	{
		int t=hp/(2*n);
		ans+=t*2;
		t=hp%(2*n);
		while(t>0)
		{
			t-=n;
			ans++;
		}
	}
	else
	{
		int t=hp/b;
		ans+=t*2;
		t=hp%b;
		int c=0;
		while(t>0)
		{
			t-=n;
			c++;
		}
		ans=ans+min(c,2);
	}
	cout<<ans<<endl;
	return 0;
}