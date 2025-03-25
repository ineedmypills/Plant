#ifndef _PLANT_HPP_
#define _PLANT_HPP_

#include<string_view>

enum Size;
class Plant
{
public:
	Plant(std::string_view name, double growth, Size size) : name(name), growth(growth), size(size) {};

	std::string_view GetName() { return name; }
	double GetGrowth() { return growth; }
	Size GetSize() { return size; }

private:
	std::string_view name;
	double growth;
	Size size;
};

#endif // !_PLANT_HPP_