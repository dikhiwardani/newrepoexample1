#include <stdio.h>

int a;
int b;
int c = 5;
int d = 4;

void ujangkedu(){
    a = d + c;
    printf("%d", a);
}

void Dikhi(){
    printf("Dikhi Ganteng banget");
}

// ==========================================
// ANGGOTA 3: KONVERSI BERAT
// ==========================================
void konversiBerat() {
    float kg;
    printf("\n--- Konversi Berat ---\n");
    printf("Masukkan berat dalam Kilogram: ");
    scanf("%f", &kg);
    printf("Gram: %.2f g\n", kg * 1000);
    printf("Pons (Lbs): %.2f lbs\n", kg * 2.20462);
}

int main(){
    for (int i = 0; i < 6; i++){
    printf("Dikhi ganteng");
    }
}


