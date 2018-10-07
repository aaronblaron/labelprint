#include <iostream>
#include "ZebraHandler.h"

ZebraHandler::ZebraHandler()
	:name("unset"), path("unset")
{} 

/*ZebraHandler::ZebraHandler(std::string n, std::string p)
	:name(n), path(p)
{} */

void ZebraHandler::print(std::string path)
{
	std::cout<<"hello!"<<std::endl;
}

/*void ZebraHandler::print(std::pair <std::vector<std::string> lineOne,
		std::vector<std::string> lineTwo,
		std::string labelType)
{
	int i = 2;

	if(labelType == "video")
		i = 4;

	while(i > 0) {
		for(std::vector<T>::iterator it = lineOne.begin(); it != lineOne.end(); ++it)
			std::cout<<*it<<" ";

		std::cout<<std::endl;

		for(std::vector<T>::iterator it = lineTwo.begin(); it != lineTwo.end(); ++it)
			std::cout<<*it<<" ";

		--i;
	}
}
*/
