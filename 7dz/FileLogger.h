#pragma once
#include <string>
#include <iostream>
#include <fstream>

class FileLogger
{
public:
	FileLogger(const std::string& FN);
	~FileLogger();
	void WriteToLog(const std::string& str);
	void WriteToLog(const std::string& str, int n);
	void WriteToLog(const std::string& str, double d);
	std::string GetCurDateTime();
private:
	std::ofstream logOut;
};