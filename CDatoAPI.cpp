#include "CDatoAPI.h"


CDatoAPI::CDatoAPI() {
	m_id_dato_api = 0;
	m_id_tipo_dato_api = 0;
}

CDatoAPI::CDatoAPI(int id_dato_api, int id_tipo_dato_api) {
	m_id_dato_api = id_dato_api;
	m_id_tipo_dato_api = id_tipo_dato_api;
}

CDatoAPI::CDatoAPI(const CDatoAPI& dato_api) {
	m_id_dato_api = dato_api.m_id_dato_api;
	m_id_tipo_dato_api = dato_api.m_id_tipo_dato_api;
}


//getters
int CDatoAPI::getIdTipoDatoAPI(void) {
	return m_id_tipo_dato_api;
}


int CDatoAPI::getIdDatoAPI(void) {
	return m_id_dato_api;
}