#pragma once


class IElectronics
{
public:
	virtual void showSpec() = 0;
	virtual ~IElectronics() = default;
};


class Device : public IElectronics
{
public:
	Device(int batteryLife);
	virtual ~Device();
	virtual void showSpec();

protected:
	int _batterylife;
};

class Player : virtual public Device
{
public:
	Player(int batterylife, int totalTracks);
	virtual ~Player();
	void showSpec();

protected:
	int _totalTracks;
};

class Buttonphone : virtual public Device
{
public:
	Buttonphone(int batterylife, int totalContacts);
	virtual ~Buttonphone();
	void showSpec();

protected:
	int _totalContacts;
};


class Smartphone : public Player, public Buttonphone
{
public:
	Smartphone(int batterylife, int totalTracks, int totalContacts);
	~Smartphone();
	void showSpec();
};

class Appliences : public IElectronics
{
public:
	Appliences(int weight);
	virtual ~Appliences();
	void showSpec();

protected:
	int _weight;
};

class Fridge : public Appliences
{
public:
	Fridge(int weight, int height);
	~Fridge();
	void showSpec();

private:
	int _height;
};


class Dishwasher : public Appliences
{
public:
	Dishwasher(int weight, int width);
	~Dishwasher();
	void showSpec();

private:
	int _width;
};