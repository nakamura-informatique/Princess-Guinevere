//Problems 01
/* Write a C++ program that shows that array a is an array of pointers, there are 2 ways to access this array
Each element is a string
Each element is a pointer to the first character of a string */

#include <iostream>
using namespace std;

int main()
{
    const int n=4; //Declare the number of elements of the string
    char* a[n] = {"cong", "nghe","thong","tin"};
    char* p;

    cout <<"Array a:"<<endl;

    for(int i =0;i<n;i++)
        cout << a[i]<<endl;
    cout<<endl;
    cout<<"Array a:"<<endl;
    for(int i =0;i<n;i++)
    {
        p=a[i];

        while (*p != '\0')
        {
            cout << *p;
            p++;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}

//Problems 02
//Write a C++ program to calculate the area of a rectangle entered from the keyboard

#include <iostream>
using namespace std;

int square_fleet(int chieu_dai,int chieu_rong)  // Declare the function to calculate the area
{
    int dien_tich = chieu_dai*chieu_rong;
    return dien_tich;
}

int main()   // main
{
    int dai;
    cout << "Enter lenght svp: ";
    cin >> dai;
    int rong;
    cout <<"Enter width svp: ";
    cin >> rong;
    int dt = square_fleet(dai,rong);
    cout <<"Dien tich la " << dt <<endl;

    system("pause");
    return 0;
}

//Problems 03
//Write a C++ program that prints to the screen the size of the data types
#include <iostream>
using namespace std;

int main ()
{
    cout << "Size of data char: " << sizeof(char) << endl;
    cout << "Size of data unsigned char: " << sizeof(unsigned char) << endl;
    cout << "Size of data signed char: " << sizeof(signed char) << endl;
    cout << "Size of data int: " << sizeof(int) << endl;
    cout << "Size of data unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of data signed int: " << sizeof(signed int) << endl;
    cout << "Size of data short int: " << sizeof(short int) << endl;
    cout << "Size of data unsigned short int: " << sizeof(unsigned short int) << endl;
    cout << "Size of data signed short int: " << sizeof(signed short int) << endl;
    cout << "Size of data long int: " << sizeof(long int) << endl;
    cout << "Size of data signed long int: " << sizeof(signed long int) << endl;
    cout << "Size of data unsigned long int: " << sizeof(signed long int) << endl;
    cout << "Size of data float: " << sizeof(float) << endl;
    cout << "Size of data double: " << sizeof(double) << endl;
    cout << "Size of data long double: " << sizeof(long double) << endl;

    return 0;
}

//Problems 04
//Write a program to retrieve the values of a string variable entered from the keyboard
#include <iostream>
using namespace std;

int main ()
{
    cout <<"Enter the string svp: ";
    //Khai báo biến chuỗi
    char HoTen[200];
    cin >> HoTen;
    int i=0;
    cout << "Student's Name: ";
    while (HoTen[i] != '\0')
    {
        cout << HoTen[i];
        i++;
    }
    cout << endl;

    return 0;
}

//Problems 05
//Write a C++ program that input 2 strings from the keyboard and print these 2 string values
#include <iostream>
using namespace std;

int main()
{
    string chuoi_1, chuoi_2;
    cin >> chuoi_1 >> chuoi_2;

    cout << "Chuoi thu nhat la: " << chuoi_1 << endl;
    cout << "Chuoi thu hai la: " << chuoi_2 << endl;

    return 0;
}

//Problems 06
// Write a C++ program that initializes two arrays a and b, then assigns array a to b
#include <iostream>
using namespace std;

void show (int mang[], int n)
{
    for (int i=0; i<n; i++)
        cout << mang[i];
    cout << endl;
}

int main ()
{
    int so_phan_tu_mang_1 = 10; //Declare the number of first array elements
    int MangThu1[10] = {1,2,3,4,5,6,7,8,9,10}; //Declare the element value of array 1
    //Proceed to print the first array on the computer screen
    show(MangThu1,10); //Run the function to print the first array

    int so_phan_tu_mang_2 = 20;
    int MangThu2[20] = {33,44,22,4545,767,21,545,656,878,
                        78,8,3,11,43,4434,54,123,67,222,5445678};
    show(MangThu2,20);

    for (int j=0;j<so_phan_tu_mang_1;j++)
        MangThu2[j] = MangThu1[j];
    show (MangThu2,so_phan_tu_mang_2);
    //From the 10th value of the first array, the 11th value of the second array appears

    return 0;
}

//Problems 07
//Bubble Sort Algorithms (Sắp xếp nổi bọt)
//Write a C++ program to sort in ascending order the array a entered from the keyboard
#include <iostream>
using namespace std;
#define MAXIMUM_NUMBERS 200

//Nhập các phần tử của mảng
void nhap_mang (int mang [], int &n)
{
    do
    {
        cout <<"Nhap so phan tu cua mang: \n";
        cin >> n;
        if (n<=0 || n>MAXIMUM_NUMBERS)
        {
            cout <<"Nhap lai so khac";
        }
    }while (n<=0||n>MAXIMUM_NUMBERS);
    //Nhập các phần tử của mảng sử dụng vòng lặp for
    int i;
    for (i=0;i<n;i++)
    {
        cout <<"Nhap cac phan tu cua mang";
        cin >> mang[i];
    }
}

//Xuất các phần tử của mảng
void xuat_mang (int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout << a[i];
    }
}

//Giải thuật Bubble sort
void Bubble_Sort (int a[], int n)
{
    int k=1; //literal constant
    bool transform;//giá trị luận lý->True or false
    do
    {
        transform=false;
        for(int i=0;i<n-k;i++)
            if (a[i]>a[i+1])
            {
                //tiến hành hoán đổi
                //đặt biến cục bộ
                int alpha;
                alpha = a[i];
                a[i]=a[i+1];
                a[i+1]=alpha;
                //gắn mác đã hoán đổi bằng luận lý->True
                transform=true;
            }
        k=k+1;
    }while(transform);
}

int main ()
{
    //Nhập mảng từ bàn phím
    int n;   // symbolic constant
    int a[MAXIMUM_NUMBERS];
    nhap_mang (a,n);
    cout<<"Cac phan tu cua mang khi chu sap xep \n";
    xuat_mang (a,n);
    Bubble_Sort (a,n);
    cout<<"Cac phan tu cua mang sau khi sap xep \n";
    xuat_mang (a,n);
}

//Problems 08: Enter characters from the keyboard and assign variables
#include <iostream>
using namespace std;

int main ()
{
    char cha;
    cha = cin.get();
    cout << cha << endl;
    return 0;
}

//Problem 09: Function cin.eof() print all char include space
#include <iostream>
using namespace std;

int main ()
{
    char character;
    while ((character = cin.get()) != EOF)
        cout.put(character);
    cout << cin.eof() << endl;
    return 0;
}

//Problem 10:Enter the character array using the cin.read() and cin.gcount() function
#include <iostream>
using namespace std;

int main()
{
    char a[100];
    cin.read(a,10);
    cout.write(a,cin.gcount());
    cout << endl;

    return 0;
}

//Problem 11: Write a C++ program that inputs a row and assigns an array of characters, the result is an array of characters
#include <iostream>
using namespace std;

int main()
{
    const int N=100;
    char a[N];
    cin.getline(a,N);
    cout << a;
    return 0;
}

//Problem 12: Find the result for below src
#include <iostream>
using namespace std;

int CheckforBreak()
{
    const int a=1,b=2,c=3;
    string sys_out = " ";  //infill string
    int check;
    cin >> check;
    switch (check)
    {
        case a:
            sys_out = "Ho Vo";
            cout << sys_out;
        case b:
            sys_out = "Thanh";
            cout << sys_out;
            break;
        case c:
            sys_out = "Phong";
            cout << sys_out;
            break;
    }
    return 0;
}

int CheckforNotBreak()
{
    const int a=1,b=2,c=3;
    string sys_out = " ";  //infill string
    int check;
    cin >> check;
    switch (check)
    {
        case a:
            sys_out = "Ho Vo";
            cout << sys_out;
            break;
        case b:
            sys_out = "Thanh";
            cout << sys_out;
            break;
        case c:
            sys_out = "Phong";
            cout << sys_out;
            break;
    }
    return 0;
}

int main()
{
    CheckforBreak();
    CheckforNotBreak();
    return 0;
}

//Problem 13: Math.Sign() Function
#include <iostream>
using namespace std;

void MathSignFunction (int a)
{
    if (a>0)
        cout << 1; // Math.Sign() function return 1 if input is positie
    else if (a<0)
        cout << -1; // Math.Sign() function return -1 if input is negative
    else
        cout << 0; //Math.Sign() function
}

int main()
{
    int n;
    cout << "Input n svp: ";
    cin >> n;
    cout << "Math Sign function variables of n is: ";
    // If positive -> return 1, negative-> return -1 and 0 is 0
    MathSignFunction(n);

    return 0;
}

//Problem 14: Write an OOP Program to compute the square of polygon
#include <iostream>
using namespace std;
/*Identify 3 main of variables in OOP
  - public: data can be accessed anywhere
  - protected: can be accessed from class contained and subclass
  - private: can be accessed only from class contained */

class Polygon {
public:
    static int Parameters(float longs, float height)
    {
        float Lenght = longs;
        float Heights = height;

        return 0;
    }
public:
    float Lenght;
    float Heights;
};

class Triangle : public Polygon // Tam giác
{
public:
    //Compute Area
    float AreaTriangle ()
    {
        float Area = (Lenght * Heights)/2;
        return Area;
    }
    //Compute Perimeter
    static float PerimeterTriangle()
    {
        cout << "Please enter 3 lenght of the triangle:";
        float a,b,c;
        cout << "a=" ; cin>>a;
        cout << "b=" ; cin>>b;
        cout << "c=" ; cin>>c;
        float Perimeter = a + b +c;
        return Perimeter;
    }
};

class Tetragram : public Polygon //Tứ giác
{

};

class Pentagon : public Polygon //Ngũ giác
{

};

class Hexagon : public Polygon //Lục giác
{

};

class Octagon : public Polygon //Bát giác
{

};

class Rectangle : public Polygon //Hình chữ nhật
{
public:
    //Compute Area
    float AreaRectangle ()
    {
        float Area = Lenght * Width;
        return Area;
    }
    //Compute Perimeter
    float PerimeterRectangle ()
    {
        float Perimeter = (Lenght + Width)*2;
        return Perimeter;
    }
};

int main()
{
    cout << "Long: ";
    float a;
    cin >> a;
    cout << "Computer get the long: " << a << endl;
    cout << "Heigh: ";
    float b;
    cin >> b;
    cout << "Computer get the heigh: " << b << endl;

    //Create un object in Rectangle class
    Rectangle rec;
    Rectangle::Parameters (a,b);

    //Compute Area of Rectangle
    float AreaofRectangle = rec.AreaRectangle();

    //Compute Perimeter of Rectangle
    float PerimeterOfRectangle = rec.PerimeterRectangle();

    //Create un object in Triangular class
    Triangle tri;
    Triangle::Parameters(a,b);

    //Compute Area of Triangular
    float AreaOfTriangular = tri.AreaTriangle();

    //Compute Perimeter of Triangular
    float PerimeterOfTriangular = Triangle::PerimeterTriangle();




    return 0;
}


//Problem 15: Write a C++ program that returns mathematical function
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14

void Triginometry()
{
    float alpha;
    cout << "The angle value for triginometry function";
    cin >> alpha;
    float cal    = alpha * PI/180;
    float sine   = sin (cal);
    float cosine = cos (cal);
    float tane   = tan (cal);
    float acosine = acos(alpha) * 180/PI;
    float asine = asin(alpha) * 180/PI;
    float atane = atan(alpha) * 180/PI;
    cout << "Sine of value alpha from keyboard is: " << sine << endl;
    cout << "Cosine of value alpha from keyboard is: " << cosine << endl;
    cout << "Tan of value alpha from keyboard is: " << tane << endl;
    cout << "Arc Cosin of value alpha from keyboard is: " << acosine << endl;
    cout << "Arc Sine of value alpha from keyboard is: " << asine << endl;
    cout << "Arc Tan of value alpha from keyboard is: " << atane << endl;
}

void ArcHyperbolicSine ()
{
    int n;
    cout << "Input the value for sinh function: ";
    cin >> n;
    //create sinh function
    float sinh = exp (n) - cosh (n);
    float a_sinh = asinh (sinh);
    cout << "Arc hyperbolic sine is" << a_sinh << endl;
}

void ArcHyperbolicCosine ()
{
    int n;
    cout << "Input the value for cosh function: ";
    cin >> n;
    //create sinh function
    float cosh = exp (n) - sinh (n);
    float a_cosh = acosh(cosh);
    cout << "Arc hyperbolic cosine is" << a_cosh << endl;
}

void ArcHyperbolicTangent ()
{
    int a;
    cout << "Input the value for tanh function: ";
    cin >> a;
    //create tanh function
    float x = tanh (a);
    cout << "Computer got x: " << x << endl;
    //create atanh function
    float y = atanh (x);
    cout << "Arc hyperbolic tangent of x is: " << y << endl;
}

void HyperbolicTangent ()
{
    float x;
    cout << "Input of variable for Hyperbolic Tangent is: ";
    cin >> x;
    float y = tanh (x);
    cout << "Hyperbolic Tangent of x is: " << y << endl;
}

void HyperbolicSine ()
{
    float x;
    cout << "Input of variable for Hyperbolic Sine is: ";
    cin >> x;
    float y = sinh (x);
    cout << "Hyperbolic Sine of x is: " << y << endl;
}

void HyperbolicCosine ()
{
    float x;
    cout << "Input of variable for Hyperbolic Cosine is: ";
    cin >> x;
    float y = cosh (x);
    cout << "Hyperbolic Cosine of x is: " << y << endl;
}

void MinofTwoVariabes ()
{
    //fmin function release least between 2 variables a&b input by user
    // The function structure is fmin(first, second)
    cout << "Input a,b respectively: ";
    float a,b;
    cin >> a >> b;
    float min = fmin(a,b);
    cout << "Least between 2 variables a&b input by user is: " << min << endl;
}

void MaxofTwoVariables ()
{
    //fmax function release maximum between 2 variables a&b input by user
    // The function structure is fma(first, second)
    cout << "Input a,b respectively: ";
    float a,b;
    cin >> a >> b;
    float max = fmax(a,b);
    cout << "Max between 2 variables a&b input by user is: " << max << endl;
}

void Mod()
{
    //This function aims to return the remainder of x divided by y
    //using fmod() function in math lib
    //The structure of this function is fmod(x,y)
    cout << "Enter 2 variables svp: ";
    float x, y, mod;
    cin >> x >> y;
    mod = fmod (x,y);
    cout << "The remainder of x divided by y is: " << mod << endl;
}

void Round()
{
    //The function returns an integer value (type float) closest to the input value according to the principle of partial rounding
    cout << "Enter variable svp: ";
    float x;
    cin >> x;
    float round = round (x);
    cout << "An integer value (type float) closest to the input value according to the principle of partial rounding is: " << round << endl;
}

void Trunc()
{
    //Function that returns an integer (float type), truncating the trailing decimal without going through the half-rounding step
    float a;
    cout << "Indicate a svp: ";
    cin >> a;
    float value = trunc(a);
    cout << "Result: " << value << endl;
}

void Floor()
{
    //Function that return an interger (float type) less than or equal to the value entered from the keyboard
    float a;
    cout << "Indicate a svp: ";
    cin >> a;
    float value = floor(a);
    cout << "Result: " << value << endl;
}

void Ceil()
{
    //The function returns an integer value (real type) greater than or equal to the value entered from the keyboard
    float a;
    cout << "Indicate a svp: ";
    cin >> a;
    float value = ceil(a);
    cout << "Result: " << value << endl;
}

void Modf()
{
    //Function structure: modf(float_1,float_2)
    //The function returns the decimal value and integer part of the number entered from the keyboard
    cout << "Input value for x: x=";
    float x, iptr;
    cin >> x;
    float dec = modf(x,&iptr);
    cout << "Decimal value of " << x << "is: " << dec << endl;
    cout << "Interger part of " << x << "is: " << iptr << endl;
}

void Log2()
{
    //This function return logarithm base 2 of the input
    float x;
    cout << "Input value for x: x=";
    cin >> x;
    float result = log2(x);
    cout << "Logarithm base 2 of the input is: " << result << endl;
}

void Log10()
{
    //This function return logarithm base 10 of the input
    float x;
    cout << "Input value for x: x=";
    cin >> x;
    float result = log10(x);
    cout << "Logarithm base 10 of the input is: " << result << endl;
}

int main()
{
    ArcHyperbolicSine();
    ArcHyperbolicCosine();
    ArcHyperbolicTangent ();
    HyperbolicTangent();
    HyperbolicSine();
    HyperbolicCosine();
    MinofTwoVariabes();
    MaxofTwoVariables();
    Mod();
    Round();
    Trunc();
    Floor();
    Ceil();
    Modf();
    Log2();
    Log10();
    Triginometry();

    return 0;
}

//Problem 16: C++ Operator
a++ -> a=a+1;
s-- -> s=s-1;
b = ++a -> a = a+1 -> b = a;
b = --a -> a = a-1 -> b = a;
b = a++ -> b = a -> a = a+1;

//Problem 17: Write a function that returns the radix value preceding the output value
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Value n, svp: ";
    cin >> n;
    cout << "Using radix \n";

    cout << showbase;

    cout << "Base 8: " << oct << n << endl;
    cout << "Base 10: " << dec << n << endl;
    cout << "Base 16: " << hex << n << endl;

    cout << "Non-radix \n";

    cout << noshowbase;

    cout << "Base 8: " << oct << n << endl;
    cout << "Base 10: " << dec << n << endl;
    cout << "Base 16: " << hex << n << endl;

    return 0;
}

