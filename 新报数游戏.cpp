#include<iostream>
using namespace std;
const int maxn=1e5+10;
int a[maxn],q[maxn];
int find(int l,int r,int x){
	int mid;
	while (l < r){
		mid = (l + r) / 2;
		if (a[mid] <= x) l = mid + 1;
		else r = mid;
	}
	return a[l];
}
int main(){
	int n,m,x;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	for (int i = 1; i <= m; i++){
		scanf("%d", &x);
		int ans = find(1,n,x);
		printf("%d", ans);
		if (i < n) printf(" ");
	}
	printf("\n");
	return 0;
}
