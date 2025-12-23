#include <stdio.h>

int cars = 0, bikes = 0;
int total_amount = 0, total_vehicles = 0;

void menu() {
    printf("\n===== Vehicle Parking Management System =====\n");
    printf("1. Park Car\n");
    printf("2. Park Bike\n");
    printf("3. Show Parking Status\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void park_car() {
    cars++;
    total_vehicles++;
    total_amount += 50;
    printf("Car parked successfully! Fee: Rs.50\n");
}

void park_bike() {
    bikes++;
    total_vehicles++;
    total_amount += 20;
    printf("Bike parked successfully! Fee: Rs.20\n");
}

void show_status() {
    printf("\n--- Parking Status ---\n");
    printf("Cars Parked   : %d\n", cars);
    printf("Bikes Parked  : %d\n", bikes);
    printf("Total Vehicles: %d\n", total_vehicles);
    printf("Total Amount  : Rs.%d\n", total_amount);
}

int main() {
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: park_car(); break;
            case 2: park_bike(); break;
            case 3: show_status(); break;
            case 4:
                printf("Thank you! Exiting system.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