//Problem 18: Write C++ left, right, internal function
#include <iostream>
using namespace std;

int main()
{
    //internal function insert monospace between 'sign' and number
    cout << "Lenght constrained: ";
    int n; cin >> n;
    const int len = n;

    cout << "String input: ";
    char name[100];
    cin >> name;

    cout << "Number input: ";
    float age;
    cin >> age;

    cout.width(len); //constaint the output long
    cout << internal << age << endl;

    cout.width(len);
    cout << right << name << endl;

    cout.width(len);
    cout << left << name << endl;

    return 0;
}

//Problem 19: Write a C++ program to format real numbers
#include <iostream>
using namespace std;

int main ()
{
    double n;
    cout << "Number Input: ";
    cin >>n;

    //initial precision
    int pre = cout.precision();

    //Specify real number
    int i; cin >> i;
    cout.precision(i); //create preision for result
    cout << "Result: " << n << endl;

    return 0;
}

//Problem 20: Import and export data using the setw() function
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str;

    //Read characters entered from the keyboard
    int a, n;
    cout << "Number of characters read a: ";
    cin >> a;
    //Initialize n characters per output
    cout << "Initialize n characters per output: ";
    cin >> n;

    cin.width(a);

    cout << "Nhập vào một chuỗi: " << endl;
    cin >> str;

    cout << setw(n) << str << endl;

    return 0;
}

