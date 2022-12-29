#include <bits/stdc++.h>
using namespace std;

int main(){
	int N = 5005;
	char s[N], sfinale[N], tempale[N];
	int kfinale, t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n >> s;
		kfinale = 1;
		strcpy (sfinale, s);
	
		for (int k=2; k<=n; k++){
			strcpy (tempale, s);
			
			for (int i=0; i<=(n-k); i++){
				int j1 = i, j2 = i+k-1;
				while (j1<j2){
					swap(tempale[j1], tempale[j2]);
					j1++, j2--;
				}
			}
			if (strcmp (tempale, sfinale)<0){
				strcpy (sfinale, tempale);
				kfinale = k;
			}
		}
		cout << sfinale << endl; 
		cout << kfinale << endl;
	}
}
