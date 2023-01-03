#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    double Mean, SD, sum1 ,sum2;
    int N = 0;
    string textline;

    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum1 += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        N++;
    }

    Mean = sum1/N;
    SD = sqrt((sum2/N)-pow(Mean,2));
    
    cout << "Number of data = " << N << endl;
    cout << setprecision(3) << "Mean = " << Mean << endl;
    cout << setprecision(3) << "Standard deviation = " << SD << endl;

    source.close();
    return 0;
}