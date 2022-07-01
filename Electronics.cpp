#include <iostream>
#include "Electronics.h"
using namespace std;



	Device::Device(int batteryLife) : _batterylife(batteryLife)
	{
	}

	Device::~Device()
	{
		cout << "Device destroyed" << endl;
	}

	void Device:: showSpec()
	{
		cout << "Device battery life:" << _batterylife << endl;
	}



	Player::Player(int batterylife, int totalTracks) : Device(batterylife), _totalTracks(totalTracks)
	{
	}

	Player::~Player()
	{
		cout << "Player destroyed" << endl;
	}


	void Player::showSpec()
	{
		cout << "Player battery life:" << _batterylife << endl
			<< "Total music tracks:" << _totalTracks << endl;
	}



	Buttonphone::Buttonphone(int batterylife, int totalContacts) : Device(batterylife), _totalContacts(totalContacts)
	{
	}

	Buttonphone::~Buttonphone()
	{
		cout << "Buttonphone destroyed" << endl;
	}

	void Buttonphone:: showSpec()
	{
		cout << "Buttonphone battery life:" << _batterylife << endl
			<< "Total phone contacts:" << _totalContacts << endl;
	}


	Smartphone::Smartphone(int batterylife, int totalTracks, int totalContacts) : Player(batterylife, totalTracks), Buttonphone(batterylife, totalContacts), Device(batterylife)
	{
	}

	Smartphone::~Smartphone()
	{
		cout << "Smartphone destroyed" << endl;
	}

	void Smartphone::showSpec()
	{

		cout << "Smartphone battery life:" << _batterylife << endl
			<< "Total music tracks:" << _totalTracks << endl
			<< "Total phone contacts:" << _totalContacts << endl;
	}


	Appliences::Appliences(int weight) : _weight(weight)
	{
	}

	Appliences::~Appliences()
	{
		cout << "Appliences destroyed" << endl;
	}

	void Appliences:: showSpec()
	{
		cout << "Appliences weight is:" << _weight << endl;
	}



	Fridge::Fridge(int weight, int height) : Appliences(weight), _height(height)
	{
	}

	Fridge::~Fridge()
	{
		cout << "Fridge destroyed" << endl;
	}

	void Fridge::showSpec()
	{
		cout << "Fridge weight is:" << _weight << endl
			<< "Fridge height is: " << _height << endl;
	}




	Dishwasher::Dishwasher(int weight, int width) : Appliences(weight), _width(width)
	{
	}

	Dishwasher::~Dishwasher()
	{
		cout << "Dishwasher destroyed" << endl;
	}

	void Dishwasher::showSpec()
	{
		cout << "Dishwasher weight is:" << _weight << endl
			<< "Dishwasher width is: " << _width << endl;
	}

