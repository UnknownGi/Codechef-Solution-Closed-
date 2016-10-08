#include<vector>
#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define pb push_back
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, m, tmp; 
		scanf("%d %d", &n, &m);
		
		bool a[n], ch=true;
		REPN(i,0,n) a[i]=true;
		
		REPN(i,0,m) {
			scanf("%d", &tmp);
			a[tmp-1] = false;
		}
		
		vector<int> chef, assistant;
		REPN(i,0,n) {
			if ( a[i] && ch ) { chef.pb(i+1); ch=false; }
			else if ( a[i] && !ch ) { assistant.pb(i+1); ch=true; }
		}
		
		REPN(i,0,chef.size()) printf("%d ", chef[i]); printf("\n");
		REPN(i,0,assistant.size()) printf("%d ", assistant[i]); printf("\n");
	}
}
