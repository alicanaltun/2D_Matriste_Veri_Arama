#include <stdio.h>
#include <stdlib.h>
#define max 25

void bubblesort(int dizi[],int n){
	int i, j;
	int gecici;
	
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			if(dizi[j-1]>dizi[j]){
				gecici = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = gecici;
			}
		}
	}
	
}
// Bu fonksiyon kabarcik siralama(bubblesort) yontemidir.

int main(int argc, char *argv[]) {
	
	int dizi[max] = {0};
	int matris[5][5];
	int i, j, n, hedef;
	int k = 0;
	
	printf("Matrise eklemek istediginiz eleman sayisini giriniz:");
	scanf("%d",&n);
	
	if(n>0 && n<=25){
		printf("Matrise eklemek istediginiz elemanlari giriniz:");
		for(i=0;i<n;i++){
			scanf("%d",&dizi[i]);
		}
	}
	else{
		printf("Eksik veya hatali giris yaptiniz!");
		return 0;
	}
/* Kullanicidan matrisi olusturacak veriler alinir. Dizinin eleman sayisi kontrol edilir. 
Bu veriler tek boyutlu diziye aktarilir.*/
	
	bubblesort(dizi,n);
// Dizideki elemanlarin siralanmasi icin "bubblesort" fonksiyonu kullanilir.
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matris[i][j] = dizi[k];
			k++;
		}
	}
// Siralanmis tek boyutlu dizinin elemanlari, iki boyutlu matris dizisine yerlestirilir. 
	
	printf("Matriste aramak istediginiz sayiyi giriniz:");
	scanf("%d",&hedef);
// Kullanicidan bulunmasi istenilen sayi istenir.
	
	printf("Olusturulan matris:\n");
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (matris[i][j] != 0) {
                printf("%d ", matris[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
// Matris yazdirilir.
    
    for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matris[i][j] == hedef){
				printf("Aradiginiz sayi matrisin %d. satirinda %d. sutununda",i+1,j+1);
				return 0;	
			}	
		}
	}
// Matris dizisinin elemanlari teker teker kontrol edilir. Kosul saglaniyorsa sonuc yazdirilir.
	
	printf("Aradiginiz sayi matriste mevcut degil!");
// Kosul saglanmiyorsa uyari mesaji yazdirilir.
	
	return 0;
}