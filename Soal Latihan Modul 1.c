//MODUL 1 - mengerjakan 3 dari 3 soal
//Soal 1
#include <stdio.h>
#include <math.h>
int main(){
    int i;
    scanf("%d",&i);//scan inputan
    int satuan=i%10; //ambil sisa bagi satuan
    int puluhan=i/10%10; //ambil sisa bagi dari pembagian puluhan
    int ratusan=i/100%10; //ambil sisa bagi dari pembagian ratusan
    if(ratusan==0&&puluhan==0){ //bagian satuan 0--9
        if(pow(satuan,1)==i){
            printf("Amstrong");
        }else{ printf("Bukan Amstrong");}
    }else if(ratusan==0){ //bagian puluhan 0--99
        if(pow(satuan,2)+pow(puluhan,2)==i){
            printf("Amstrong");
        }else{ printf("Bukan Amstrong");}
    }else{ //bagian ratusan 0--999
        if(pow(satuan,3)+pow(puluhan,3)+pow(ratusan,3)==i){ 
            printf("Amstrong");
        }else{ printf("Bukan Amstrong");}
    }
    return 0;
}

//Soal 2
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int i;
    const char *kata_bilangan[9] ={"satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan"};

    scanf("%d",&i);//scan inputan
    int satuan=i%10; //ambil sisa bagi satuan
    int puluhan=i/10%10; //ambil sisa bagi dari pembagian puluhan
    int ratusan=i/100%10; //ambil sisa bagi dari pembagian ratusan
    if(ratusan==0&&puluhan==0){ //bagian satuan 0--9
        printf("%s\n",kata_bilangan[i-1]);
    }else if(ratusan==0){ //bagian puluhan 0--99
        if(puluhan==1){ //puluhan 1, dibaca: <satuan> belas
            printf("%s belas\n",kata_bilangan[satuan-1]);
        }else{ //puluhan selain 1, dibaca: <puluhan> puluh <satuan>
            printf("%s puluh ", kata_bilangan[puluhan-1]);
            printf("%s \n",kata_bilangan[satuan-1]);
        }
        
    }else{ //bagian ratusan 0--999
        if(ratusan==1){ //dibaca seratus
            if(puluhan==1){ //puluhan 1, dibaca: seratus <satuan> belas
            printf("seratus %s belas\n",kata_bilangan[satuan-1]);
        }else{ //puluhan selain 1, dibaca: seratus <puluhan> puluh <satuan>
            printf("seratus %s puluh ", kata_bilangan[puluhan-1]);
            printf("%s \n",kata_bilangan[satuan-1]);
        }
        }else{ //selain itu normal
            if(puluhan==1){ //puluhan 1, dibaca: <ratusan> <satuan> belas
                printf("%s ",kata_bilangan[ratusan-1]);
                printf("%s belas\n",kata_bilangan[satuan-1]);
            }else{ //puluhan selain 1, dibaca: <ratusan> ratus <puluhan> puluh <satuan>
                printf("%s ratus ", kata_bilangan[ratusan-1]);
                printf("%s puluh ", kata_bilangan[puluhan-1]);
                printf("%s \n",kata_bilangan[satuan-1]);
            }
        }
        
    }
    return 0;
}

//Soal 3
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int i;
    int sev[10][7] = { //data semua kemungkinan digit 0 -- 9 pada 7 segment
        {1,1,1,1,1,1,0}, //0
        {0,1,1,0,0,0,0}, //1
        {1,1,0,1,1,0,1}, //2
        {1,1,1,1,0,0,1}, //3
        {0,1,1,0,0,1,1}, //4
        {1,0,1,1,0,1,1}, //5
        {1,0,1,1,1,1,1}, //6
        {1,1,1,0,0,0,0}, //7
        {1,1,1,1,1,1,1}, //8
        {1,1,1,1,0,1,1}  //9
    };
    scanf("%d",&i);
    if(0<=i&&i<=9){ //cek validasi nilai 0--9
        for(int k=0;k<=6;k++){ //keluarkan semua isi array 2d
            printf("%d ",sev[i][k]);
        }
    }else{ //jika input invalid
        printf("INV");
    }
    return 0;
}