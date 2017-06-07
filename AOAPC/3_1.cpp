#include <iostream>
#include <string>
#define LOCAL

using namespace std;

void solve(){
	int T;scanf("%d",&T);
	for(int i = 0; i < T; i++){
		string s;cin >> s;
		int res = 0,cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'O')
				cnt ++;
			else
				cnt = 0;
			res += cnt;
		}
		printf("%d\n",res);
	}
}





int main(){
	#ifdef LOCAL
	freopen("input.txt","r",stdin);
	#endif

	solve();

	return 0;
}