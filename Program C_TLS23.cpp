#include <iostream>
using namespace std;

int main()
{
int m, p, l, t, luaspermukaan, volume;
float massajenis;
   {
    cout<<"Massa (gram)=";
    cin>>m;
    cout<<"Panjang (cm)=";
    cin>>p;
    cout<<"Lebar (cm)=";
    cin>>l;
    cout<<"Tinggi (cm)=";
    cin>>t;
    luaspermukaan = 2*p*l + 2*p*t + 2*l*t;
    volume = p*l*t;
    massajenis = m/volume;
   }
   cout<<endl;
   cout<<"Luas Permukaan="<<luaspermukaan<<"cm2"<<endl;
   cout<<"Volume="<<volume<<"cm3"<<endl;
   cout<<"Massa Jenis="<<massajenis<<"g/cm3"<<endl;
   
   return 0;
}
