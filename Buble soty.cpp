#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

//Bubblesort

void burbuja(int arr[], int t){
    int aux ,i,j;
    for (i=0;i<t-1;i++){
        for(j=0;j<t-1;j++){
            if(arr[j]>arr[j+1]){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }

}

//insertionsort

void insercion(int arr[], int t){
    int i,pos,aux;

    for (i=0;i<t;i++){
        pos=i;
        aux=arr[i];
        while ((pos>0) && (arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;
        }
    arr[pos]=aux;
    }

}

//mergesort

void Merge(int* A,int p,int q,int r) {
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=0; i<n1; i++) L[i]=A[p+i];
    for(int j=0; j<n2; j++) R[j]=A[q+1+j];
    int i=0;
    int j=0;
    int n=0;
    while(i!=n1 && j!=n2) {
        if(L[i]>R[j]) {
            A[p+n]=R[j];
            j++;
        } else {
            A[p+n]=L[i];
            i++;
        }
        n++;
    }
    while(j!=n2) {
        A[p+n]=R[j];
        j++;
        n++;
    }
    while(i!=n1) {
        A[p+n]=L[i];
        i++;
        n++;
    }
}
void MergeSort(int* A,int p,int r) {
    if(r>p) {
        int q;
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}


//quicksort
void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

//radixsort
int getMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

// Cuenta el tipo de arr [].
void countSort(int arr[], int n, int exp)
{
	// La matriz Count [i] contará el número de valores de matriz que tienen ese dígito 'i' en su (exp) th lugar.
	int output[n], i, count[10] = {0};

	// Cuente la cantidad de veces que cada dígito ocurrió en (exp) el lugar en cada entrada.
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	// Calculando su recuento acumulativo.
	for (i = 1; i < 10; i++)
		count[i] += count[i-1];

	// Insertar valores de acuerdo con el dígito '(arr [i] / exp)% 10' recuperado en la cuenta [(arr [i] / exp)% 10].
	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	// Asignando el resultado al puntero arr de main ().
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

// Ordenar la matriz [] de tamaño n usando Radix Sort.
void radixsort(int arr[], int n)
{
	int exp, m;
	m = getMax(arr, n);

	// Llamando a countSort () para el dígito en (exp) el lugar en cada entrada.
	for (exp = 1; m/exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

void mostrar(int arr[],int t){
for ( int i=0; i<t;i++){
    cout<<arr[i];
}
}


int main(){
int t=5;
int lista[t]={4,2,5,1,3};
burbuja(lista,t);
mostrar(lista,t);
cout<<endl;
insercion(lista,t);
mostrar(lista,t);
cout<<endl;
//MERGESORT
MergeSort(lista,0,t);
mostrar(lista,t);
cout<<endl;
//quicksort
quickSort(lista,0,t);
mostrar(lista,t);
cout<<endl;
//radixsort
radixsort(lista,t);
mostrar(lista,t);
cout<<endl;

return 0;
}
