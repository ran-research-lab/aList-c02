#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() 
#include "List.h"
#include "AList.h"
#include <vector>

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
        printf("Assertion (%s) failed %s at line %d \n", #chk, __FILE__,__LINE__); \
    else { \
        printf("Passed line %d \n", __LINE__); \
        passedAssertions++; \
    }
#define assertionReport() \
     printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions);
//*******************************************************


using namespace std;


int highestFrequency( const vector<int> &v ) {
    return 0;
}

int main() {

    AList L(4);
    L.append(10);
    L.append(20);
    L.append(30);
    L.append(40);
    expect(L.to_string()=="<|10,20,30,40>");
    L.append(50);
    expect(L.to_string()=="<|10,20,30,40,50>");
    expect(L.remove() == 10);
    expect(L.to_string()=="<|20,30,40,50>");
    L.insert(42);
    expect(L.to_string()=="<|42,20,30,40,50>");
    L.next();
    L.next();
    expect(L.to_string()=="<42,20|30,40,50>");
    L.insert(99);
    expect(L.to_string()=="<42,20|99,30,40,50>");
    assertionReport();
}
