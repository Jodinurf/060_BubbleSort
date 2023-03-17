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
	cout << endl;							//output ke layar kosong
	cout << "=====================" << endl;	//output ke layar
	cout << "Masukkan Elemen Array" << endl;	//output ke layar
	cout << "=====================" << endl;	//output ke layar

	for (int i = 0; i < n; i++) {	//looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ":";	//output ke layar
		cin >> a[i];
	}
}
void bubbleSortArray() {	//procedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1;i < n; i++) {	// Looping dengan i dimulai dari 1 hinggan n-1
		for (int j = 0; j < n - i; j++) {	//Looping dengan j dimulai dari 0 hinggan n-i
			if (a[j] > a[j + i]) {			//Jika nilai pada a[j] lebih besar daripada a[j + 1]
				int temp = a[j];			//simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// Assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			//Assign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {						
	cout << endl;						// output baris kosong
	cout << "=================================" << endl;	// output ke layar
	cout << "Element Array yang belum tertentu" << endl;	// Output ke layar
	cout << "=================================" << endl;	// output ke layar
	for (int j = 0; j < n; j++) {		//Looping dengan j dimulai dari 0 hinggan n-i
		cout << a[j] << endl;			//Output ke layar
	}
	cout << endl;
}

void display() {						//prosedur untuk menampilkan hasil
	cout << endl;						//output baris kosong
	cout << "=================================" << endl; //output ke layar
	cout << "Element array yang telah tersusun" << endl; //output ke layar
	cout << "=================================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {		//Looping dengan j dimulai dari 0 hinggan n-i
		cout << a[j] << endl;			//output ke layar
	}
	cout << endl;						//output baris kosong
}

int main() {
	input();		//memanggil prosedur innput()
	unsorted();		//memanggil prosedur unsorted() dari
	bubbleSortArray(); //memanggil prosedur bubbleSortArray()
	display();			// memanggil prosedur display()
	return 0;
}