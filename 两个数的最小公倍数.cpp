#include<iostream>
using namespace std;
int gcd(int x,int y){
	if (y == 0) return x;
	else return gcd(y, x % y);
}
int main(){
	int x,y;
	cin >> x >> y; 
	cout << 1ll*x*y/gcd(x,y) << endl;
	return 0;
}
