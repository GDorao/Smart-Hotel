#pragma once


class CActuador {
private:

	//Primary Key
	int m_id_actuador;
	int m_id_hotel;//FK

	//Attribute
	int m_id_tipo_actuador;//FK
	int m_id_area;//FK

public:
	CActuador();
	CActuador(int id_actuador, int id_tipo_actuador, int id_hotel, int id_area);
	CActuador(const CActuador& actuador);
	//~CActuador();


	//getters

	int getIdActuador(void);
	int getIdTipoActuador(void);
	int getIdHotel(void);
	int getIdArea(void);

};