//Problem 21 showpoint function
#include <iostream>
using namespace std;

int main ()
{
    double a;
    cout << "Input: ";
    cin >> a;

    //number of dot
    int n;
    cout << "Input dot n: ";
    cin >> n;
    cout.precision(n);

    //showpoint
    cout << "Case 1: Show point \n";
    cout << showpoint;
    cout << a;

    //noshowpoint
    cout << "Case 2: No show point";
    cout << noshowpoint;
    cout << a;

    return 0;
}

//Problem 22:

/* Certaines règles de nommage sont communes à la fois en C et en C++. Ils sont les suivants :

Seuls les caractères alphanumériques et les traits de soulignement sont autorisés.
Les noms d'identifiant ne peuvent pas commencer par un chiffre, ce qui signifie que la première lettre doit être triée par ordre alphabétique. Après la première lettre, nous pouvons utiliser des lettres, des chiffres ou des traits de soulignement.
En C++, les majuscules et les minuscules sont distinctes. Par conséquent, nous pouvons dire que les identificateurs C++ sont sensibles à la casse.
Un mot-clé de déclaration ne peut pas être utilisé comme nom de variable. */

//Problem 23

//Problem 24:


//Problem 25: Print the first n characters of the character array
#include <iostream>
using namespace std;

int main()
{
    const int N=100;
    char arr[N];
    int n;
    cout << "Number of first character: ";
    cin >> n;
    cout << "Array: ";
    cin >> arr;
    cout.write(arr,n);

    return 0;
}

