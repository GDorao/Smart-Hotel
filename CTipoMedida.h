#pragma once
using namespace std;
#include <string>

class CTipoMedida {
private:

	//Primary Key
	int m_id_tipo_medida;

	//Attribute
	string m_description;

public:
	CTipoMedida();
	CTipoMedida(string description, int id_tipo_medida);
	CTipoMedida(const CTipoMedida &tipo_medida);
	//~CTipoMedida();


	//getters
	string getDescription(void);
	int getIdTipoMedida(void);

};