  #include <iostream>
#include <string.h>

using namespace std;

  /*Criando a struct */
  struct dados_aluno
  {
    char nome[50];
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
  };

dados_aluno Aluno;

main()
{
   system("chcp 65001");// para usar acentos
  /*Criando a variável aluno que será do
  tipo struct dados_aluno */
 
  cout<<" \n---------- Cadastro de aluno -----------\n\n\n";
  cout<<"Nome do aluno ......: ";
  fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin) 
 
  gets(Aluno.nome);
  
  cout<<" \n Disciplina ......: ";
  fflush(stdin);
  gets(Aluno.disciplina);
  cout<<"\nInforme a 1a. nota ..: ";
  cin>>Aluno.nota_prova1;
  if (Aluno.nota_prova1 < 0) {
		cout<<("nota invalida \n");
		cin>>Aluno.nota_prova1;
	}
  cout<<"\nInforme a 2a. nota ..: ";
  cin>>Aluno.nota_prova2;
  if (Aluno.nota_prova2 < 0) {
		cout<<("nota invalida \n");
		cin>>Aluno.nota_prova2;
	}
  
    
  cout<<"\n\n --------- IMPRIMINDO os dados da struct ---------\n\n";
  cout<<"\n Nome ...........:";
  puts (Aluno.nome);
  cout<<"\n Disciplina .....: ";
  puts(Aluno.disciplina);
  cout<<"\n Nota da Prova 1 ...: " << Aluno.nota_prova1;
  cout<<"\n Nota da Prova 2 ...: " << Aluno.nota_prova2;
 
}
