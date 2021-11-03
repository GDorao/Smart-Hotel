#include "CArea.h"


CArea::CArea() {
	m_id_area=0;
	m_id_hotel=0;
	m_description="";
}

CArea::CArea(int id_area, int id_hotel, string description) {
	m_id_area = id_area;
	m_id_hotel = id_area;
	m_description = description;
}

CArea::CArea(const CArea &area) {
	m_id_area = area.m_id_area;
	m_id_hotel = area.m_id_area;
	m_description = area.m_description;
}


//getters
int CArea::getIdArea(void) {
	return m_id_area;
}

int CArea::getIdHotel(void) {
	return m_id_hotel;
}


string CArea::getDescription(void) {
	return m_description;
}