//Problem 26: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    /*/*comment 1 */
    //comment 2 */
    /*comment 3 *//**/
    /*//comment 4/*comment4_1*/
    /*/*comment5*///*/*/
    // /*comment6*/
    if (i=3)
        cout << "Hallo";
    else
        cout << "hello";
    return 0;
}

//Problem 27: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int a=11, b=2;
    for( ;a<100;a+b){
        // lặp vô tận
    }
    cout << a;
    return 0;
}

//Problem 28: Write a function to input and output a 2-dimensional array
#include <iostream>
using namespace std;

int main()
{
    cout << "Insert maximum number of row: ";
    int row; cin >> row;
    cout << "Insert maximum number of column: ";
    int column; cin >> column;

    //create 2 dim array entered from keyboard
    cout << "Please insert array:";
    int arr[row][column];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            cin >> arr[row][column];
        }
    }

    cout << "Computer got array: \n";

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Problem 29: Write C++ program to create jagged array
#include <iostream>
using namespace std;

int main()
{
    //number of row for 2D array
    cout << "Number of row for 2D array: 4";
    const int n=4;
    int[][] arr = new int [n][]; //array with 3 rows
    arr [0] = new int [5]; //array arr[0]: 5 elements
    arr [1] = new int [7]; //array arr[1]: 7 elements
    arr [2] = new int [5]; //array arr[2]: 5 elements
    arr [3] = new int [7]; //array arr[3]: 7 elements
    arr [4] = new int [8]; //array arr[4]: 8 elements
    //Assign values to array elements
    arr [0][0] = 1; arr [0][1] = 2; arr [0][2] = 3; arr [0][3] = 4;
    arr [0][4] = 5; arr [1][0] = 6; arr [1][1] = 7; arr [1][2] = 8;
    arr [1][3] = 9; arr [1][4] = 10; arr [1][5] = 11; arr [1][6] = 12;
    arr [2][0] = 13; arr [2][1] = 14; arr [2][2] = 15; arr [2][3] = 16;
    arr [2][4] = 17; arr [3][0] = 18; arr [3][1] = 19; arr [3][2] = 20;
    arr [3][3] = 21; arr [3][4] = 22; arr [3][5] = 23; arr [3][6] = 24;
    arr [4][0] = 25; arr [4][1] = 26; arr [4][2] = 27; arr [4][3] = 28;
    arr [4][4] = 29; arr [4][5] = 30; arr [4][6] = 31; arr [4][7] = 32;

    return 0;
}

