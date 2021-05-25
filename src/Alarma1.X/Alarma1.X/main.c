#include "mcc_generated_files/mcc.h"
#include "I2C_LCD.h"

char* Contrasena[] = {"1","2","3","2","1"};
char* combinacion[] = {"0","0","0","0","0"};
int Auxiliar = 0;
int Estado = 0;
int intentos = 0;
int AuxEstado = 0;

void contra(void)
{   
    switch(Estado)
    {
        case 0:
           
            if(!PUL0_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "1";
                Auxiliar += 1;
                
            }
            if(!PUL1_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "2";
                Auxiliar += 1;
                
            }
            if(!PUL2_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "3";
                Auxiliar += 1;
                
            }
            
            if(Auxiliar == 5)
            {
                Auxiliar = 0;
                Estado = 1;
            }
            
            
        break;
        
        case 1:
            
            for(int i = 0; i <= 4; i++)
            {
                if(Contrasena[i] == combinacion[i])
                {
                    Auxiliar += 1;
                }
                else
                {
                    Auxiliar = 0;
                    break;
                }  
            }
            
            if(Auxiliar == 5)
            {
                LCD_Set_Cursor(3, 1);
                LCD_Write_String("Cont correcta");
                combinacion[0] = "0";
                combinacion[1] = "0";
                combinacion[2] = "0";
                combinacion[3] = "0";
                __delay_ms(2000);
                LCD_Clear();
                Auxiliar = 0;
                intentos = 0;
                LCD_Set_Cursor(1, 1);
                LCD_Write_String("Sensando...");
                Estado = 2;
                
            }
            else
            {
                LCD_Set_Cursor(3, 1);
                LCD_Write_String("Cont incorrecta");
                combinacion[0] = "0";
                combinacion[1] = "0";
                combinacion[2] = "0";
                combinacion[3] = "0";
                intentos++;
                Auxiliar = 0;
                __delay_ms(2000);
                LCD_Clear();
                if(intentos == 2)
                {
                    while(true)
                    {
                        LCD_Set_Cursor(3, 1);
                        LCD_Write_String("Bloqueo de seguridad");
                        TRANSISTOR_SetHigh();
                    }
                }
                
                LCD_Set_Cursor(1, 1);
                LCD_Write_String("Cotrasena");
                Estado = 0;
            }
            
            
        break;
        
        case 2:
            
            if(Sensor_GetValue())
            {
                LCD_Set_Cursor(2, 1);
                LCD_Write_String("Intruso");
                TRANSISTOR_SetHigh();
            }
            
            if(!PUL0_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "1";
                Auxiliar += 1;
                
            }
            if(!PUL1_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "2";
                Auxiliar += 1;
                
            }
            if(!PUL2_GetValue())
            {
                __delay_ms(250);
                combinacion[Auxiliar] = "3";
                Auxiliar += 1;
                
            }
            
            if(Auxiliar == 5)
            {
                Auxiliar = 0;
                Estado = 3;
            }
            
        break;
        
        case 3:
        
            for(int i = 0; i <= 4; i++)
            {
                if(Contrasena[i] == combinacion[i])
                {
                    Auxiliar += 1;
                }
                else
                {
                    Auxiliar = 0;
                    break;
                }  
            }
            
            if(Auxiliar == 5)
            {
                LCD_Set_Cursor(3, 1);
                LCD_Write_String("Cont correcta");
                combinacion[0] = "0";
                combinacion[1] = "0";
                combinacion[2] = "0";
                combinacion[3] = "0";
                TRANSISTOR_SetLow();
                __delay_ms(2000);
                LCD_Clear();
                Auxiliar = 0;
                intentos = 0;
                LCD_Set_Cursor(1, 1);
                LCD_Write_String("Contrasena");
                Estado = 0;
                
            }
            else
            {
                LCD_Set_Cursor(3, 1);
                LCD_Write_String("Cont incorrecta");
                combinacion[0] = "0";
                combinacion[1] = "0";
                combinacion[2] = "0";
                combinacion[3] = "0";
                intentos++;
                Auxiliar = 0;
                __delay_ms(2000);
                LCD_Clear();
                if(intentos == 2)
                {
                    while(true)
                    {
                        LCD_Set_Cursor(3, 1);
                        LCD_Write_String("Bloqueo de seguridad");
                        TRANSISTOR_SetHigh();
                    }
                }
                
                LCD_Set_Cursor(1, 1);
                LCD_Write_String("Cotrasena");
                Estado = 2;
            }
            
        break;
    }
        
}
void main(void)
{

    SYSTEM_Initialize();

    I2C_Master_Init();
    LCD_Init(0x4E);
    
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Cotrasena");
    TRANSISTOR_SetLow();

    while (1)
    {
        contra();
    }
}
