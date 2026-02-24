//MODUL 3 - mengerjakan 3 dari 3 soal
//Soal 1
#include <stdio.h>

int fak(int i){
    if(i==1) return 1;//biar ga loop
    return i*fak(i-1);
}

int main(){
    int i;//inputan
    scanf("%d",&i);//terima inputan
    printf("%d",fak(i));
    return 0;
}

//Soal 2
#include <stdio.h>

//1 5 14 30...
// 4 9  16 ...
// A(n)=A(n-1)+n^2 //bentuk deret
//Demhan inisial nilai A(1)=1;

int A(int n){
    if(n==1) return 1; //nilai awal A(1)=1

    return A(n-1)+n*n; //return deret
}

int main(){
    int i;//inputan
    scanf("%d",&i);//terima inputan
    printf("%d",A(i));
    return 0;
}

//Soal 3
#include <stdio.h>

int main(){
    int n;//inputan panjang array
    scanf("%d /",&n);//terima inputan
    int d[n];
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]); //menangkap dan mengisi member array
    }
    int max=d[0],min=d[0];//nilai awal saja
    for(int i=0;i<n;i++){
        if(d[i]<min){min=d[i];} //nilai min baru
        if(d[i]>max){max=d[i];} //nilai max baru
    }
    printf("max: %d, min: %d\n",max,min);
    return 0;
}