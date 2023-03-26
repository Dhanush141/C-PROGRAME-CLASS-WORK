#include <stdio.h>

struct address {
    char street[50];
    char city[50];
    char state[50];
    char country[50];
};

struct person {
    char name[50];
    int age;
    struct address addr;
};

int main() {
    struct person p1 = {
        "John Smith",
        25,
        {"123 Main St", "New York", "NY", "USA"}
    };
    
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Street: %s\n", p1.addr.street);
    printf("City: %s\n", p1.addr.city);
    printf("State: %s\n", p1.addr.state);
    printf("Country: %s\n", p1.addr.country);
    
    return 0;
}