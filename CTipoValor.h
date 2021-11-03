#pragma once
using namespace std;
#include <string>

class CTipoValor {
private:

	//Primary Key
	int m_id_tipo_valor;

	//Attribute
	string m_description;

public:
	CTipoValor();
	CTipoValor(string description, int id_tipo_valor);
	CTipoValor(const CTipoValor &tipo_valor);
	//~CTipoValor();


	//getters
	string getDescription(void);
	int getIdTipoValor(void);

};