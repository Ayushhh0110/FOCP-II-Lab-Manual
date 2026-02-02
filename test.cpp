#include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;  
	int z=0;
	while (a[z]=='z') z++;
	int o = a.length()-z;
	if(o==2*z) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;	
}
