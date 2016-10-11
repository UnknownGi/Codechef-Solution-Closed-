#include<vector>
#include<stdio.h>
#define pb push_back
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int n; scanf("%d", &n);
	
	int a[n];
	REPN(i,0,n) scanf("%d", &a[i]);
	
	vector<vector<int> > v;
	
	REPN(i,0,n) {
		bool c=true;
		vector<int> cycle;
		
		int j=a[i]-1;
		
		cycle.pb(i+1);
		while ( c ) {
			if ( j<i ) { cycle.clear(); c=false; }
			else if ( j==i ) {
				cycle.pb(j+1);
				c = false;
			}
			else {
				cycle.pb(j+1);
				j = a[j]-1;
			}
		}
		
		if ( cycle.size() > 0 ) v.pb(cycle);
		cycle.clear();
	}
	
	printf("%d\n", v.size());
	REPN(i,0,v.size()) {
		REPN(j,0,v[i].size()) printf("%d ", v[i][j]);
		printf("\n");
	}
}
