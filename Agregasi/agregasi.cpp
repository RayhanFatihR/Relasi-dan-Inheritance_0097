#include <iostream>
#include <vector>
using namespace std;

#include "Ibu.h"
#include "Anak.h"

int main(){
    ibu* varIbu = new ibu("Jundi");
    ibu* varIbu2 = new ibu("Alfaruq");
    anak* varAnak1 = new anak("daffa");
    anak* varAnak2 = new anak("bima");
    anak* varAnak3 = new anak("nona ambon");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;
}