#include <stdio.h>

// Artık yıl kontrolü
int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Günün yılın kaçıncı günü olduğunu hesapla
int day_of_year(int day, int mon, int year) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Artık yılı kontrol et ve Şubat ayını güncelle
    if (is_leap_year(year)) {
        days_in_month[2] = 29;
    }

    // Belirtilen ayın önceki ayların toplam gün sayısını hesapla
    int total_days = 0;
    for (int i = 1; i < mon; ++i) {
        total_days += days_in_month[i];
    }

    // Belirtilen ayın gününü ve önceki ayların toplam gün sayısını topla
    total_days += day;

    return total_days;
}

int main() {
    int day, mon, year;
    printf("Gunu, ayi ve yili giriniz (gun ay yil): ");
    scanf("%d %d %d", &day, &mon, &year);
int result = day_of_year(day, mon, year);

    printf("%d/%d/%d tarihi %d. gundur.\n", day, mon, year, result);

    return 0;
}
