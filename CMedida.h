#pragma once

class CMedida {
private:

	//Primary Key
	int m_id_medida;
	int m_id_sensor;//FK
	int m_id_hotel;//FK

	//Attributes
	int m_id_tipo_valor;//FK


public:
	CMedida();
	CMedida(int id_medida, int id_sensor, int id_tipo_valor, int id_hotel);
	CMedida(const CMedida &medida);
	//~CMedida();


	//getters
	int getIdMedida(void);
	int getIdSensor(void);
	int getIdTipoValor(void);
	int getIdHotel(void);

};

