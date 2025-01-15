#include <iostream>

using namespace std;

int main()
{
char slovo1;
char slovo2;
int rezultat;

//Program traži korisnika da unese dva slova
printf("Unesi prvo slovo: ");
cin>>slovo1;
cout<<endl;

printf("Unesi drugo slovo: ");
cin>>slovo2;
cout<<endl;

rezultat=slovo1-slovo2;
printf("%i - %i= %i", slovo1, slovo2, rezultat);
return 0;
}
