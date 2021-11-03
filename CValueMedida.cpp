#include "CValueMedida.h"


CValueMedida::CValueMedida() {
	m_timestamp = time(0);
	m_value = 0;
	m_id_sensor = 0;
	m_id_medida = 0;
}

CValueMedida::CValueMedida(time_t timestamp, float value, int id_sensor, int id_medida) {
	m_timestamp = timestamp;
	m_value = value;
	m_id_sensor = id_sensor;
	m_id_medida = id_medida;
}

CValueMedida::CValueMedida(const CValueMedida &value) {
	m_timestamp = value.m_timestamp;
	m_value = value.m_value;
	m_id_sensor = value.m_id_sensor;
	m_id_medida = value.m_id_medida;
}


//getters
float CValueMedida::getValue(void) {
	return m_value;
}


time_t CValueMedida::getTimeStamp(void) {
	return m_timestamp;
}


int CValueMedida::getIdSensor(void) {
	return m_id_sensor;
}

int CValueMedida::getTipoMedida(void) {
	return m_id_medida;
}


//setters
void CValueMedida::setValue(float value) {
	m_value=value;
}

