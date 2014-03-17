/*********************************************************************
* Nome Aluno: Giovani Henrique Laguna RA: 44334986889
* Nome Aluno: Felipe Souza RA:358.248.548-07
* Data: 18/03/2014
* Resumo do problema: o objetivo do programa ser um
* gerenciador simples da situação academica de alunos para
* o professor
*********************************************************************/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include<stdio.h>

using namespace std;

struct Materia {
   	float carga_horaria;
   	char desc[500]; // descrição da disciplina
   	char nome[100]; // nome da displina
  }materia;

  struct Aluno {
	char nome[100];
	char ra[12];
	int qtd_faltas;
	struct PROVAS{
			float mb1;
			float mb2;
			float media;
		}prova;
	}alunos[100];

char pausa[1];
int contador = 0;
//================================================================================
	void edt_disciplina();
	void edt_carga_horaria();
	void add_aluno();
	void edt_m1b_aluno();
	void edt_m2b_aluno();
	void cdt_qtd_faltas();

	void mst_todos_alunos();
	void mst_medias();
	void mst_maior_media();
	void mst_qtd_alunos_aprovados();
	void zero_alunos();


//================================================================================
int main(int argc, char** argv) {


		while(true){
		int opcao = 0;

		cout << "\n\n========================================================\n";
		cout << "\nO que voce gostaria de fazer?\n";
		cout << "\t(0) editar dados da disciplina\n";
		cout << "\t(1) editar carga horaria da discplina\n";
		cout << "\t(2) mostar todos alunos (nome)(ra)\n";
		cout << "\t(3) adicionar aluno\n";
		cout << "\t(4) inserir/editar media do pimeiro bimenstre de um aluno\n";
		cout << "\t(5) inserir/editar media do segundo bimenstre de um aluno\n";
		cout << "\t(6) mostar medias\n";
		cout << "\t(7) mostar a maior media da turma\n";
		cout << "\t(8) editar quantidade de faltas de um aluno\n";
		cout << "\t(9) mostrar quantidade de alunos aprovados\n";
		cout << "\t(10) finalizar o programa\n";

		cout << "\nDigite o numero da opcao:\n";
		cin >> opcao;
		gets(pausa);

		cout << "\n\n-----------------------------------------------\n";

		switch(opcao){
			case 0: edt_disciplina();
			break;
			case 1: edt_carga_horaria();
			break;
			case 2: mst_todos_alunos();
			break;
			case 3: add_aluno();
			break;
			case 4: edt_m1b_aluno();
			break;
			case 5: edt_m2b_aluno();
			break;
			case 6: mst_medias();
			break;
			case 7: mst_maior_media();
			break;
			case 8: cdt_qtd_faltas();
			break;
			case 9: mst_qtd_alunos_aprovados();
			break;
			case 10: exit(0);
			break;
			default: cout <<"\nOpcao invalida!";
			}
		}

	return 0;
}
//================================================================================
void edt_disciplina(){
	cout << "Digite o nome da disciplina:";
	gets(materia.nome);
	cout << "\nDigite a descricao da disciplina:";
	gets(materia.nome);
	gets(pausa);
}
void edt_carga_horaria(){
	cout << "Digite a carga horaria:";
	cin >> materia.carga_horaria;
	gets(pausa);
}
void add_aluno(){
	cout << "Insira o nome:";
	gets(alunos[contador].nome);
	cout << "\nInsira o ra:";
	gets(alunos[contador].ra);
	contador++;
	gets(pausa);
}
void edt_m1b_aluno(){
	char ra[12];
	cout << "Insira o ra do aluno:";
	gets(ra);
	for(int i=0; i<contador; i++){
		if(!(strcmp(alunos[i].ra,ra))){
			cout << "insira a nota [mb1]]: ";
			cin >> alunos[i].prova.mb1;
		}else if(i==(contador-1)){
			cout << "aluno nao encontrado";}
	}
	zero_alunos();
	gets(pausa);
}
void edt_m2b_aluno(){
	char ra[12];
	cout << "Insira o ra do aluno:";
	gets(ra);
	for(int i=0; i<contador; i++){
		if(!(strcmp(alunos[i].ra,ra))){
			cout << "insira a nota [mb2]]: ";
			cin >> alunos[i].prova.mb2;
		}else if(i==(contador-1)){
			cout << "aluno nao encontrado";}
	}
	zero_alunos();
	gets(pausa);
}
void cdt_qtd_faltas(){
	char ra[12];
	cout << "Insira o ra do aluno:";
	gets(ra);
	for(int i=0; i<contador; i++){
		if(strcmp(alunos[i].ra,ra) == 0){
			cout << "insira a quantidade de faltas: ";
			cin >> alunos[i].qtd_faltas;
		}else if(i==(contador-1)){
			cout << "aluno nao encontrado";}
		}
	zero_alunos();
	gets(pausa);
}

//--------------------------------------------------------
void mst_todos_alunos(){
	for(int i=0; i<contador; i++){
		cout << "nome: " << alunos[i].nome << "\tra:" << alunos[i].ra << endl;
	}
	zero_alunos();
	}
void mst_medias(){
	for(int i=0;i<contador;i++){
		alunos[i].prova.media = alunos[i].prova.mb1*0.4+alunos[i].prova.mb2*0.6;
	}
	for(int i=0; i<contador; i++){
		cout << "Nome: " << alunos[i].nome << "\tmb1: " << alunos[i].prova.mb1 << "\tmb2: " << alunos[i].prova.mb2 << "\tmedia final: "<< alunos[i].prova.media <<endl;
		}
	zero_alunos();
	gets(pausa);
}
void mst_maior_media(){
	char nome[100];
	float maior=-1;
	for(int i=0;i<contador;i++){
		alunos[i].prova.media = alunos[i].prova.mb1*0.4+alunos[i].prova.mb2*0.6;
	}
	cout <<"oi";
	for(int i=0;i<contador;i++){
		if(alunos[i].prova.media > maior){
			strcpy(nome,alunos[i].nome);
			cout<<"oii";
			maior = alunos[i].prova.media;
			cout << maior;
		}
	}
	if(!(maior == -1)){
		cout << nome << " possui a maior nota [" << maior << "]";
	}
	zero_alunos();
	}
void mst_qtd_alunos_aprovados(){
	int x=0; // x é a quantidade de alunos aprovados
	for(int i=0;i<contador;i++){
		alunos[i].prova.media = alunos[i].prova.mb1*0.4+alunos[i].prova.mb2*0.6;}
	for(int i=0;i<contador;i++){
		if(alunos[i].prova.media >= 5 && (materia.carga_horaria-alunos[i].qtd_faltas)/materia.carga_horaria >= 0.75){
			x++;
		}
	}
	if(x){
		cout << "Quantidade de alunos aprovados: " << x;
	}else{
		cout << "nenhum aluno aprovado ou nenhum aluno cadastrado";
	}

}
void zero_alunos(){
	if(contador == 0) cout << "nao ha alunos cadastrados";
}
