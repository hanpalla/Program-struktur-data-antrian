#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct bank
{
    char nama[30];
    char kode[20];
    char keperluan[20];
    char nominal[20];
};  

int main ()
{
    struct bank data[10];
    int pil, i, head=0, tail=0, isi=0;
    char pil2;

    awal:
    system("cls");
    puts("\t\t\t PROGRAM ANTREAN DI BANK\n");
    puts("MENU: \n");
    puts("1. Enqueue (Menambah Antrian)");
    puts("2. Dequeue (Menghapus Antrian Pertama)");
    puts("3. Tampilkan Antrian");
    puts("4. Exit\n");
    printf("Pilihan Anda\t: ");
    scanf("%d",&pil);
    
    switch(pil)
    {
        case 1:
            if(isi == 10)
            {
                system("cls");
                puts("Maaf, antrean sudah penuh.");
            }
            else
            {
                input:
                system("cls");
                fflush(stdin);
                printf("Inputkan Nama Anda\t: ");
                gets(data[tail].nama);
                printf("Tuliskan Keperluan Anda\t: ");
                gets(data[tail].keperluan);
                printf("Inputkan Kode Anda\t: ");
                gets(data[tail].kode);
                printf("Inputkan Nominal\t: Rp.");
                gets(data[tail].nominal);
                tail++;
                isi++;
                puts("\nData berhasil diinput");
            }
        break;

        case 2:
            if (isi == 0 || head == tail)
            {
                puts("Maaf, tidak ada antrean saat ini");
            }
            else
            {
                puts("Penghapusan antrean pertama berhasil");
                isi--;
                head++;
            }
        break;

        case 3:
            if(head == tail || head > tail)
            {
                puts("Maaf, tidak ada antrean yang bisa ditampilkan");
            }
            else
            {
                puts("Data Antrean.\n");
                for(i=head; i<tail; i++)
                {
                    printf("Nama\t\t: %s\n",data[i].nama);
                    printf("Kode\t\t: %s\n",data[i].kode);
                    printf("Keperluan\t: %s\n",data[i].keperluan);
                    printf("Nominal\t\t: %s\n\n",data[i].nominal);
                }
            }
        break;

        case 4:
            puts("Terima Kasih");
            system("pause");
            goto selesai;
            
        break;

        default:
        {
            puts("Maaf hanya ada 4 pilihan, silahkan simak pilihan yang tersedia dengan baik");
            system("pause");
            system("cls");
            goto awal;
        }
    }

    system("pause");
    system("cls");            
    puts("Apakah Anda ingin kembali ke menu awal?");
    puts("Ketik '1' untuk konfirmasi, .\n");
    printf("Pilihan Anda: ");
    scanf("%d",&pil2);

    if(pil2 == 1)
    {
        goto awal;
    }
    else
    {
        puts("Terima Kasih");
        system("pause");
        goto selesai;
    }

    selesai:

    return 0;
}
