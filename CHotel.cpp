#include "CHotel.h"


CHotel::CHotel() {
	m_id_hotel = 0;
}

CHotel::CHotel(int id_hotel) {
	m_id_hotel = id_hotel;
}

CHotel::CHotel(const CHotel& hotel) {
	m_id_hotel = hotel.m_id_hotel;
}


int CHotel::getIdHotel(void) {
	return m_id_hotel;
}
