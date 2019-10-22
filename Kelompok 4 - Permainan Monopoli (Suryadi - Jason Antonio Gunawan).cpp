#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const char* petak[] = {"START","Indonesia","Singapore","Hongkong","Taiwan","Dana Umum","Turki","Brunei","Australia","Filipina","Jepang","Kartu Kesempatan","Korea","Rusia","Amerika Serikat","Inggris","Irlandia","Wales","Mesir","Skotlandia","START","Indonesia","Singapore","Hongkong","Taiwan","Dana Umum"};

char pemilik[] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
FILE * fp1;
FILE * fp2;
FILE * fp3;
int panduan(int pilihan);
void delay (int num);
int uang_x;
int uang_y;
int uang_z;


void delay(int num)
{
    // Converting time into milli_seconds
    int milli_seconds = num;

    
    clock_t start_time = clock();

    // looping till required time is achieved
    while (clock() < start_time + milli_seconds) ;
}

int urutan_user()
{
	int rand_num,i;
	int urutan[3];
	/*printf("Randomizing urutan user\n\n");*/
	for(i=0;i<3;i++){
		srand(time(0));
		rand_num = rand()%3 + 1;
	}

		

}

int dadu() 
{
	int rand_num;
	srand(time(0)); 
	rand_num = rand()%6 + 1;
	return rand_num;
}

const char* monopoli_jalan (int move,int turn_no,int locationx,int locationy,int locationz)
{
	int i;
	char a[30]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char b[30]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char c[30]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int location;
	a[locationx]='x';
	b[locationy]='y';
	c[locationz]='z';
	if(turn_no==1){
   		for(i=0;i<move;i++){
   		a[i+locationx+1]=a[locationx+i];
   		a[locationx+i]=' ';
		}
		location = locationx + move;
		//return petak[locationx];
    }
	else if(turn_no==2){
   		for(i=0;i<move;i++){
   		b[i+locationy+1]=b[locationy+i];
   		b[locationy+i]=' ';
		}
		location = locationy + move;
		//return petak[locationy];	
    }
	else if(turn_no==3){
   		for(i=0;i<move;i++){
   		c[i+locationz+1]=c[locationz+i];
   		c[locationz+i]=' ';
		}
		location = locationz + move;
		//return petak[locationz];	
	}
	
	printf(" _____ _____ _____ _____ _____ _____ \n");
	printf("|  %c  |  %c  |	%c |  %c  |  %c  |  %c  |\n",a[0],a[1],a[2],a[3],a[4],a[5]);
	printf("|  %c  |  %c  |	%c |  %c  |  %c  |  %c  |\n",b[0],b[1],b[2],b[3],b[4],b[5]);
	printf("|  %c  |  %c  |	%c |  %c  |  %c  |  %c  |\n",c[0],c[1],c[2],c[3],c[4],c[5]);                                 
	printf("|     |	    |	  |     |     |     |\n");						
	printf("|_____|_____|_____|_____|_____|_____|\n");					
	printf("|  %c  |                       |  %c  |\n",a[19],a[6]);
	printf("|  %c  |                       |  %c  |\n",b[19],b[6]);
	printf("|  %c  |                       |  %c  |\n",c[19],c[6]);
	printf("|     |                       |     |\n");
	printf("|_____|                       |_____|\n");
	printf("|  %c  |                       |  %c  |\n",a[18],a[7]);
	printf("|  %c  |                       |  %c  |\n",b[18],b[7]);
	printf("|  %c  |                       |  %c  |\n",c[18],c[7]);
	printf("|     |                       |     |\n");
	printf("|_____|                       |_____|\n");
	printf("|  %c  |                       |  %c  |\n",a[17],a[8]);
	printf("|  %c  |                       |  %c  |\n",b[17],b[8]);
	printf("|  %c  |                       |  %c  |\n",c[17],c[8]);
	printf("|     |                       |     |\n");
	printf("|_____|                       |_____|\n");
	printf("|  %c  |                       |  %c  |\n",a[16],a[9]);
	printf("|  %c  |                       |  %c  |\n",b[16],b[9]);
	printf("|  %c  |                       |  %c  |\n",c[16],c[9]);
	printf("|     |                       |     |\n");
	printf("|_____|_____ _____ _____ _____|_____|\n");
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",a[15],a[14],a[13],a[12],a[11],a[10]);
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",b[15],b[14],b[13],b[12],b[11],b[10]);
	printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",c[15],c[14],c[13],c[12],c[11],c[10]);
	printf("|     |	    |	  |     |     |     |\n");			
	printf("|_____|_____|_____|_____|_____|_____|\n");
	
	
	return petak[location];
}



