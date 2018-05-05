#include <iostream>

using namespace std;
int main(){
	long long int m;
	cin >> m;
	string s;
	while(m>0){
		cin>>s;
		if(s.length() > 10){
			cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
		}
		else
			cout <<s <<endl;
		m--;
	}
	return 0;
}
