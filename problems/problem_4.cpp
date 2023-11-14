#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

    unsigned firstOctet = std::stoul(macAddress.substr(0, 2), nullptr, 16);

    if (firstOctet == 255) {
        return "Broadcast";
    } else if (firstOctet % 2 == 0) {
        return "Unicast";
    } else {
        return "Multicast";
    }

    // make use of control flow statements
    // return result;
}
