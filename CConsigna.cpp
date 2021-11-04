#include "CConsigna.h"


CConsigna::CConsigna() {
	m_id_consigna = 0;
	m_id_actuador = 0;
	m_id_tipo_consigna = 0;
	m_id_hotel = 0;
}

CConsigna::CConsigna(int id_consigna, int id_actuador, int id_tipo_consigna, int id_hotel) {
	m_id_consigna = id_consigna;
	m_id_actuador = id_actuador;
	m_id_tipo_consigna = id_tipo_consigna;
	m_id_hotel = id_hotel;
}

CConsigna::CConsigna(const CConsigna& consigna) {
	m_id_consigna = consigna.m_id_consigna;
	m_id_actuador = consigna.m_id_actuador;
	m_id_tipo_consigna = consigna.m_id_tipo_consigna;
	m_id_hotel = consigna.m_id_hotel;
}


//getters
int CConsigna::getIdTipoConsigna(void) {
	return m_id_tipo_consigna;
}


int CConsigna::getIdConsigna(void) {
	return m_id_consigna;
}

int CConsigna::getIdSensor(void) {
	return m_id_actuador;
}

int CConsigna::getIdHotel(void) {
	return m_id_hotel;
}
