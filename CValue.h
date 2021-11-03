#pragma once
#include <time.h>

class CValue {
private:
	
	//Compound Primary Key
	int m_id_sensor;//FK
	int m_id_medida;//FK

	//Attributes
	time_t m_timestamp;
	float m_value;

public:
	CValue();
	CValue(time_t timestamp, float value, int id_sensor, int id_medida);
	CValue(const CValue& value);
	//~CValue();


	//getters
	float getValue(void);
	time_t getTimeStamp(void);
	int getIdSensor(void);
	int getTipoMedida(void);
	
	//setters
	void setValue(float value);
};

