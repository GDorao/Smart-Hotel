#include "CSensor.h"


CSensor::CSensor() {
	m_id_sensor=0;
	m_id_hotel=0;
	m_id_tipo_sensor=0;
	m_id_area=0;
}

CSensor::CSensor(int id_sensor, int id_hotel, int id_tipo_sensor, int id_area) {
	m_id_sensor = id_sensor;
	m_id_hotel = id_hotel;
	m_id_tipo_sensor = id_tipo_sensor;
	m_id_area = id_area;
}

CSensor::CSensor(const CSensor &sensor) {
	m_id_sensor = sensor.m_id_sensor;
	m_id_hotel = sensor.m_id_hotel;
	m_id_tipo_sensor = sensor.m_id_tipo_sensor;
	m_id_area = sensor.m_id_area;
}


//getters
int CSensor::getIdSensor(void) {
	return m_id_sensor;
}

int CSensor::getIdHotel(void) {
	return m_id_hotel;
}

int CSensor::getIdTipoSensor(void) {
	return m_id_tipo_sensor;
}

int CSensor::getIdArea(void) {
	return m_id_area;
}