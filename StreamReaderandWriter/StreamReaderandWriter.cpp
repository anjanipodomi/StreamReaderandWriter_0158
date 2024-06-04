#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//untuk menyimoan data berbentuk string
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true)
	{
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari baris ke dalam file
		outfile << baris << endl;
	}
	//tutup file
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan Membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//setelah selesai tutup file
		infile.close();
	}
	//jika file ditemukan maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}




int main()
{
  
}
