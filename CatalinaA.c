#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int candidato1=0, candidato2=0, candidato3=0;// total_votos =0;
	char voto;
	//float prom1=0, prom2=0, prom3=0;
	printf ("ingrese voto: ");
	while (voto!='f' && voto!='F'){
		
		system("clear");
		scanf ("%c", &voto);
		
		if (voto=='1'){
				candidato1 = candidato1 + 1 ;
			}
			else
				if(voto=='2'){
					candidato2 = candidato2 + 1;
				}
				else
					if (voto=='3'){
						candidato3 = candidato3 + 1;
					}
													
	}
		printf("%d votos cand1, %d votos cand2, %d votos cand3",candidato1,candidato2,candidato3);					
						
}
