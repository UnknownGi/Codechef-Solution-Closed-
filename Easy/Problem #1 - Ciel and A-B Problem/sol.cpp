#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	int ans = a-b;
	ans%10==9? --ans : ++ans;
	
	printf("%d\n", ans);
}

	
