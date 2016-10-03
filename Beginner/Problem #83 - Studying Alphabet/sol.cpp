#include<stdio.h>
#include<iostream>
#define REP(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int r[26];
	string read; cin >> read;
	REP(i,0,26) r[i] = 0;
	REP(i,0,read.size()) r[read[i]-'a']=1;
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string word; cin >> word;
		
		bool f=true;
		REP(i,0,word.size()) {
			if ( r[word[i]-'a'] == 0 ) {
				f=false;
				break;
			}
		}
		
		f? printf("Yes\n") : printf("No\n");
	}
}
