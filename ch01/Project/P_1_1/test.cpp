#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <set>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::set;


char findTypoChar(string origStr)
{
    string choosen = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t len = choosen.size();
    while(true){
        int index = std::rand() % len;
        char temp = choosen[index];
        if(std::find(std::begin(origStr), std::end(origStr), temp) == std::end(origStr)){
            return temp;
        }
    }
}

int main()
{
    const string sentence = "I will always use obejct-oriented design";
    size_t len = sentence.size();
    //cout << "sentence len: " << len << endl;
    std::srand(std::time(0));
    set<int> randomIndexs;
    while(true){
        int randomIndex = std::rand() % len;
        randomIndexs.insert(randomIndex);
        if(randomIndexs.size() == 8){
            break;
        }
    }
    
    int count = 100;
    for(int i = 0; i < count; ++i){
        string temStr = sentence;
        if(std::find(std::begin(randomIndexs), std::end(randomIndexs), i) != std::end(randomIndexs)){
            cout << i+1 << endl;
            temStr[i] = findTypoChar(temStr);
        }
        cout << i+1 << " : " << temStr << endl;
    }
    
    return 0;
}

