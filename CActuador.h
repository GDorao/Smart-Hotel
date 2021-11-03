#pragma once


class CActuador {
private:

	//Primary Key
	int m_id_actuador;

	//Attribute
	int m_id_tipo_actuador;//FK

public:
	CActuador();
	CActuador(int id_actuador, int id_tipo_actuador);
	CActuador(const CActuador& actuador);
	//~CActuador();


	//getters

	int getIdActuador(void);
	int getIdTipoActuador(void);

};