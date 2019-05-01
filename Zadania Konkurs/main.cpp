// chain 0.12
// i-ta instancja wysyla do (i+1)-szej jedna wiadomosc z jednym int-em
#include "message.h"
#include <cassert>

int main() {
  int v = 0;
  if (MyNodeId() > 0) {
    Receive(MyNodeId() - 1);
    v = GetInt(MyNodeId() - 1);
  }
  assert(v == MyNodeId());
  if (MyNodeId() < NumberOfNodes() - 1) {
    PutInt(MyNodeId() + 1, v + 1);
    Send(MyNodeId() + 1);
  }
  return 0;
}
