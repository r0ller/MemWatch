#define MW_STDIO
#define MEMWATCH
#include "memwatch.h"
#include <string>
#define new mwNew
#define delete mwDelete
//MemWatch mw;

int main() {

	std::string *a=new std::string("test");
    delete a;
    int *p=new int[10];//???:Uninitialized pointer will point to FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE
}

