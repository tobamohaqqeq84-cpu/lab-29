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
 enum Stage {SEEDIN = 0, GROWING = 1, MATURE = 2};
using Buckets = array <list<string>, 3>;
using Env = map<string, Buckets>;

//convert stage string to enum 
int stage_from_string(const string& s){
    
}