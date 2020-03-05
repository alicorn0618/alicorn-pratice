# The basic concept of computer

## What's computer

1.  Store program
2.  execute program
3.  progressing number information and output the result

5 basic logic module:
1. Input equipment: mouse, keyboard
2. Output equipment
3. Operate equipment
4. Storage equipment
5. controls

<font color=green size=50px>-></font>: <font color=orange size=50px>command information</font>

<font color=skyblue size=50px>-></font>: <font color=orange size=50px>control information</font>

<font color=yellow size=50px>-></font>: <font color=orange size=50px>data information</font>

<font color=white size=50px>-></font>: <font color=orange size=50px>status information</font>

<font color=yellow>the Operate and control have all been in CPU!</font>

### The digitizing expression of information

1.  Use digitizing code(binary code) to express all kinds of information
2.  number
3.  letter
4.  command, status
5.  Use digitizing signal(digitizing electronic signal) to represent digitizing code
6.  use the electric level signal(high and low)
7.  use pulse the
8.  The pros of digitizing information
9.  easy to realize physically
10. reliable
11. can have a higher ranger
12. can represent a lot kinds of information
13. can be progressed with digitize logic technology
    ### Work ways of storing program
14. coding and compiling program
15. store program
16. auto, continually execute program
17. output the result

the workflow of computer

-   coding the program
-   input the program
-   store the program
-   transform the program into command order
-   executing the command
-   output the result

## Type of computer

The computer is mainly divided into tow classes:  

-   analogue computer:  
    Features: made of analogue operating device, processing the the analogue continuously analogue value on time and number (such as: volt, electric stream etc) ;
-   digitizing computer:  
    Features: made of digitizing logic device, processing the discrete number value;

    1.  specialized computer: such as ATM
    2.  Universal computer

## The birth and development of computer

EDVAC (Von Neumann thought)  

### Von Neumann system

1.  represent program and data with binary code
2.  use the work ways of storing program
    store the program (<font color=yellow>core</font>)

### The development history of computer

| Type                  | period | main device     | main features |
| --------------------- | ------ | --------------- | ------------- |
| the first generation  | 46-57  | electronic tube |               |
| the second generation | 58-64  |                 |               |
| the third generation  | 65-71  |                 |               |
| the forth generation  | 71-~   |                 |               |

### The future development trends

1.  to large size direction
2.  to micro size direction
3.  to media direction
4.  to Internet direction
5.  to AI direction

## Organization of computer system

-   hardware
-   software

### The basic Organization of computer's hardware system

Main function device
1\. CPU (Central Processing Unit)  
  1. made of Arithmetic Unit and Controls Unit etc.
 Arithmetic Unit
    1\. function: processing two classes(arithmetic and logic) operation  

        * It's mainly made of ALU (Arithmetic Logical Unit), processing arithmetic, logical operation, circular displacement and etc. It's the main executing device of CPU function.
        * ALU's core is full adder, and has more arithmetic function
        * The more digits the operation owns, the higher precision the operation has, and the more complex the device is.
        * Its data width tend to be: 8 16 32 64.

 Controls Units
    1\. function: creating controls order, control all operation of the machine
2\. Storage Units
  1\. function: store the data and digitizing program.
    _ storage unit:
    _ address: the code of storage unit
    _ storage volume:unit: KB MB GB TB PB
    _ Inner Storage(memory): Random Access Memory(RAM) , a storage unit which store the program and data which providing service for CPU directly.
    \* Outside storage: hard disk
3\. I/O device
4\. Bus:  
  get more parts work together
  1\. Data Bus
  2\. Address Bus
  3\. Control Bus
5\. Interface

### Hardware Architecture of Micro and Small Computer

1.  Micro Computer: south-north architecture
2.  Small Computer: Multi-Processing-Unit architecture

### Hardware Architecture of Super Computer: Cluster Architecture

### The Features of Multi-Processing Device System

Structure of Multi-Processing Device System  
Features : made of more CPUs

### The level of software and hardware, and logical equality

#### The software system

Types of software: <font color=yellow>system program</font> and <font color=yellow>application program</font>  

The Structure Level of Hardware and Software:  

<hr />

-   <font color=yellow size=10px>System Analysis Level</font>  
-   <font color=yellow size=10px>User Program Level</font>  
-   <font color=yellow size=10px>Application Program Level</font>  
-   <font color=yellow size=10px>Language Processing Level</font>  
-   <font color=yellow size=10px>Operating System Level</font>  
-   <font color=orange size=10px>Machine Command Level</font>
-   <font color=skyblue size=10px>Micro System Level</font>
-   <font color=skyblue size=10px>Micro System Level</font>  
<hr />

<font color=yellow size=5px>Software part</font>  
<font color=orange size=5px>Interface of Software and Hardware</font>  
<font color=skyblue size=5px>Hardware part</font>

### The logical equality between software and hardware

-   Features of software:  
    Easy to realize all kinds of logical and arithmetic function,  
    but always limited by the speed index and the software's volume.  
-   Features of hardware:  
    Can realize the function of logical and arithmetic with high speed,  
    but hard to realize complex function or operation, being limited by the control Complexity index.

## The Performance Index of Computer System  
1. Basic Word size
    * the basic digits of a data operation
    * It will affect the precision, the function of command of the operation
2. External Clock(FSB: Front Side Bus Frequency)
3. Common CPU Performance Index
  1. Basic-Frequency = External-Clock * clock-Multiplier.
  2. IPS (Instruction Per Second)
  3. CPI (Clock-cycle Per Instruction)
  4. FLOPS (Float Per Second)
  5. Power Consumption
    * Dynamic Consumption $P=C*U^2*f$  
    * Static Consumption
4. Data Transfer Rate  
  $$ Bandwidth = \frac{bit width * work Frequency}{8}(B/S) $$

  Physics Meaning: the amount of transmitted data in a certain time.  

Example Question
Type of Instructions|Percentage|CPI
-|-|-
Transmission Instruction|40%|15
Double Operand Instruction|30%|20
Single Operand Instruction|20%|15
Transferable Instruction|10%|10

Assuming that this I/O program is made of 200 Instructions, CPU processes this program can output 4KB data side by side,  The Basic Clock of CPU is 32MHz, Please give the Bandwidth of I/O.  
Average CPI = 15\*40%+20\*30%+15\*20%+10\*10%=16  
The clock cycle of the program T=200\*16=3200
The times of the program executes per second = $Basic Frequency\div The clock cycle = 32M \div 3200$  
$I/O Bandwidth=(32M\div3200)\ast4KB=40MBps$  
5. the volume of memory
  * RAM volume  
  $The Number of Addressable Storage Units \ast bitwidth of Storage Units$
  * The Outside Memory  
    Hard-Disk:Byte, KB, MB, GB, TB
