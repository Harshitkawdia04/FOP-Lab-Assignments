#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. Length of string 1\n");
        printf("2. Copy string 1 to result\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string 1\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of string 1 = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(result, str1);
                printf("Copied string = %s\n", result);
                break;

            case 3:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                strrev(str1);
                printf("Reversed string 1 = %s\n", str1);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
