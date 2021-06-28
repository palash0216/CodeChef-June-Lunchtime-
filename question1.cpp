#include <iostream>
using namespace std;

int main() {
	int A,B,X,T,res;
	cin>>T;
	while(T--)
	{
	cin>>A>>B>>X;
	res=((B-A)/X);
	cout<<res<<endl;
	}
	return 0;
}
