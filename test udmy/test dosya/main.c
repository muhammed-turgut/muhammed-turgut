#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    float Sayi1,Sayi2;
    printf("Birnci Sayiyi Giriniz: ");
    scanf("%f",&Sayi1);

    printf("Lutfen Ikinci Sayiyi Giriniz: ");
    scanf("%f",&Sayi2);

    printf("Yapmak Ýstediginiz Islemin Smbolunu Girin: ");
    scanf("%s",&op);

    switch(op)
    {
        case '+'  :printf("%.2f + %.2f= %.2f",Sayi1,Sayi2,Sayi1+Sayi2);
        break;

        case '-'  :printf("%.2f - %.2f=%.2f",Sayi1,Sayi2);
        break;

        case '*'  :printf("%.2f * %.2f=%.2f",Sayi1,Sayi2,Sayi1*Sayi2);
        break;

        case '/': printf("1.sonuc: %.2f / %.2f=%.2f",Sayi1,Sayi2,Sayi1/Sayi2);
        break;

        default:printf("Hatalý Ýþlem:");
        break;
      }


    }
