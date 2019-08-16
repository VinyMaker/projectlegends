#include <stdio.h>
#include <stdlib.h>

// Cadastra, Exibe e Compara Campeoes de League of Legends (ou nao, sendo adaptavel)

	typedef struct{ 
		float cresc_AD;
		float cresc_AP;
		float cresc_HP;
		float cresc_MS;
	}tributos;
	typedef struct{
		char nome[40];
		float HP;
		float MANA;
		float AD_base;
		float AP_base;
		float MS_base;
		float AS_base;
		tributos;
	}champion;

int main(){
	
	//funcao(quantidade campeoes)
	int nmbr_chmp;
	printf("Quantos campeoes (para o teste): ");
	scanf("%d", &nmbr_chmp);
	champion champion[nmbr_chmp];
	tributos tributo[nmbr_chmp];
	
	
	//leitura (em desenvolvimento), a planejar funcao (Cadastro Campeao);
	int i,j;
	for(i=0 ; i<nmbr_chmp;i++){
		printf("Digite o nome do campeao:\t");
		fflush(stdin);
		fgets(champion[i].nome, 40, stdin);
		printf("Digite o HP do campeao: \t");
		scanf("%f", &champion[i].HP);
		printf("Digite a MANA do campeao:\t");
		scanf("%f", &champion[i].MANA);
		printf("Digite o AD do campeao: \t");
		scanf("%f", &champion[i].AD_base);
		printf("Digite o AP do campeao: \t");
		scanf("%f", &champion[i].AP_base);
		printf("Digite o Move Speed do campeao: \t");
		scanf("%f", &champion[i].MS_base);
		printf("Digite o Attack Speed do campeao: \t");	
		scanf("%f", &champion[i].AS_base);
		printf("Digite o tributo de crescimento de AD do campeao: \t");	
		scanf("%f", &champion[i].cresc_AD);
		printf("=================================\n");
	}
		
	//exibição (em desenvolvimento), a planejar funcao (Exibe Campeao);
	
	for(i=0; i < nmbr_chmp; i++){
		printf("Champion (%d) %s:", i, champion[i].nome);
		printf("\nHP: %.2f\n", champion[i].HP);
		printf("MANA: %.2f\n", champion[i].MANA);
		printf("AD: %.2f\n", champion[i].AD_base);
		printf("AP: %.2f\n", champion[i].AP_base);
		printf("Move Speed: %.2f\n", champion[i].MS_base);	
		printf("Attack Speed: %.2f\n", champion[i].AS_base);
		printf("Crescimento de AD: %.2f\n", champion[i].cresc_AD);
		//terminando crescimentos
		printf("=================================\n");
	}


	return 0;
}
