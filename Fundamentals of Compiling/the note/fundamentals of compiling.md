# Compiler

-   Diagnostic Compiler
-   Optimizing Compiler
-   Cross Compiler
-   Retargetable Compiler

# Interpreter

-   Different from Compiler, won't create a target low-level program, it reads a sentence and explain one.a

## Compilation process

### Lexical Analysis

-   task: input the source program, then scan an decompose the strings in it, find the sign of words.
-   Principle: the rule of Word-building.
-   Description tool: Limited auto Machine

| for        | i          | :=         | 1   | to         | 100 | do         |
| ---------- | ---------- | ---------- | --- | ---------- | --- | ---------- |
| Basic-word | Identifier | Assignment | int | Basic-word | int | Basic-word |

### Syntax Analysis

-   task: on then fundamental of lexical analysis, we decompose the sign strings into syntax units with the syntax rule.
-   Principle: syntax analysis
-   Description tool: Context-free Grammar
    $$z :=x+0.618\ast Y$$
-   0.618 \* Y  become the 1-arithmetic-expression
-   x + 1-arithmetic-expression makes 2-arithmetic-expression
-   Z , :=, and 2-arithmetic-expression makes the Assignment expression;

### Intermediate Code

-   task: do preliminary translation for all kinds of Syntax Units by the  <font color=red>Meaning</font> of language.


-   Principle: Meaning Rule;
-   Description tool: Attribute Grammar;
-   Intermediate Code: 3-element-expressions, 4-elements-expression, tree and etc;
    $$z :=x+0.618\ast Y$$

| Serial Number | OPR |  OPN1 | OPN2 | RESULT |      ANNOTATION     |
| :-----------: | :-: | :---: | :--: | :----: | :-----------------: |
|      (1)      |  \* | 0.618 |   Y  |   T1   | $T1:=0.618 \ast Y$ |
|      (2)      |  +  |   x   |  T1  |   T2   |      $T2:=X+T1$     |
|      (3)      |  := |   T2  |      |    Z   |       $Z:=T2$       |

### Optimization

-   task: processing the Intermediate code before, to produce a more effective target code.
-   Principle: Equivalence Translation


            FOR K:=1 TO 100 DO
            BEGIN
              X:=I+1;
              M := I + 10 * K;
              N := J + 10 * K;
            END

| Serial Number |  OPR  | OPN1 | OPN2 | RESULT |       ANNOTATION       |
| :-----------: | :---: | :--: | :--: | :----: | :--------------------: |
|      (1)      |   :=  |   1  |      |    K   |          K:=1          |
|      (2)      | j&lt; |   K  |  100 |  (10)  | if(100&lt;l) goto (10) |
|      (3)      |   +   |   I  |   1  |    X   |         X:=I+1         |
|      (4)      |   \*  |  10  |   K  |   T1   |      T1 = 10 \* K      |
|      (5)      |   +   |   I  |  T1  |    M   |       M = I + T1       |
|      (6)      |   \*  |  10  |   K  |   T2   |       T2 = 10\* K      |
|      (7)      |   +   |   J  |  T2  |    N   |         N:=J+T2        |
|      (8)      |   +   |   K  |   1  |    K   |         K:=K+1         |
|      (9)      |   J   |      |      |   (2)  |         goto(2)        |
|       10      |       |      |      |        |                        |

Optimization

| Serial Number |  OPR  | OPN1 | OPN2 | RESULT |        ANNOTATION       |
| :-----------: | :---: | :--: | :--: | :----: | :---------------------: |
|      (1)      |   +   |   I  |   1  |    X   |          X:=I+1         |
|      (2)      |   :=  |   I  |      |    M   |           M:=I          |
|      (3)      |   :=  |   I  |      |    N   |           N:=J          |
|      (4)      |   :=  |   1  |      |    K   |           K:=1          |
|      (5)      | j&lt; |  100 |   K  |  (10)  | if (100&lt;K) goto (10) |
|      (6)      |   +   |   M  |  10  |    M   |          M=M+10         |
|      (7)      |   +   |   N  |  10  |    N   |          N=N+10         |
|      (8)      |   +   |   K  |   1  |    K   |          K=K+1          |
|      (9)      |   J   |      |      |   (5)  |         goto (5)        |
|      (10)     |       |      |      |        |                         |

