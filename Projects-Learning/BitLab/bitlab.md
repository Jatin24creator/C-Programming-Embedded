# 🧠 BitLab - Complete Learning Roadmap

## Goal

Build a complete STM32-style Register Simulator from scratch while mastering bit manipulation.

Final Deliverable:

* Register Simulator
* GPIO Simulator
* Packet Decoder
* Permission System
* Interrupt Flags
* Memory-Mapped Registers
* STM32-style Peripheral Emulation

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 0 — Binary Foundations

## Milestone 0.1 — Decimal to Binary Converter

### Problem Statement

Create a program that accepts a decimal number and prints its binary representation.

### Example

Input:

13

Output:

1101

### Learning Objectives

* Understand bits
* Binary representation
* Decimal ↔ Binary conversion
* Number systems

### Hint (If Stuck)

Repeatedly divide by 2 and store remainders.

### Test Cases

| Input | Expected Output |
| ----- | --------------- |
| 13    | 1101            |
| 255   | 11111111        |
| 0     | 0               |
| 1     | 1               |
| 128   | 10000000        |

### Pass Criteria

✅ No leading zeros

✅ Handles 0 correctly

✅ Handles powers of 2

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 0.2 — Binary Visualizer

### Problem Statement

Print a fixed 8-bit representation of any number.

### Example

Input:

13

Output:

00001101

### Learning Objectives

* Bit positions
* MSB and LSB
* Fixed-width integers

### Hint

Use bit shifting.

### Test Cases

| Input | Expected |
| ----- | -------- |
| 13    | 00001101 |
| 255   | 11111111 |
| 0     | 00000000 |
| 1     | 00000001 |

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 1 — Bitwise Operators

## Milestone 1.1 — AND Operator

### Problem Statement

Implement your own bitwise AND calculator.

### Example

12 & 10

1100

1010

Result:

1000

Answer:

8

### Learning Objectives

* Masking
* Common bits

### Hint

Only bits that are 1 in both numbers survive.

### Test Cases

| A  | B  | Result |
| -- | -- | ------ |
| 12 | 10 | 8      |
| 7  | 3  | 3      |
| 15 | 0  | 0      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 1.2 — OR Operator

### Problem Statement

Implement a bitwise OR calculator.

### Learning Objectives

* Combining flags
* Bit enabling

### Hint

If either bit is 1 → output 1

### Test Cases

| A  | B  | Result |
| -- | -- | ------ |
| 12 | 10 | 14     |
| 7  | 3  | 7      |
| 0  | 0  | 0      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 1.3 — XOR Operator

### Problem Statement

Implement XOR calculator.

### Learning Objectives

* Toggle logic
* Difference detection

### Hint

Same bits = 0

Different bits = 1

### Test Cases

| A  | B  | Result |
| -- | -- | ------ |
| 12 | 10 | 6      |
| 5  | 5  | 0      |
| 1  | 0  | 1      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 1.4 — NOT Operator

### Problem Statement

Flip every bit.

### Learning Objectives

* Two's complement
* Bit inversion

### Hint

Use uint8_t

### Test Cases

| Input | Output |
| ----- | ------ |
| 0x00  | 0xFF   |
| 0xFF  | 0x00   |
| 0x55  | 0xAA   |

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 2 — Single Bit Operations

## Milestone 2.1 — Set Bit

### Problem Statement

Turn ON a specific bit.

### Example

Input:

8

1000

Set bit 0

Output:

1001

Answer:

9

### Learning Objectives

* Bit masks
* Enabling flags

### Hint

Use OR

### Formula

number |= (1 << position)

### Test Cases

| Number | Position | Result |
| ------ | -------- | ------ |
| 8      | 0        | 9      |
| 8      | 1        | 10     |
| 0      | 7        | 128    |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 2.2 — Clear Bit

### Problem Statement

Turn OFF a specific bit.

### Learning Objectives

* Inverted masks

### Hint

Create mask then invert it.

### Formula

number &= ~(1 << position)

### Test Cases

| Number | Position | Result |
| ------ | -------- | ------ |
| 15     | 0        | 14     |
| 15     | 1        | 13     |
| 15     | 3        | 7      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 2.3 — Toggle Bit

### Problem Statement

Flip one bit.

### Learning Objectives

* XOR usage
* Feature toggles

### Hint

XOR with 1 flips.

### Test Cases

| Number | Position | Result |
| ------ | -------- | ------ |
| 8      | 3        | 0      |
| 8      | 0        | 9      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 2.4 — Read Bit

### Problem Statement

Determine whether a bit is ON or OFF.

### Learning Objectives

* Status flags
* Bit extraction

### Hint

Shift first, then mask.

### Test Cases

| Number | Position | Result |
| ------ | -------- | ------ |
| 13     | 0        | 1      |
| 13     | 1        | 0      |
| 13     | 2        | 1      |
| 13     | 3        | 1      |

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 3 — Register Simulator

