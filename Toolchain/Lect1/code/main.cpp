#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main() {

    std::ofstream output_file("testing spaces.txt");
    output_file << " 1" << " 222 222     " << " 7 a 7   7" << "999" << std::endl;
    output_file << " 4" << " 5687     " << std::endl;

    std::ifstream input_file("testing spaces.txt");
    std::vector<int> test{std::istream_iterator<int>(input_file), std::istream_iterator<int>()};

	std::cout << "hello ! \n";
	return 0;
}
