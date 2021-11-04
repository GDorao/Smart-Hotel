#include "CActuador.h"


CActuador::CActuador() {
	m_id_actuador = 0;
	m_id_tipo_actuador = 0;
	m_id_hotel = 0;
	m_id_area = 0;
}

CActuador::CActuador(int id_actuador, int id_tipo_actuador, int id_hotel, int id_area) {
	m_id_actuador = id_actuador;
	m_id_tipo_actuador = id_tipo_actuador;
	m_id_hotel = id_hotel;
	m_id_area = id_area;
}

CActuador::CActuador(const CActuador& actuador) {
	m_id_actuador = actuador.m_id_tipo_actuador;
	m_id_tipo_actuador = actuador.m_id_tipo_actuador;
	m_id_hotel = actuador.m_id_hotel;
	m_id_area = actuador.m_id_area;
}


//getters
int CActuador::getIdActuador(void) {
	return m_id_actuador;
}

int CActuador::getIdTipoActuador(void) {
	return m_id_tipo_actuador;
}

int CActuador::getIdHotel(void) {
	return m_id_hotel;
}

int CActuador::getIdTipoActuador(void) {
	return m_id_area;
}