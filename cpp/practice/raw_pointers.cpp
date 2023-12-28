#include <iostream>
#include <memory>

using namespace std;
class Device {
public:
    Device() { cout << "Device initialized\n"; }
    
    ~Device() { cout << "Device shut down\n"; }
};
    
void operateDevice(Device *dev) {
    cout << "Operating device\n";
}

int main() {
    // Refactor this part to use smart pointers
    unique_ptr<Device> device = make_unique<Device>();
    operateDevice(device.get());
    // Here I implemented smart pointer using unique_ptr<Type> name;
    // Now, there is no need to cleare memory allocated by the device.
    return 0;
}