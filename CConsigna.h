#pragma once

class CConsigna {
private:

	//Primary Key
	int m_id_consigna;
	int m_id_actuador;//FK

	//Attributes
	int m_id_tipo_consigna;//FK


public:
	CConsigna();
	CConsigna(int id_consigna, int id_actuador, int id_tipo_consigna);
	CConsigna(const CConsigna& consigna);
	//~CConsigna();


	//getters
	int getIdConsigna(void);
	int getIdSensor(void);
	int getIdTipoConsigna(void);

};

