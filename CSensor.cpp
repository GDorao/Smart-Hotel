#include "CSensor.h"


CSensor::CSensor() {
	m_id_sensor = 0;
	m_id_tipo_sensor = 0;
}

CSensor::CSensor(int id_sensor, int id_tipo_sensor) {
	m_id_sensor = id_sensor;
	m_id_tipo_sensor = id_tipo_sensor;
}

CSensor::CSensor(const CSensor &sensor) {
	m_id_sensor = sensor.m_id_tipo_sensor;
	m_id_tipo_sensor = sensor.m_id_tipo_sensor;
}


//getters
int CSensor::getIdSensor(void) {
	return m_id_sensor;
}

int CSensor::getIdTipoSensor(void) {
	return m_id_tipo_sensor;
}