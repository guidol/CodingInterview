#include <string>
#include <iostream>
#include <vector>
using namespace std;
class LongestConsec
{
public:
    std::string longestConsec(std::vector<std::string> &strarr, int k);
    std::string longest = "";
    std::string index = "";
};

std::string LongestConsec::longestConsec(std::vector<std::string> &strarr, int k)
{ 
//   for(auto itr = strarr.begin(); itr != strarr.end(); ++itr)
//     {
//        if((*(itr)).length() > longest.length())
//         {
//             longest = *(itr);
//           //cout<< longest <<endl;
//          index = *(itr + k - 1);zone
//          if (longest == index )
//             index = "";
//          cout <<"index is :" << index <<endl;
//         } 
//     }
    // 
    auto itr2 = find(strarr.begin(), strarr.end(), zone);
    cout << itr2 <<endl;
    
}


int main(){
    std::vector<std::string> arr = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
    //std::vector<std::string> arr = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
    LongestConsec test;
    std::cout<< test.longestConsec(arr,1) <<std::endl;
}