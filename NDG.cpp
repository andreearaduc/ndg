
/*-pt i = 2 la n executa
    -determina tata = [i/2]
    -atata timp v[tata] > v[i] si tata >= 1
        -interschimb v[tata] si v[i]
        -fiu = tata
        -tata = [fiu/2]
*/
#include<iostream>
using namespace std;
int n, tata, fiu;
int main ()
cout<<"n= ";
cin>>n;
int v[n+1];
int i;
for (i=2; i<=n;  i++)
{ tata=i/2;

    while (v[tata] > v[i] && tata>=1)
    {
        int aux;

        aux=tata;
        tata=fiu;
        fiu=aux;

    }
}
