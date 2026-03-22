using namespace std;
#include <iostream>
#include <algorithm>

int main()
{
    static const int N = 10;
    double arr[N] = {50, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    
    double minimo;
    double massimo;
    minimo = arr[0];
    massimo = arr[0];
    for (int i = 0; i < N-1; ++i)
    {   float minimo_corrente = min(arr[i], arr[i+1]);
        float massimo_corrente = max(arr[i], arr[i+1]);
        if(minimo_corrente < minimo)
        {
            minimo = minimo_corrente;
        }
        if(massimo_corrente > massimo)
        {   
            massimo = massimo_corrente;
        }
        
    }
    cout << "Minimo: " << minimo << endl;
    cout << "Massimo: " << massimo << endl;
    
    double somma;
    double media;
    somma = 0.0;
    media = 0.0;
    for (int i = 0; i < N; ++i)
    {
        somma = somma + arr[i]; 
    }
    media = somma / N;
    cout << "Media: " << media << endl; 
    
    double varianza;
    varianza = 0.0;
    for (int i = 0; i < N; ++i)
    { varianza = varianza + (arr[i] - media) * (arr[i] - media);  
    }
    varianza = varianza / N;
    cout << "Varianza: " << varianza << endl;

        return 0;
    
}