## Milestone 3.1 — Single Register Simulator

### Problem Statement

Create an 8-bit register and allow users to modify it.

### Features

* Set Bit
* Clear Bit
* Toggle Bit
* Read Register

### Learning Objectives

* Registers
* Embedded systems fundamentals

### Example

Set 2

00000100

Set 5

00100100

Clear 2

00100000

### Test Sequence

| Action  |
| ------- |
| Set 2   |
| Set 5   |
| Clear 2 |

Expected:

00100000

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 3.2 — Multi Register Simulator

### Problem Statement

Simulate multiple hardware registers.

Registers:

STATUS

CONTROL

ERROR

DATA

### Learning Objectives

* Peripheral architecture
* Register maps

### Commands

read STATUS

set STATUS 4

clear CONTROL 5

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 4 — Bit Masks

## Milestone 4.1 — Hardware Control Flags

### Problem Statement

Create masks for devices.

### Definitions

LED1 = bit 0

LED2 = bit 1

MOTOR = bit 2

### Learning Objectives

* Symbolic masks
* Embedded readability

### Test Cases

| Enabled     | Result   |
| ----------- | -------- |
| LED1        | 00000001 |
| LED1 + LED2 | 00000011 |
| MOTOR       | 00000100 |
| ALL         | 00000111 |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 4.2 — Permission System

### Problem Statement

Store user permissions inside one byte.

### Permissions

READ

WRITE

DELETE

ADMIN

### Learning Objectives

* Compact data storage
* Real-world permissions

### Test Cases

| Permission | Result |
| ---------- | ------ |
| READ       | 1      |
| READ+WRITE | 3      |
| ADMIN      | 8      |
| ALL        | 15     |

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 5 — Packet Decoder

## Milestone 5.1 — Embedded Packet Parsing

### Problem Statement

Decode an incoming status packet.

Input:

0xB5

Binary:

10110101

### Meaning

Bit0 = LED

Bit1 = Motor

Bit2 = Alarm

Bits3-4 = Speed

Bits5-7 = Mode

### Learning Objectives

* UART parsing
* CAN decoding
* Protocol design

### Test Cases

0x00

0xFF

0xA5

0x3C

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 6 — Bit Compression

## Milestone 6.1 — 32 LED Controller

### Problem Statement

Control 32 LEDs using a single uint32_t.

### Commands

ON 5

OFF 12

TOGGLE 31

### Learning Objectives

* Memory optimization
* Packed data structures

### Challenge Test

Perform 100 random operations and verify final state.

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 7 — Advanced Bit Algorithms

## Milestone 7.1 — Count Set Bits

### Problem Statement

Count how many bits are ON.

### Example

11110010

Answer:

5

### Test Cases

| Input | Result |
| ----- | ------ |
| 0     | 0      |
| 255   | 8      |
| 15    | 4      |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 7.2 — Power of Two Checker

### Problem Statement

Determine if a number is a power of two.

### Learning Objectives

* Classic interview problem
* Bit patterns

### Hint

n & (n-1)

### Test Cases

| Input | Result |
| ----- | ------ |
| 1     | TRUE   |
| 2     | TRUE   |
| 4     | TRUE   |
| 8     | TRUE   |
| 7     | FALSE  |
| 10    | FALSE  |

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 7.3 — Parity Checker

### Problem Statement

Detect even or odd parity.

### Test Cases

1111 → EVEN

111 → ODD

━━━━━━━━━━━━━━━━━━━━━━

# PHASE 8 — STM32 Register Emulator

## Milestone 8.1 — RCC Clock Enable

### Problem Statement

Simulate RCC clock enable register.

### Learning Objectives

* Peripheral clocks
* MCU startup sequence

### Example

RCC_AHBENR |= (1<<0)

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 8.2 — GPIO Configuration

### Problem Statement

Configure GPIO pin modes using register manipulation.

### Learning Objectives

* MODER register
* Pin configuration

━━━━━━━━━━━━━━━━━━━━━━

## Milestone 8.3 — GPIO Output Control

### Problem Statement

Toggle virtual LEDs through ODR register.

### Learning Objectives

* Register-level GPIO programming

━━━━━━━━━━━━━━━━━━━━━━

# FINAL BOSS PROJECT

## Mini STM32 Register Simulator

### Features

☐ RCC

☐ GPIO

☐ STATUS FLAGS

☐ ERROR FLAGS

☐ PACKET DECODER

☐ PERMISSION SYSTEM

☐ MEMORY MAP

☐ COMMAND LINE INTERFACE

☐ REGISTER INSPECTOR

☐ REGISTER EDITOR

### Graduation Challenge

Input:

0xA53C7F11

Extract:

* Device ID
* Status
* Error Code
* Command

Using ONLY:

&
|
^
~
<<

> >

No loops.

No libraries.

No helper functions.
