#pragma once
#include "chofer.h"
#include "ruta.h"

class Bus {
private:
	string placa;
	Chofer* choferBus;    //Hola git
	Ruta* rutaBus;
public:
	Bus(string plac = "", Chofer* driver = NULL, Ruta* rute = NULL);
	virtual ~Bus();
	string getPlaca();
	Chofer* getChofer();
	Ruta* getRuta();
	void setPlaca(string plac);
	void setChofer(Chofer* driver);
	void setRuta(Ruta* rute);
	string toString();
};
