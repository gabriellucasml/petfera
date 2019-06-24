#ifndef ANFIBIO_H
#define ANFIBIO_H

class Anfibio: protected Animal{
private:
	int total_mudas;
	string ultima_muda;
public:
	Anfibio();
	void setTotal_mudas(int total_mudas);
	int getTotal_mudas();
	void setUltima_muda(string ultima_muda);
	string getUltima_muda();
	void consultar();
	~Anfibio();
};

#endif
