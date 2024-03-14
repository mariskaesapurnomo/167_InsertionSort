// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[20];                                            // Membuat Array dengan panjang data 20
int n;                                                  // Membuat variabel inputan n

void input() {                                          // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";   // Membuat inputan jumlah element Array
        cin >> n;                                       // Memanggil variabel inputan n

        if (n <= 20) {                                  // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "nArray yang anda masukkan maksimal 20 element.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                        // Membuat jarak per baris program
    cout << "=======================" << endl;           // Membuat tampilan  susunan data element arrray
    cout << "Masukkan Element Array" << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++)                         // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke-" << (i + 1) << ": ";          // Memasukkan atau menginputkan nilai data ke-n
        cin >> arr[i];                                  // Menyimpan nilai data ke-n kedalam arrray arr
    }
}

    void insertionsort() {				// Procedure Insertionsort

        int temp;						// Membuat variable data temporer atau penyimpanan sementara
        int i, j;						// Membuat variable j sebagai penanda

        for (i = 1; i <= n - 1; i++) {	// 1. Looping dengan i dimulai dari 1 hingga n-1

            temp = arr[i];				// 2. Simpan nilai arr[i] ke variable sementara temp

            j = i - 1;					// 3. Setting nilai j sama dengan i-1;

            while (j >= 0 && arr[j] > temp)		// 4. Loopping while dimana nilai j lebih besar sama dengan 0 dan
                // arr[j] lebih besar daripada temp
            {
                arr[j + 1] = arr[j];			// 4a. Simpan arr[j] ke dalam variable arr[j+1]
                j--;							// 4b. Decrement nilai j by 1
            }

            arr[j + 1] = temp;					// 5. Simpan nilai temp ke dalam arr[j+1]

            cout << "\nPass " << i << ": ";		// Output ke layar
            for (int k = 0; k < n; k++) {		// Looping nilai k dimulai dari 0 hingga n-1
                cout << arr[k] << " "; 		// Output ke layar
            }
        }
    }

    void display() {                            // Procedure Display
        cout << endl;                           // Output baris kosong
        cout << "\n===============================" << endl;       //Output ke layar
        cout << "Element Array yang telah tersusun" << endl;        // Output ke layar
        cout << "=================================" << endl;        // Output ke layar

        for (int j = 0; j, n; j++) {            // Looping dengan j dimulai dari 0 hingga n-1
            cout << arr[j] << endl;             // Output ke layar
        }
        cout << endl;                           // Output baris kosong

}