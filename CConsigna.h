#pragma once

class CConsigna {
private:

	//Primary Key
	int m_id_consigna;
	int m_id_actuador;//FK
	int m_id_hotel;//FK

	//Attributes
	int m_id_tipo_consigna;//FK


public:
	CConsigna();
	CConsigna(int id_consigna, int id_actuador, int id_tipo_consigna, int id_hotel);
	CConsigna(const CConsigna& consigna);
	//~CConsigna();


	//getters
	int getIdConsigna(void);
	int getIdSensor(void);
	int getIdTipoConsigna(void);
	int getIdHotel(void);

};

