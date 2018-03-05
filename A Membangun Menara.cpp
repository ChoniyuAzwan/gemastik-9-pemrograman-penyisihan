#include <iostream>
using namespace std;

main() {
    cout << "Masukan\n";
	int t, n, a, b, c, l[20], h[20], tempLow=0, tempHigh=0, test[20];
	cin >> t;
	for(int i=0; i<t; i++) {
		l[i]=0;
		h[i]=0;
		cin >> n;
		for(int j=0; j<n; j++) {
			cin>>a; cin>>b; cin>>c;
			if(a<b) {
				tempLow = a;
				tempHigh = b;
			} else {
				tempLow = b;
				tempHigh = a;
			}

			if(c<tempLow) {
				tempLow = c;
			}
			if(c>tempHigh) {
				tempHigh = c;
			}
			l[i] += tempLow;
			h[i] += tempHigh;
		}
	}
    cout << "\nKeluaran\n";
	for(int i=0; i<t; ++i) {
		cout << l[i] << " " << h[i] << endl;
	}
}
