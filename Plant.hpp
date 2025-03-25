#ifndef _PLANT_HPP_
#define _PLANT_HPP_

#include<string_view>

enum Size;
class Plant
{
public:
private:
	std::string_view name;
	double growth;
	Size size;
};

#endif // !_PLANT_HPP_