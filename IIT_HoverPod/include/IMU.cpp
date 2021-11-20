#include "IMU.h"
#include <iostream>
#include "vnproglib/cpp/include/vn/sensors.h"
#include "vnproglib/cpp/include/vn/thread.h"

using namespace std;
using namespace vn::math;
using namespace vn::sensors;
using namespace vn::protocol::uart;
using namespace vn::xplat;

void connectToIMU(string SensorPort, uint32_t SensorBaudrate)
{
	std::cout << "REEEEEEEEEEEEEEEEEE";
	const string SensorPort = SensorPort;
	const uint32_t SensorBaudrate = SensorBaudrate;

	VnSensor vs;
	vs.connect(SensorPort, SensorBaudrate);

	cout << "Model Number: " << vs.readModelNumber() << endl;
}

double getData()
{
	return 0.0;
}
