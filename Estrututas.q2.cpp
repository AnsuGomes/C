#include <stdio.h>
#define TAM 1


typedef struct horario{
	int hora, minuto;
}Hora;
	
typedef struct data{
	int dia, mes, ano;
}Date;	

typedef struct end{
	int numero;
	char cidade[50], rua [10000];
}End;

typedef struct compromisso{
	Hora time;
	Date data;
	End local;
	char motivo [1000];
}Compromisso;

	int main () {
	int i;	
		Compromisso agenda [100];
		
		for (i = 0; i <TAM; i++) {
			printf("Qual a data do seu compromisso?\n");
			scanf("%d%d%d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
			printf("Qual o horario?\n");
			scanf("%d%d", &agenda[i].time.hora, &agenda[i].time.minuto); 
			printf("Qual a cidade, Rua e o numero?\n");
			scanf("%s %[^\n]", &agenda[i].local.cidade, &agenda[i].local.rua, &agenda[i].local.numero);
			printf("Qual o motivo?\n");
			scanf("%s \n", agenda[i].motivo);
		}
		for (i =0; i <TAM; i++) {
			printf("Dados da sua agenda: ");
			printf("\nData: %d/%d/%d\n", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
			printf("Hora: %dh%d\n", agenda[i].time.hora, agenda[i].time.minuto);
			printf("Local: %s %s %d\n", agenda[i].local.cidade, agenda[i].local.rua, agenda[i].local.numero);
			printf("Compromisso: %s \n", agenda[i].motivo);
		}
	return 0;	
}

//20 03 21
//20 22
//Russas, Camilo Ferreira Lima, 
//764
//Cruzeiro
