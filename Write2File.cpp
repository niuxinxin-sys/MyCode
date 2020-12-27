#include <iostream>
#include <fstream>
using namesace std;
int Write2File(string& filePath, string& fileInfo)
{
    fstream ocout;
    ocout.open(filePath, ios::app | ios::out);
    ocout << fileInfo << "\n";
    
    return 0;
}

int main()
{
    strPath = "./myfile.txt";
    strInfo = "{aqwsedrftgyhjkl;dcfvgbhnjmfgvbh}";
    return 0;
}
