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

int main() {
    struct Paciente paciente;

    printf("Ingrese el nombre del paciente: ");
    fgets(paciente.nombre, sizeof(paciente.nombre), stdin);
    paciente.nombre[strcspn(paciente.nombre, "\n")] = '\0';

    printf("Ingrese la edad del paciente: ");
    scanf("%d", &paciente.edad);
    getchar();

    printf("Ingrese los síntomas del paciente: ");
    fgets(paciente.sintomas, sizeof(paciente.sintomas), stdin);
    paciente.sintomas[strcspn(paciente.sintomas, "\n")] = '\0';

    recomendarMedicamento(paciente.sintomas);

    return 0;
}
