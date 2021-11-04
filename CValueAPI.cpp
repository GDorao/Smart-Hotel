#include "CValueAPI.h"


CValueAPI::CValueAPI() {
	m_timestamp = time(0);
	m_value = 0;
	m_id_dato_api = 0;
}

CValueAPI::CValueAPI(time_t timestamp, float value, int id_dato_api) {
	m_timestamp = timestamp;
	m_value = value;
	m_id_dato_api = id_dato_api;
}

CValueAPI::CValueAPI(const CValueAPI& value) {
	m_timestamp = value.m_timestamp;
	m_value = value.m_value;
	m_id_dato_api = value.m_id_dato_api;
}


//getters
float CValueAPI::getValue(void) {
	return m_value;
}


time_t CValueAPI::getTimeStamp(void) {
	return m_timestamp;
}


int CValueAPI::getIdDatoAPI(void) {
	return m_id_dato_api;
}


//setters
void CValueAPI::setValue(float value) {
	m_value = value;
}