void negara(int beli,int location,char id_user ){
	fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
	fscanf(fp1,"%d",&uang_x);
	fclose(fp1);

	fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
	fscanf(fp2,"%d",&uang_y);
	fclose(fp2);

	fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
	fscanf(fp3,"%d",&uang_z);
	fclose(fp3);
	
	if (beli==1){
		if(id_user=='x'){
			printf("Uang yang dimiliki %c sekarang sisa: %d\n",id_user,uang_x);
			if(uang_x<=200){
				printf("Uang x tidak cukup!\n\n");
			}
			else{
				pemilik[location]= id_user;
				printf("%s telah dibeli oleh %c\n",petak[location],id_user);
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				fclose(fp1);
			
				uang_x-=200;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("Uang pemain x tersisa: %d\n",uang_x);
			}
		}
		else if(id_user=='y'){
			printf("Uang yang dimiliki %c sekarang sisa: %d\n",id_user,uang_y);
			if(uang_y<=200){
				printf("Uang y tidak cukup!\n\n");
			}
			else{
				pemilik[location]= id_user;
				printf("%s telah dibeli oleh %c\n",petak[location],id_user);
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				fclose(fp2);
			
				uang_y-=200;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("Uang pemain y tersisa: %d\n",uang_y);
			}
		}
		else if (id_user=='z'){
			printf("Uang yang dimiliki %c sekarang sisa: %d\n\n",id_user,uang_z);
			if(uang_z<=200){
				printf("Uang z tidak cukup!\n\n");
			}
			else{
				pemilik[location]= id_user;
				printf("%s telah dibeli oleh %c\n",petak[location],id_user);
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				fclose(fp3);
			
				uang_z-=200;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("Uang pemain z tersisa: %d\n",uang_z);
			}
		}
		
		
		
	}
		
	else{
		printf("%s tidak dibeli oleh %c\n",petak[location],id_user);
		
	}
}

void dana_umum(char id_user){
	int rand_num;
	srand(time(0)); 
	rand_num = rand()%4 + 1;
	switch(rand_num){
		case 1://mengurangi uang pemain sebanyak 100
			if(id_user=='x'){
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fclose(fp1);
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("Uang pemain x tersisa: %d\n",uang_x);
				break;
			}
			else if(id_user=='y'){
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				fclose(fp2);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("Uang pemain y tersisa: %d\n",uang_y);
				break;
			}
			else if(id_user=='z'){
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				fclose(fp3);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("Uang pemain z tersisa: %d\n",uang_z);
				break;
			}	
		case 2://menambah uang pemain sebanyak 100
			if(id_user=='x'){
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				fclose(fp1);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("Uang pemain x tersisa: %d\n",uang_x);
				break;
			}
			else if(id_user=='y'){
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				fclose(fp2);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("Uang pemain y tersisa: %d\n",uang_y);
				break;
			}
			else if(id_user=='z'){
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				fclose(fp3);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("Uang pemain z tersisa: %d\n",uang_z);
				break;
			}	
			
		case 3:
			if(id_user=='x'){
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				fclose(fp1);
				uang_x-=200;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("Uang pemain x tersisa: %d\n",uang_x);
				break;
			}
			else if(id_user=='y'){
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				fclose(fp2);
				uang_y-=200;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("Uang pemain y tersisa: %d\n",uang_y);
				break;
			}
			else if(id_user=='z'){
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				fclose(fp3);
				uang_z-=200;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("Uang pemain z tersisa: %d\n",uang_z);
				break;
			}	
		
		case 4:
			if(id_user=='x'){
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				fclose(fp1);
				uang_x+=200;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("Uang pemain x tersisa: %d\n",uang_x);
				break;
			}
			else if(id_user=='y'){
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				fclose(fp2);
				uang_y+=200;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("Uang pemain y tersisa: %d\n",uang_y);
				break;
			}
			else if(id_user=='z'){
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z+=200;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("Uang pemain z tersisa: %d\n",uang_z);
				break;
			}	 
	}
	
}
int kartu_kesempatan(char id_user,int locationx,int locationy,int locationz){

	int rand_num;
		srand(time(0)); 
		rand_num = rand()%4 + 1;
		switch(rand_num){
			case 1:
				if(id_user=='x'){
					locationx+=1;
					printf("Lokasi player x di %s\n",petak[locationx]);
					return locationx;
					break;
				}
				else if(id_user=='y'){
					locationy+=1;
					printf("Lokasi player y di %s\n",petak[locationy]);
					return locationy;
					break;
				}
				else if(id_user=='z'){
					locationz+=1;
					printf("Lokasi player z di %s\n",petak[locationz]);
					return locationz;
					break;
				}
			
			case 2:
				if(id_user=='x'){
					locationx-=1;
					printf("Lokasi player x di %s\n",petak[locationx]);
					return locationx;
					break;
				}
				else if(id_user=='y'){
					locationy-=1;
					printf("Lokasi player y di %s\n",petak[locationy]);
					return locationy;
					break;
				}
				else if(id_user=='z'){
					locationz-=1;
					printf("Lokasi player z di %s\n",petak[locationz]);
					return locationz;
					break;
				}
				
			case 3:
				if(id_user=='x'){
					locationx+=2;
					printf("Lokasi player x di %s\n",petak[locationx]);
					return locationx;
					break;
				}
				else if(id_user=='y'){
					locationy+=2;
					printf("Lokasi player y di %s\n",petak[locationy]);
					return locationy;
					break;
				}
				else if(id_user=='z'){
					locationz+=2;
					printf("Lokasi player z di %s\n",petak[locationz]);
					return locationz;
					break;
				}
				
			case 4:
				if(id_user=='x'){
					locationx-=2;
					printf("Lokasi player x di %s\n",petak[locationx]);
					return locationx;
					break;
				}
				else if(id_user=='y'){
					locationy-=2;
					printf("Lokasi player y di %s\n",petak[locationy]);
					return locationy;
					break;
				}
				else if(id_user=='z'){
					locationz-=2;
					printf("Lokasi player z di %s\n",petak[locationz]);
					return locationz;
					break;
				}
		}
	}


	