//Problem 30: Write a program to input an integer and print it in base 8, base 10 and 16 systems
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    cout << "Base 8 is: " << setbase(8) << n << endl;
    cout << setbase(10) << "Base 10 is: " << n << endl;
    cout << setbase(10) << "Base 16 is: " << setbase(16) << n << endl;

    return 0;
}

//Problem 31: Check the program bellow
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a= sqrt(16);
    cout << a;

    return 0;
}

//Problem 32: Check the program bellow
#include <iostream>  /* COmpiler can't understand pseudo code */
using namespace std;

int main()
{
    //toán tử 3 ngôi điều kiện
    int a = 5?6:7;
    cout << a;

    return 0;
}

//Problem 33: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    cout << 0x23; //Hex -> Dec
    return 0;
}

//Problem 34: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    switch (i)
    {
        case 1: i++;
        case 2: break; //fatal issue
        case 3: ;
        case 7: i = i+5;
    }
    return 0;
}

//Problem 35: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    enum color {red, green, blue};
    color a=red;
    color b = green;
    color c = blue;
    cout << a << b << c;

    return 0;
}

//Problem 36: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int a=15000;
    a *= 2;
    cout << a;
    return 0;
}

//Problem 37: Check the program bellow
#include <iostream>
using namespace std;

void Normal (bool a)
{
    a = true;
    if(a) // if(x == true)
        // if(!x) -> x==false
    {
        a += 100;
    }
    cout << a; // return 1: luận lý
}

