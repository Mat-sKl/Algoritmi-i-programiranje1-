#include <iostream>

using namespace std;

int main(){
int broj1;
int broj2;
int rezultat;

//Program tra�i korisnika da upi�e dva broja
printf("Unesi prvi broj: ");
cin>>broj1;
printf("Unesi drugi broj: ");
cin>>broj2;

//Program zbraja upisane brojeve
rezultat=broj1+broj2;
printf("%i + %i= %i, ", broj1, broj2, rezultat);

//Program oduzima upisane brojeve
rezultat=broj1-broj2;
printf("Razlika brojeva= %i, ", rezultat);

//Program mno�i upisane brojeve
rezultat=broj1*broj2;
printf("Umnozak brojeva= %i, ", rezultat);

//Program dijeli upisane brojeve
rezultat=broj1/broj2;
printf("Kolicnik brojeva= %i, ", rezultat);

return 0;
}

//Za printf("Zbroj brojeva= %i) mo�e se koristiti printf("%i + %i= %i, ", broj1, broj2, rezultat);
