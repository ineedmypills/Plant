#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> vec = { 1,2,3,4,5,6 };
	std::vector<int> newVec = { 6,7,8,9 };

	auto it = vec.begin();
	std::advance(it, 3);
	std::cout << *it << "\n\n";
	
	auto dist = std::distance(vec.begin(), it);
	std::cout << dist << "\n\n";

	std::copy(newVec.begin(), newVec.end(), std::inserter(vec, vec.begin() + 3));
	for (auto val : vec)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;



	return 0;
}