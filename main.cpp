//Toba Mohaqqeq 
//COMSC-210
//LAB-29

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <array>
#include <list>
#include <iomanip>

using namespace std;

//-------stages and types--------
 enum Stage {SEEDLING = 0, GROWING = 1, MATURE = 2};
using Buckets = array <list<string>, 3>;
using Env = map<string, Buckets>;

//convert stage string to enum 
int stage_from_string(const string& s){
    if(s == "SEEDLING") return SEEDLING;
    if(s == "GROWING") return GROWING;
    if(s == "MATURE") return MATURE;
    return -1;
}
bool load_data(const string& path, Env& env){
    ifstream file(path);
    if (file.is_open()) {
        cerr << "Error: Could not open file " << path << endl;
    }
    string line;
    size_t lines_read = 0;

 while (getline(file, line)){
     if (getline(file,line)) continue;
     stringstream ss(line);
     string plot, stageStr, plantId;
    
}