int main()
{
    int dizi[10]={12,29,15,8,36,6,9,2,4,7};
    int i;
    for (i=0;i<=9;i++);
    printf("%d", dizi[i]);
    getch();
    return 0;
}
  
    int dizi[10]={39, 41, 1, 3, 27, 14, 5, 11, 90, 43};
    int i;
    for (i=0;i<=9;i++);
    printf("%d", dizi[i]);
    getch();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int sinir, j, sakla;
    int dizi[100];
    
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Kaç adet sayı girileceği kullanıcıdan öğrenilir
 
    //Kullanıcıdan sayılar alınır
    for(int i=0; i<sinir; i++){
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Alınan sayılar ekrana yazdırılır
    printf("Dizinin Eski Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); // sayılar yazdırıldıktan sonra 2 satır aşağı iner
 
    //Insertion Sort Algoritması
    for(int i=1; i<sinir; i++){
        sakla = dizi[i];
        j = i;
        while(j > 0 && sakla < dizi[j-1]){
            dizi[j] = dizi[j-1];
            j--;
        }
        dizi[j] = sakla;
    }
    
    //Dizinin sıralanmış halini ekrana yazdırır
    printf("Dizinin Yeni Hali\n");
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
    return 0;
}