### Target code

-   task: translate the Interpreter Code into Target code of special Machine.
-   relay on the Hardware System Structure and the Meaning of Machine Instructions
-   Three types of target code

    -   Assembly code: need to assemble
    -   Absolute Instruction code: can run directly
    -   Retargetable Instruction code: need to link

-   Example
    -   b=a+2
            ```assembly
            MOV a, R1
            ADD #2, R2
            MOV R1, b
            ```
            ```binary
            0001 01 00 00000000 *
            0011 01 10 00000010
            0100 01 00 00000100 *
            ```
        Compilation Frame
-   source code
-   Lexical Analysis
-   Syntax Analysis
-   Meaning Analysis and Intermediate code
-   Optimizing
-   Creator of Target code

## Error Processing

### Find the error

-   Syntax error
    -   error don't meeting rule
    -   illegal
-   Meaning error

## pass

-   scan the source program or its Intermediate code once
-   Stage if different from pass
    -   a pass can be consist of one or more stages.
    -   a stage can also be consist of one or more stages.

## Compilation front-end and back-end

source-code -(front-end)-> Intermediate language -(back-end)-> target-code

-   front-end
    -   linked with source code, lexical analysis, meaning analysis, creation of intermediate code, NOT linked with the machine.
-   back-end
    -   linked with target machine, optimization with the target machine, creation of the target code
-   Pros
    -   Better logical Structure
    -   Better optimization, better to transfer  

## Compilation Program Build

-   Use Machine Language and Assembly Language as tools
    -   pros: more effective;
    -   cons: hard to read, hard to write
-   Use high-level language
    -   easy to read, understand
-   Transformation
    -   transfer one Compilation Code from one machine to another machine
-   self Compilation
    \*
    -   LEX: lexical analysis producer
    -   YACC: Syntax analysis producer

# High-Level-Programming-Language

## Usually High-Level-Programming-Language

| Language  | Features                           |
| :-------- | :--------------------------------- |
| FORTRAN   | Number arithmetic                  |
| COBOL     | Handle Affairs                     |
| PASCAL    | Structural Programming             |
| LISP      | Functional Programming             |
| PROLOG    | Logical Programming                |
| C         | System Programming                 |
| Smalltalk | Object-oriented Programming        |
| Java      | Internet Application, transferable |
| Python    | Explanatory, dynamic coding        |

## pros

-   compare with Machine Language and Assembly Language
    -   more close to math language and engineering language, more direct, natural and easier to understand.
    -   more easy to debug
    -   more effective Compilation
    -   more easy to transfer

## Definition of Programming Language

-   Syntax

    -   Program is string.
    -   Syntax: a rule with which can form can create a well-formed program
    -   lexical rule: the building rule of letter
        -   letter is the basic unit which has independent meaning
        -   Usually including: number, sign, basic-words, operator, Delimiter
        -   Description tool: limited automatic machine
    -   Syntax rule: the building of Syntax unit

        -   Usually including: expression, statement, Subprogram, process, function, program and etc.
        -   Description tool: Context-free Grammar

        Grammar

        -   E -> i
        -   E -> E+E
        -   E -> E\*E
        -   E -> (E)

-   Semantic
    -   a rule, with which can define the meaning of a program
        -   Description
            -   Natural Language
                -   ambiguity, hidden error, Imperfection
            -   Formal Description
-   pragmatics

## The basic function and level Structure of Programming language

Program, a process of certain data

-   The Basic function of Programming language
    -   Describe data and Process data
-   Level Structure of Program

Program  
\|  
Subprogram, process, function  
\|  
statement  
\|  
expression  
\|
data call, operator, call of function

## The logic and Realizing meaning of Programming Language Composition

-   abstract logical meaning
    -   math meaning
-   the meaning of computer realizing
    -   concrete realization

## The Usual Features of High-Level-Programming-Language

-   Imperative Language/(Process Language)
-   Applicative Language
    -   pay attention to function
-   Rule-based Language
    -   check condition, if contend, executing
-   Object-Oriented Language
    -   package, inheritance, more-conditions

### Programming Structure

-   FORTRAN
    -   a program consist of main program and one or more Subprograms
    -   Subprogram can be child-program, function, data-block
    -   Every program paragraph consist of a series of Instruction statement, and executing statement, each part can be compiled independently
    -   module structure
    -   name independent