void BoolAlpha (bool a)
{
    a = true;
    if (a == true)
    {
        a += 100;
    }
    cout << boolalpha;
    cout << a;
}

void NoBoolAlpha (bool a)
{
    a = true;
    if (a== true)
    {
        a += 100;
    }
    cout << noboolalpha;
    cout << a;
}

int main()
{
    bool x;
    Normal (x);
    BoolAlpha (x);
    NoBoolAlpha (x);

    return 0;
}

//Problem 38: Check the program bellow
#include <iostream>
using namespace std;

void B (bool a)
{
    a = true; a = 'x'; cout << a;
}

void C (bool a)
{
    a = true; a += 2013; cout << a;
}

void D (bool a)
{
    a = true; a = a * 2013; cout << a;
}

int main()
{
    bool x;
    B (x);
    C (x);
    D (x);
    return 0;
}

//Problem 39: Write a C++ program to display positive and negative values before a number
#include <iostream>
using namespace std;

int main()
{
    cout << "Input the value for number svp: ";
    float a;
    cin >> a;

    cout << "Display sign before a number: ";
    cout << showpos;
    cout << a;

    cout << "\n No sign before a number: ";
    cout << noshowpos;
    cout << a;

    return 0;
}

//Problem 40: Write a program to input an integer and print it in base 8, base 10 and 16 systems
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << dec << "Base 8 is:" << oct << n << endl; //base 8
    cout << dec << "Base 10 is:" << n << endl;  //base 10
    cout << dec << "Base 16 is:" << hex << n << endl; //base 16

    return 0;
}

