#include "CSensor.h"


CSensor::CSensor() {
	m_id_tipo_medida = 0;
	m_description = "";
}

CSensor::CSensor(string description, int id_tipo_medida) {
	m_id_tipo_medida = id_tipo_medida;
	m_description = description;
}

CSensor::CSensor(const CSensor& tipo_medida) {
	m_id_tipo_medida = tipo_medida.m_id_tipo_medida;
	m_description = tipo_medida.m_description;
}


//getters
string CSensor::getDescription(void) {
	return m_description;
}

int CSensor::getIdTipoMedida(void) {
	return m_id_tipo_medida;
}