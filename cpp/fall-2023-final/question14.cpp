#include <iostream>
#include <memory>

using namespace std;

class Device {
public:
    Device() { cout << "Device initialized\n"; }
    ~Device() { cout << "Device shut down\n"; }
};

void operateDevice(Device* dev) {
    cout << "Operating device\n";
}

int main() {
    // Refactored to use unique_ptr
    unique_ptr<Device> device = make_unique<Device>();
    operateDevice(device.get()); // You can still use get() to access the raw pointer if needed
    // No need to delete, smart pointers handle the memory automatically
    return 0;
}
