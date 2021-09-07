#include <iostream>
struct RTPHeaderDownloadSeq {
  uint16_t   ext_dbp;
  uint16_t   ext_header_length;
  uint8_t    down_ext_info;
  uint16_t   down_seq_num;
  uint8_t    down_zero_padding;
};
int main() {
  uint16_t a = 5;
  uint16_t b = 65535;
  uint16_t c = a - b;

  RTPHeaderDownloadSeq *header = new RTPHeaderDownloadSeq;
  header->ext_dbp = 2000;
  header->ext_header_length = 1;
  header->down_ext_info = 0x0F;
  header->down_ext_info << 4;
  header->down_ext_info |= 0x01;
  header->down_seq_num = 1;


  uint8_t aa = 0;

  aa &= 0x0F;
  aa |= 5 << 4;

  aa |= 0x01;

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
