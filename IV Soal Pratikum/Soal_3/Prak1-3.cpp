/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Struktur Data Prak1-3
*/

#include <stdio.h>
#include <conio.h>
int array_a[100], terkecil,n,i, min;
main() {
	
	printf("Masukan Ukuran ke-N : ");
	scanf("%d", &n);
	
	for(i=0; i<n ;i++) {
		printf("Masukan data ke-%d : ", i+1);
		scanf("%d", &array_a[i]);
		if(min > array_a[i]){
			min = array_a[i];
		}
	}
	
	printf("List Data : \n\n================\n");
	for(i=0; i<n ;i++) {
		printf("Isi data ke-%d : %d \n", i+1, array_a[i]);
	}
	
	printf("Nilai terkecil : %d", min);
	

	getch();
	return 0;
}
