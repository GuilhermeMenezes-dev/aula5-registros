#include <stdio.h>

struct Aluno
{
    char nome[50];
    int idade;
    float nota; 
};

void imprimir(struct Aluno aluno){
    printf ("\nAluno: %s\nIdade: %d\nNota: %.2f", aluno.nome, aluno.idade, aluno.nota);
}

//acessar uma informação por meio de um ponteiro

void AlterarNota(struct Aluno *aluno, float novaNota){
    aluno->nota = novaNota;
}


int main(){

    struct Aluno Aluno1 = {"Guilherme", 18, 6};
    imprimir(Aluno1);

    printf("\nNota (antes): %.2f", Aluno1.nota);
    AlterarNota(&Aluno1, 9);
    printf("\nNota (depois): %.2f", Aluno1.nota);

    return 0;
}