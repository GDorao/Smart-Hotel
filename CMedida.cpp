#include "CMedida.h"


CMedida::CMedida() {
	m_id_medida = 0;
	m_id_sensor = 0;
	m_id_tipo_valor = 0;
	m_id_hotel = 0;
}

CMedida::CMedida(int id_medida, int id_sensor, int id_tipo_valor, int id_hotel) {
	m_id_medida = id_medida;
	m_id_sensor = id_sensor;
	m_id_tipo_valor = id_tipo_valor;
	m_id_hotel = id_hotel;
}

CMedida::CMedida(const CMedida &medida) {
	m_id_medida = medida.m_id_medida;
	m_id_sensor = medida.m_id_sensor;
	m_id_tipo_valor = medida.m_id_tipo_valor;
	m_id_hotel = medida.m_id_hotel;
}


//getters
int CMedida::getIdTipoValor(void) {
	return m_id_tipo_valor;
}


int CMedida::getIdMedida(void) {
	return m_id_medida;
}

int CMedida::getIdSensor(void) {
	return m_id_sensor;
}

int CMedida::getIdHotel(void) {
	return m_id_hotel;
}
