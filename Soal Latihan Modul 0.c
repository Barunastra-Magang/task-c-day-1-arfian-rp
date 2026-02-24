//MODUL 0 - mengerjakan 4 dari 4 soal
//Soal 1

#include <stdio.h>

int main(){
    int tahun_lahir,tahun_sekarang; //nama variable tahun lahir dan sekarang
    scanf("%d %d",&tahun_lahir,&tahun_sekarang); //inputan variable
    printf("%d\n",tahun_sekarang-tahun_lahir); //usia = selisih tahun sekarang dan lahir
    return 0;
}

//Soal 2
#include <stdio.h>

int main(){
    int i,j;//variable potongan pizza dan jumlah teman
    scanf("%d %d",&i,&j);
    printf("Teman mendapat %d potong, Ghifari mendapat %d potong.\n",i/j,i%j); //ghifari mendapat sisa (pakai modulo), temannya pakai pembagian biasa
    return 0;
}

//Soal 3
#include <stdio.h>

int main(){
    int a,b;
    float c;
    scanf("%d %d %f",&a,&b,&c);
    printf("%.2f\n",(a+b)/c*1.0); //dikai 1.0 agar menampilkan desimal (float) 2 angka belakang koma
    return 0;
}

//Soal 4
#include <stdio.h>

int main(){
    int a,b,c,d,e; //5 variable
    scanf("%d %d %d %d %d",&a, &b,&c,&d,&e);
    int k=a+b+c+d+e; //total jumlah kelima variable
    printf("%d %.2f\n",k,k/5.0); //menampilkan jumlah dan rata-rata
    return 0;
}