#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector
double W=0, alpha[]={};


//TODO: Define a  ComputeProb function and compute the Probabilities
void ComputeProb(double w[], int n){
    for (int i=0; i<n; i++){
        W+=w[i];
    }
    for (int j=0; j<n; j++){
        alpha[j] = w[j] / W;
        
        cout << "P" << j+1 << "=" << alpha[j] << endl;
    }
}



int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    ComputeProb(w, 5);
        
    
    return 0;
}
