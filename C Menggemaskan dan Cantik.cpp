#include <iostream>
using namespace std;

main() {
	int t, n;
	cin >> t;

	struct hasil {
		int kekuatan;
		string namaGemas[3], namaCantik[3];
	};

	for(int i=0; i<t; i++) {
		// cout << "input banyak looping : ";cin >> n;
		n = 11;

		struct data {
			int g, c;
			string nama;
		} kandidat[n], gemas[n], cantik[n], temp;

		// string dataNama[n] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
		// int dataG[n] = {3, 7, 10, 7, 5, 3, 10, 2, 5};
		// int dataC[n] = {3, 6, 6, 10, 3, 10, 10, 6, 8};

		string dataNama[n] = {"charlie", "eko", "fauzan", "victor", "halim", "mona", "ridho", "sherly", "ahmad", "bambang", "wawan"};
		int dataG[n] = {11, 70, 101, 99, 103, 16, 20, 54, 100, 40, 74};
		int dataC[n] = {60, 32, 101, 103, 10, 100, 64, 85, 3, 23, 19};


		// for(int j=0; j<n; j++) {
		// 	cout << "input nilai kandidat : ";
		// 	cin>>kandidat[j].nama; cin>>kandidat[j].g; cin>>kandidat[j].c;
		// }
		cout << "\njalan 1\n";
		for(int j=0; j<n; j++) {
			kandidat[j].nama = dataNama[j];
			kandidat[j].g = dataG[j];
			kandidat[j].c = dataC[j];
		}
		cout << "\njalan 2\n";
		for(int j=0; j<n; j++) {
			gemas[j] = kandidat[j];
			cantik[j] = kandidat[j];
		}
		cout << "\njalan 3\n";
		cout << "kandidat awal = \n";
		for(int j=0; j<n; j++) {
			cout << kandidat[j].nama << " "; cout << kandidat[j].g << " "; cout << kandidat[j].c << "\t";
		}
		cout << endl;
		cout << "gemas awal = \n";
		for(int j=0; j<n; j++) {
			cout << gemas[j].nama << " "; cout << gemas[j].g << " "; cout << gemas[j].c << "\t";
		}

		cout << endl;
		cout << "cantik awal = \n";
		for(int j=0; j<n; j++) {
			cout << cantik[j].nama << " "; cout << cantik[j].g << " "; cout << cantik[j].c << "\t";
		}

		cout << "\n\nsorting tahap 1 = \n";

		for(short j=0; j<n-1; j++) {
	        for(short k=0; k<n-j-1; k++) {
	            if(gemas[k+1].g > gemas[k].g) {
	                temp = gemas[k];
	                gemas[k] = gemas[k+1];
	                gemas[k+1] = temp;
	            }
	        }

	  //       cout << "\nhasil sorting gemas ke " << j+1;
			// cout << endl;
			// for(int k=0; k<n; k++) {
			// 	cout << gemas[k].nama << " "; cout << gemas[k].g << " "; cout << gemas[k].c << "    ";
			// }
	    }

	    cout << "\nhasil sorting gemas";
		cout << endl;
		for(int k=0; k<n; k++) {
			cout << gemas[k].nama << " "; cout << gemas[k].g << " "; cout << gemas[k].c << "    ";
		}

	    for(short j=0; j<n-1; j++) {
	        for(short k=0; k<n-j-1; k++) {
	            if(cantik[k+1].c > cantik[k].c) {
	                temp = cantik[k];
	                cantik[k] = cantik[k+1];
	                cantik[k+1] = temp;
	            }
	        }

	  //       cout << "\nhasil sorting cantik ke " << j+1;
			// cout << endl;
			// for(int k=0; k<n; k++) {
			// 	cout << cantik[k].nama << " "; cout << cantik[k].g << " "; cout << cantik[k].c << "    ";
			// }
	    }

    	cout << "\nhasil sorting cantik ";
		cout << endl;
		for(int k=0; k<n; k++) {
			cout << cantik[k].nama << " "; cout << cantik[k].g << " "; cout << cantik[k].c << "    ";
		}

	    cout << "\n\nsorting tahap 2 = \n";

	    cout << endl;
		cout << "gemas awal = \n";
		for(int j=0; j<n; j++) {
			cout << gemas[j].nama << " "; cout << gemas[j].g << " "; cout << gemas[j].c << "\t";
		}

	    cout << endl;
		cout << "cantik awal = \n";
		for(int j=0; j<n; j++) {
			cout << cantik[j].nama << " "; cout << cantik[j].g << " "; cout << cantik[j].c << "\t";
		}

	    cout << endl << endl;
	    for(short j=0; j<n-1; j++) {
	        for(short k=0; k<n-j-1; k++) {
	            if((gemas[k+1].g == gemas[k].g) && (gemas[k+1].c < gemas[k].c)) {
	                temp = gemas[k];
	                gemas[k] = gemas[k+1];
	                gemas[k+1] = temp;
	            }
	        }

	  //       cout << "\nhasil sorting gemas ke " << j+1;
			// cout << endl;
			// for(int k=0; k<n; k++) {
			// 	cout << gemas[k].nama << " "; cout << gemas[k].g << " "; cout << gemas[k].c << "    ";
			// }
	    }

	    cout << "\nhasil sorting gemas";
		cout << endl;
		for(int k=0; k<n; k++) {
			cout << gemas[k].nama << " "; cout << gemas[k].g << " "; cout << gemas[k].c << "    ";
		}

	    cout << endl << endl;
	    for(short j=0; j<n-1; j++) {
	        for(short k=0; k<n-j-1; k++) {
	            if((cantik[k+1].c == cantik[k].c) && (cantik[k+1].g < cantik[k].g)) {
	                temp = cantik[k];
	                cantik[k] = cantik[k+1];
	                cantik[k+1] = temp;
	            }
	        }

	  //       cout << "\nhasil sorting cantik ke " << j+1;
			// cout << endl;
			// for(int k=0; k<n; k++) {
			// 	cout << cantik[k].nama << " "; cout << cantik[k].g << " "; cout << cantik[k].c << "    ";
			// }
	    }

	    cout << "\nhasil sorting cantik";
		cout << endl;
		for(int k=0; k<n; k++) {
			cout << cantik[k].nama << " "; cout << cantik[k].g << " "; cout << cantik[k].c << "    ";
		}

	    //totalkan jumlah pilihan gemas dan cantik
		int totalTempGemas=0, totalTempCantik=0, totalConstGemas=0, totalConstCantik=0;
		data tempGemas[3], tempCantik[3], constGemas[3], constCantik[3];

		int topGemas=2, topCantik=2, posGemas, posCantik, counter=1;
		bool status=true;

		for(int j=0; j<3; j++) {
			tempGemas[j] = gemas[j];
			tempCantik[j] = cantik[j];
			constGemas[j] = gemas[j];
			constCantik[j] = cantik[j];

			totalTempGemas += tempGemas[j].g;
			totalTempCantik += tempCantik[j].c;
		}

		cout <<endl << totalTempGemas << endl << totalTempCantik << endl;

	    // memilih nilai g dan c
		while(status) {
			totalConstGemas	= totalTempGemas;
			totalConstCantik = totalTempCantik;
			totalTempGemas=0;
			totalTempCantik=0;
			cout << "\nlooping pemilihan nilai g dan c ke " << counter++ << "\n";
			status = false;
			// cout << endl;
			// for(int k=0; k<3; k++) {
			// 	cout << tempGemas[k].nama << " "; cout << tempGemas[k].g << " "; cout << tempGemas[k].c << "    ";
			// 	cout << tempCantik[k].nama << " "; cout << tempCantik[k].g << " "; cout << tempCantik[k].c << endl;
			// }

			for(int j=0; j<3; j++) {
			    for(int k=0; k<3; k++) {
			    	if(tempGemas[j].nama == tempCantik[k].nama) {
			    		cout << "cek";
			    		posGemas = j;
			    		posCantik = k;
			    		topGemas++;
			    		topCantik++;
			    		tempGemas[j] = gemas[topGemas];
			    		tempCantik[k] = cantik[topCantik];
			    		status = true;
			    		break;
			    	}
			    	if(status) break;
			    }
		    }

		    if(status == false) {
		    	break;
		    }

			for(int j=0; j<3; j++) {
				totalTempGemas += tempGemas[j].g;
				totalTempCantik += tempCantik[j].c;
			}

			cout <<endl << totalTempGemas << endl << totalTempCantik << endl;

			cout << "total const gemas = " << totalConstGemas << " - total const cantik = " << totalConstCantik << endl;
			cout << "total temp gemas = " << totalTempGemas << " - total temp cantik = " << totalTempCantik << endl;

			int ad = totalConstGemas+totalTempCantik, bc = totalTempGemas+totalConstCantik;
			cout << "---------------------------------------\n";
			cout << "pos gemas = " << posGemas << endl;
			cout << "pos cantik = " << posCantik << endl;
			cout << "data pos gemas = " << tempGemas[posGemas].nama << endl;
			cout << "data pos gemas = " << tempCantik[posCantik].nama << endl;
			cout << "top gemas = " << topGemas << endl;
			cout << "top cantik = " << topCantik << endl;
			cout << "ad = " << ad << endl;
			cout << "bc = " << bc << endl;
			cout << "---------------------------------------\n";

			if(ad > bc) {
				tempGemas[posGemas] = constGemas[posGemas];
				topGemas--;
			} else {
				tempCantik[posCantik] = constCantik[posCantik];
				topCantik--;
			}

			cout << "\nhasil sorting yang diambil";
			cout << endl;
			for(int j=0; j<3; j++) {
				cout << tempGemas[j].nama << " "; cout << tempGemas[j].g << " "; cout << tempGemas[j].c << "    ";
			}
			cout << endl;
			for(int j=0; j<3; j++) {
				cout << tempCantik[j].nama << " "; cout << tempCantik[j].g << " "; cout << tempCantik[j].c << "    ";
			}

			totalTempGemas=0;
			totalTempCantik=0;
			for(int j=0; j<3; j++) {
				totalTempGemas += tempGemas[j].g;
				totalTempCantik += tempCantik[j].c;
			}

			cout <<endl << totalTempGemas << endl << totalTempCantik << endl << status << endl;
		}
	}
}