int main(){
	fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
	fprintf(fp1,"%d",500);
	fclose(fp1);

	fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
	fprintf(fp2,"%d",500);
	fclose(fp2);

	fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
	fprintf(fp3,"%d",500);
	fclose(fp3);
	
	fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
	fscanf(fp1,"%d",&uang_x);
	fclose(fp1);

	fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
	fscanf(fp2,"%d",&uang_y);
	fclose(fp2);

	fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
	fscanf(fp3,"%d",&uang_z);
	fclose(fp3);
	

	int rand_num,i,n,move,keputusan;
	int turn,turnx,turny,turnz;
	char x='x';
	char y='y';
	char z='z';
	const char* posisi;
	int count_propertix=0;
	int count_propertiy=0;
	int count_propertiz=0;
	int locationx = 0;
	int locationy = 0;
	int locationz = 0;
	int jalan = 1;
	int kembali;
	
	
	int pilihan;
	
	printf("======================Selamat Datang di Simulasi Permainan Monopoli=======================\n");
	printf("                     *****  Silahkan memilih opsi di bawah ini *****                      \n");
	printf("                                                                                          \n");
	printf("                      1. Panduan  2. Masuk ke permainan  3. Keluar                        \n");
	printf("==========================================================================================\n\n");
	printf("Masukan pilihan anda (dengan memasukkan angka 1, 2 ataupun 3): ");
	scanf("%d",&pilihan);
	
	switch(pilihan){
	case 1:
		system("cls");
		panduan(pilihan);
		break;
			
	case 2:
			
	system("cls");
	printf("Selamat datang di permainan Monopoli!\n\n");
	turnx = urutan_user();
	turny = urutan_user();
	turnz = urutan_user();
	while(turny==turnx){
	    turny = urutan_user();
	    while(turnz==turny){
		turnz = urutan_user();
	    }
	}
	printf("Urutan Giliran Main Player\n");
	printf("Player x = %d\n",turnx);
	printf("Player y = %d\n",turny);
	printf("Player z = %d\n",turnz);
	getchar();
	
	while(jalan){
	if (turnx==1)
	{	printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,1,locationx,locationy,locationz);
    	locationx=locationx+move;
    	if(locationx>=20)
    	{
    	  locationx=locationx-20;
    	  uang_x+=50;
    	  fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
		  fprintf(fp1,"%d",uang_x);
		  fclose(fp1);
    	  
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player x %s\n",posisi);
		getchar();
		if(posisi!=petak[0] && posisi!=petak[5] && posisi!=petak[11]){
			if(pemilik[locationx]==' '){
				printf("Apakah x ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationx,x);
			}
			if(pemilik[locationx]=='x'){
				printf("Properti %s milik x\n",posisi);
				
			}
			if(pemilik[locationx]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationx]=='z'){
				printf("Anda dikenakan pajak sebesar milik z 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(x);
		}
		if(posisi==petak[11]){
			locationx = kartu_kesempatan(x,locationx,locationy,locationz);
		}

		if (turny==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,2,locationx,locationy,locationz);
    	locationy=locationy+move;
    	if(locationy>=20)
    	{
    	  locationy=locationy-20;
    	  uang_y+=50;
    	  fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
		  fprintf(fp2,"%d",uang_y);
		  fclose(fp2);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player y %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationy]==' '){
				printf("Apakah y ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationy,y);
			}
			if(pemilik[locationy]=='y'){
				printf("Properti %s milik y\n",posisi);
				
			}
			if(pemilik[locationy]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationy]=='z'){
				printf("Anda dikenakan pajak milik z sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(y);
		}
		if(posisi==petak[11]){
			locationy = kartu_kesempatan(y,locationx,locationy,locationz);
		}
		
		printf("\n\n");
	    printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,3,locationx,locationy,locationz);
    	locationz=locationz+move;
    	if(locationz>=20)
    	{
    	  locationz=locationz-20;
    	  uang_z+=50;
    	  fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
		  fprintf(fp3,"%d",uang_z);
		  fclose(fp3);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player z %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationz]==' '){
				printf("Apakah z ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationz,z);
			}
			if(pemilik[locationz]=='z'){
				printf("Properti %s milik z\n",posisi);
				
			}
			if(pemilik[locationz]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationz]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang y menjadi: %d\n",uang_y);
			}
		}
		if(posisi==petak[5]){
			dana_umum(z);
		}
		if(posisi==petak[11]){
			locationz = kartu_kesempatan(z,locationx,locationy,locationz);
		}
		
	    }
		//}
	    if (turnz==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,3,locationx,locationy,locationz);
    	locationz=locationz+move;
    	if(locationz>=20)
    	{
    	  locationz=locationz-20;
    	  uang_z+=50;
    	  fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
		  fprintf(fp3,"%d",uang_z);
		  fclose(fp3);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player z %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationz]==' '){
				printf("Apakah z ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationz,z);
			}
			if(pemilik[locationz]=='z'){
				printf("Properti %s milik z\n",posisi);
				
			}
			if(pemilik[locationz]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationz]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang y menjadi: %d\n",uang_y);
			}
		}
		if(posisi==petak[5]){
			dana_umum(z);
		}
		if(posisi==petak[11]){
			locationz = kartu_kesempatan(z,locationx,locationy,locationz);
		}
		printf("\n\n");
		printf("Lempar Dadu\n");
	    move = dadu();
    	posisi = monopoli_jalan(move,2,locationx,locationy,locationz);
    	locationy=locationy+move;
    	if(locationy>=20)
    	{
    	  locationy=locationy-20;
    	  uang_y+=50;
    	  fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
    	  fprintf(fp2,"%d",uang_y);
		  fclose(fp2);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player y %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationy]==' '){
				printf("Apakah y ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationy,y);
			}
			if(pemilik[locationy]=='y'){
				printf("Properti %s milik y\n",posisi);
				
			}
			if(pemilik[locationy]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationy]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(y);
		}
		if(posisi==petak[11]){
			locationy = kartu_kesempatan(y,locationx,locationy,locationz);
		}
		
	    }}
	    
	if (turny==1)
	{	
		printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,2,locationx,locationy,locationz);
    	locationy=locationy+move;
    	if(locationy>=20)
    	{
    	  locationy=locationy-20;
    	  uang_y+=50;
    	  fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
		  fprintf(fp2,"%d",uang_y);
		  fclose(fp2);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player y %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationy]==' '){
				printf("Apakah y ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationy,y);
			}
			if(pemilik[locationy]=='y'){
				printf("Properti %s milik y\n",posisi);
				
			}
			if(pemilik[locationy]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang x menjadi: %d\n",uang_x);
				
				
			}
			if(pemilik[locationy]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(y);
		}
		if(posisi==petak[11]){
			locationy = kartu_kesempatan(y,locationx,locationy,locationz);
		}
		
		if (turnx==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,1,locationx,locationy,locationz);
    	locationx=locationx+move;
    	if(locationx>=20)
    	{
    	  locationx=locationx-20;
    	  uang_x+=50;
    	  fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
		  fprintf(fp1,"%d",uang_x);
		  fclose(fp1);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player x %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationx]==' '){
				printf("Apakah x ingin membeli petak %s\n?",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationx,x);
			}
			if(pemilik[locationx]=='x'){
				printf("Properti %s milik x\n",posisi);
				
			}
			if(pemilik[locationx]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationx]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(x);
		}
		if(posisi==petak[11]){
			locationx = kartu_kesempatan(x,locationx,locationy,locationz);
		}
		printf("\n\n");
	    printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,3,locationx,locationy,locationz);
    	locationz=locationz+move;
    	if(locationz>=20)
    	{
    	  locationz=locationz-20;
    	  uang_z+=50;
    	  fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
		  fprintf(fp3,"%d",uang_z);
		  fclose(fp3);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player z %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationz]==' '){
				printf("Apakah z ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationz,z);
			}
			if(pemilik[locationz]=='z'){
				printf("Properti %s milik z\n",posisi);
				
			}
			if(pemilik[locationz]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationz]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang x menjadi: %d\n",uang_x);
			}
		}
		if(posisi==petak[5]){
			dana_umum(z);
		}
		if(posisi==petak[11]){
			locationz = kartu_kesempatan(z,locationx,locationy,locationz);
		}
		
	    }
		//}
	    if (turnz==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,3,locationx,locationy,locationz);
    	locationz=locationz+move;
    	if(locationz>=20)
    	{
    	  locationz=locationz-20;
    	  uang_z+=50;
    	  fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
		  fprintf(fp3,"%d",uang_z);
		  fclose(fp3);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player z %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationz]==' '){
				printf("Apakah z ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationz,z);
			}
			if(pemilik[locationz]=='z'){
				printf("Properti %s milik z\n",posisi);
				
			}
			if(pemilik[locationz]=='y'){
				printf("Anda dikenakan pajak milik petak y sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationz]=='x'){
				printf("Anda dikenakan pajak milik petak x sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang x menjadi: %d\n",uang_x);
			}
		}
		if(posisi==petak[5]){
			dana_umum(z);
		}
		if(posisi==petak[11]){
			locationz = kartu_kesempatan(z,locationx,locationy,locationz);
		}
		printf("\n\n");
		printf("Lempar Dadu\n");
	    move = dadu();
    	posisi = monopoli_jalan(move,1,locationx,locationy,locationz);
    	locationx=locationx+move;
    	if(locationx>=20)
    	{
    	  locationx=locationx-20;
    	  uang_x+=50;
    	  fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
		  fprintf(fp1,"%d",uang_x);
		  fclose(fp1);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player x %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationx]==' '){
				printf("Apakah x ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationx,x);
			}
			if(pemilik[locationx]=='x'){
				printf("Properti %s milik x\n",posisi);
				
			}
			if(pemilik[locationx]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_x+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationx]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(x);
		}
		if(posisi==petak[11]){
			locationx = kartu_kesempatan(x,locationx,locationy,locationz);
		}
	    }}
	    
	    if (turnz==1)
	{	printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,3,locationx,locationy,locationz);
    	locationz=locationz+move;
    	if(locationz>=20)
    	{
    	  locationz=locationz-20;
    	  uang_z+=50;
    	  fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
		  fprintf(fp3,"%d",uang_z);
		  fclose(fp3);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player z %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationz]==' '){
				printf("Apakah z ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationz,z);
			}
			if(pemilik[locationz]=='z'){
				printf("Properti %s milik z\n",posisi);
				
			}
			if(pemilik[locationz]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationz]=='x'){
				printf("Anda dikenakan pajak milik petak x sebesar 100\n");
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","r");
				fscanf(fp3,"%d",&uang_z);
				uang_z-=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_z);
				printf("Uang x menjadi: %d\n",uang_x);
			}
		}
		if(posisi==petak[5]){
			dana_umum(z);
		}
		if(posisi==petak[11]){
			locationz = kartu_kesempatan(z,locationx,locationy,locationz);
		}
		if (turny==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,2,locationx,locationy,locationz);
    	locationy=locationy+move;
    	if(locationy>=20)
    	{
    	  locationy=locationy-20;
    	  uang_y+=50;
    	  fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
		  fprintf(fp2,"%d",uang_y);
		  fclose(fp2);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player y %s\n\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationy]==' '){
				printf("Apakah y ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationy,y);
			}
			if(pemilik[locationy]=='y'){
				printf("Properti %s milik y\n",posisi);
				
			}
			if(pemilik[locationy]=='x'){
				printf("Anda dikenakan pajak petak milik x sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationy]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(y);
		}
		if(posisi==petak[11]){
			locationy = kartu_kesempatan(y,locationx,locationy,locationz);
		}
		printf("\n\n");
	    printf("Lempar Dadu\n");
	    
		move = dadu();
    	posisi = monopoli_jalan(move,1,locationx,locationy,locationz);
    	locationx=locationx+move;
    	if(locationx>=20)
    	{
    	  locationx=locationx-20;
    	  uang_x+=50;
    	  fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
		  fprintf(fp1,"%d",uang_x);
		  fclose(fp1);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player x %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationx]==' '){
				printf("Apakah x ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationx,x);
			}
			if(pemilik[locationx]=='x'){
				printf("Properti %s milik x\n",posisi);
				
			}
			if(pemilik[locationx]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang y menjadi: %d\n",uang_y);
				
			}
			if(pemilik[locationx]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang z menjadi: %d\n",uang_z);
			}
		}
		if(posisi==petak[5]){
			dana_umum(x);
		}
		if(posisi==petak[11]){
			locationx = kartu_kesempatan(x,locationx,locationy,locationz);
		}
		}
		//}
	    if (turnx==2)
	    {
	    printf("\n\n");
		printf("Lempar Dadu\n");
		move = dadu();
    	posisi = monopoli_jalan(move,1,locationx,locationy,locationz);
    	locationx=locationx+move;
    	if(locationx>=20)
    	{
    	  locationx=locationx-20;
    	  uang_x+=50;
    	  fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
		  fprintf(fp1,"%d",uang_x);
		  fclose(fp1);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player x %s\n\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationx]==' '){
				printf("Apakah x ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationx,x);
			}
			if(pemilik[locationx]=='x'){
				printf("Properti %s milik x\n",posisi);
				
			}
			if(pemilik[locationx]=='z'){
				printf("Anda dikenakan pajak petak milik z sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang z menjadi: %d\n",uang_z);
				
			}
			if(pemilik[locationx]=='y'){
				printf("Anda dikenakan pajak petak milik y sebesar 100\n");
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","r");
				fscanf(fp1,"%d",&uang_x);
				uang_x-=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				uang_y+=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_x);
				printf("Uang y menjadi: %d\n",uang_y);
			}
		}
		if(posisi==petak[5]){
			dana_umum(x);
		}
		if(posisi==petak[11]){
			locationx = kartu_kesempatan(x,locationx,locationy,locationz);
		}
		printf("\n\n");
		printf("Lempar Dadu\n");
	    move = dadu();
    	posisi = monopoli_jalan(move,2,locationx,locationy,locationz);
    	locationy=locationy+move;
    	if(locationy>=20)
    	{
    	  locationy=locationy-20;
    	  uang_y+=50;
    	  fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
		  fprintf(fp2,"%d",uang_y);
		  fclose(fp2);
		}
		printf("Jalan %d Langkah\n",move);
		printf("Lokasi player y %s\n",posisi);
		getchar();
		if(posisi!=petak[0]&&posisi!=petak[5]&&posisi!=petak[11]){
			if(pemilik[locationy]==' '){
				printf("Apakah y ingin membeli petak %s?\n",posisi);
				printf("1. Beli\n2. Pass\n");
				scanf("%d",&keputusan);
				negara(keputusan,locationy,y);
			}
			if(pemilik[locationy]=='y'){
				printf("Properti %s milik y",posisi);
				
			}
			if(pemilik[locationy]=='x'){
				printf("Anda dikenakan pajak milik petak x sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_x+=100;
				fp1 = fopen("C:\\Users\\Asus\\Desktop\\uang_x.txt","w");
				fprintf(fp1,"%d",uang_x);
				fclose(fp1);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang x menjadi: %d\n",uang_x);
				
			}
			if(pemilik[locationy]=='z'){
				printf("Anda dikenakan pajak milik petak z sebesar 100\n");
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","r");
				fscanf(fp2,"%d",&uang_y);
				uang_y-=100;
				fp2 = fopen("C:\\Users\\Asus\\Desktop\\uang_y.txt","w");
				fprintf(fp2,"%d",uang_y);
				fclose(fp2);
				uang_z+=100;
				fp3 = fopen("C:\\Users\\Asus\\Desktop\\uang_z.txt","w");
				fprintf(fp3,"%d",uang_z);
				fclose(fp3);
				printf("\n");
				printf("Uang anda tersisa: %d\n",uang_y);
				printf("Uang z menjadi: %d\n",uang_z);
			}}
		if(posisi==petak[5]){
			dana_umum(y);
		}
		if(posisi==petak[11]){
			locationy = kartu_kesempatan(y,locationx,locationy,locationz);
		}
	    }
		}
	    
	    if(uang_x<=0||uang_y<=0||uang_z<=0){
	    	//system("cls");
	    	printf("\n\n");
	    	break;
		}
	    
	}

	
	  
	
	
	if(uang_x<=0 && uang_y<=0){
		for(i=0;i<20;i++){
					if(pemilik[i]=='y'){
						count_propertiy+=1;
					}
					if(pemilik[i]=='x'){
						count_propertix+=1;
					}
		}
		if(count_propertiy>count_propertix){
			printf("Properti Y: %d, Properti X: %d\n",count_propertiy,count_propertix);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,y,x);
		}
		if(count_propertix>count_propertiy){
			printf("Properti X: %d, Properti Y: %d\n",count_propertix,count_propertiy);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,x,y);
		}
	}
	if(uang_y<=0 && uang_z<=0){
		for(i=0;i<20;i++){
					if(pemilik[i]=='y'){
						count_propertiy+=1;
					}
					if(pemilik[i]=='z'){
						count_propertiz+=1;
					}
		}
		if(count_propertiy>count_propertiz){
			printf("Properti Y: %d, Properti Z: %d\n",count_propertiy,count_propertiz);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,y,z);
		}
		if(count_propertix>count_propertiy){
			printf("Properti Z: %d, Properti Y: %d\n",count_propertiz,count_propertiy);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,z,y);
		}
	}
	
	if(uang_x<=0 && uang_z<=0){
		for(i=0;i<20;i++){
					if(pemilik[i]=='x'){
						count_propertix+=1;
					}
					if(pemilik[i]=='z'){
						
						count_propertiz+=1;
					}
		}
		if(count_propertix>count_propertiz){
			printf("Properti X: %d, Properti Z: %d\n",count_propertix,count_propertiz);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,x,z);
		}
		if(count_propertiz>count_propertix){
			printf("Properti Z: %d, Properti X: %d\n",count_propertiz,count_propertix);
			printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,z,x);
		}
	}
	
	if(uang_x<=0 && uang_y>0 && uang_z>0){
			if(uang_y>uang_x && uang_y>uang_z){
				if(uang_z>uang_x){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,z,x);
				}
				else if(uang_z==uang_x){
					printf("Juara 1: %c\n%c & %c kalah",y,z,x);
					
				}
			}
			if(uang_z>uang_x && uang_z>uang_y){
				if(uang_y>uang_x){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,y,x);
				
				}
				else if(uang_y==uang_x){
					printf("Juara 1: %c\n%c & %c kalah",z,y,x);
				
				}
			}
			if(uang_z==uang_y){
				for(i=0;i<20;i++){
					if(pemilik[i]=='y'){
						count_propertiy+=1;
					}
					if(pemilik[i]=='z'){
						count_propertiz+=1;
					}
				}
				if(count_propertiy>count_propertiz){
					printf("Properti Y: %d, Properti Z: %d\n",count_propertiy,count_propertiz);
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,z,x);
				}
				if(count_propertiz>count_propertiy){
					printf("Properti Z: %d, Properti Y: %d\n",count_propertiz,count_propertiy);
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,y,x);
				}
			}
		}
	if(uang_y<=0 && uang_x>0 && uang_z>0){
			if(uang_x>uang_y && uang_x>uang_z){
				if(uang_z>uang_y){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,z,y);
				
				}
				else if(uang_z==uang_y){
					printf("Juara 1: %c\n%c & %c kalah",x,z,y);
				
				}
			}
			if(uang_z>uang_x && uang_z>uang_y){
				if(uang_x>uang_y){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,x,y);
				
				}
				else if(uang_x==uang_y){
					printf("Juara 1: %c\n%c & %c kalah",z,x,y);
				
				}
			}
			if(uang_z==uang_x){
				for(i=0;i<20;i++){
					if(pemilik[i]=='x'){
						count_propertix+=1;
					}
					if(pemilik[i]=='z'){
						count_propertiz+=1;
					}
				}
				if(count_propertix>count_propertiz){
					printf("Properti X: %d, Properti Z %d\n",count_propertix,count_propertiz);
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,z,y);
				}
				if(count_propertiz>count_propertix){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",z,x,y);
				}
			}
		}
	if(uang_z<=0 && uang_x>0 && uang_y>0){
			if(uang_x>uang_y && uang_x>uang_z){
				if(uang_y>uang_z){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,y,z);
				
				}
				else if(uang_y==uang_z){
					printf("Juara 1: %c\n%c & %c kalah",x,y,z);
				
				}
			}
			if(uang_y>uang_x && uang_y>uang_z){
				if(uang_x>uang_z){
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,x,z);
				
				}
				else if(uang_x==uang_z){
					printf("Juara 1: %c\n%c & %c kalah",y,x,z);
				
				}
			}
			if(uang_x==uang_y){
				for(i=0;i<20;i++){
					if(pemilik[i]=='y'){
						count_propertiy+=1;
					}
					if(pemilik[i]=='x'){
						count_propertix+=1;
					}
				}
				if(count_propertiy>count_propertix){
					printf("Properti Y: %d, Properti X: %d\n",count_propertiy,count_propertix);
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",y,x,z);
				}
				if(count_propertix>count_propertiy){
					printf("Properti X: %d, Properti Y: %d\n",count_propertix,count_propertiy);
					printf("Juara 1: %c\nJuara 2: %c\nJuara 3: %c",x,y,z);
				}
			}
		}
		
		printf("\n");
		printf("Tunggu Sebentar, anda akan kembali ke menu utama");
		delay(5000);
		system("cls");
		main();
		break;
	
	case 3:
		printf("\n");
		printf("Sampai jumpa kembali!\n");	
    	delay(1000);
    	printf(">");
    	delay(1000);
    	printf(">");
    	delay(1000);
    	printf(">");
		return 0;
		break;
	
	default:
		printf("Silahkan pilih angka yang benar!");
		delay(1500);
		system("cls");
		main();
		break;
		
}
	
	
	
	
		
	
	
	return 0;

}

