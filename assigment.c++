1.
    Create a class named 'Student' with a string variable 'name' and an
    integer variable 'roll_no'. Create two objects named 'Stud1' and
    'Stud2'. Input data into those objects and display it.

//program to create a student class
//and enter some meaningful information

#include<iostream>
using namespace std;

//class declaration
class student{
    public:
        string name;
        int roll_no;

};

int main(){
    student stud1;
    student stud2;

    string stu_name;
    int rollno;

    cout<<"enter the details of student 1:"<<endl;
    cout<<"enter student name:";
    cin>>stu_name;
    stud1.name = stu_name;
    cout<<"enter student roll_no:";
    cin>>rollno;
    stud1.roll_no = rollno;

    //printing the result
    cout<<"student name is:"<<stud1.name<<"student rollno is:"<<stud1.roll_no<<endl;

    cout<<"enter the details of student 2:"<<endl;
    cout<<"enter student name:";
    cin>>stu_name;
    stud2.name = stu_name;
    cout<<"enter student roll_no:";
    cin>>rollno;
    stud2.roll_no = rollno;

     //printing the result
    cout<<"student name is:"<<stud2.name<<"student rollno is:"<<stud2.roll_no<<endl;

return 0;
}

[2] Write a program to print the area and perimeter of a triangle by
    creating a class named 'Triangle' with functions to input three sides and
        print the area and perimeter.

#include <iostream>
#include<cmath>
using namespace std;
class triangle{
    public:
        int side1;
        int side2;
        int side3;

    void input(){
        cout<<"enter the three sides of the traingle";
        int s1,s2,s3;
        cin>>side1;
        cin>>side2;
        cin>>side3;
    }

    void print_perimeter(){
        cout<<"the perimeter of the triangle is:";
        cout<<side1 + side2 + side3;        
    }

    void area(){
        int semi_perimeter, product;
        cout<<"the area of the trianngle:";

        //here we used the heroen's formula
        //s = a+b+c/2
        semi_perimeter = (side1 + side2 + side3)/2;
        side1 = semi_perimeter - side1;
        side2 = semi_perimeter - side2;
        side3 = semi_perimeter - side3;

        product = side1 * side2 * side3;

        cout<<sqrt(product)<<endl;
    }

};

 int main()
// {
//     triangle tri;
//     tri.input();
    tri.print_perimeter();
    tri.area();

    return 0;
}

[3] Write a program to print the area of a rectangle by creating a class
named 'Rectangle' having two functions. First function named as
'Assign' takes the length and breadth of the rectangle as parameters
and the second function named as 'Area' returns the area of the
rectangle.

#include<iostream>
using namespace std;
class rectangle{
    public:
        int length;
        int breadth;

    void take_input(){
        cout<<"enter the length of the rectangle:";
        cin>>length;
        cout<<"enter the breadth of the rectangle:";
        cin>>breadth;
    }

    int area(){
        return length * breadth;
    }

};
int main(){
    rectangle rec;
    rec.take_input();
    cout<<"area of the rectangle is:"<<rec.area()<<endl;

return 0;
}

[4] Write a program to print the area of two rectangles having sides (5.5,
10) and (6, 8) respectively by creating a class named 'Rectangle' with a
function named 'Area' that returns the area. The Length and breadth
are passed as parameters to its constructor.

#include<iostream>
using namespace std;

class rectangle{
    public:
    int x1,x2;

    void take_input(){
        cout<<"enter your coordinate of the rectangle:";
        cin>>x1>>x2;
    }

    void print_rectangle(){
        cout<<"area of the rectangle is:"<<x1 * x2<<endl;

    }
};

int main(){
    int i = 0;
    rectangle rec;
    while(i!=2){
        rec.take_input();
        rec.print_rectangle();
        i++;
    }

return 0;   
}

[5] Write a C++ program to add and subtract two times using object as
argument in a member function.

#include<iostream>
using namespace std;
class assigment
{ 
    public:
    int h1,m1,s1;

    void assign(int t1_h1, int t1_m1, int t1_s1){
        h1 = t1_h1;
        m1 = t1_m1;
        s1 = t1_s1;
    }
    void add_two_times(assigment t1, assigment t2){
        int store_sec = 0;
        t1.s1 += t2.s1;

        //handeling the second 
        if(t1.s1>=60){
            t1.s1 -= 60;
            t1.m1 += 1;
        }

        //handeling the minutes
        t1.m1 += t2.m1;
        if(t1.m1 >= 60){
            t1.m1 -= 60;
            t1.h1 += 1;
        }
        //handeling the hour
        t1.h1 += t2.h1;
        cout<<"added time is:";
        cout<<t1.h1<<":"<<t1.m1<<":"<<t1.s1<<endl;
    }
    void subtract_two_times(assigment t1, assigment t2){

        //handeling the second 
        if(t1.s1<t2.s1){
            t1.s1 += 60;
            t1.m1 -= 1;
        }
        t1.s1 -= t2.s1;

        //handeling the minutes
        if(t1.m1 < t2.m1){
            t1.m1 += 60;
            t1.h1 -= 1;
        }
        t1.m1 -= t2.m1;

        //handeling the hour
        t1.h1 -= t2.h1;
        cout<<"subtracted time is:";
        cout<<t1.h1<<":"<<t1.m1<<":"<<t1.s1<<endl;
    }
};

int main(){
    int hour1,min1,sec1;
    int hour2,min2,sec2;
    assigment time1;
    assigment time2;
    assigment time3;

    cout<<"enter your details of first time:";
    cin>>hour1>>min1>>sec1;
    cout<<"enter the details of second time:";
    cin>>hour2>>min2>>sec2;

    time1.assign(hour1, min1, sec1);
    time2.assign(hour2, min2, sec2);

    //time3.add_two_times(time1, time2);
    time3.subtract_two_times(time1,time2);
}


