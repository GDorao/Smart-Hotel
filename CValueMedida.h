#pragma once
#include <time.h>

class CValueMedida {
private:
	
	//Compound Primary Key
	int m_id_sensor;//FK
	int m_id_medida;//FK
	int m_id_hotel;//FK

	//Attributes
	time_t m_timestamp;
	float m_value;

public:
	CValueMedida();
	CValueMedida(time_t timestamp, float value, int id_sensor, int id_medida, int id_hotel);
	CValueMedida(const CValueMedida& value);
	//~CValueMedida();


	//getters
	float getValue(void);
	time_t getTimeStamp(void);
	int getIdSensor(void);
	int getIdMedida(void);
	int getIdHotel(void);
	
	//setters
	void setValue(float value);
};

