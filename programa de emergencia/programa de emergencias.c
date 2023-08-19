#include <stdio.h>

int main() {
    printf("¡Bienvenido!\n");

    char respuesta_1;
    printf("¿El paciente está consciente? (s/n): ");
    scanf(" %c", &respuesta_1);

    if (respuesta_1 == 's' || respuesta_1 == 'S') {
        char respuesta_2;
        printf("¿El paciente está respirando? (s/n): ");
        scanf(" %c", &respuesta_2);
        
        if (respuesta_2 == 's' || respuesta_2 == 'S') {
            char respuesta_3;
            printf("¿El paciente tiene una hemorragia grave? (s/n): ");
            scanf(" %c", &respuesta_3);
            
            if (respuesta_3 == 's' || respuesta_3 == 'S') {
                printf("¡Llama al equipo de emergencia! El paciente necesita atención inmediata.\n");
            } else {
                printf("Mantén al paciente en reposo y espera por ayuda médica.\n");
            }
            
        } else {
            char respuesta_4;
            printf("¿Sabes realizar maniobras de reanimación? (s/n): ");
            scanf(" %c", &respuesta_4);
            
            if (respuesta_4 == 's' || respuesta_4 == 'S') {
                printf("Comienza la reanimación cardiopulmonar (RCP) y llama al equipo de emergencia.\n");
            } else {
                printf("Llama al equipo de emergencia y sigue las instrucciones del operador.\n");
            }
        }
        
    } else {
        char respuesta_5;
        printf("¿El paciente tiene pulso? (s/n): ");
        scanf(" %c", &respuesta_5);
        
        if (respuesta_5 == 's' || respuesta_5 == 'S') {
            printf("Mantén al paciente en posición cómoda y espera por ayuda médica.\n");
        } else {
            printf("Inicia la reanimación cardiopulmonar (RCP) de inmediato y llama al equipo de emergencia.\n");
        }
    }

    char respuesta_6;
    printf("¿El paciente tiene dificultad para respirar? (s/n): ");
    scanf(" %c", &respuesta_6);

    if (respuesta_6 == 's' || respuesta_6 == 'S') {
        printf("Administra oxígeno si es posible y busca atención médica.\n");
    } else {
        char respuesta_7;
        printf("¿El paciente está consciente pero confundido? (s/n): ");
        scanf(" %c", &respuesta_7);
        
        if (respuesta_7 == 's' || respuesta_7 == 'S') {
            printf("Busca atención médica para evaluar su estado.\n");
        } else {
            char respuesta_8;
            printf("¿El paciente presenta fiebre alta? (s/n): ");
            scanf(" %c", &respuesta_8);
            
            if (respuesta_8 == 's' || respuesta_8 == 'S') {
                printf("Administra medicamentos para bajar la fiebre y consulta a un médico.\n");
            } else {
                printf("Observa al paciente y consulta a un profesional médico si los síntomas persisten.\n");
            }
        }
    }

    return 0;
}


