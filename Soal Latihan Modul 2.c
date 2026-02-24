//MODUL 2 - mengerjakan 6 dari 6 soal
//Soal 1

#include <stdio.h>

int main(){
    int i;//inputan
    scanf("%d",&i);//terima inputan
    if(i%2==0){printf("Genap");}//Genap
    else{printf("Ganjil");}//Ganjil
    return 0;
}

//Soal 2
#include <stdio.h>

int main(){
    int i;//inputan
    scanf("%d",&i);//terima inputan
    for(int k=1;k<=i;k++){
        if(k%2==0){printf("* ");}//Genap
        else{printf("%d ",k);}//Ganjil
    }
    
    return 0;
}

//Soal 3
#include <stdio.h>
#include <stdbool.h>


bool isPrime(int i){ //mengecek apakah bilangan prima
    bool isPr=true;
    if (i==2||i==3) return true; //return true kalau 2,3
    for(int k=2;k*k<=i;k++){ //cek apakah bilangan merubakan kelipatan dari k, cek dari k=0 sampai akar(bilangan)
        if(i%k==0){return false;}
    }
    return isPr;
}

int main(){
    int i;//inputan
    scanf("%d",&i);//terima inputan
    for(int j=2;j<=i;j++){ //lakukan perulangan
        if(isPrime(j)){printf("* ");} //kalau prima print *
        else {printf("%d ",j);} //kalo engga, print angka
    }
    
    return 0;
}

//Soal 4
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;//inputan jumlah
    scanf("%d /", &n);//terima inputan
    int d[n];
    for(int j=0;j<n;j++){ //ambil nilai data
        scanf("%d",&d[j]);
    }

    for(int j=n-1;j>=0;j--){ //print secara terbalik
        printf("%d ",d[j]);
    }
    
    
    return 0;
}

//Soal 5
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char s[10000];//string
    fgets(s, sizeof(s), stdin);//ambil isi string semuanya
    int a=0, i=0, u=0, e=0, o=0;//variable berisi jumlah aiueo
    for(int j = 0; s[j] != '\0'; j++) { //jalankan sampai akhir string    `\0`
        switch(s[j]) { //increment tiap huruf
            case 'A': case 'a': a++; break;
            case 'I': case 'i': i++; break;
            case 'U': case 'u': u++; break;
            case 'E': case 'e': e++; break;
            case 'O': case 'o': o++; break;
        }
    }
 //tampilkan
    printf("A/a: %d\n", a);
    printf("I/i: %d\n", i);
    printf("U/u: %d\n", u);
    printf("E/e: %d\n", e);
    printf("O/o: %d\n", o);

    return 0;
}

//Soal 6
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char s[10000];//string
    fgets(s, sizeof(s), stdin);//ambil isi string semuanya
    //perlakuan string seperti array
    for(int i=0;s[i] != '\0';i++){
        if(s[i]=='_'){//jika char _
            s[i+1] = s[i+1]-32;//geser ke ascii  mudur (-32) (kapital)
        }
    }
    for(int i=0;i<strlen(s);i++){ //print 
        if(s[i]=='_'){continue;} //kalau ada karakter _, skip.
        printf("%c",s[i]);//print biasa
    }
    return 0;
}