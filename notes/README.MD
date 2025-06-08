programs errors are the mistakes in the code that makes the programs work incorrectly.

types of Program errors->
1. Syntax errors->Syntax error refers to the errors that are caused by breaking the rules of programming language.
  Each programming language has sets of syntax rules and its complier or interpreter expects user to write code by following those  regulations. 
  for example-> 
    int main(){
          printf("Hello world" // no closing bracket
    }
2. Runtime errors->This types of error occures during program execution.The program is correctly complied,but crashes during 
                  execution.
                  for example->
                   # 
                    int main(){
                      int a=10,b=0,result;
                        result=10/0;

                    }
                  #
                  Here the program may crash since we are not allowed to divide numerator by 0
                  The run times error may also occur when we try to access null pointers,accessing index out of array bound
  3.Logical errors->This types of error complie and execute correctly,but the output is incorrect.
                    for example->
                       calSum(){
                        int a=10,b=5,sum;
                        sum=a*b;
                      }
                    #In this code , * operator is  used,instead of + for calculating sum which is a logical error.
  4.Linkers errors(Missing function or variabels)->This types of error occurs when we try to call or reference a function or 
                                                  variable that hasnt been defined in the file;
                                                  for example->
                                                    int main(){
                                                      sayHello();
                                                    }
                                                  #Here the function sayHello has not been declared in the code;
  5.Semantic errors->Semantic errors are the errors where code runs, but the expected output doesnot occured.It is closely 
                    related to Logical error.It includes #wrong use of operation#,#incorrect data type #.
                      int x="hello";
                      
                      




