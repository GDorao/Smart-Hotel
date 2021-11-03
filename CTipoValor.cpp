#include "CTipoValor.h"


CTipoValor::CTipoValor() {
	m_id_tipo_valor = 0;
	m_description = "";
}

CTipoValor::CTipoValor(string description, int id_tipo_valor) {
	m_id_tipo_valor = id_tipo_valor;
	m_description = description;
}

CTipoValor::CTipoValor(const CTipoValor& tipo_valor) {
	m_id_tipo_valor = tipo_valor.m_id_tipo_valor;
	m_description = tipo_valor.m_description;
}


//getters
string CTipoValor::getDescription(void) {
	return m_description;
}

int CTipoValor::getIdTipoValor(void) {
	return m_id_tipo_valor;
}