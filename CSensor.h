#pragma once


class CSensor {
private:

	//Primary Key
	int m_id_sensor;
	int m_id_hotel; //FK

	//Attribute
	int m_id_tipo_sensor;//FK
	int m_id_area;//FK

public:
	CSensor();
	CSensor(int id_sensor, int id_hotel, int id_tipo_sensor, int id_area);
	CSensor(const CSensor &sensor);
	//~CSensor();


	//getters

	int getIdSensor(void);
	int getIdHotel(void);
	int getIdTipoSensor(void);
	int getIdArea(void);

};