int panduan(int pilihan){
	int kembali;
	printf("=================================================Selamat Datang di Buku Panduan Permainan====================================================\n");
	printf("1. Permainan Monopoly ini dapat dimainkan oleh 3 player\n");
	printf("2. Player 1 diberi nama x, player 2 diberi nama y, player 3 diberi nama z\n");
	printf("3. Permainan game monopoly ini akan merandom urutan setiap player\n");
	printf("4. Permainan game monopoly akan memulai giliran setiap player jalan sesuai dengan urutan player yang di random\n");
	printf("5. Setiap giliran, player akan merandom lemparan dadu dan jalan sesuai dengan angka random dadu\n");
	printf("6. Player yang sudah jalan dan menempati petak dapat membeli petak dengan harga 200 kecuali petak START, Dana Umum, & Kartu Kesempatan\n");
	printf("7. Setiap player melewati start maka uang player akan bertambah sebanyak 50\n");
	printf("8. Player yang berada di tempat dana umum memiliki chance untuk bertambah atau berkurang uang sebesar 100 atau 200\n");
	printf("9. Player yang berada di tempat kartu kesempatan memiliki chance untuk maju atau mundur langkah sebesar 1 atau 2 petak\n");
	printf("10. Apabila player menempati petak yang sudah dibeli player lain maka player akan dikenakan pajak sebesar 100 dan player yang memiliki\n    properti tersebut akan mendapatkan uang 100\n");
	printf("11. Permainan akan berakhir apabila salah satu player sudah memiliki uang <= 0\n");
	printf("12. Player yang memiliki uang <= 0 akan menjadi juara 3, player yang memiliki paling banyak akan menjadi juara 1 player yang memiliki uang\n    ke-2 terbanyak akan menjadi juara 2\n");
	printf("13. Apabila ada kedua player yang memiliki uang yang sama, maka akan dibandingkan dari segi jumlah properti dan yang memiliki\n    properti lebih banyak dinyatakan menang\n\n");
	delay(4000);
	printf("Apakah anda ingin kembali ke menu utama?\n1. Ya\n2. Tidak\n");
	scanf("%d",&kembali);
	if(kembali==1){
	     system("cls");
	     return main();
	}
	else if (kembali==2){
	     clock_t start_time = clock();
	     while (clock() < start_time + 30000){
			delay(2000);
			printf(">");
	     }
	     printf("\n");
	     printf("30 detik sudah berlalu, Anda akan kembali ke menu utama");
	     delay(1500);
	     system("cls");
	     return main();
	}
}
