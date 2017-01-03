#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <time.h>
#include <SDL.h>
#include <SDL_net.h>
#include <stdio.h>
#include <windows.h>

union Ptr {
  char* asChar;
  unsigned char* asUChar;
  int* asInt;
  unsigned int* asUInt;
  float* asFloat;
  double* asDouble;
  bool* asBool;
  void* asVoid;
};

int main(int argc, char* argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  ip.host = atoi("127.0.0.1");
  ip.port = 1234;
  int success = SDLNet_ResolveHost(&ip, "127.0.0.1", ip.port);
  TCPsocket socket = SDLNet_TCP_Open(&ip);

  char text[100];
  success = SDLNet_TCP_Recv(socket, text, 100);
  const char* send_text_from_client = "HELLO Server!\n";
  std::cout << text;
    
  while (1) {
    success = SDLNet_TCP_Send(socket, send_text_from_client, strlen(send_text_from_client) + 1);
    std::cout << "sent to server: " << send_text_from_client;
    Sleep(1000);
  }
  
  SDLNet_TCP_Close(socket);
  SDLNet_Quit();
  SDL_Quit();
  return 0;
}