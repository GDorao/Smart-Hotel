#include "CTipoSensor.h"


CTipoSensor::CTipoSensor() {
	m_id_tipo_sensor = 0;
	m_description = "";
}

CTipoSensor::CTipoSensor(string description, int id_tipo_sensor) {
	m_id_tipo_sensor = id_tipo_sensor;
	m_description = description;
}

CTipoSensor::CTipoSensor(const CTipoSensor& tipo_sensor) {
	m_id_tipo_sensor = tipo_sensor.m_id_tipo_sensor;
	m_description = tipo_sensor.m_description;
}


//getters
string CTipoSensor::getDescription(void) {
	return m_description;
}

int CTipoSensor::getIdTipoSensor(void) {
	return m_id_tipo_sensor;
}