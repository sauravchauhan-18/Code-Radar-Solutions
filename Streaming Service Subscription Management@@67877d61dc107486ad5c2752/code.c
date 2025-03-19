#include <stdio.h>
#include <string.h>

// Structure to store subscription details
typedef struct {
    char name[50];
    char type[10];
    float cost;
} Subscription;

int main() {
    int n;
    scanf("%d", &n);
    
    Subscription subs[n];
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].name, subs[i].type, &subs[i].cost);
        
        if (strcmp(subs[i].type, "Basic") == 0) {
            basicCount++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Standard") == 0) {
            standardCount++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subs[i].cost;
        }
    }
    
    // Output the results
    printf("Basic: %d Users, Revenue: %.1f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.1f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.1f; ", premiumCount, premiumRevenue);
    
    return 0;
}