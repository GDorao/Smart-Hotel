#include "CValueConsigna.h"


CValueConsigna::CValueConsigna() {
	m_timestamp = time(0);
	m_value = 0;
	m_id_actuador = 0;
	m_id_consigna = 0;
}

CValueConsigna::CValueConsigna(time_t timestamp, float value, int id_actuador, int id_consigna) {
	m_timestamp = timestamp;
	m_value = value;
	m_id_actuador = id_actuador;
	m_id_consigna = id_consigna;
}

CValueConsigna::CValueConsigna(const CValueConsigna& value) {
	m_timestamp = value.m_timestamp;
	m_value = value.m_value;
	m_id_actuador = value.m_id_actuador;
	m_id_consigna = value.m_id_consigna;
}


//getters
float CValueConsigna::getValue(void) {
	return m_value;
}


time_t CValueConsigna::getTimeStamp(void) {
	return m_timestamp;
}


int CValueConsigna::getIdActuador(void) {
	return m_id_actuador;
}

int CValueConsigna::getTipoConsigna(void) {
	return m_id_consigna;
}


//setters
void CValueConsigna::setValue(float value) {
	m_value = value;
}

