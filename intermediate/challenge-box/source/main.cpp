#include <iostream>
#include <string>
using namespace std;

class Box {
    private:
        long long int l, b, h;
    
    public:
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int lin, int bin, int hin) {
            l = lin;
            b = bin;
            h = hin;
        }
        
        Box(Box &B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }

        // methods
        int getBreadth() {return b;}
        int getLength() {return l;}
        int getHeight() {return h;}
        long long CalculateVolume() {return b*l*h;}

        // overload operators
        bool operator<(const Box& B) {
            if (l < B.l)
            {
                return true;
            }
            if (b < B.b && l == B.l)
            {
                return true;
            }
            if (h < B.h && b == B.b && l == B.l)
            {
                return true;
            }
            return false;
            
        }

        friend ostream& operator<<(ostream& out, Box& B);
};

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight() << endl;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main() {
    check2();
    return 0;
}