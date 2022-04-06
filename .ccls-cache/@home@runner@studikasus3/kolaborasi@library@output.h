#include<iostream>
#include<fstream>
using namespace std;

class output{
  public:
    void cetak(){
      cout<<"STRUK PEMBELIAN \n";
      cout<<"Yang dibeli : \n";
      cout<<"Ayam Geprek  -> "<<data_file[3]<<endl;
      cout<<"Ayam Goreng  -> "<<data_file[4]<<endl;
      cout<<"Udang Goreng -> "<<data_file[5]<<endl;
      cout<<"Cumi Goreng  -> "<<data_file[6]<<endl;
      cout<<"Ayam Bakar   -> "<<data_file[7]<<endl;
      cout << "Harga Total Rp."<<endl;
      cout << "Diskon      Rp."<<endl;
      cout << "Harga Bayar Rp."<<endl;
      }
  void getData(){
    ambil_data.open("../dummy/out_proses.txt");
    while(!ambil_data.eof()){
      ambil_data >> data_file[index] ;
      index += 1;
    }
    ambil_data.close();
  }
  private:
    ifstream ambil_data;
    string data_file[40];
    int index = 0;
};