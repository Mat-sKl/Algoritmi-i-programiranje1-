#include <iostream>

using namespace std;

int main()
{
cout<<"Unesi 1 ako zelis izracunati vrijeme, brzinu (kinematika) ili put ili unesi 2 ako zelis izracunati otpor, jakost struje ili napon (ohmov zakon)"<<endl;
int izbor;
cin>>izbor;
if (izbor==1){
    cout<<"Koja je nepoznata vrijednost? (unesi 1 za brzinu, 2 za vrijeme ili 3 za put)"<<endl;
    int nv;
    float vrijeme, put, brzina;
    float rezultat;
    cin>>nv;
    if(nv==1){
        cout<<"Unesi vrijeme (u sekundama): ";
        cin>>vrijeme;
        cout<<endl;
        cout<<"Unesi put (u metrima): ";
        cin>>put;
        rezultat=put/vrijeme;
        cout<<"Brzina iznosi: "<<rezultat<<"m/s";
    }
    else if(nv==2){
        cout<<"Unesi put (u metrima): ";
        cin>>put;
        cout<<endl;
        cout<<"Unesi brzinu (u m/s): ";
        cin>>brzina;
        rezultat=put/brzina;
        cout<<"Vrijeme iznosi: "<<rezultat<<"s";
    }
    else if(nv==3){
        cout<<"Unesi vrijeme (u sekundama): ";
        cin>>vrijeme;
        cout<<endl;
        cout<<"Unesi brzinu (u m/s): ";
        cin>>brzina;
        rezultat=brzina*vrijeme;
        cout<<"Put iznosi: "<<rezultat<<"m";
    }
}
if (izbor==2){
    cout<<"Koja je nepoznata vrijednost? (unesi 1 za otpor, 2 za jakost struje ili 3 za napon)"<<endl;
    int nv;
    float napon, struja, otpor;
    float rezultat;
    cin>>nv;
    if(nv==1){
        cout<<"Unesi jakost struje (u amperima): ";
        cin>>struja;
        cout<<endl;
        cout<<"Unesi napon (u voltima): ";
        cin>>napon;
        cout<<endl;
        rezultat=napon/struja;
        cout<<" Otpor iznosi: "<<rezultat<<"ohma";
    }
    else if(nv==2){
        cout<<"Unesi otpor (u ohmima ): ";
        cin>>otpor;
        cout<<endl;
        cout<<"Unesi napon (u voltima): ";
        cin>>napon;
        cout<<endl;
        rezultat=napon/otpor;
        cout<<"Jakost struje iznosi: "<<rezultat<<"A";
    }
    else if(nv==3){
        cout<<"Unesi otpor (u ohmima): ";
        cin>>otpor;
        cout<<endl;
        cout<<"Unesi jakost struje (u amperima): ";
        cin>>struja;
        cout<<endl;
        rezultat=struja*otpor;
        cout<<"Napon iznosi: "<<rezultat<<"V";
    }
}
}
