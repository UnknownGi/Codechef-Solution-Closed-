#include<vector>
#include<stdio.h>
#define pb push_back
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

bool f;
void solve ( vector<int> v, int val, int sum, int goal, int index, bool toAdd ) {
	if ( toAdd ) sum += val;
	
	if ( sum==goal ) { f=true; return; }
	else if ( !f && index+1<v.size() ) {
		solve(v, v[index+1], sum, goal, index+1, true);
		solve(v, v[index+1], sum, goal, index+1, false);
	}
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, m, tmp;
		scanf("%d %d", &n, &m);
		
		f=false;
		vector<int> v;
		REPN(i,0,n) {
			scanf("%d", &tmp);
			if ( tmp<m ) v.pb(tmp);
			else if ( tmp==m ) f=true;
		}
		
		if ( !f ) {
			int sum=0;
			for ( int i=0; i<v.size() && !f; ++i )
				solve(v, v[i], sum, m, i, true); 
				
			f? printf("Yes\n") : printf("No\n");
		} else printf("Yes\n");
	}
}
