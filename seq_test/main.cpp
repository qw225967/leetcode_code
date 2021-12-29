#include <iostream>
#include <vector>
#include <algorithm>

int compare_sequence_num(uint16_t a, uint16_t b) {
  if (a == b) { return 0; }

  uint16_t diff = a - b;
  return (diff < 0xF000) ? 1 : -1;
}

void test(std::vector<uint16_t> &ack_vector) {
  auto iter = ack_vector.begin();
  uint32_t max_seq = *iter;
  uint32_t min_seq = max_seq;

  for (auto val :ack_vector) {
    if(compare_sequence_num((uint16_t)val,(uint16_t)max_seq)) {
      if ( val < max_seq) {
        uint32_t temp_seq = 1;
        temp_seq = (temp_seq<<16)|val;
        max_seq = std::max(temp_seq, max_seq);
        min_seq = std::min(temp_seq, min_seq);
      } else {
        max_seq = std::max((uint32_t)val, max_seq);
        min_seq = std::min((uint32_t)val, min_seq);
      }
    }
  }
}


int main() {
  std::vector<uint16_t> t = {65532,65533,65534,65535,0,1,2,3,4};
  test(t);
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
