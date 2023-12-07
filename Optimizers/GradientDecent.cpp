//Demonstrate function pointer usage
// input is function 

#include<vector>;
using namespace std;
double* gradientDecent(double* (*func)(double*), vector<double> dimensionIn, vector<double> dimensionOut);
CalcGradient(double* (*func)(double*), vector<double> dimensionIn, vector<double> dimensionOut);

int main()
{
    double* gradientDecent(double* (*func)(double*), vector<double> dimensionIn, vector<double> dimensionOut);
}

// parameter description
// @param func : math function of any dimension of real numbers whose local minima needs to be computed with gradient decent
// @param dimensionIn : specify dimension of domain
// @param dimensionOut : specify dimension of mapped values by
// 1st iteration : all error checks are ignored 

// return type
// double * array of pointers 
gradientDecent(double* (*func)(double*), vector<double> dimensionIn, vector<double> dimensionOut)
{
    if(dimesionIn.empty() || dimensionOut.empty())
        std::assert();

    for(int i = 0 ; i < 1000; i++)
    {
       CalcGradient(&func(), dimensionIn, dimensionOut); //numerically compute gradient

    }
}