//Problem 41: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int x=6,y=8;
    cout << ++y - x--;
    //tiền tố: tăng y lên  giá trị sau đó gán
    // x-- -> x= x-1
    return 0;
}

//Program 42: Check the program bellow
#include <iostream>
using namespace std;
void program1 ()
{
    int s =2 ,i;
    for(i=3;i<10;i+=3)
    {
        s*=i;
    }
    cout << s << "\n";
}

void program2 ()
{
    int s =2 ,i;
    for(i=3;i<10;i+=3)
    {
        s+=i*2;
    }
    cout << s;
}
int main()
{
    program1();
    program2();
    return 0;
}

// Problem 43: Write C++ program to convert hexadecimal to decimal
#include <iostream>
using namespace std;

int main()
{
    cout << "Hexa Input:";
    string hex_input;
    cin >> hex_input;

    int len = hex_input.size(); //lenght of the string
    int i, a = 1, dec = 0;
    for (i = len - 1; i >= 0; i--)
    {
        if (hex_input[i] >= 'A' && hex_input[i] <= 'F')
        {
            dec += (int(hex_input[i]) - 55) * a;
            a = a * 16;
        }
        else
        if (hex_input[i] >= '0' && hex_input[i] <= '9')
        {
            dec += (int(hex_input[i]) - 48) * a;
            a = a * 16;
        }
    }
    cout << "Dec Result: ";
    cout << dec;
}

//Problem 44: Check the program bellow
#include <iostream>
using namespace std;
void function1 ()
{
    int i,j,s=0;
    for(i=0;i<5;++i)
        /* ++i tăng giá trị của i lên 1 và trả về giá trị mới đó.
        i++ cũng tương tự nhưng giá trị trả về là giá trị ban đầu của i trước khi được tăng lên 1. */
    {
        for(j=i;j<5;++j)
        {
            s+=1;
        }
    }
    cout << "Result: " << s << "\n";
}

void function2 ()
{
    int i,j,s=0;
    for(i=0;i<5;++i)
    {
        for(j=0;j<5;++j)
        {
            s+=1;
        }
    }
    cout << "Result: " << s;
}

int main()
{
    function1();
    function2();
    return 0;
}

//Problem 45: Check the program bellow
#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    if (x<=7)
    {
        x+=8;
    }
    if (x||7 >10)
    {
        x-=3;
    }
    cout << x;
    return 0;
}

//Problem 46: Write a function to change the value of 2 variables of type int
#include <iostream>
using namespace std;

void swap()
{
    cout << "Enter 2 int value: ";
    int x, y, temp; //biến temp là biến nhớ tạm
    cin >> x >> y;
    temp = x;
    x = y;
    y = temp;
    cout << "Result: ";
    cout << x << y;
}

int main()
{
    swap ();
    return 0;
}

//Problem 47: Write a C++ program to check the prime of a number entered from the keyboard
#include <iostream>
using namespace std;

int main()
{
    int n, i,sum = 0;
    cin >> n;
    if (n<1)
        cout << "FALSE";
    else
    if (n>=2)
    {
        for (i=1;i<=n;++i)
        {
            if (n % i == 0)
            {
                ++sum;
            }
        }
        if (sum == 2)
            cout << n << " la so nguyen to";
        else
            cout << n << " khong la so nguyen to";
    }

    return 0;
}





