-   PASCAL

-   ### Scope
-   one Identifier in different process represent different name.
-   Scope: a block range where a name can be used

-   Java
    -   Object-Oriented Language
        -   Class
        -   inheritance

### Data element and Operation

-   Three elements
    -   The <font color=red>Attribute</font> to distinguish this type of data element
    -   The <font color=red>Value</font> this type of data element can own.
    -   The <font color=red>operation</font> that can function on this type of data element
-   Basic data elements
    -   number type
        -   int, float, complex, double
        -   operation: +, -, \*, /etc
-   logical data element
    -   true, false
    -   Boolean operation: and or !
-   string type: letter process
-   pointer type

### Identifier and Name

-   Identifier
    -   string start with alphabet, consist of letters and numbers
-   Name

    -   the Object in identifying program

-   Identifier and Name

    -   Value: content in the unit
    -   Attribute: type and scope

-   The statement of Name
    -   Ruled by the statement vividly
        -   int score
    -   hidden statement
        -   FORTRAN, start with "I,J,L,,N" is int type, else float
    -   dynamic
        -   go to where, be something here

## Data Structure

-   Array
    -   Logically
    -   auto or not auto
        -   fixed size when compiling
        -   not fixed
    -   Access  
        -   name and  subscript, such as A[10, i+j]
    -   Storage ways
        -   store in raw, store in column
    -   Record (struct)
        -   a structure is the combination of known type elements
        -   filed, the elements of record or struct
        ```PASCAL
        record{
          char name[20];
          integer age;
          bool married;
        } cards[1000]
        ```
        -   visit:  card[k].name
        -   Storage: continuous storing
        -   The operation of field
            -   OFFSET
-   string, table, stack

    -   string
    -   table
    -   node
    -   stack

-   Abstract Data Type
    -   A set of data values and associated operations that are precisely sepcified independent of any particular implementation.
    -   Three elements
        -   Data Object set
        -   set function on these Data Objects' abstract operation.
        -   Package of these type of object
-   Programming Language's support for abstract date type

        -   Ada's package

        ```Ada
        ......rule Instruction
        package STACK is
          type ELEM is private;
          type STACK is limited private;
          procedure push (S: in out STACK; E: in ELEM);
          procedure pop (S: in out STACK; E: out ELEM);
          ...
        end STACK;
        ```

        ```Ada
          ......the package
        package body STACK is
          procedure push (S: in out STACK; E: in ELEM);
          begin
          ......details
          end push;
          procedure pop (S: in out STACK; E: out ELEM);
          begin
          ......details
          end pop;
        end;
        ```

        -   Smalltalk, C++, Java these Object-Oriented Language uses classes  
            Java Example

        ```Java
        class car{
          int color_number;
          int door_number;
          int speed;
          ...
          public push_break(){
            ...
          }
          public add_oil() {
            ...
          }

          class Trash_Car extends car{
            double amount;
            public fill_trash (){
              ...
            }
          }
        }
        ```

    ## Statement and Control System


-   Expression
    -   Expression is consist of operating numbers and operators.
    -   Form: Prefix Expression, Infix Expression, Postfix Expression
    -   Expression Building Rule
        -   variable, constant are expressions
        -   If E1, E2 are expressions, $\\theta$ is a 2-elements-operator, then $E1\\theta E2$ is an expression.
        -   If E is an expression, $\\theta$ is a 1-element-operator, then $\\theta E$(or $E\\theta$) is an expression.
        -   If E is an expression, then (E) is an expression.  

## The priority of operator

-   Regular rule
    -   PASCAL: left combination- $A+B+C=(A+B)+C$
    -   FORTRAN: if an operator meet meeting both left and right combination, can choose any of them, $A+B+C=(A+B)+C$, or $A+B+C=A+(B+C)$
    -   Algebraic Attributes
        -   decided by language
        -   not Equivalent with math completely
    -   Assignment Statement
        -   $A := B$
        -   Left value of name: means the address of the Storage Units which is represented by the name
        -   Right value of name; means the content of the Storage Units which is represented by the name
    -   Control Statement
        -   Unconditional Transfer Statement
            ```PASCAL
            goto L
            ```
        -   conditional Statement
            ```PASCAL
            if B then S
            if B then S1 else S2
            ```
        -   Loop Statement
            ```PASCAL
            while B do S
            repeat S until B
            for i:=E1 step E2 until E3 do S
            ```
        -   Process Call Statement
            ```PASCAL
            call P(X1,X2,X3,...,Xn)
            ```
        -   Return Statement
        ```PASCAL
        return(E)
        ```