[6] Write a C++ program to add and subtract two matrices of order RXC
using object as argument with return value method in a member
function.

#include<iostream>
using namespace std;
class matrix{
    int add_matrix(int a, int b){
        return a+b;
    }

};

int main(){
    int i=0,k=0,j=0;
    matrix1[2][2] = {{2,3}, {4,5}};
    matrix2[2][2] = {{3,4}, {6,8}};

    matrix mat;
    while(i!=4){
        cout<<mat.add_matrix(matrix1[j][k] + matrix2[j][k]);
        k++;
        if(k==2){
            j=1; k=0;
        }
    }
}

friend questions 
1.

#include<iostream>
using namespace std;


class strong{
    private:
    int no; 

    public:
    void assign(int p){
        no=p;
    }
    int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }
    int check(int p)
    {
        int rem, sum = 0;
        while(p){ //54 144
            //to get the individual digits
            rem=p%10;
            sum=sum+fact(rem);
            p=p/10;
        }
        return sum;
    }

    //friend function
    friend void verify(strong obj){
    
        for(int i=1;i<=obj.no;i++){
        if(obj.check(i)==i)
        cout<<i<<" "; //i = 123
        }
    }

};

int main(){

  strong ob;
  int num;
  cout<<"enter a range:"<<endl;
  cin>>num;
  ob.assign(num);
  verify(ob);
}


#include<iostream>
using namespace std;

class odd_natural_number{
    private:
    int num;
    public:
    void assign(int range_num){
        num = range_num;
    }

    //friend function
    friend void find_odd_natural_num(odd_natural_number number){
        int j = -1, sum = 0;
        for(int i=1;i<=number.num;i++){
            j+=2;
            sum += j;
        }
        cout<<"sum is:"<<sum<<endl;
    }
};

int main(){
    int range_num;
    odd_natural_number natural;
    cout<<"enter your range:";
    cin>>range_num;
    natural.assign(range_num);
    find_odd_natural_num(natural);


#include<iostream>
using namespace std;

class cube{
    private:
    int num;
    public:
    void assign(int range_num){
        num = range_num;
    }

    friend void find_cubes(cube number){
        cout<<"cubes of the respectives numbers are"<<endl;
        for(int i=1;i<=number.num;i++)cout<<i * i *i<<endl;
    }

};

int main(){
    int range;
    cube number;
    cout<<"enter your range upto which you want to find the cubes:";
    cin>>range;
    number.assign(range);
    find_cubes(number);
return 0;
}

#include<iostream>
using namespace std;
class AP{
    private:
    int num_events, cd, first_num;
    public:
    void assign_details(int count_num, int c_d, int first_number){
        num_events = count_num;
        cd = c_d;
        first_num = first_number;
    }

    friend void print_sum(AP sum_series){
        int sum = 0, j = 0;
        j = sum_series.first_num;
        for(int i=1;i<=sum_series.num_events;i++){
            sum += j;
            j += sum_series.cd;
        }
        cout<<"sum of the series is:"<<sum<<endl;
    }
};

int main(){

    int initial_num, common_diff, num_counts;
    cout<<"enter the first number:";
    cin>>initial_num;
    cout<<"enter the common differnce:";
    cin>>common_diff;
    cout<<"enter number of numbers you have:";
    cin>>num_counts;

    AP progression;
    progression.assign_details(num_counts, common_diff, initial_num);
    print_sum(progression);
return 0;
}

#include<iostream>
using namespace std;
class sum_series{
    private:
    int range_num1, range_num2;
    public:
    void assign(int range_first,int range_second){
        range_num1 = range_first;
        range_num2 = range_second;
    }

    friend void find_sum_series(sum_series sum){
        int sum1, sum2;
        sum1 = ((sum.range_num1) * (sum.range_num1 + 1))/2;
        sum2 = ((sum.range_num2) * (sum.range_num2 + 1))/2;
        cout<<"your sum is:"<<sum2 - sum1 + sum.range_num1<<endl;
    }
};

int main(){
    int range1, range2;
    cout<<"enter your range of number:";
    cin>>range1>>range2;
    sum_series sum;
    sum.assign(range1, range2);
    find_sum_series(sum);
return 0;
}

#include<iostream>
using namespace std;
class fibonacci{
    private:
    int num_sequence;
    public:
    void assign(int num_count){
        num_sequence = num_count;
    }

    friend void print_fibonacci(fibonacci fiboo){
        int a = 1, b = 1, c = 0;
        cout<<0<<" "<<1<<" ";
        for(int i=1;i<=fiboo.num_sequence - 2;i++){
            cout<<a<<" ";
            c = a; 
            a = a+b;
            b = c; 
        }  
    }
};

int main(){
    int total_sequence;
    cout<<"enter total sequence you want to print:";
    cin>>total_sequence;
    fibonacci fibo;
    fibo.assign(total_sequence);
    print_fibonacci(fibo);

return 0;
}

#include<iostream>
using namespace std;
class divisible_by_7{
    private:
    int range_1, range_2;
    public:
    void assign(int range1, int range2){
        range_1 = range1;
        range_2 = range2;
    }

    friend void find(divisible_by_7 div){
        int sum = 0;
        for(int i = div.range_1; i<div.range_2; i++)
            if(i % 7 == 0)
                sum += i;
        cout<<"sum is:"<<sum<<endl;
    }

};

int main(){
    divisible_by_7 divide;
    divide.assign(100, 200);
    find(divide);

return 0;
}