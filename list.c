#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

struct athlete* new_athlete(char* new_name, char* new_position, int new_height, int new_weight, struct athlete* new_next ) {
  struct athlete* person;
  person = malloc(sizeof(struct athlete));
  strcpy(person->name, new_name);
  strcpy(person->position, new_position);
  person->height = new_height;
  person->weight = new_weight;
  person->next = new_next;
  return person;
}

void remove_athlete(struct athlete* person) {
  free(person);
};

void change_position(struct athlete* person, char* new_position) {
  strcpy(person->position, new_position);
};

void change_weight(struct athlete* person, int new_weight) {
  person->weight = new_weight;
};

void print_athlete(struct athlete* person) {
  printf("Name: %s\t", person->name);
  printf("POS: %s\t\t", person->position);
  printf("HT: %d\"%d\'\t", ((person->height) - (person->height % 12)) / 12, person->height % 12);
  printf("WT: %d lbs\n", person->weight);
};

void print_list(struct athlete* person) {
  while(person) {
    print_athlete(person);
    person = person->next;
  }
  printf("\n");
};

struct athlete* insert_front(struct athlete* person, struct athlete* new_first) {
  new_first->next = person;
};

struct athlete* free_list(struct athlete* person) {
  while (person) {
    struct athlete* nextperson = person->next;
    remove_athlete(person);
    person = nextperson;
  }
};

struct athlete* remove_node(struct athlete* front, char* name) {
  struct athlete* temp = front;
  struct athlete* last = front;
  while (front) {
    if (!strcmp(front->name, name)) {
      last->next = front->next;
      remove_athlete(front);
    } else {
      last = front;
      front = front->next;
    }
  }
  return temp;
};
