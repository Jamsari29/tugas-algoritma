#include <stdio.h>
#include <conio.h>
#include <iostream>
   
        using namespace std;
 
int main ()
{
    //Deklarasi Variable
    int Suhu,NilaiZ ;
   
    //Input Tampilan
    cout<<" Masukkan Suhu : " ; cin>>Suhu ;
    cout<<" Masukkan Nilai Z : " ; cin>>NilaiZ ;
    cout<<endl ;
   
    //Perhitungan Variable
    if (( Suhu > NilaiZ )) cout<<"Suhu Panas" ;
   
    if (( Suhu <= NilaiZ )) cout<<"Suhu Dingin" ;
   
    return 0 ;
}
