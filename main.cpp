#include <boost/lexical_cast.hpp>
#include <iostream>
#include <unordered_map>
#include <vector>


int main(int argc, char *argv[]) {
	std::string abc = "123456";
	int64_t num = boost::lexical_cast<int64_t>(abc);
	std::cout << "num=" << num << "\n";
}