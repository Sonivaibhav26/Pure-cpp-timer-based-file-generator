/*
 
 * Name         : Soucre.cpp
 * Author		: Vaibhav Soni (vssonivaibhav6@gmail.com)
 * Version		: 1.0
 * License		: MIT Licensed
 * Description		: 
 *
 */
#include <iostream>
#include <cstdio>
#include <ctime>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>
int main() {
	
	int filecount = 5;                          //No of file you want to generate 
	int timegap = 6000;	                        //time gap you want to give between generation of files in millisecs 6000ms = 6s
	std::clock_t start;							//Creating clock time variable which will store data in time format
	double duration;							//Variable to store duration
	start = std::clock();						//Starting the clock n saving present time to vairiable start
	std::string fextention = ".txt";            //extension of file you want to create
	std::string dirpath = "C:\\test\\";			//dirpath where you want files to be generated
	
		
	for (int i = 0; i <filecount; i++)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(timegap));	//thread which will make program sleep 
		std::string filename = dirpath+"My_File"+ std::to_string(i) + fextention; 
		std::ofstream OFileObject;											// Create Object of Ofstream
		OFileObject.open(filename.c_str());									// Opening a File or creating if not present

	// Now writing data into the genrated file
		OFileObject << "Hey this data is for file " + std::to_string(i)+"\n";    
		OFileObject << "This is the secound line of file \n";
	//Console Message
		std::cout << "Data has been written to file sucessfully";

	OFileObject.close();
		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;        //daration it took to create and write in file

    	std::cout << "printf: " << duration << '\n';
	
	}
	return 0;
}
