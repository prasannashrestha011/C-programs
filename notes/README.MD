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
 ```c 
      int main()
      {
        int a = 10, b = 0,result; 
        result = 10 / 0; 
      } 
  ``` 
3.Logical errors->This types of error complie and execute correctly,but the output is incorrect.
                    for example->
```c
                          calSum(){
                            int a=10,b=5,sum;
                             sum=a*b;
                          }
        
```
In this code , * operator is  used,instead of + for calculating sum which is a logical error.

4.Linkers errors(Missing function or variabels)->This types of error occurs when we try to call or reference a function or 
                                                  variable that hasnt been defined in the file;
                                                  for example->
```c
                                                  int main(){
                                                      sayHello();
                                                   }

```
Here the function sayHello has not been declared in the code.

5.Semantic errors->Semantic errors are the errors where code runs, but the expected output doesnot occured.It is closely 
                    related to Logical error.It includes #wrong use of operation#,#incorrect data type #.
```c
                      int x="hello";
```
                      
## Q2.What are top down and bottom up approach in programming ?Discuss.Also diff between them.
### Top down ### -The top down approch in programming is also called step-wise method.It involves breaking down 
                     large code into smaller,managable part.This methods starts with broad overview of the system which is 
                     then decomposed into small subsystems and further into individual components such as classes and methods.
                     This approach is commonly used by language likes ## C,COBOL,FORTAN . 
### Bottom up ### -In this approach the programs starts with small reusable components which gradually builds up large system                       This approach focuses on developing and testing small modules before integrating them into large system.
              Main benefit of this approach is reusability of the codes and foundational understanding of the system.


| Aspect               | Top-Down Approach                                                    | Bottom-Up Approach                                                   |
|----------------------|----------------------------------------------------------------------|----------------------------------------------------------------------|
| 1. Starting Point    | Begins with the main system and breaks it down into smaller parts.   | Begins with small components and integrates them to build the system.|
| 2. Design Flow       | Follows a step-wise improvement from higher-level to lower-level.     | Builds from detailed parts toward the complete system.               |
| 3. Focus             | Focuses on understanding the complete system first.                  | Focuses on developing well-tested modules first.                     |
| 4. Code Reusability  | Less emphasis on reusability.                                         | Encourages reusability of modules across systems.                    |
| 5. Common Use        | Used in procedural programming languages (C, COBOL, etc.).            | Used in object-oriented languages (Java, C++, etc.).                 |

