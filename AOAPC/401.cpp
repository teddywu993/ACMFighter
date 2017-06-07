#include <iostream>
#include <string>
#include <unordered_map>
#define LOCAL

using namespace std;

unordered_map<char,char> m;

void solve(){
	m['A'] = 'A';
	m['E'] = '3';
	m['H'] = 'H';
	m['I'] = 'I';
}





int main(){
	#ifdef LOCAL
	freopen("input.txt","r",stdin);
	#endif

	solve();

	return 0;
}