#pragma once
class CHotel{
	private:
		int m_id_hotel;

	public:
		CHotel();
		CHotel(int id_hotel);
		CHotel(const CHotel &hotel);
		//~CHotel();


		//getters
		int getIdHotel(void);

		
};

