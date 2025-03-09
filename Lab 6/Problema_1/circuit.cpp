#include "circuit.h"
#include "Weather.h"
#include "car.h"
#include <iostream>



circuit::circuit()
{
	this->cars = nullptr;
	this->numCars = 0;
	this->capacity = 0;
}

circuit::~circuit()
{
	for (int i = 0;i < this->numCars;i++)
		delete cars[i];

	delete[] cars;
}

void circuit::SetWeather(Weather weather) {
   
    switch (weather) {
    case Weather::Sunny:
        this->state = Sunny;
        std::cout << "Setting weather to Sunny.\n";
        break;
    case Weather::Snow:
        this->state = Snow;
        std::cout << "Setting weather to Cloudy.\n";
        break;
    case Weather::Rain:
        this->state = Rain;
        std::cout << "Setting weather to Rain.\n";
        break;
    default:
        std::cout << "Unknown weather.\n";
        break;
    }
}


void circuit::Race()
{
    switch (this->state)
    {
    case Weather::Sunny:
        break;
    case Weather::Rain:
        break;
    case Weather::Snow:
        break;
    default:
        std::cout << "Unknown Weather. \n";

    }
}

void circuit::ShowFinalRanks()
{

}


void circuit::ShowWhoDidNotFinish()
{

}

void circuit::SetLenght(int lenght)
{
    this->lenght = lenght;
}