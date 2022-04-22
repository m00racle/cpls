#include <iostream>
#include <sstream>
//sstream is the header that contains the stringstream class
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private:
        int age;
        // create stringstream <sstream> instance called ss_age
        // this later on will be used to convert age as int to string
        stringstream ss_age;
        
        string first_name;
        string last_name;
        
        int standard;
        //crete stringstream <sstream> instace called ss_standard
        // this later will be used to convert standard as int to string.
        stringstream ss_standard;
    public:
        //getter
        int get_age() {
            //remember C++ does not have self.
            return age;
        }
        
        string get_first_name() {
            return first_name;
        }
        
        string get_last_name() {
            return last_name;
        }
        
        int get_standard() {
            return standard;
        }
        
        //setter
        void set_age(int input_age) {
            age = input_age;
        }
        
        void set_first_name(string input_first_name) {
            first_name = input_first_name;
        }
        
        void set_last_name(string input_last_name) {
            last_name = input_last_name;
        }
        
        void set_standard(int input_standard) {
            standard = input_standard;
        }
        
        // to string
        string to_string() {
            // this is where stringstream <sstream> come into useful
            ss_age << age;
            ss_standard << standard;
            
            //sstream.str() function from stringstream class will return string version of the 
            // content of sstream instance
            // thus ss_age.str() will return the value of student.age but in string format not int!
            // same goes with ss_standard.str()
            return ss_age.str() + "," + first_name + "," + last_name + "," + ss_standard.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
