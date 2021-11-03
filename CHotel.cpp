#include "CHotel.h"


CHotel::CHotel() {
	m_id = 0;
}

CHotel::CHotel(int id) {
	m_id = id;
}

CHotel::CHotel(const CHotel &hotel) {
	m_id = hotel.m_id;
}


int CHotel::getID(void) {
	return m_id;
}
