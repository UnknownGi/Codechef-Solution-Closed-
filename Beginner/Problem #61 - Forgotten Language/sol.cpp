#include<vector>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k;
		scanf("%d %d", &n, &k);
		
		string tmp;
		vector<pair<string, bool> > v;
		for ( int i=0; i<n; ++i ) {
			cin >> tmp;
			v.push_back(make_pair(tmp, false));
		}
		
		for ( int i=0; i<k; ++i ) {
			int z; scanf("%d", &z);
			for ( int j=0; j<z; ++j ) {
				cin >> tmp;
				for ( int x=0; x<v.size(); ++x ) {
					if ( tmp == v[x].first ) 
						v[x].second = true;
				}
			}
		}
		
		for ( int i=0; i<v.size(); ++i ) {
			if ( v[i].second ) printf("YES ");
			else printf("NO ");
		} printf("\n");
	}
}
