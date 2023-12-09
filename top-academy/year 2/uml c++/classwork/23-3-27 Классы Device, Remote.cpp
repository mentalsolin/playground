#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Device {
private:
	bool status;
	int channel;
	int volume;
public:
	Device() {}
	virtual bool isEnabled() {
		return status;
	};
	int enable() {
		return status = true;
	};
	int disable() {
		return this->status = false;
	};
	int getVolume() {
		return this->volume;
	};
	int setVolume(int num, bool a) {
		if (a == true) {
			if ((volume + num) < 100) {
				volume += num;
			}
		}
		else {
			if ((volume - num) > 100) {
				volume -= num;
			}
		}
	};
	int getChannel() {
		return channel;
	};
	int setChannel(int num, bool a) {
		if (a == true) {
			if ((channel + num) < 100) {
				channel += num;
			}
		}
		else {
			if ((channel - num) > 100) {
				channel -= num;
			}
		}
	};
};

class Remote {
private:
	Device device;
public:
	virtual void togglePower() {
		if (device.isEnabled() == false) {
			device.enable();
		}
		else {
			device.disable();
		}
	}
	virtual void volumeUp() {
		device.setVolume(5, true);
	};
	virtual void volumeDown() {
		device.setVolume(5, false);
	};
	virtual void channelUp() {
		device.setVolume(1, true);
	};
	virtual void channelDown() {
		device.setVolume(1, false);
	}
};

class AdvancedRemote : public Remote {
public:
	void mute() {
		
	}
};

class TV: public Device {
private:
	int maxChannels = 50;
	int channel = 1;
	int maxVolume = 100;
	int volume = 1;
public:
	
};

int main()
{

}