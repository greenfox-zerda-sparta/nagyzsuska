#include <iostream>
#include <ctime>
#include <SDL.h>
#include <SDL_net.h>
#include <cstdio>
#include <sstream>

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
  int success = SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip);
  
  TCPsocket client;
  const char* send_text = "HELLO CLIENT!\n";
    
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      char text[100];
      success = SDLNet_TCP_Recv(client, text, 100);
      if (success >= 0)
      {
        std::cout << text;
      }
      //SDLNet_TCP_Send(client, send_text, strlen(send_text) + 1);
      break;
    }
  }

 /* while (1)
  {
    char text[100];
    success = SDLNet_TCP_Recv(client, text, 100);
    if (success >= 0)
    {
      std::cout << text;
    }
  }*/

  SDLNet_TCP_Close(client);
  SDLNet_TCP_Close(server);
  SDLNet_Quit();
  SDL_Quit();
  return 0;
}