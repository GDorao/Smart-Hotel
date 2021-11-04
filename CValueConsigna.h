#pragma once
#include <time.h>

class CValueConsigna {
private:

	//Compound Primary Key
	int m_id_actuador;//FK
	int m_id_consigna;//FK

	//Attributes
	time_t m_timestamp;
	float m_value;

public:
	CValueConsigna();
	CValueConsigna(time_t timestamp, float value, int id_actuador, int id_consigna);
	CValueConsigna(const CValueConsigna& value);
	//~CValueConsigna();


	//getters
	float getValue(void);
	time_t getTimeStamp(void);
	int getIdActuador(void);
	int getIdConsigna(void);

	//setters
	void setValue(float value);
};

