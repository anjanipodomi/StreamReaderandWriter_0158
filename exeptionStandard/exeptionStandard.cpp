#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1:...
    try
    {
        array<int, 3> data = { 1, 2, 3 };
        //pesan array integer 3 elemen
        //cout<<data.at(5)<< endl;
        //memanggil array elemen ke 5 
    }
    catch (exception& e)
    {
        //penangkapan menggunakan objek exception
        cout << e.what() << endl;
        /*akan di eksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}
