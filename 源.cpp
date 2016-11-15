#include<iostream>
using namespace std;

bool isTriangle(int a, int b, int c){
	if (a + b < c)return false;
	if (a + c < b)return false;
	if (b + c < a)return false;
	return true;
}

int main()
{
	int n;
	while (cin >> n){
		int s[101];
		for (int i = 0; i < n; i++)cin >> s[i];
		int sum = 0;
		int flag = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				for (int k = 0; k < n; k++){
					if (s[i]!=s[k]&&s[j]!=s[k]&&s[i]!=s[j]&&isTriangle(s[i], s[j], s[k])){
						flag = 1;
						if (s[i] + s[j] + s[k]>sum)sum = s[i] + s[j] + s[k];
					}
				}
			}
		}
		if (flag == 0)cout << 0 << endl;
		else{
			cout << sum << endl;
		}
	}
	return 0;
}