#include <stdio.h>
#include <string.h>

#define SUBJECTS 3
#define STUDENTS 2

// Structure for Subject
struct Subject {
    char subjectName[20];
    float marks;
};

// Structure for Student
struct Student {
    char name[50];
    int roll;
    struct Subject sub[SUBJECTS];  // Stack (array) of 3 subjects
    float total;
    float average;
};

int main() {
    struct Student s[STUDENTS];
    int i, j;

    // Predefined subject names
    char subjects[SUBJECTS][20] = {"Physics", "Chemistry", "Mathematics"};

    // Input data for 2 students
    for(i = 0; i < STUDENTS; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        s[i].total = 0;

        // Input marks for 3 subjects
        for(j = 0; j < SUBJECTS; j++) {
            strcpy(s[i].sub[j].subjectName, subjects[j]);

            printf("Enter marks for %s: ", subjects[j]);
            scanf("%f", &s[i].sub[j].marks);

            s[i].total += s[i].sub[j].marks;
        }

        s[i].average = s[i].total / SUBJECTS;
    }

    // Display data
    printf("\n\n----- Student Database -----\n");

    for(i = 0; i < STUDENTS; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);

        for(j = 0; j < SUBJECTS; j++) {
            printf("%s Marks: %.2f\n", 
                   s[i].sub[j].subjectName, 
                   s[i].sub[j].marks);
        }

        printf("Total Marks: %.2f\n", s[i].total);
        printf("Average Marks: %.2f\n", s[i].average);
    }
    //getch(For turbo c++ user)
    return 0;
}




/*Question--- Make a student database using structure which contains name,roll and stack of 3 structure 
(Physics,Chemistry,Mathematics)and calculate for two students insert data into it and print it.*/
