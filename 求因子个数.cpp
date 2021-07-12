//给定两个整数m和n，需要输出从m到n之间（包括m和n）每一个数字的因子个数（1<=m<=n<=1000000)
//输入：
//输入两个整数m和n
//输出：
// 输出功（n-m+1）行，分别代表从m从n之间每一个数字的因子个数
//
//

#include<iostream>
#include<cmath>
using namespace std;
const int maxn=1e6+10;	
int f[maxn];
void init(){
	for (int i = 2; i < maxn; i++){
		for (int j = 2; j <= maxn/i; j++){
			f[i*j]++;
		}
	}
}
int main(){
	init();
	int m,n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++){
		printf("%d\n", f[i] + 2);
	}
	return 0;
}
