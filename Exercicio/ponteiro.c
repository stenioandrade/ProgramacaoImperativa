#include<stdio.h>
#include<stdlib.h>
typedef struct{
   char nome[100];
   float notas[2];
} Aluno;

float media (Aluno aluno){
	return (aluno.notas[0]+aluno.notas[1])/2;
}
int main(){
  Aluno* turma;  
  Aluno* aux;
  int i;
  turma = (Aluno*) malloc(30*sizeof(Aluno));
  for (i=0; i<30; i++){
	  turma[i].notas[0] = rand()%11; 
	  turma[i].notas[1] = rand()%11;
	  printf("Notas do aluno %d: %.1f e %.1f\n", i,turma[i].notas[0], turma[i].notas[1]);  
	  }
  int i_maior = 0;
  for (i=1; i<30; i++){
	  if(media(turma[i])>media(turma[i_maior])) 
	     i_maior = i;
  }  
  aux = &turma[i_maior];
  printf("Maior posição: %d \n Notas: %f e %f\n",i_maior, (*aux).notas[0], (*aux).notas[1]);
  free(turma);
  turma = NULL;
  return 1;

}
