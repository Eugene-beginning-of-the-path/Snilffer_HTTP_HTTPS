//#include <iostream>
//#include "stdlib.h"
//#include "PcapLiveDeviceList.h"
//#include "SystemUtils.h"

#include "parser.h"
#include "convertParam.h"

// std::string ParametrToStr(std::string str)
// {
// 	return str.substr(str.find_first_not_of('-', 0));
// }

// int ParametrToInt(std::string str)
// {
// 	return std::stoi(str.substr(str.find_first_not_of('-', 0)));
// }

/**
 * main method of the application
 */
int main(int argc, char* argv[])
{

	pars::Parser parser(conv::ParametrToStr(argv[2]),conv::ParametrToInt(argv[1]), conv::ParametrToStr(argv[3]));

	//pars::Parser parser("eth0", 15, "brief");

	parser.startSniff();

	return 0;
}