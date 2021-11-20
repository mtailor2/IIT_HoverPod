
void asciiAsyncMessageReceived(void* userData, Packet& p, size_t index);
void asciiOrBinaryAsyncMessageReceived(void* userData, Packet& p, size_t index);
void connectToIMU(string SensorPort, uint32_t SensorBaudrate);
double getData();