-   Division of Statement
      Function

    -   Executing Statement: Describe the operation of program
    -   Instruction Statement: Define different date types of variable, define the attributes of name  
        Form  
    -   Simple Statement: a basic statement without other statement
            A = B + C;
            goto 105;
    -   Complex Statement: a statement with another statement
            ```
            while (i >= 0) {
              j = i * 10;
              i ++;
            ```
        ## the Syntax Description of High-level Programming Language

-   Grammar
    -   the rule of natural language

### Basic Concept of Syntax Description

-   <font color=red>Alphabet</font>: a finite char set, referred to as $\\Sigma$
-   Element in alphabet is called char
-   string in $\\Sigma$ is a finite sequence consisting of chars in alphabets
-   a sequence without any char is called empty string, referred to as $\\epsilon$
-   $\Sigma$\* to represent all strings in $\\Sigma$, $\\epsilon$ is also included.
-   EXAMPLE, assuming $\\Sigma$ = {a , b}, then
-   $\Sigma$\* 's child set U and V's <font color=red>connection</font>(<font color=red>product</font>)'s definition is  
    $$UV = \{ \alpha\beta|\alpha\in U \&\beta\in V \}$$
-   EXAMPLE: assuming  
    $$U={a, aa}$$
    $$V={b, bb}$$

then $UV={ab, abb, aab, aabb}$  
<font color=red>ATTENTION</font>: it's ordered!

-   $V^n=VV\\ldots V$
-   $V^0={\\epsilon}$
-   V_ is the <font color=red>closure</font> of V: $V_=V^0\cup V^1\cup V^2\cup V^3\cup\ldots$
-   V+ is the <font color=red>Regular Closure</font> of $V^* $
-   Assuming  
    $$U={a, aa}$$  
    then:  
    $$U^* = \{\epsilon, a, aa, aaa, aaaa, \ldots\}$$  
    $$U^+=\{a, aa, aaa, aaaa,\ldots\}$$

### Context-free Grammar

-   Context-free Grammar **G** is a 4-element-tuple  
    $G=(V_T, V_N, S,P)$,
    -   $V_T$: <font color=red>Terminal</font> set (not empty) (like he she me book, can't be parted)
    -   $V_N$: <font color=red>Nonterminal</font> set (not empty), and $V_T\cap V_N = \phi$   (like sentence)
    -   S:<font color=red>Start Symbol</font> of the Grammar, $S\in V_N$
    -   P:<font color=red>Producing Relation Expression</font> set (finite), it's form
        $ P -> \alpha$, $P\in V_N$, $\alpha \in (V_T \cup V_N)^\ast$
    -   Example
        Define the Grammar only containing +, * (arithmetic)  
        $G=<\{i, +, \ast, (,)\}>,\{E\}, E,P>$, and P is consist of the following things:  
        $E->i$  
        $E->E+E$  
        $E->E\ast E$  
        $E->(E)$  
        can be simplified into $E->i|E+E|E\ast E|(E)$
-   BNF(Backus Normal Form)
    -   Decision  
      $$ P->\alpha_1, P->\alpha_2, \ldots, P->\alpha_n $$  
      can be simplified into  
      $$P ->\alpha_1|\alpha_2|\ldots|\alpha_n$$
      -   "|" means "or"
      -   Give a start Symbol and product expression before expressing a Grammar

* Derivation
  * Most left and Most right derivation
  * Grammar Tree
    * Grammar tree means different derivation process
  * Parse Tree and ambiguity
    * ambiguity of Grammar: if a grammar to a sentence develop two different Parse Tree, we call this <font color=red>grammar is ambiguous</font>.
    * ambiguity of Language: a <font color=red>language is ambiguous</font>, if to it, don't contain don't own a grammar without ambiguity
      * To L, may exist G and G', makes $L(G)=L(G')=L$, maybe one of them is ambiguous, but the other is not ambiguous.
      * The full condition of judging a grammar has not ambiguity

