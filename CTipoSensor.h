#pragma once
using namespace std;
#include <string>

class CTipoSensor {
private:

	//Primary Key
	int m_id_tipo_sensor;

	//Attribute
	string m_description;

public:
	CTipoSensor();
	CTipoSensor(string description, int id_tipo_sensor);
	CTipoSensor(const CTipoSensor& tipo_sensor);
	//~CTipoSensor();


	//getters
	string getDescription(void);
	int getIdTipoSensor(void);

};