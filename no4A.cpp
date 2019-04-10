#include <stdio.h>
#include <conio.h>

int main (){
int data[1000]=(8,10,6,-2,11,7,1,100);
int cari ;
int flag =0;
printf("masukkan data yang ingin dicari = "); scanf("%d,&cari");
for (int i=0;i<1000;i++){
    if (data[i]==cari) flag=i;
    break;
}
if (flag==1) printf("data ada !\n");
else printf("data tidak ada !\n");
}
