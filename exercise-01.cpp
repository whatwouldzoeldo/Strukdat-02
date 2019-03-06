/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Deskripsi   : Biodata
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang {
    int umur;
    char nama[30];
    char jk;
    char goldar[2];
};

int main () {
    Orang org;
    cin>>org.umur;
    cin>>org.nama;
    cin>>org.jk;
    cin>>org.goldar;

    cout<<endl;
    cout<<org.umur<<endl;
    cout<<org.nama<<endl;
    cout<<org.goldar<<endl;
    cout<<org.jk<<endl;
}
