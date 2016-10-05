#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		string id; cin >> id;
		
		string op;
		int score=0, tmp, out;
		for ( int i=1; i<=n; ++i ) {
			cin >> op;
			int point = 0;
			if ( op=="CONTEST_WON" ) {
				scanf("%d", &tmp );
				if ( tmp < 20 ) point=20-tmp;
				score += (300+point);
			} else if ( op=="TOP_CONTRIBUTOR" ) score += 300;
			else if ( op=="BUG_FOUND" ) {
				scanf("%d", &tmp);
				score += tmp;
			} else if ( op=="CONTEST_HOSTED" ) score += 50;
		}
		
		id=="INDIAN"? out=score/200 : out=score/400;
		printf("%d\n", out);
	}
}
