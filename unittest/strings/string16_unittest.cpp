#include <iostream>
#include "../../base/strings/string16.h"

class String16Unittest{
public:
    void CreateString16(){
        base::string16 str(L"单元测试");
        std::wcout.imbue(std::locale(""));
        std::wcout<<str[0]<<str[1]<<str[2]<<str[3]<<std::endl;
    }
};


int main(){
    String16Unittest string16Unittest;
    string16Unittest.CreateString16();
}