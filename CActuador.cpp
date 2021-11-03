#include "CActuador.h"


CActuador::CActuador() {
	m_id_actuador = 0;
	m_id_tipo_actuador = 0;
}

CActuador::CActuador(int id_actuador, int id_tipo_actuador) {
	m_id_actuador = id_actuador;
	m_id_tipo_actuador = id_tipo_actuador;
}

CActuador::CActuador(const CActuador& actuador) {
	m_id_actuador = actuador.m_id_tipo_actuador;
	m_id_tipo_actuador = actuador.m_id_tipo_actuador;
}


//getters
int CActuador::getIdActuador(void) {
	return m_id_actuador;
}

int CActuador::getIdTipoActuador(void) {
	return m_id_tipo_actuador;
}