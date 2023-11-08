#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	int casella=1, casellaNova, tirada=1, numDau, cont=0;
	
	printf("Benvinguts a pirates d'Educem!!\n\n");

	while(casella<=40)
	{
		numDau=(rand()%5)+1;
		casellaNova=casella+numDau;

		if(numDau==1){
			cont++;
		}else{
			cont=0;
		}

		switch (casellaNova){
			case 6:	
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDARRERA GRUMET <--- Casella(%02d) a Casella(03)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=3;
				break;
			case 12:
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDAVANT GRUMET ---> Casella(%02d) a Casella(16)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=16;
				break;
			case 16:
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDAVANT GRUMET ---> Casella(%02d) a Casella(19)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=19;
				break;
			case 25:
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDARRERA GRUMET <--- Casella(%02d) a Casella(21)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=21;
				break;
			case 30:
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDARRERA GRUMET <--- Casella(%02d) a Casella(26)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=26;
				break;
			case 31:
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\tENDAVANT GRUMET ---> Casella(%02d) a Casella(35)\n",tirada,numDau,casella,casellaNova,casellaNova);
				casellaNova=35;
				break;	
			default: 
				if(cont==3)
				{
					casellaNova=35;
					printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\n",tirada,numDau,casella,casellaNova);
					printf("\nJACK SPARROW: SERÀS PIRATA D'AIGUA DOLÇA!!\n");
					printf("JACK SPARROW: HAS TRET 3 VEGADES UN 1!!\n");
					printf("JACK SPARROW: MILLOR T'APROPO AL TRESOR GAMARÚS!!\n\n");
					
				}else{
				printf("Tirada[%02d]: Dau(%d), Casella(%02d) a Casella(%02d)\n",tirada,numDau,casella,casellaNova);
				break;
				}

		}
		casella=casellaNova;
		tirada++;
		getch();
		
	}
	acabament();
	return 0;
}
