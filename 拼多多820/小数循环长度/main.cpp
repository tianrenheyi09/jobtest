#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;




unordered_map<int, int> ma;
pair<int, int> solve(int n, int m) {
    ma.clear();
    int now = 0;
    int t, h;
    n = n % m;
    while(true) {
        n = n % m;
        t = n % m;
        if (ma.find(n) == ma.end()) {
            ma[n] = now;
        } else {
            h = now - ma[n];
            return make_pair(ma[n], h);
        }
        //cout << n << " " << m << " " << t << endl;
        if (t == 0) {
            return make_pair(now, 0);
        }
        n = t;
        n *= 10;
        now ++;
    }
}
int main()
{
	int m;int n;
	cin>>m>>n;
	auto ans=solve(m,n);
	cout<<ans.first<<" "<<ans.second<<endl;

		return 0;
}
		