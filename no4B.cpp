#include <stdio.h>
#include <conio.h>

void main ();
clrscr ();
int data [100],i;
int cari  ;
int banyak random =0;

for (i=0 ; i<100;i++){
    data [i]=random()%100;
}
printf("Data yang dicari");
scanf("%d",&cari);
for (i=0 ; i<100 ;i++){
    if (data[i]=cari){
        banyak random ++;
    }
    if (banyak random > 0){
        printf("banyak data ; ");
        printf(banyak random);
    }
    else
        printf("tidak ada")
}
