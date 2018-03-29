
/*-pt i = 2 la n executa
    -determina tata = [i/2]
    -atata timp v[tata] > v54[i] si tata >= 1
        -interschimb v[tata] si v[i]
        -fiu = tata
        -tata = [fiu/2]
*/
#include<iostream>

using namespace std;

void heap(int *v, int n)
{
for(int i=2;i<=n;i++)
{
int tata=i/2;
int fiu=i;
while(v[tata]>v[i]&&tata>=1)
{
int aux;
aux=v[tata];
v[tata]=v[i];
v[i]=aux;

fiu = tata;
tata=fiu/2;
} } }

int n, tata, fiu;

int main ()
{
cout<<"n= ";
cin>>n;
int v[n+1];
for(int i=1;i<=n;i++)
{
    cin>>v[i];
}
heap(v,n);
for(int i=1;i<=n;i++)
{
    cout<<v[i]<<" ";
}
return 0;
}
`
