#include <iostream>
using namespace std;

int a[20];		//Deklarasi array a dengan ukuran 20
int n;			//Deklarasi variabel n untuk menyimpan banyak elemen pada array

void input() {	//Procedur untuk input
	while (true) {	//Looping
		cout << "Masukkan banyaknya elemen pada array : ";	//Output ke Layar
		cin >> n;	//input dari pengguna 
		if (n <= 20)	//Jika n kurang dari atau sama dengan 20
			break;	//Keluar dari loop
		else {	//Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//output ke Layar
		}
	}




