#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int linearSearch(int dizi[], int n, int hedef){
	int i;
	for(i=0;i<n;i++){
		if(dizi[i] == hedef){
			printf("Aradiginiz %d sayisi, dizinin %d. elemanidir.", hedef, i+1);
			return 0;
		}
	}
	printf("Aradiginiz %d sayisi, dizide mevcut degildir.", hedef);
	return 0;
}

int main(int argc, char *argv[]) {
	
	int n, hedef;
	//Kullanicidan dizinin eleman sayisi istenir
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d", &n);
	int dizi[n];
	
	//Kullanicidan diziye eklemek istedigi elemanlar istenir
	int i;
	if(n>0 && n<=MAX){
		printf("Diziye eklemek istediginiz elemanlari giriniz:");
		for(i=0;i<n;i++){
			scanf("%d",&dizi[i]);
		}
	}
	else{
		printf("Eksik veya hatali giris yaptiniz!");
		return 0;
	}
	
	//Kullanicidan dizide aramak istedigi sayi istenir
	printf("Aramak istediginiz sayiyi giriniz:");
	scanf("%d", &hedef);
	
	//Arama yapilir
	linearSearch(dizi, n, hedef);
	
	return 0;
}