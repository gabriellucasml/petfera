#include "anfibio.h"
#include "animal.h"
#include "veterinario.h"
#include "tratador.h"
#include <iostream>

using namespace std;

Anfibio::Anfibio(){

};

void Anfibio::setTotal_mudas(int total_mudas){
	this->total_mudas = total_mudas;
};

int Anfibio::getTotal_mudas(){
	return this->total_mudas;
};

void Anfibio::consultar(){
	cout << "Id: " << this->id << endl;
	cout << "Classe: " << this->classe << endl;
	cout << "Nome científico: " << this->nome_cientifico << endl;
	//precisa terminar de implementar e incluir em todas as outras classes.
}

string Anfibio::getUltima_muda(){
	return this->ultima_muda
}

void Anfibio::setUltima_muda(string ultima_muda){
	this->ultima_muda = ultima_muda;
}

Anfibio::~Anfibio(){
};
