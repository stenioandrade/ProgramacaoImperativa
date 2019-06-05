#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i , ALUNO;
	float media[30] , MEDIA = 0;
	float *aux = &MEDIA;
	struct Aluno{
		char nome[100];
		int nota_1;
		int nota_2;
		int nota_3;
		int nota_4;
	};
	struct Aluno *turma;
	turma = calloc (30,sizeof(struct Aluno));
	for (i=0;i<30;i++){
		turma[i].nota_1 = rand()%11;
		(*(turma+i)).nota_2 = rand()%11;
		(*(turma+i)).nota_3 = rand()%11;
		(*(turma+i)).nota_4 = rand()%11;
		media[i] = ((*(turma+i)).nota_1 + (*(turma+i)).nota_2 + (*(turma+i)).nota_3 + (*(turma+i)).nota_4)/4;
		if(media[i] > *aux){
			*aux = media[i];
			ALUNO = i;
		}
	}
	printf("A maior media dentre os 30 alunos e a do aluno %d : %.1f pontos.\n", ALUNO , *aux);
	free(turma);
	return 0;
}

