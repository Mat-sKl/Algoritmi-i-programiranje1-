#include <iostream>

using namespace std;

int main()
{
int broj1, broj2, rjesenje;

scanf("Prvi broj=%i Drugi broj=%i", &broj1, &broj2);
cout<<endl;
rjesenje=broj1+broj2;
cout<<"Zbroj brojeva: "<<rjesenje<<endl;
rjesenje=broj1-broj2;
cout<<"Razlika brojeva: "<<rjesenje<<endl;
rjesenje=broj1/broj2;
cout<<"Koli�nik brojeva: "<<rjesenje<<endl;
rjesenje=broj1*broj2;
cout<<"Umno�ak brojeva: "<<rjesenje<<endl;

return 0;
}
