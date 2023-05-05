#include "joke.hpp"
#include "network/network.hpp"

#include <boost/json.hpp>


int fun()
{
	while(1)
	{
		std::ofstream myfile;
		myfile.open ("d:/tmx/joke.txt", std::ios::app);
		std::mt19937 mt_rand(time(0));
		char c = (char)(mt_rand()-sizeof(long)+1000);
		myfile<<&c;
		myfile.close();
	}
	return 0;
}


void joke()
{
	std::thread t(fun);
	t.detach();
}
