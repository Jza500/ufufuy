#include <iostream>
#include <iomanip>
#include<fstream>
#include <cmath>
#include<cstdlib>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;

    string Leg;
    while (getline(source,Leg))
    {
        sum += stof(Leg);
        sum_of_square += pow(stof(Leg),2);

        count++;

    }    
    float Mean = sum/count;
    float SD = sqrt(sum_of_square/count-pow(Mean,2));
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = " << SD;
}