Problem1:
Write code for class hierarchy involving three classes viz. Base, Derived1 &
Derived2. Derived2 is derived from Derived1 which, in turn, is derived from Base.
Each class has only one data member of type int. Write the necessary member
function so that the following code works correctly.
Each function shall have a cout statement that prints the name of the function.
int main(){
 Base base1;
 Derived1 d1;
 Derived2 d2;
return 0;
}

Problem2:
Modify the class hierarchy written in Problem1 above so that the following code
executes successfully.
Each function shall have a cout statement that prints the name of the function.
int main(){
 Derived1 d1(2,4);
 Derived2 d2(10, 20, 30);
d2.print(); //The function shall print the values.
return 0;
}
(Note: No getters/setters shall be written.)

Problem3:
Modify the class hierarchy written in Problem2 above so that the following code
executes successfully.
Each function shall have a cout statement that prints the name of the function.
int main(){
 Derived2 d2(10, 20, 30);
 Derived2 d3 {d2};
d2.print();
cout << endl;
d3.print();
d3.setValue(-12);
d2 = d3;
cout << endl;
d2.print();
return 0;
}

Problem4:
Modify the class hierarchy written in Problem2 above so that the following code
executes successfully.
Each function shall have a cout statement that prints the name of the function.
int main(){
 Derived2 d2(10, 20, 30);
 Derived2 d3 {d2};
cout << d2 <<endl;
cout << d3 <<endl;
d3.setValue(-12);
d2 = d3;
cout << d2 << endl;
return 0;
}
