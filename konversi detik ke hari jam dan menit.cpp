#include<stdio.h>
#include<conio.h>
int main()
{
    long detik,hd,jd,md;
    printf("PROGRAM KONVERSI DETIK KE HARI, JAM, MENIT\n");
    printf         ("BY ABDUL HAMID NIM 311810167\n");
    printf("masukkan hari : "); scanf("%i",&hd);
    detik=hd*24*60*60;
    printf("hasilnya adalah = %i\n",detik);
    printf("masukkan jam : "); scanf("%i",&jd);
    detik=jd*60*60;
    printf("hasilnya adalah = %i\n",detik);
    printf("masukkan menit : "); scanf("%i",&md);
    detik=md*60;
    printf("hasilnya adalah = %i\n",detik);
    getch();
}
