/*EXPLAINATION OF WHAT EACH LINE DOES !*/

// This tells C++ to import a header file library called "iostream", which let's us input and output objects using functions i.e (cout), always appears
#include <iostream>

// "using namespace std" means that we can use names for objects and variables from the standard library, always appears
using namespace std;

// Another thing that always appear in a C++ program is int main(). This is called a function. Any code inside its curly brackets {} will be executed. 
int main() {

    //cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".
  cout << "Hello World!\n";
  return 0;
} 


/* NOTES */

// C++ is case-sensitive: "cout" and "Cout" has different meaning.

// Every C++ statement ends with a semicolon ;

// The body of int main() could also been written as:
        //int main () { cout << "Hello World! "; return 0; }

        //Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.



/*  Ommiting Namespace */

#include <iostream> 

// The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

int main() {

  // The std:: object is required to make the cout object be able to function
    std::cout << "Hello World!\n";
    return 0;
}