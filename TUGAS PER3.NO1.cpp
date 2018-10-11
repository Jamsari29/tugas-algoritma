#include <stdio.h>
#include <conio.h>
#include <iostream>
   
        using namespace std;
 
int main ()
{
    //Deklarasi Variable
    int BilanganX ;
   
    //Input Tampilan
    cout<<" Masukkan Bilangan  : "; cin>>BilanganX ;
    cout<<endl;
   
    string message ;
    message = BilanganX % 2 == 0? "yang anda masukan bilangan genap" : " yang anda masukan bilangan ganjil " ;
    cout<<message ;
    
return 0 ;
}
