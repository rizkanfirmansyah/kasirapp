#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
#include<math.h>

int main(){
	
	int menu, jumlah, totalharga, uang;
	int tdiskon, kembali;
	int total, berapa, harga;
	int Jeruk, Alpukat, TOP, diskon;
	int Melon, Tomat, Strawberry, Mangga, Apel;
    int Sunkise, Anggur, Jambu, Durian, Kurma;
    int CC, CB, CO, CCC, MC, MO, MCC, DO, DCC, DS;
    int EkmS, EkmM, EkmL, EkmSp;
    int EcS, EcL, EcM, EcSp;
    int top, toping;
    int tgl, ppn;
    int jumlahtop;
    int harga1, harga2, harga3, harga4, harga5, harga6, harga7, harga8, harga9, harga10, harga11, harga12;
    int jumlah1, jumlah2, jumlah3, jumlah4, jumlah5, jumlah6, jumlah7, jumlah8, jumlah9, jumlah10, jumlah11, jumlah12;
    char tgl1;
    char jenis;
    char pilih, jawab, Ya;
    char top1;
    char top11;
    char top2 ;
    char top3, top4, top5, top6, top7, top8;
    
	Jeruk = 5000;
	Alpukat = 6000;
	Melon = 5000;
	Tomat = 5000;
	Strawberry = 6000; 
	Mangga = 7000;
	Apel = 8000;
    Sunkise = 10000;
	Anggur = 10000;
	Jambu = 6000;
	Durian = 12000;	
    Kurma =15000;
    
    CC = 5000;
	CB = 6000;
	CO = 7000;
	CCC = 8000;
	MC = 8000;
	MO = 9000;
	MCC = 10000;
	DO = 9000;
	DCC = 10000;
	DS = 12000;
	TOP = 2000;
	
	EkmS = 8000;
	EkmM = 10000;
	EkmL = 12000;
	EkmSp = 15000;	 
	
	EcS = 8000;
	EcM = 10000;
	EcL = 15000;
	EcSp = 20000;

	printf("========================================\n");
	printf("	              KANAAFRI JUICE	\n");
	printf("          	  Bersih, Enak, dan Segar  	\n");
	printf("     	 Jl A.H.Nasution No.9A Bandung  \n");	
	printf("========================================\n");
	printf("******************[DAFTAR MENU]***************** \n");
	printf("A. JUS \n");
	printf("	1. Jus Jeruk	 	 = 5k \n");
	printf("	2. Jus Alpukat 		 = 6k \n");
	printf("	3. Jus Melon 		 =5k \n");
	printf("	4. Jus Tomat 		 =5k \n");
	printf("	5. Jus Strawberry 	 =6k \n");
	printf("	6. Jus Mangga.   	 =7k \n");
	printf("	7. Jus Apel 		 =8k \n");
	printf("	8. Jus Sunkise 	     =10k \n");
	printf("	9. Jus Anggur 		 =10k \n");
	printf("	10.  Jus Jambu 		 =6k \n");
	printf("	11. Jus Durian		 =12k  \n");
	printf("	12. Jus Kurma		 =15k \n");
	printf("========================================\n");
	
	printf("B. CAPUCINO CINCAU \n");
	printf("	1. Capucino Cincau 		  =5k \n");
	printf("	2. Capucino Bubble 		  =6k \n");
	printf("	3. Capucino Oreo		  =7k \n");
	printf("	4. Capucino Choco chips   =8k \n");
	printf("	5. Milo Cincau 			  =8k\n");
	printf("	6. Milo Oreo 		   	  =9k \n");
	printf("	7. Milo Choco chips	      =10k \n");
	printf("	8. Dancow Oreo			  =9k \n");
	printf("	9. Dancow Choco chips 	  =10k \n");
	printf("	10. Dancow Sereal		  = 12k \n");
	printf("\n 		Toping Tambahan \n");
	printf("\n*Coklat					*Keju \n");
	printf("*Cincau					    *Meses \n");
	printf("*Oreo					    *Bubble \n");
	printf("*Chocochips			        *Sereal \n\n");
	printf("***********[All Topping 2K]************\n");
	printf("========================================\n");
	
	printf("C. Es Kepal Milo \n");
	printf("	1. Small		      =8k \n");
	printf("	2. Medium 	          =10k \n");
	printf("	3. Large 	 	      =12k \n");
	printf("	4.  Special 	 	  =15k \n");
	printf("========================================\n");
	
	printf("D. Es Campur \n");
	printf("	1. Small 		   =8k\n");
	printf("	2. Medium	       =10k \n");
	printf("	3. Large		   =15k \n");
	printf("	4. Special 		   =20k \n");

	do{
			
printf("========================================\n");
	printf("Pilih Menu Pesanan : ");
	scanf("%s",&pilih);
	printf("Pilih Jenis Pesanan : ");
	scanf("%d",&menu);
	printf("Berapa jumlah pesanan : ");
	scanf("%d",&jumlah);
printf("========================================\n");
	
	switch(pilih){
		case 'a':;
		case 'A':;
		
		if(menu==1){
			printf("***************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Jeruk \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Jeruk);
			totalharga = jumlah * Jeruk;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n**************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==2){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Alpukat \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Alpukat);
			totalharga = jumlah * Alpukat;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==3){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Melon \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Melon);
			totalharga = jumlah * Melon;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==4){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Tomat \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Tomat);
			totalharga = jumlah * Tomat;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==5){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Strawberry \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Strawberry);
			totalharga = jumlah * Strawberry;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			    : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	    : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==6){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	     : Jus Mangga \n");
			printf("Jumlah Pesanan	     : %d",jumlah);
			printf("\nHarga Pesanan      : Rp %d ",Mangga);
			totalharga = jumlah * Mangga;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			    : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	    : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==7){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	     : Jus Apel \n");
			printf("Jumlah Pesanan	     : %d",jumlah);
			printf("\nHarga Pesanan      :  Rp %d ",Apel);
			totalharga = jumlah * Apel;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			    : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==8){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Sunkise \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Sunkise);
			totalharga = jumlah * Sunkise;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==9){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Anggur \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Anggur);
			totalharga = jumlah * Anggur;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==10){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Jambu \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Jambu);
			totalharga = jumlah * Jambu;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==11){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Durian \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Durian);
			totalharga = jumlah * Durian;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==12){
				printf("****************** Daftar Beli ***************** \n");
				printf("Menu Pesanan	 : JUS \n");
			printf("Jenis Pesanan	  : Jus Kurma \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",Kurma);
			totalharga = jumlah * Kurma;
	
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else{
				printf("Menu Tidak Tersedia \n");
			}break;
			
		case'b':
		case'B':;
		
		if(menu==1){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Cincau \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CC);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (CC + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Cincau \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CC);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==2){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Bubble \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CB);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (CB + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Bubble \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CB);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==3){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CO);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (CO + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CO);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==4){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CCC);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (CCC + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Capucino Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",CCC);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==5){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Cincau\n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MC);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (MC + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Cincau \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MC);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==6){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MO);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (MO + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MO);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==7){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MCC);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (MCC + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Milo Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",MCC);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==8){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DO);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (DO + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Oreo \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DO);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else if(menu==9){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DCC);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (DCC + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Chocochips \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DCC);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
	
			}else if(menu==10){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Sereal \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DS);
			printf("\nBerapa Topping yang ingin ditambahkan (1...8) : ");
			scanf("%d",&top);
			if(top==1){
				printf("Topping	               : ");
				scanf("%s",&top1);

			}else if(top==2){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				
			}else if(top==3){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				
			}else if(top==4){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
	
			}else if(top==5){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
	
			}else if(top==6){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
	
			}else if(top==7){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				
			}else if(top==8){
				printf("Topping 1	      : ");
				scanf("%s",&top1);
				printf("Topping 2 	      : ");
				scanf("%s",&top2);
				printf("Topping 3	      : ");
				scanf("%s",&top3);
				printf("Topping 4	      : ");
				scanf("%s",&top4);
				printf("Topping 5 	      : ");
				scanf("%s",&top5);
				printf("Topping 6	      : ");
				scanf("%s",&top6);
				printf("Topping 7	      : ");
				scanf("%s",&top7);
				printf("Topping 8 	      : ");
				scanf("%s",&top8);
				
			}
			
			toping = TOP * top;
			totalharga = jumlah * (DS + toping);
			
			printf("****************** Daftar Beli ***************** \n");
			printf("Menu Pesanan	 : CAPUCINO CINCAU \n");
			printf("Jenis Pesanan	  : Dancow Sereal \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",DS);
			printf("\nTopping	               : Rp %d",toping);
			if(totalharga>=50000&&totalharga<100000){
				diskon = 0.05* totalharga;
				tdiskon = totalharga - diskon -10000;
			}else if(totalharga>=100000&&totalharga<150000){
				diskon = 0.10 * totalharga;
				tdiskon = totalharga - diskon - 25000;
			}else if(totalharga>=150000&&totalharga<250000){
				diskon = totalharga * 0.15;
				tdiskon = totalharga - diskon - 40000;
				}else if(totalharga>=250000){
				diskon = totalharga * 0.20;
				tdiskon = totalharga - diskon - 50000;
			}else{
				diskon = 0;
				tdiskon = totalharga - diskon;
			}
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			printf("Diskon			   : Rp %d",diskon);
			kembali = uang - tdiskon;
			printf("\nUang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
			}else{
				printf("Menu Tidak Tersedia \n");
			}break;
			
		case'c':
		case'C':;
		
		if(menu==1){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES KEPAL MILO \n");
			printf("Jenis Pesanan	  : Small \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EkmS);
			totalharga = jumlah *EkmS;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");	
			
		}else if(menu==2){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES KEPAL MILO \n");
			printf("Jenis Pesanan	  : Medium \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EkmM);
			totalharga = jumlah *EkmM;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==3){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES KEPAL MILO \n");
			printf("Jenis Pesanan	  : Large \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EkmL);
			totalharga = jumlah *EkmL;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");	
			
		}else if(menu==4){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES KEPAL MILO \n");
			printf("Jenis Pesanan	  : Special \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EkmSp);
			totalharga = jumlah *EkmSp;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else{
			printf("Menu lain tidak ada \n");
		}break;
		
		case'd':
		case'D':;
		
		if(menu==1){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES CAMPUR \n");
			printf("Jenis Pesanan	  : Small \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EcS);
			totalharga = jumlah *EcS;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");	
			
		}else if(menu==2){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES CAMPUR \n");
			printf("Jenis Pesanan	  : Medium \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EcM);
			totalharga = jumlah *EcM;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else if(menu==3){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES CAMPUR \n");
			printf("Jenis Pesanan	  : Large \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EcL);
			totalharga = jumlah *EcL;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");	
			
		}else if(menu==4){
				printf("****************** Pembelian ***************** \n");
				printf("Menu Pesanan	 : ES CAMPUR\n");
			printf("Jenis Pesanan	  : Special \n");
			printf("Jumlah Pesanan	: %d",jumlah);
			printf("\nHarga Pesanan    : Rp %d ",EcSp);
			totalharga = jumlah *EcSp;
			printf("\n***************** Pembayaran *****************\n");
			printf("Total Harga 		: Rp %d",totalharga);
			printf("\nUang Bayar		: Rp ");
			scanf("%d",&uang);
			kembali = uang - totalharga;
			printf("Uang Kembali	      : Rp %d",kembali);
			printf("\n**************** Terima Kasih *****************\n");
			printf("========================================\n");
			
		}else{
			printf("Menu lain tidak ada \n");
		}break;
		
		case 'e':
		case 'E':
		case 'f':
		case 'F':
		case 'g':
		case 'G':;
		printf("menu tidak ada \n");
		break;
	}
	
	printf("Apakah Anda ingin memesan lagi \n");
	printf("1. Ya \n");
	printf("2. Tidak \n\n");
	printf("Jawab :");
	scanf("%d",&menu);	

	}while(menu==1);	printf("========================================\n");
	printf("¦¦         =		   KANAAFRI JUICE	\n");
	printf("¦¦       =    	       Bersih, Enak, dan Segar  	\n");
	printf("¦¦     =	 Jl A.H.Nasution No.9A Bandung  \n");
	printf("¦¦   =\n");
	printf("¦¦     =		No.Tlp : (089) 643822402 \n");
	printf("¦¦       =		   Kasir : Rizkan/92AP \n");
	printf("¦¦          = 	    Tgl : ");
	scanf("%d",&tgl);
	scanf("%c",&tgl1);
	scanf("%s",&tgl1);
	scanf("%c",&tgl1);
	scanf("%d",&tgl);
	scanf("%c",&tgl1);
	scanf("%c",&tgl1);
	scanf("%s",&tgl1);
printf("========================================\n");
		printf("************ TOTAL PEMESANAN ************\n");
		printf("Berapa Jenis Pesanan : ");
		scanf("%d",&berapa);
		if(berapa==1){
			printf("Jenis Pesanan 		   : ");
			
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan	 	  : Rp ");
			scanf("%d",&harga);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			printf("Jumlah Pesanan	 	 : ");
			scanf("%d",&jumlah);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan	 	  : Rp %d",harga);
			
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			printf("\nJumlah Pesanan	 	 : %d",jumlah);
		
			
			total = (harga * jumlah) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		   : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==2){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			
			
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		 : Rp %d",kembali);
		printf("\nPajak 	 	 		   : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==3){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			
			
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) +(harga1 * jumlah1)+ (harga2 * jumlah2) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==4){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			
			
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) +(harga1 * jumlah1)+ (harga2 * jumlah2) + (harga3 * jumlah3) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==5){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			
			
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==6){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==7){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==8){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==9){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
				printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==10){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Pesanan 10	 	 : Rp ");
			scanf("%d",&harga9);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
			printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			printf("Jumlah Pesanan 10	: ");
			scanf("%d",&jumlah9);
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			printf("\nHarga Pesanan 10	 	 : Rp %d",harga9);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
			printf("\nJumlah Pesanan 10	: %d",jumlah9);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + (harga9 * jumlah9) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==9){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
				printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				 : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		: Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==10){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Pesanan 10	 	 : Rp ");
			scanf("%d",&harga9);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
				printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			printf("Jumlah Pesanan 10	: ");
			scanf("%d",&jumlah9);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			printf("\nHarga Pesanan 10	 	 : Rp %d",harga9);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
			printf("\nJumlah Pesanan 10	: %d",jumlah9);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + (harga9 * jumlah9) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				  : Rp %d",diskon);
		printf("\nTotal Bayar		      : Rp %d",tdiskon);
		printf("\nUang Bayar		      : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		      : Rp %d",kembali);
		printf("\nPajak 	 	 		  : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==11){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			printf("11. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("11. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Pesanan 10	 	 : Rp ");
			scanf("%d",&harga9);
			printf("Harga Pesanan 10	 	 : Rp ");
			scanf("%d",&harga9);
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
				printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			printf("Jumlah Pesanan 10	: ");
			scanf("%d",&jumlah9);
			printf("Jumlah Pesanan 10	: ");
			scanf("%d",&jumlah9);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			printf("\nHarga Pesanan 10	 	 : Rp %d",harga9);
			printf("\nHarga Pesanan 11	 	 : Rp %d",harga10);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
			printf("\nJumlah Pesanan 10	: %d",jumlah9);
			printf("\nJumlah Pesanan 11	: %d",jumlah10);
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + (harga9 * jumlah9) + (harga10 * jumlah10) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				   : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		       : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		       : Rp %d",kembali);
		printf("\nPajak 	 	 		   : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}else if(berapa==12){
			printf("Jenis Pesanan 		   : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			printf("11. ");
			scanf("%s",&jenis);
			printf("12. ");
			scanf("%s",&jenis);
			printf("Menu Pesanan 		  : ");
			printf("\n1. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("2. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("3. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("4. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("5. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("6. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("7. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("8. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("9. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("10. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("11. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			printf("12. ");
			scanf("%s",&jenis);
			scanf("%s",&jenis);
			
			printf("Harga Pesanan 1	 	 : Rp ");
			scanf("%d",&harga);
			printf("Harga Pesanan 2	 	 : Rp ");
			scanf("%d",&harga1);
			printf("Harga Pesanan 3	 	 : Rp ");
			scanf("%d",&harga2);
			printf("Harga Pesanan 4	 	 : Rp ");
			scanf("%d",&harga3);
			printf("Harga Pesanan 5	 	 : Rp ");
			scanf("%d",&harga4);
			printf("Harga Pesanan 6	 	 : Rp ");
			scanf("%d",&harga5);
			printf("Harga Pesanan 7	 	 : Rp ");
			scanf("%d",&harga6);
			printf("Harga Pesanan 8	 	 : Rp ");
			scanf("%d",&harga7);
			printf("Harga Pesanan 9	 	 : Rp ");
			scanf("%d",&harga8);
			printf("Harga Pesanan 10	 	 : Rp ");
			scanf("%d",&harga9);
			printf("Harga Pesanan 11	 	 : Rp ");
			scanf("%d",&harga10);
			printf("Harga Pesanan 12	 	 : Rp ");
			scanf("%d",&harga11);
			
			printf("Harga Topping 	 	   : Rp ");
			scanf("%d",&top);
			printf("Jumlah Pesanan 1	: ");
			scanf("%d",&jumlah);
			printf("Jumlah Pesanan 2	: ");
			scanf("%d",&jumlah1);
			printf("Jumlah Pesanan 3	: ");
			scanf("%d",&jumlah2);
			printf("Jumlah Pesanan 4	: ");
			scanf("%d",&jumlah3);
			printf("Jumlah Pesanan 5	: ");
			scanf("%d",&jumlah4);
			printf("Jumlah Pesanan 6	: ");
			scanf("%d",&jumlah5);
			printf("Jumlah Pesanan 7	: ");
			scanf("%d",&jumlah6);
			printf("Jumlah Pesanan 8	: ");
			scanf("%d",&jumlah7);
				printf("Jumlah Pesanan 9	: ");
			scanf("%d",&jumlah8);
			printf("Jumlah Pesanan 10	: ");
			scanf("%d",&jumlah9);
			printf("Jumlah Pesanan 11	: ");
			scanf("%d",&jumlah10);
			printf("Jumlah Pesanan 12	: ");
			scanf("%d",&jumlah11);
			
			printf("Jumlah Topping	 	  : ");
			scanf("%d",&jumlahtop);
			
			printf("************ TOTAL PEMBAYARAN ************\n");
			printf("Harga Pesanan 1	 	 : Rp %d",harga);
			printf("\nHarga Pesanan 2	 	 : Rp %d",harga1);
			printf("\nHarga Pesanan 3	 	 : Rp %d",harga2);
			printf("\nHarga Pesanan 4	 	 : Rp %d",harga3);
			printf("\nHarga Pesanan 5	 	 : Rp %d",harga4);
			printf("\nHarga Pesanan 6	 	 : Rp %d",harga5);
			printf("\nHarga Pesanan 7	 	 : Rp %d",harga6);
			printf("\nHarga Pesanan 8	 	 : Rp %d",harga7);
			printf("\nHarga Pesanan 9	 	 : Rp %d",harga8);
			printf("\nHarga Pesanan 10	 	 : Rp %d",harga9);
			printf("\nHarga Pesanan 11	 	 : Rp %d",harga10);
			printf("\nHarga Pesanan 12	 	 : Rp %d",harga11);
			
			printf("\nJumlah Pesanan 1	: %d",jumlah);
			printf("\nJumlah Pesanan 2	: %d",jumlah1);
			printf("\nJumlah Pesanan 3	: %d",jumlah2);
			printf("\nJumlah Pesanan 4	: %d",jumlah3);
			printf("\nJumlah Pesanan 5	: %d",jumlah4);
			printf("\nJumlah Pesanan 6	: %d",jumlah5);
			printf("\nJumlah Pesanan 7	: %d",jumlah6);
			printf("\nJumlah Pesanan 8	: %d",jumlah7);
			printf("\nJumlah Pesanan 9	: %d",jumlah8);
			printf("\nJumlah Pesanan 10	: %d",jumlah9);
			printf("\nJumlah Pesanan 11	: %d",jumlah10);
			printf("\nJumlah Pesanan 12	: %d",jumlah11);;
		
			top = top * jumlahtop;
			printf("\nHarga Topping 	 	   : Rp %d",top);
			
			total = (harga * jumlah) + (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3) + (harga4 * jumlah4) + (harga5 * jumlah5) + (harga6 * jumlah6) + (harga7 * jumlah7) + (harga8 * jumlah8) + (harga9 * jumlah9) + (harga10 * jumlah10) + (harga11 * jumlah11) + top;
			printf("\nTotal Harga	 	      : Rp %d ",total);
			
			if(total>=25000&&total<=35000){
			diskon = 3000;
			tdiskon = total - diskon;
			}
			
			else if(total>35000&&total<=50000){
			diskon = 5000;
			tdiskon = total - diskon;
			
			
			}else if(total>50000&&total<=75000){
				diskon = 8000;
				tdiskon = total - diskon;
			}	
		else				if(total>75000&&total<=100000){
			diskon = 10000;
			tdiskon = total - diskon;
				
			
			}else if(total>100000&&total<=125000){
				diskon = 12000;
				tdiskon = total - diskon;
			}
				
				else if(total>125000&&total<=150000){
			diskon = 15000;
			tdiskon = total - diskon;
			
			}else if(total>150000){
				diskon = 20000;
				tdiskon = total - diskon;
			
				
			}else{
				diskon = 0;
				tdiskon = total - diskon;
				
			}
			
			if(tdiskon>=10000&&tdiskon<20000){		ppn = 1000;
		
			}else if(tdiskon>=20000&&tdiskon<30000){		ppn = 2000;
			
			}else if(tdiskon>=30000&&tdiskon<40000){		ppn = 3000;
			
			}else if(tdiskon>=40000&&tdiskon<50000){		ppn = 4000;
			
			}else if(tdiskon>=50000&&tdiskon<60000){		ppn = 5000;
			
			}else if(tdiskon>=60000&&tdiskon<70000){		ppn = 6000;
		
			}else if(tdiskon>=70000&&tdiskon<80000){		ppn = 7000;
			
			}else if(tdiskon>=80000&&tdiskon<90000){		ppn = 8000;
			
			}else if(tdiskon>=90000&&tdiskon<100000){		ppn = 9000;
			
			}else if(tdiskon>100000){		
			ppn = tdiskon * 0.10 ;
			
			}else{
				ppn=0;
			}
		
		printf("\nDiskon				   : Rp %d",diskon);
		printf("\nTotal Bayar		       : Rp %d",tdiskon);
		printf("\nUang Bayar		       : Rp ");
		scanf("%d",&uang);
		kembali = uang - (tdiskon + ppn);
		printf("Kembali		 		       : Rp %d",kembali);
		printf("\nPajak 	 	 		   : Rp %d",ppn);
		printf("\n************** TERIMA KASIH **************\n");
	
		}
	
	
		
	
}