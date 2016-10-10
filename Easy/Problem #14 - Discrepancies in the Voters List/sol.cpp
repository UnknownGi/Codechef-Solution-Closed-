#include<map>
#include<vector>
#include<stdio.h>
#define pb push_back
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n1, n2, n3, tmp;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	map<int, int> m;
	map<int, int>::iterator it;
	REPN(i,0,(n1+n2+n3)) {
		scanf("%d", &tmp);
		if ( m.find(tmp) != m.end() ) {
			++m[tmp];
		} else m[tmp] = 1;
	}
	
	vector<int> v;
	for ( it=m.begin(); it!=m.end(); ++it ) {
		if ( it->second >= 2 ) v.pb(it->first);
	}
	
	printf("%d\n", v.size());
	REPN(i,0,v.size()) printf("%d\n", v[i]);
}
