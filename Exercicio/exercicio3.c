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
	struct Aluno aluno[30];
	for (i=0;i<30;i++){
		aluno[i].nota_1 = rand()%11;
		aluno[i].nota_2 = rand()%11;
		aluno[i].nota_3 = rand()%11;
		aluno[i].nota_4 = rand()%11;
		media[i] = (aluno[i].nota_1 + aluno[i].nota_2 + aluno[i].nota_3 + aluno[i].nota_4)/4;
		if(media[i] > *aux){
			*aux = media[i];
			ALUNO = i;
		}
	}
	printf("A maior media dentre os 30 alunos e a do aluno %d : %.1f pontos.\n", ALUNO , *aux);
	return 0;
}

