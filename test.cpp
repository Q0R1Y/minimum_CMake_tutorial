#include<iostream>
#include<test_lib.h>
#include<curl/curl.h>

int main()
{
	std::cout<<"Hello World\n";
	std::cout<<sum(1,2)<<"\n";
	const auto curl = curl_easy_init();
	return 0;
}
