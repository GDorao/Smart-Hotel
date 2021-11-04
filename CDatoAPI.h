#pragma once

class CDatoAPI {
private:

	//Primary Key
	int m_id_dato_api;

	//Attributes
	int m_id_tipo_dato_api;//FK


public:
	CDatoAPI();
	CDatoAPI(int id_dato_api, int id_tipo_dato_api);
	CDatoAPI(const CDatoAPI& dato_api);
	//~CDatoAPI();


	//getters
	int getIdDatoAPI(void);
	int getIdTipoDatoAPI(void);

};