# Lexical Analysis
* task of lexical analysis
   * scan the source code literally, and produce a sign
* Lexical Analyzer
    * Scanner
    * Program of Lexical Analysis
* Function of Lexical Analyzer
  * Function
    * input source code, output tokens
  * Types of word tokens
    * <font color=red>Basic words</font>: begin, repeat, for,...
    * <font color=red>Identifier</font>: used to express all kinds of name, such as the name of a variable, array, process. (self defined)
    * <font close=red>constant number</font>: all types of numbers
    * <font color=red>operator</font>: +, -, \*, /,...
    * <font color=red>Delimiter</font>: '.', ';', 'bracket','blank'
  * Output of Lexical Analyzer
    * The expression form of the output tokens
      * (<font color=red>Token types</font>, <font color=red>Its value</font>)
    * The type of tokens  tend to be expressed by integer code
      *  if a type only own a token, then the token codes means the token, Assuming <font color=red>basic token</font>, <font color=red>operator</font>, <font color=red>Delimiter</font> is one token one type.
      * If a type has more than one tokens, to each token, we give its token code and its value.
        * Identifier is single one; its value means the inner code divided by machine bits.
  * EXAMPLE
  ```PASCAL
  if (5=m) goto 100
  ````      
    * output tokens

| Origin           | Output                     |
| ---------------- | -------------------------- |
| if               | (34, -)                    |
| left bracket     | (2, -)                     |
| Constant integer | (20,'5''s binary value)    |
| "="              | (6, -)                     |
| Identifier       | (26,   'm')                |
| right bracket    | (16, -)                    |
| goto             | (30, -)                    |
| tags             | (19, '100''s binary value) |


```C
while (i >= j) i--;
```
  * output tokens

  < while, - >  
  < ( , - >  
  < id , the pointer to i >  
  < >= , - >  
  < ) , - >  
  < id , the pointer to j >  
  < -- , - >  
  < ; , - >  

* Structure of Lexical Analyzer
  * input buffer
  * Pre-processing child program
  * Scanner
  * Scan buffer
    * two half sector
      * Start pointer
      * Search pointer

  * Pre-Search
    * Basic words distinguish
    * Identifier
    * Constant Number
    * With some limitation, We don't need to use pre-search
      * <font color=red> all basic words are reserved words</font>;the user can't use them as their Identifier.
      * If basic words, Identifier, constant number(or tags) is not parted with precise operator or delimiter, we must <font color=red>use a blank as space</font>  
      DO99K=1, 10  
      DO 99 K = 1, 10

    * State transformation diagram: a finite direct diagram
      * The <font color=red>node means</font> represents <font color=skyblue>state</font>, expressed with circle.
      * We connect the state with <font color=red>arrow arc</font>, the mark (letter) represents the possible input <font color=skyblue>tokens</font> or <font color=skyblue>Class of tokens</font> under the state of out of node.

* The realization of State Transformation Diagram
    * Global variable and process
      * <font color=red>ch</font> char variable, to store the latest read source program char
      * <font color=red>strToken</font> char array, to store the string which makes letters
      * <font color=red>GetChar</font> Subprogram process, to read the next char into ch
      * <font color=red>GetBC</font> Subprogram process, to jump the blank character, until read a not blank token in ch
      * <font color=red>Concat</font> Subprogram program, to link the token in char into the strToken
      * <font color=red>IsLetter</font> and <font color=red>IsDigital</font> Boolean Function, to judge whether the token in ch is (letter or number) or not.
      * <font color=red>Reserve</font> integer function, find the Reserve word table, if it's reserved words, give its code, else return 0
      * <font color=red>Retract</font> Subprogram, callback the search pointer a token
      * <font color=red>InsertId</font> integer function, insert the Identifier in strToken into token table, return the token table pointer
      * <font color=red>InsertConst</font> integer function process, insert the constant number of strToken into constant number table, return the constant integer table pointer

      ```
      int code,value;
      strToken := ""; /*set strToken as an empty string*/
      Getchar();GetBC();
      if (IsLetter())
      begin
        while (IsLetter() or IsDigit())
        begin
          Concat(); GetChar();
        end
        Retract();
        code := Reserve();
        if (code = 0)
        begin
          value := InsertId(strToken);
          return ($ID, value);
        end
        else
          return (code, -);
      end
      ```
