#include <iostream>
#include <string>

#define LOCAL

using namespace std;

void solve(){
	bool flag = true;
	char c;
	while((c = getchar()) != EOF){
		if(c == '"'){
			printf("%s", flag ? "``" : "''");
			flag = !flag;
		}else{
			printf("%c",c);
		}
	}
}





int main(){
	#ifdef LOCAL
	freopen("input.txt","r",stdin);
	#endif

	solve();

	return 0;
}