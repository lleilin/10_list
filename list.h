#ifndef LIST
#define LIST

struct athlete {
  char name[128];
  char position[2];
  int height;
  int weight;
  struct athlete* next;
};

struct athlete* new_athlete(char* new_name, char* new_position, int new_height, int new_weight, struct athlete* new_next);
void remove_athlete(struct athlete* person);
void change_position(struct athlete* person, char* new_position);
void change_weight(struct athlete* person, int new_weight);
void print_athlete(struct athlete* person);

void print_list(struct athlete*);
struct athlete* insert_front(struct athlete*, struct athlete*);
struct athlete* free_list(struct athlete*);
struct athlete* remove_node(struct athlete* front, char* name);

#endif
