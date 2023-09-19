/* ALGEBRA LINEAL
-> Crear un programa que convierta una matriz "A" a su forma Transpuesta | Un programa que multiplique 2 matrices*/

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#define MAX 100

using namespace std;

void transpose();
void multiplyM();
void title();


int main(){
    SetConsoleOutputCP(CP_UTF8);
    
	char op;
    
    do{
    	system("cls");
    	system("COLOR F0");
    	cout << "\n\n\n                                     C A L C U L A D O R A   D E                      \n";
		title();

    	cout << "\n\n                                   (1) Convertir a Matriz Transpuesta \n\n";
    	cout << "                                       (2) Multiplicar Matrices";
    	op = getch();
    
    	switch(op){
    	case '1': {
    		transpose();
			break;
		}
		case '2':{
			multiplyM();
			break;
		}
		default: {
			cout << "\n   (!) Ingresa una opción válida";
			getch();
			break;
		}
		}
	}while(op != 3);

   
}

void storeData(int rows, int columns, double matrix[][MAX]) {
    // Entrada de datos a la matriz A
    cout << "\n   -> Ingrese un dato para las siguientes posiciones: \n\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << " [" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    getch();
}


void printMatrix(int rows, int columns, double matrix[][MAX]){
	
	for (int i = 0; i < rows; i++){
    	cout << "   |";
        for (int j = 0; j < columns; j++){
            cout << setw(6) << matrix[i][j];
        }
        cout << setw(6) << "|\n\n";
    }
    getch();

}

void transpose() {
    int rows, columns;
    double matrix[MAX][MAX], mTranspose[MAX][MAX];
    
    system("cls");

    cout << "\n\n   -> Digita";
	cout << "\n\n   No. Filas: ";
	cin >> rows;
	cout << "\n   No. Columnas: ";
	cin >> columns;
    storeData(rows, columns, matrix); 

    system("cls");

    cout << "\n\n -> Matriz A: \n\n";
    printMatrix(rows, columns, matrix);

    getch();

    // Intercambio de posición de los datos en las filas a columnas y columnas a filas
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            mTranspose[j][i] = matrix[i][j];
        }
    }

    cout << "\n\n -> Matriz Transpuesta: \n\n";
    printMatrix(columns, rows, mTranspose);  
}


void multiplyM(){
	
	int row1, row2, column1, column2;
	system("cls");
	cout << "\n\n   ~> Para Matriz A: ";
	cout << "\n\n   No. Filas: ";
	cin >> row1;
	cout << "\n   No. Columnas: ";
	cin >> column1;
	
	cout << "\n\n   ~> Para Matriz B: ";
	cout << "\n\n   No. Filas: ";
	cin >> row2;
	cout << "\n   No. Columnas: ";
	cin >> column2;
	
	double matrix1[MAX][MAX], matrix2[MAX][MAX], matrixS[MAX][MAX];

	
	if(column1 == row2){
		system("cls");

		// Entrada de datos a la matriz A y B
		cout << "\n\n   ~> Para Matriz A: ";
		storeData(row1, column1, matrix1); 
	    
		cout << "\n\n   ~> Para Matriz B: ";
		storeData(row2, column2, matrix2);
	    	    
		cout << "\n\n   ~> Matriz A: \n";
    	// Muestra de los datos de la matriz A y B
    	printMatrix(row1, column1, matrix1);
    
		cout << "\n\n   ~> Matriz B: \n";
  		printMatrix(row2, column2, matrix2);
    	
    	for(int i=0; i<row1; i++){
		    for(int j=0; j<column2; j++){
		        matrixS[i][j] = 0; 
		        for (int k=0; k<column1; k++){
		            matrixS[i][j] += matrix1[i][k]*matrix2[k][j];
		        }
		    }
		}
    	
	        
		cout << "\n\n   ~> Matriz Multiplicada: \n";
		printMatrix(row2, column2, matrixS);

    	getch();
	    
	}else{
		cout << "\n\n (!) La multiplicación de ambas matrices no puede ser realizada.";
		cout << "\n La dimensión de columna 1 y fila 2 no son iguales. ";
		getch();
	}
}

//Función para imprimir el título del proyecto
void title(){
	
	cout << "\n";
	cout << "\t\t\t                        _        _    " << endl;           
	cout << "\t\t\t                       | |      (_)   " << endl;        
	cout << "\t\t\t        _ __ ___   __ _| |_ _ __ _  ___ ___  ___ " << endl;
	cout << "\t\t\t       | '_ ` _ \\ / _` | __| '__| |/ __/ _ \\/ __|" << endl;
	cout << "\t\t\t       | | | | | | (_| | |_| |  | | (_|  __/\\__ \\" << endl;
	cout << "\t\t\t       |_| |_| |_|\\__,_|\\__|_|  |_|\\___\\___||___/\n\n" << endl; 

}