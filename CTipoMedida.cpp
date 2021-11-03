#include "CTipoMedida.h"


CTipoMedida::CTipoMedida() {
	m_id_tipo_medida = 0;
	m_description = "";
}

CTipoMedida::CTipoMedida(string description, int id_tipo_medida) {
	m_id_tipo_medida = id_tipo_medida;
	m_description = description;
}

CTipoMedida::CTipoMedida(const CTipoMedida& tipo_medida) {
	m_id_tipo_medida = tipo_medida.m_id_tipo_medida;
	m_description = tipo_medida.m_description;
}


//getters
string CTipoMedida::getDescription(void) {
	return m_description;
}

int CTipoMedida::getIdTipoMedida(void) {
	return m_id_tipo_medida;
}