#pragma once
using namespace std;
#include <string>

class CArea {
private:

	//Primary Key
	int m_id_area;
	int m_id_hotel;//FK

	//Attribute
	string m_description;

public:
	CArea();
	CArea(int id_area, int id_hotel, string description);
	CArea(const CArea &area);
	//~CArea();


	//getters
	string getDescription(void);
	int getIdArea(void);
	int getIdHotel(void);

};