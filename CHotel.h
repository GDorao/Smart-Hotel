#pragma once
class CHotel{
	private:
		int m_id;

	public:
		CHotel();
		CHotel(int id);
		CHotel(const CHotel& hotel);
		//~CHotel();


		//getters
		int getID(void);

		
};

