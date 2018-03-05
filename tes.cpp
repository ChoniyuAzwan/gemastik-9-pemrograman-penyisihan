#include <iostream>
using namespace std;

main() {
	int kandidat[5] = {4,3,5,2,1}, temp;
	int gemas[5];

	for(int i=0; i<5; i++) {
		gemas[i] = kandidat[i];
	}

	cout << "kandidat = ";
    for(short i=0; i<5; i++) {
        cout << kandidat[i] << " ";
    }
    cout << endl;

	for(short i=0; i<5-1; i++) {
	    for(short j=0; j<5-i-1; j++) {
	        if(gemas[j+1] > gemas[j]) {
	            temp = gemas[j];
                gemas[j] = gemas[j+1];
                gemas[j+1] = temp;
	        }
	    }

	    cout << endl;
        cout << "Sorting " << i+1 << " = ";
        for(short i=0; i<5; i++) {
            cout << gemas[i] << " ";
        }
	}
}
