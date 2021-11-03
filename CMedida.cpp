#include "CMedida.h"


CMedida::CMedida() {
	m_id_medida = 0;
	m_id_sensor = 0;
	m_id_tipo_medida = 0;
}

CMedida::CMedida(int id_medida, int id_sensor, int id_tipo_medida) {
	m_id_medida = id_medida;
	m_id_sensor = id_sensor;
	m_id_tipo_medida = id_tipo_medida;
}

CMedida::CMedida(const CMedida &medida) {
	m_id_medida = medida.m_id_medida;
	m_id_sensor = medida.m_id_sensor;
	m_id_tipo_medida = medida.m_id_tipo_medida;
}


//getters
int CMedida::getIdTipoMedida(void) {
	return m_id_tipo_medida;
}


int CMedida::getIdMedida(void) {
	return m_id_medida;
}

int CMedida::getIdSensor(void) {
	return m_id_sensor;
}
