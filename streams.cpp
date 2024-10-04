#include <iostream>
#include <string>

using namespace std;

void skipBlankLines(istream &is);

int main() 
{
  int x;
  string s;
  

  // pull out all the integers
  while(cin) {
    cout << "Gimme a number: ";
    cin >> x;
    if(not cin) { continue; }
    cout << "Thanks for the " << x << endl;
  }
  cin.clear();
  cout << "Peek: " << (char) cin.peek() << ' ' << cin.peek() << endl;

  // read the line that broke the stream
  getline(cin, s);
  cout << s << " is not a number!" << endl;

  cout << "Enter anohter number: ";
  cin >> x;
  cout << "Peek: " << (char) cin.peek() << ' ' << cin.peek() << endl;


  // get lines and numbers together
  while(cin) {
    cout << "Line: ";
    skipBlankLines(cin);
    getline(cin, s);
    cout << "Number: ";
    cin >> x;

    cout << s << ": " << x << endl;
  }
  cout << "cin broke" << endl;
}


void skipBlankLines(istream &is)
{
  while(is.peek() == '\n') {
    is.ignore();
  }
}