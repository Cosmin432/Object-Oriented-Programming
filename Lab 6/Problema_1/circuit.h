#pragma once
#include "Weather.h"
#include "car.h"
class circuit
{
	private:
		int lenght;
		car** cars;
		int numCars;
		int capacity;
		Weather state;
    public:
		circuit();
		~circuit();



		void AddCar(car* brand);
		void SetLenght(int x);
		void SetWeather(Weather state);

		void Race();
		void ShowFinalRanks();
		void ShowWhoDidNotFinish();
};

