#include "HaskinoRuntime.h"

void haskinoMain();
#define HASKINOMAIN_STACK_SIZE 208
byte haskinoMainTcb[sizeof(TCB) + HASKINOMAIN_STACK_SIZE];

void setup()
    {
    haskinoMemInit();
    createTask(255, haskinoMainTcb, HASKINOMAIN_STACK_SIZE, haskinoMain);
    scheduleTask(255, 0);
    startScheduler();
    }

void loop()
    {
    }

uint8_t ref0;
uint8_t ref1;
uint8_t ref2;
bool ref3;

void haskinoMain()
    {
    uint8_t bind1;
    uint8_t bind3;
    uint8_t bind4;
    uint8_t bind6;
    uint8_t bind7;
    uint8_t bind9;
    uint8_t bind10;
    uint8_t bind12;
    uint8_t bind13;
    uint8_t bind15;
    int32_t bind17;

    ref0 = 0;
    ref1 = 0;
    ref2 = 0;
    ref3 = 1;
    if (1)
        {
        pinMode(10,1);
        }
    else
        {
        }
    pinMode(8,1);
    pinMode(9,1);
    pinMode(4,1);
    pinMode(5,1);
    pinMode(6,1);
    pinMode(7,1);
    delayMilliseconds(50);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,(51 >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,(51 & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    delayMilliseconds(5);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,(50 >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,(50 & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,(((32 | (1 < 2) ? 8 : 0) | 0 ? 4 : 0) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,(((32 | (1 < 2) ? 8 : 0) | 0 ? 4 : 0) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    bind1 = ref1;
    if (0)
        {
        ref1 = setBW8(bind1,1);
        }
    else
        {
        ref1 = clrBW8(bind1,1);
        }
    bind3 = ref1;
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,((8 | bind3) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,((8 | bind3) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    bind4 = ref1;
    if (0)
        {
        ref1 = setBW8(bind4,0);
        }
    else
        {
        ref1 = clrBW8(bind4,0);
        }
    bind6 = ref1;
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,((8 | bind6) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,((8 | bind6) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    bind7 = ref0;
    if (1)
        {
        ref0 = setBW8(bind7,1);
        }
    else
        {
        ref0 = clrBW8(bind7,1);
        }
    bind9 = ref0;
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,((8 | bind9) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,((8 | bind9) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    bind10 = ref0;
    if (0)
        {
        ref0 = setBW8(bind10,0);
        }
    else
        {
        ref0 = clrBW8(bind10,0);
        }
    bind12 = ref0;
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,((8 | bind12) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,((8 | bind12) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,(2 >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,(2 & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    delayMicroseconds(200);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,(1 >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,(1 & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    delayMicroseconds(200);
    bind13 = ref1;
    if (1)
        {
        ref1 = setBW8(bind13,2);
        }
    else
        {
        ref1 = clrBW8(bind13,2);
        }
    bind15 = ref1;
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalPortWrite(4,((8 | bind15) >> 4),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    digitalPortWrite(4,((8 | bind15) & 15),15);
    digitalWrite(9,0);
    delayMicroseconds(1);
    digitalWrite(9,1);
    delayMicroseconds(1);
    digitalWrite(9,0);
    delayMicroseconds(2000);
    if (1)
        {
        digitalWrite(10,1);
        }
    else
        {
        }
    bind17 = 0;
    while (1)
        {
        uint8_t * bind19;
        uint8_t bind22;

        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalPortWrite(4,(1 >> 4),15);
        digitalWrite(9,0);
        delayMicroseconds(1);
        digitalWrite(9,1);
        delayMicroseconds(1);
        digitalWrite(9,0);
        delayMicroseconds(2000);
        digitalPortWrite(4,(1 & 15),15);
        digitalWrite(9,0);
        delayMicroseconds(1);
        digitalWrite(9,1);
        delayMicroseconds(1);
        digitalWrite(9,0);
        delayMicroseconds(2000);
        delayMicroseconds(200);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalPortWrite(4,(2 >> 4),15);
        digitalWrite(9,0);
        delayMicroseconds(1);
        digitalWrite(9,1);
        delayMicroseconds(1);
        digitalWrite(9,0);
        delayMicroseconds(2000);
        digitalPortWrite(4,(2 & 15),15);
        digitalWrite(9,0);
        delayMicroseconds(1);
        digitalWrite(9,1);
        delayMicroseconds(1);
        digitalWrite(9,0);
        delayMicroseconds(2000);
        delayMicroseconds(200);
        listAssign(&bind19, showInt32(bind17));
        while (1)
            {
            if ((list8Len(bind19) == 0))
                {
                break;
                }
            else
                {
                digitalWrite(8,1);
                digitalWrite(9,0);
                digitalPortWrite(4,(list8Elem(bind19,0) >> 4),15);
                digitalWrite(9,0);
                delayMicroseconds(1);
                digitalWrite(9,1);
                delayMicroseconds(1);
                digitalWrite(9,0);
                delayMicroseconds(2000);
                digitalPortWrite(4,(list8Elem(bind19,0) & 15),15);
                digitalWrite(9,0);
                delayMicroseconds(1);
                digitalWrite(9,1);
                delayMicroseconds(1);
                digitalWrite(9,0);
                delayMicroseconds(2000);
                listAssign(&bind19, list8Slice(bind19,1,0));
                }
            }
        while (1)
            {
            uint16_t bind23;

            bind23 = analogRead(0);
            if ((bind23 < 30))
                {
                bind22 = 1;
                break;
                }
            else
                {
                if ((bind23 < 180))
                    {
                    bind22 = 3;
                    break;
                    }
                else
                    {
                    if ((bind23 < 360))
                        {
                        bind22 = 4;
                        break;
                        }
                    else
                        {
                        if ((bind23 < 535))
                            {
                            bind22 = 2;
                            break;
                            }
                        else
                            {
                            if ((bind23 < 760))
                                {
                                bind22 = 5;
                                break;
                                }
                            else
                                {
                                }
                            }
                        }
                    }
                }
            }
        while (1)
            {
            uint16_t bind26;

            bind26 = analogRead(0);
            if ((bind26 < 760))
                {
                }
            else
                {
                break;
                }
            }
        delayMilliseconds(100);
        if ((bind22 == 3))
            {
            bind17 = (bind17 + 1);
            }
        else
            {
            if ((bind22 == 4))
                {
                bind17 = (bind17 - 1);
                }
            else
                {
                bind17 = bind17;
                }
            bind17 = bind17;
            }
        }
    taskComplete();
    }
