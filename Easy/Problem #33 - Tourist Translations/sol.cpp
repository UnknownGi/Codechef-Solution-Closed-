#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	string seq; cin >> seq;
	
	char ch[26], up[26];
	REPN(i,0,26) {
		ch[i] = seq[i];
		up[i] = seq[i]-32;
	}
	
	while ( t-- ) {
		string trans, word; cin >> word;
		
		REPN(i,0,word.size()) {
			if ( word[i]>='a' && word[i]<='z' ) trans += ch[word[i]-'a'];
			else if ( word[i]>='A' && word[i]<='Z' ) trans += up[word[i]-'A'];
			else if ( word[i]=='_' ) trans += ' ';
			else trans += word[i];
		}
		
		printf("%s\n", trans.c_str());
	}
}
