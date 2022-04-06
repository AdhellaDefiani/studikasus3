#include<iostream>
#include<fstream>
using namespace std;

class input{
  public:
  void cetak(){
    cout<<"Warung Makan Malam \n";
    cout<<"Menu Orderan : \n";
    cout<<"1. Ayam Geprek   Rp.21000 \n";
    cout<<"2. Ayam Goreng   Rp.17000 \n";
    cout<<"3. Udang Goreng  Rp.19000 \n";
    cout<<"4. Cumi Goreng   Rp.20000 \n";
    cout<<"5. Ayam Bakar    Rp.25000 \n";
    cout<<"Pesan Ayam Geprek  -> "; cin>>bnyk_aymgp;
    cout<<"Pesan Ayam Goreng  -> "; cin>>bnyk_aymgr;
    cout<<"Pesan Udang Goreng -> "; cin>>bnyk_udg;
    cout<<"Pesan Cumi Goreng  -> "; cin>>bnyk_cmgr;
    cout<<"Pesan Ayam Bakar   -> "; cin>>bnyk_aymbk;
  }
  void toFile(){
    tulis_data.open("../pra_data/input.txt");
    tulis_data<<bnyk_aymgp<<endl;
    tulis_data<<bnyk_aymgr<<endl;
    tulis_data<<bnyk_udg<<endl;
    tulis_data<<bnyk_cmgr<<endl;
    tulis_data<<bnyk_aymbk;
    tulis_data.close();
  }
  private:
  ofstream tulis_data;
  int bnyk_aymgp, bnyk_aymgr, bnyk_udg, bnyk_cmgr, bnyk_aymbk;
};