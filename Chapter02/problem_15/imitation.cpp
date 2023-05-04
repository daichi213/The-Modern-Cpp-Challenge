#include <iostream>

class ipv4
{
    std::array<unsigned char, 4> data;
public:
    constexpr ipv4() : data{{0}} {}
    constexpr ipv4(const)
}