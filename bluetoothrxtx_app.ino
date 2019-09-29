//Variável que irá receber comando do bluetooth
char data = 0;

void setup() {
  //Velocidade de transmissão de bits/s
  Serial.begin(9600);

}

void loop() {
  //Se ouver conexão
  if(Serial.available() > 0)
  {
    //Leio a porta serial
    data = Serial.read();
    //Para confirmar eu mostro na tela o que foi enviado, pode deixar comentando essa parte
   /* Serial.print(data);
    Serial.print("\n");*/

  //Se o dado recebido for igual a A.
    if(data == 'A')
    {
      //Inserir código para alguma ação, como piscar um led, ligar um motor, ativar ou desativar algum sensor.
     }
     
    
  }

  //Aqui você pode enviar os dados para o arduino através do Serial.print
  

}
