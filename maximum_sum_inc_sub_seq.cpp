#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			b[i] = a[i];
		}
		for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				if(a[j]<a[i] && b[i]< b[j]+a[i])
					b[i] = b[j]+a[i];
			}
		}
		cout<<(*max_element(b,b+n))<<endl;
	}
	return 0;
}