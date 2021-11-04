#pragma once
#include <time.h>

class CValueAPI {
private:

	//Compound Primary Key
	int m_id_dato_api;//FK

	//Attributes
	time_t m_timestamp;
	float m_value;

public:
	CValueAPI();
	CValueAPI(time_t timestamp, float value, int id_dato_api);
	CValueAPI(const CValueAPI& value);
	//~CValueAPI();


	//getters
	float getValue(void);
	time_t getTimeStamp(void);
	int getIdDatoAPI(void);

	//setters
	void setValue(float value);
};

