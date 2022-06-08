#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;

		/* Enter your code here. */
        try {
            cout << Server::compute(A, B)<< endl;
			// NOTE: Server::compute is a static function thus does not need to instantiate Server
			// you can just call it right away usind namespace quotes Server::
			// Same is true fro Server::getLoad()

			// NOTE: catch here means detect any exception thrown anywhere in the calls from this body and handle it!

        } catch (std::invalid_argument const& e) {
			// catch std::invalid_argument exception thrown by the Server::compute function
            cout<< "Exception: " << e.what() << endl;

        } catch (const std::bad_alloc &aexc) {
			// catch the bad_alloc exception which is the error on memory allocation
			// this is because the Server::compute take long long as input parameter but returns int
            cout << "Not enough memory" << endl;
			// NOTE: this exception is thrown by compiler after we call Server::compute function 
			// this is not specified by ourselves in the try body

        } catch (const std::exception &exc) {
			// this catch handle all standard exception (there are many) that are not yet handled by other 
			// catches defined above!
			// Handle it by just printing what is the exception plus the word Exception: in front of the what() messange

            cout << "Exception: " << exc.what() << endl;

        } catch (...) {
			// this catch handles all NON-Standard exceptions (I suspect there also many)
			// handle it by printing "other exception"
            cout << "Other Exception" << endl;
        }

	}
	cout << Server::getLoad() << endl;
	return 0;
}