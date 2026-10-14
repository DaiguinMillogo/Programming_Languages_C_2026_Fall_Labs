/*
 * week4_2_struct_student.c
 * Author: [Daiguin Mathis Aristide MILLOGO]
 * Student ID: [260ADB180]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[50]), id (int), grade
// (float) Example:
typedef struct {
  char name[50];
  int id;
  float grade;
} Student;

int main(void) {
  Student STUD[2];  // TODO: Declare two Student variables

  // TODO: Assign the values (use strcpy for the name):
  strcpy(STUD[0].name, "Alice Johnson");
  STUD[0].id = 1001;
  STUD[0].grade = 9.1;  //       Student 1: Alice Johnson, 1001, 9.1

  strcpy(STUD[1].name, "Bob Smith");
  STUD[1].id = 1002;
  STUD[1].grade = 8.7;  //       Student 2: Bob Smith,1002, 8.7

  for (int k = 0; k < 2; k++) {
    printf("Student%d:  <%s>, ID: <%d>, Grade: <%.1f>\n", k + 1, STUD[k].name,
           STUD[k].id, STUD[k].grade);
  }  // TODO: Print each student exactly as:
  //       Student <k>: <name>, ID: <id>, Grade: <grade with 1 decimal, %.1f>

  return 0;
}
