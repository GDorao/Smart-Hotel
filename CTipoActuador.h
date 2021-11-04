#pragma once
using namespace std;
#include <string>

class CTipoActuador {
private:

	//Primary Key
	int m_id_tipo_actuador;

	//Attribute
	string m_description;

public:
	CTipoActuador();
	CTipoActuador(string description, int id_tipo_actuador);
	CTipoActuador(const CTipoActuador& tipo_actuador);
	//~CTipoActuador();


	//getters
	string getDescription(void);
	int getIdTipoActuador(void);

};