#include <iostream> 
#include <cmath>
#include <conio.h>

using namespace std;

const int siz = 100;

bool checker(int i, int j, int num, int mat[siz][siz], int n){
	// column check

	for(int l = 0; l < n; l++)
		if(mat[l][j] == num)
			return false;


	// row check

	for(int m = 0; m < n; m++)
		if(mat[i][m] == num)
			return false;
	
	// root(n)*root(n) check

	int p = sqrt(n);
	int x = i - (i % p);
	int y = j - (j % p);


	for(int a = x; a < x + p; a++)
	    for(int b = y; b < y + p; b++)
	        if(mat[a][b] == num)
		        return false;

	return true;
}
bool sudukosolver(int n, int i, int j, int mat[siz][siz]){
	// base case
	if(i == n){
		for(int l = 0; l < n; l++){
            cout << "\t\t\t\t\t";
			for(int m = 0; m < n; m++){
				cout << mat[l][m] << "  ";
			}
			cout << endl;
		}
		cout << endl;
		
		return false;
	}

	if(j == n)
		return sudukosolver(n, i + 1, 0, mat);
	
	if(mat[i][j] != 0) // filled
		return sudukosolver(n, i, j + 1, mat);
	
	else{
		// unfilled
		for(int num = 1; num <= n; num++){
			if(checker(i , j, num, mat, n)){
			mat[i][j] = num;
			if(sudukosolver(n, i, j + 1, mat)){
				return true;
			}
			mat[i][j] = 0;
		}}

		return false;
	}
}

int main(){
    char temp;
    int n = 9, ans;
	int mat[siz][siz] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		// sudukosolver(9,0,0,mat);
	
    cout << "\t\t\t" << "****************************************************" << endl << endl;
    cout << "\t\t\t\t\t" << "1. Enter Sudoku" << endl << "\t\t\t\t\t" << "2. Use Default Sudoku" << endl << endl;
    cout << "\t\t\t" << "****************************************************" << endl;
    cout << "\t\t\t\t\t" << "Enter you choice: ";
    cin >> ans;
    
    cout << "\033[2J\033[1;1H";

    if(ans == 1){
        cout << "Enter size of sudoku(either no. of rows or col): ";
        cin >> n;

        cout << "Enter all " << n * n << " elements in a single line, seperated by spaces: ";
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> mat[i][j];
        
        cout << "\033[2J\033[1;1H"<<endl;
        cout << "\t\t" << "********************************************************************************************************" << endl << endl;
        sudukosolver(n, 0, 0, mat);
        cout << "\t\t" << "********************************************************************************************************" << endl << endl;
    }

    if(ans == 2){
        cout << "\t\t" << "********************************************************************************************************" << endl << endl;
        sudukosolver(9,0,0,mat);
        cout << "\t\t" << "********************************************************************************************************" << endl << endl;
        }
    
    else
        cout << "Invalid Input. Please Try Again";

    cin.get();
    cin.get();
	return 0;
}