#include <stdio.h>
#include <math.h>
//this is eigen value calculator which calculates eigen values for 3x3 matrix
//limittaions are: 1> the one of the roots must be postive integer including 0 in characterstics which will be cubic polynomial
//2> the other 2 roots also must be real not complex 
int main()
{
    char repeat;//for another calculation if user wants
    do
    {
        int matrix[3][3];//works on matrix of order 3

        for (int i = 0; i < 3; i++)
        {
            printf("enter the values in matrix in row %d:\n ", i + 1);

            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &matrix[i][j]);
                //inputs elemst of matrix row wise from user
            }
        }
        //each element of matrix is declared as variable for easy processing
        int a = matrix[0][0];
        int b = matrix[0][1];
        int c = matrix[0][2];
        int d = matrix[1][0];
        int e = matrix[1][1];
        int f = matrix[1][2];
        int g = matrix[2][0];
        int h = matrix[2][1];
        int i2 = matrix[2][2];
        

        //for caculation and storing equation, all the coficients are stored in variable 
        
        int w = 1;//coficient of lamda cube of characterstics equation
        int x = -(a + e + i2);//coficient of lamda square of characterstics equation
        int y = (a * e) + (a * i2) + (e * i2) - (b * f) - (c * d) - (g * h);//coficient of lamda of characterstics equation
        int z = -((a * e * i2) + (b * f * g) + (c * d * h) - (c * e * g) - (b * d * i2) - (a * f * h));//constant term 

        int r1 = -1;
        for (int i = 0; i < 999; i++)//checking one postive root of charcterstics equation
        {
            if ((w * i * i * i) + (x * i * i) + (y * i) + z == 0)
            {
                r1 = i;
                //checks till it gets one postive integer root then loop ends
                break;
            }
        }
        if (r1 == -1)//if no postive integer root found
        {
            printf("no positive integer found");
            printf("please enter another matrix");
            continue;
        }

        //now the cubic will be divided by the one of the factor and gets a quadratic equation
        //that quatratic will be same as cubic stored in variable that are coeficients of quadratic


        float B = (x + r1);//coeficient of x square
        float C = x * r1 + y;//coeficient of x 
        float D = pow(B, 2) - 4 * C;//discriminant of quadratic

        float r2;//root 2 declared
        float r3;//root 3 declared

        //condition for real and imaginary roots of quadratic
        if (D >= 0)//when roots are real
        {
            r2 = (-B + sqrt(D)) / 2.0;
            r3 = (-B - sqrt(D)) / 2.0;

            printf("lambda 1 = %d\n", r1);
            printf("lambda 2 = %.2f\n", r2);
            printf("lambda 3 = %.2f\n", r3);
            //all 3 root will be printed
        }
        
        else//when roots are complex
        {
            
            printf("The other roots are complex.\n");
            printf("lambda 1 = %d\n", r1);
            //only one root gets printed
        }

        printf("if want to calculate another enter 'y' other wise 'n'");//for another round of calculation
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');//for repeating just enter 'y'or'Y'

    return 0;//program terminated
}