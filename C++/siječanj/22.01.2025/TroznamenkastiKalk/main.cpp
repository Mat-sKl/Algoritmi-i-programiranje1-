#include <iostream>

using namespace std;

int main()
{
int broj;
int znamenka1;
int znamenka3;
int rezultat;

scanf("Broj=%i", &broj);
znamenka1=broj/100;
znamenka3=broj%10;
rezultat=znamenka3-znamenka1;

cout<<rezultat;
return 0;
}
