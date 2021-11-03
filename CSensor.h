#pragma once


class CSensor {
private:

	//Primary Key
	int m_id_sensor;

	//Attribute
	int m_id_tipo_sensor;//FK

public:
	CSensor();
	CSensor(int id_sensor, int id_tipo_sensor);
	CSensor(const CSensor &sensor);
	//~CSensor();


	//getters

	int getIdSensor(void);
	int getIdTipoSensor(void);

};