#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file;

    //attempt to open the file for writing 
    file.open("count.txt");
    if(!file) {
        cerr << "Could not open the file for writing." << endl;
        return -1;
    }    

    //write 0 through 99 to the file for...reasons
    for(int i=0; i<100; i++) {
        file << i << endl;
    }

    //close the file
    file.close();
}