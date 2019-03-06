/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Deskripsi   : Theater
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater {
    int room;
    char seat[3];
    char movieTitle[30];
};

int main(){
    Theater cgv;
    cgv.room=2;
    strcpy(cgv.seat,"A7");
    strcpy(cgv.movieTitle,"Captain Marvel");

    cout<<cgv.room<<endl;
    cout<<cgv.seat<<endl;
    cout<<cgv.movieTitle<<endl;
}
