#pragma once


class CSensor {
private:

	//Primary Key
	int id_sensor;

	//Attribute
	

public:
	CSensor();
	CSensor(int id_sensor);
	CSensor(const CSensor& sensor);
	//~CSensor();


	//getters

	int getIdSensor(void);

};