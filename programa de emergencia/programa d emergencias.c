#include <stdio.h>
#include <string.h>

struct Paciente {
    char nombre[50];
    int edad;
    char sintomas[200];
};

void recomendarMedicamento(const char *sintomas) {
    // Lógica para asociar síntomas con medicamentos de emergencia
    if (strstr(sintomas, "dificultad para respirar")) {
        printf("Recomendación: Broncodilatador\n");
    } else if (strstr(sintomas, "dolor en el pecho")) {
        printf("Recomendación: Nitroglicerina\n");
    } else if (strstr(sintomas, "dolor de cabeza")) {
        printf("Recomendación: Acetaminophen\n");
    } else if (strstr(sintomas, "dolor de garganta")) {
        printf("Recomendación: Diclonina\n");
    } else if (strstr(sintomas, "vomito")) {
        printf("Recomendación: Kaopectate\n");
    } else if (strstr(sintomas, "dolor de oido")) {
        printf("Recomendación: Paracetamol\n");
    } else if (strstr(sintomas, "fiebre")) {
        printf("Recomendación: Ibuprofeno\n");
    } else if (strstr(sintomas, "sangrado profuso")) {
        printf("Recomendación: Agente hemostático\n");
    } else {
        printf("No se puede determinar una recomendación específica.\n");
    }
}

void mostrarMenu() {
    printf("Seleccione el número correspondiente al síntoma:\n");
    printf("1. Dificultad para respirar\n");
    printf("2. Dolor en el pecho\n");
    printf("3. Dolor de cabeza\n");
    printf("4. Dolor de garganta\n");
    printf("5. Vómito\n");
    printf("6. Dolor de oído\n");
    printf("7. Fiebre\n");
    printf("8. Sangrado profuso\n");
    printf("9. Otro síntoma\n");
}

void recomendarDosisMedicamento(int edad) {
    if (edad <= 12) {
        printf("Dosis recomendada: Niños \n");
    } else if (edad <= 18) {
        printf("Dosis recomendada: Adolescentes \n");
    } else {
        printf("Dosis recomendada: Adultos \n");
    }
}

int main() {
    struct Paciente paciente;

    printf("Ingrese el nombre del paciente: ");
    fgets(paciente.nombre, sizeof(paciente.nombre), stdin);
    paciente.nombre[strcspn(paciente.nombre, "\n")] = '\0';

    printf("Ingrese la edad del paciente: ");
    scanf("%d", &paciente.edad);
    getchar();

    mostrarMenu();
    int opcion;
    scanf("%d", &opcion);
    getchar();

    switch (opcion) {
        case 1:
            strcpy(paciente.sintomas, "dificultad para respirar");
            break;
        case 2:
            strcpy(paciente.sintomas, "dolor en el pecho");
            break;
        case 3:
            strcpy(paciente.sintomas, "dolor de cabeza");
            break;
        case 4:
            strcpy(paciente.sintomas, "dolor de garganta");
            break;
        case 5:
            strcpy(paciente.sintomas, "vomito");
            break;
        case 6:
            strcpy(paciente.sintomas, "dolor de oido");
            break;
        case 7:
            strcpy(paciente.sintomas, "fiebre");
            break;
        case 8:
            strcpy(paciente.sintomas, "sangrado profuso");
            break;
        default:
            printf("Ingrese el síntoma: ");
            fgets(paciente.sintomas, sizeof(paciente.sintomas), stdin);
            paciente.sintomas[strcspn(paciente.sintomas, "\n")] = '\0';
            break;
    }

    recomendarMedicamento(paciente.sintomas);
    recomendarDosisMedicamento(paciente.edad);

    return 0;
}
