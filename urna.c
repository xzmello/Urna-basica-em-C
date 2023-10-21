#include <stdio.h>

int main(){

	int Voto = 10;
	printf("Digite 1,2,3 ou 4 para votar nos respectivos candidatos\n5 ou 6 para votar nulo ou em branco respectivamente\n");
	scanf("%i", &Voto);
	
	int Votos1 = 0;
	int Votos2 = 0;
	int Votos3 = 0;
	int Votos4 = 0;
	int VotosNulo = 0;
	int VotosBranco = 0;

	int TotalVotos = 1;
	int Ganhador = 0;
	int Total = 1;

	while (Voto != 0){

		if (Voto == 1) {
			Votos1 ++;
		} else if (Voto == 2){
			Votos2 ++;
		} else if (Voto == 3){
			Votos3 ++;
		} else if (Voto == 4){
			Votos4 ++;
		} else if (Voto == 5){
			VotosNulo ++;
		} else if (Voto == 6){
			VotosBranco ++;
		} else {
			printf("\n");
		}


		if ((Votos1 > Votos2) && (Votos1 > Votos3) && (Votos1 > Votos4)){
			Ganhador = 1;
		} else if ((Votos2 > Votos1) && (Votos2 > Votos3) && (Votos2 > Votos4)){
			Ganhador = 2;
		} else if ((Votos3 > Votos1) && (Votos3 > Votos2) && (Votos3 > Votos4)){
			Ganhador = 3;
		} else if ((Votos4 > Votos1) && (Votos4 > Votos2) && (Votos4 > Votos3)){
			Ganhador = 4;
		} else {
			Ganhador = 0;
		}
		

		printf("Digite 1,2,3 ou 4 para votar nos respectivos candidatos\n5 ou 6 para votar nulo ou em branco respectivamente:\n");
		scanf("%i", &Voto);
		
		if ((Voto != 5) && (Voto != 6) && (Voto != 0) && ((Voto >= 1) && (Voto <= 4))){
			TotalVotos ++;
		}
		if ((Voto != 0) && ((Voto >= 1) && (Voto <= 4))){
			Total ++;
		}
	}

	float Porcentagem1 = ((float)Votos1/TotalVotos)*100;
    	float Porcentagem2 = ((float)Votos2/TotalVotos)*100;
	float Porcentagem3 = ((float)Votos3/TotalVotos)*100;
    	float Porcentagem4 = ((float)Votos4/TotalVotos)*100;
		
	if (Ganhador == 0){
		printf("\nHouve um emprate!\n\n");
	} else {
		printf("\nO candidato com mais votos foi o de número: %i\n\n", Ganhador);
	}

	printf("As porcentagens de votos foram:\n");
	printf("Candidato 1 - %.2f%%\n", Porcentagem1);
	printf("Candidato 2 - %.2f%%\n", Porcentagem2);
	printf("Candidato 3 - %.2f%%\n", Porcentagem3);
        printf("Candidato 4 - %.2f%%\n\n", Porcentagem4);
	printf("Total de votos válidos: %i\n", TotalVotos);
	printf("Total de votos: %i\n", Total);

	if((Porcentagem1 < 50) && (Porcentagem2 < 50) && (Porcentagem3 < 50) && (Porcentagem4 < 50)){
		printf("Haverá segundo turno, pois nenhum dos candidatos atingiu 50%% dos votos\n");
	}


	return 0;
}

