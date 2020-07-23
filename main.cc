#include <iostream>

int main()
{
	std::string input, output;
	input.resize(1000);
	output.resize(1000);
	printf("Input text: ");
	std::cin.getline(input.data(), input.size()); //because streaming from cin would be too easy and intuitive, noooo, we can't have spaces, that would break things [/s]
	size_t lettercount = 0;
	for(size_t i = 0; i < input.size(); i++)
	{
		if(lettercount % 2 == 0 && input[i] > 96 && input[i] < 123) output[i] = input[i] - 32;
		else output[i] = input[i];
		if(input[i] != 32) lettercount++;
	}
	printf("%s\n", output.data());
	std::cin.get();
	return 0;
}
