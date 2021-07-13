#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn=100010;
int a[maxn]; 

int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for (int i=0;i<n;i++){
		printf("%d",a[i]);
		if (i!=n-1) printf(" ");
	}
	printf("\n");
	return 0;
}
