#include "CTipoActuador.h"


CTipoActuador::CTipoActuador() {
	m_id_tipo_actuador = 0;
	m_description = "";
}

CTipoActuador::CTipoActuador(string description, int id_tipo_actuador) {
	m_id_tipo_actuador = id_tipo_actuador;
	m_description = description;
}

CTipoActuador::CTipoActuador(const CTipoActuador& tipo_actuador) {
	m_id_tipo_actuador = tipo_actuador.m_id_tipo_actuador;
	m_description = tipo_actuador.m_description;
}


//getters
string CTipoActuador::getDescription(void) {
	return m_description;
}

int CTipoActuador::getIdTipoActuador(void) {
	return m_id_tipo_actuador;
}