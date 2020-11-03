#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct athlete* lebronjames = new_athlete("Lebron James", "SF", 81, 250, NULL);
  struct athlete* anthonydavis = new_athlete("Anthony Davis", "PF", 82, 254, lebronjames);
  struct athlete* alexcaruso = new_athlete("Alex Caruso", "SG", 77, 186, anthonydavis);
  struct athlete* averybradley = new_athlete("Avery Bradley", "PG", 75, 180, alexcaruso);
  struct athlete* devontaecacok = new_athlete("Devontae Cacok", "C", 80, 240, averybradley);

  print_list(devontaecacok);

  print_list(remove_node(devontaecacok,"Alex Caruso"));

  print_list(free_list(anthonydavis));
}
