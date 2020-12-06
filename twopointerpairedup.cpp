# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	//(void)!freopen("pairup.in", "r", stdin);
	//(void)!freopen("pairup.out","w",stdout); 
	long long n;
	cin >> n;
	vector<pair <long long , long long> > v;
	long long totcows=0;
	long long x;
	long long y;
	for (long long i=0;i<=n-1;i++)
	{
		cin >> x >> y;
		v.push_back({y,x});
	}
	sort(v.begin(),v.end());
	long long mtime=-10000;
	vector<pair <long long , long long> > :: iterator it1;
	vector<pair <long long , long long> > :: iterator it2;
	it1=v.begin();
	it2=v.end()-1;
	long long rem=0;
	while(it1<=it2)
	{
		mtime=std::max({mtime,it1->first+it2->first});
		// remove the min of both of them in one operation
		rem=std::min({it1->second,it2->second});
		it2->second=it2->second-rem;
		it1->second=it1->second-rem;
		if (it2->second<=0)
		{
			it2--;
		}
		if (it1->second<=0)
		{
			it1++;
		}
	}
	cout << mtime << endl;
	// path - OneDrive\Desktop\rand.exe
}
