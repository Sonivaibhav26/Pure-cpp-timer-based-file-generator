#include <iostream>
#include <cstdio>
#include <ctime>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>
int main() {
	std::clock_t start;
	int count = 0;
	double duration;
	start = std::clock();
	for (int i = 0; i < 25; i++)
	{
	std::this_thread::sleep_for(std::chrono::milliseconds(6000));
	std::string txt = ".csv";
	std::string filename = "C:\\test\\6a898dbf-9c09-4ff5-b0eb-fdbd928f2ba7_File"+ std::to_string(count) +txt;
	std::ofstream OFileObject;  // Create Object of Ofstream
	OFileObject.open(filename.c_str()); // Opening a File or creating if not present
	OFileObject << "Temp:1"+ std::to_string(count)+",Pre:2"+std::to_string(i)+ ",Profit:3" + std::to_string(i) + ",Loss:4" + std::to_string(i); // Writing data to file 
	std::cout << "Data has been written to file";
	count++;
	OFileObject.close();
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
    std::cout << "printf: " << duration << '\n';
	}
}
