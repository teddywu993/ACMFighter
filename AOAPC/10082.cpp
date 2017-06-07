#include <iostream>
#include <string>

#define LOCAL

using namespace std;

const char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
void solve(){
	char c;
	int idx;
	while((c = getchar()) != EOF){
		for(idx = 0; s[idx] && s[idx] != c; idx++){
		//	printf("s[idx] = %c\n",s[idx]);
			;
		}

		if(s[idx] == c)
			printf("%c",s[idx-1]);
		else{
			printf("%c",c);
			//printf("%c",s[idx]);
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