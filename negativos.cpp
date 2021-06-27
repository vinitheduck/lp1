#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
	int count = 0;
	int vet[SIZE];
	for(int i = 0; i < SIZE; i++){
		cin>>vet[i];
	}
	for(int i = 0; i < SIZE; i++){
		if(vet[i] < 0){
			count++;
		}
	}
	cout<<count<<'\n';
    // TODO: Adicione aqui seu código.

    return 0;
}
