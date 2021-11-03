#include "CValue.h"


CValue::CValue() {
	m_timestamp = time(0);
	m_value = 0;
	m_id_sensor = 0;
	m_id_medida = 0;
}

CValue::CValue(time_t timestamp, float value, int id_sensor, int id_medida) {
	m_timestamp = timestamp;
	m_value = value;
	m_id_sensor = id_sensor;
	m_id_medida = id_medida;
}

CValue::CValue(const CValue &value) {
	m_timestamp = value.m_timestamp;
	m_value = value.m_value;
	m_id_sensor = value.m_id_sensor;
	m_id_medida = value.m_id_medida;
}


//getters
float CValue::getValue(void) {
	return m_value;
}


time_t CValue::getTimeStamp(void) {
	return m_timestamp;
}


int CValue::getIdSensor(void) {
	return m_id_sensor;
}

int CValue::getTipoMedida(void) {
	return m_id_medida;
}


//setters
void CValue::setValue(float value) {
	m_value=value;
}

