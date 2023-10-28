#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	setlocale(LC_ALL,"portuguese");
	
	
	//cria��o da matriz e leitura de dados, quest�es A e B
	const int mes = 6;
	const int hospital = 5;
	
	int internados[mes][hospital];
	int pacientes[hospital];
	
	
	int i = 0;
	int j = 0;
	int total = 0;
	float verba = 0;
	float mediaPacientes = 0; 
	
	
	for(i = 0; i < hospital; i++) {
		printf("Hospital %d\n", i);
		for(j = 0; j < mes; j++) {
			printf("Digite a quantidade de pacientes internados no m�s %d�: ", j+1);
			scanf("%d", &internados[j][i]);
			total = total + internados[j][i]; 
		}
		pacientes[i] = total;
		total=0;
		system("cls");
	}	

	system("cls");
	printf("\n");
	
	//verba(aqui j� aproveito e fa�o a soma dos pacientes para tirar a m�dia na quest�o D), quest�o C 
	for (i = 0; i < hospital; i++){
		if(pacientes[i] <= 50) {
			verba = pacientes[i] * 1000;
			printf("Verba do hospital %d ser� de %.2f\n", i, verba);
			printf("Total de pacientes: %d\n", pacientes[i]);
			mediaPacientes = mediaPacientes + pacientes[i];
			
		} else if (pacientes[i] > 50 && pacientes[i] <= 100) {
			verba = pacientes[i] * 1200;	
			printf("Verba do hospital %d ser� de %.2f\n", i, verba);
			printf("Total de pacientes: %d\n", pacientes[i]);
			mediaPacientes = mediaPacientes + pacientes[i];
			
		} else {
			verba = pacientes[i] * 1500;	
			printf("Verba do hospital %d ser� de %.2f\n", i, verba);
			printf("Total de pacientes: %d\n", pacientes[i]);
			mediaPacientes = mediaPacientes + pacientes[i];
			
		}
		verba = 0;
	}  
	
	//m�dia de pacientes em todos os hospitais, quest�o D
	mediaPacientes = mediaPacientes / (hospital * mes );
	
	printf("A m�dia de pessoas atendidas nos %d hospitais durante os %d meses, � de: %.2f", hospital, mes, mediaPacientes);
	
	return 0;
}
