#pragma once

class CMedida {
private:

	//Primary Key
	int m_id_medida;
	int m_id_sensor;//FK

	//Attributes
	int m_id_tipo_medida;//FK


public:
	CMedida();
	CMedida(int id_medida, int id_sensor, int id_tipo_medida);
	CMedida(const CMedida &medida);
	//~CMedida();


	//getters
	int getIdMedida(void);
	int getIdSensor(void);
	int getIdTipoMedida(void);

};

