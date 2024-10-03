#include <iostream>
using namespace std;

int main() {
    float costo,risparmi,x,i,mancante,totale,risprim;
    cout<<"quanto costa la moto?"<<endl;
    cin>>costo;
    cout<<"quanto ammonta il totale dei risparmi?"<<endl;
    cin>>risparmi;
    i=0;
    while(costo>risparmi){
        cout<<"quanto inserirai oggi?"<<endl;
        cin>>x;
        risparmi=risparmi+x;
        mancante=costo-risparmi;
        if(risparmi<costo){
            cout<<"mancano"<<mancante<<"euro"<<endl;
}

i=i+1;
}
cout<<"hai risparmiato"<<risparmi<<endl;
cout<<"hai inserito i risparmi"<<i<<"volte"<<endl;
risprim=risparmi-costo;
cout<<"i risparmi rimanenti ammontano a "<<risprim<<endl;

}

