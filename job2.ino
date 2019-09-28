#define M1 8
#define K1 7
#define H1 6

#define M2 5
#define K2 4
#define H2 3

#define M3 2
#define K3 1
#define H3 0

#define d_Simpang1 3000
#define d_Simpang2 3000
#define d_Simpang3 3000

#define d_kuning 2000

void setup(){
pinMode (M1, OUTPUT);
pinMode (K1, OUTPUT);
pinMode (H1, OUTPUT);

pinMode (M2, OUTPUT);
pinMode (K2, OUTPUT);
pinMode (H2, OUTPUT);

pinMode (M3, OUTPUT);
pinMode (K3, OUTPUT);
pinMode (H3, OUTPUT);
}

void loop(){
delay(1000);
digitalWrite (M1, HIGH);
digitalWrite (K1, HIGH);
digitalWrite (H1, LOW);

digitalWrite (M2, LOW);
digitalWrite (K2, HIGH);
digitalWrite (H2, HIGH);

digitalWrite (M3, LOW);
digitalWrite (K3, HIGH);
digitalWrite (H3, HIGH);

delay(d_Simpang1);

digitalWrite (M1, HIGH);
digitalWrite (K1, LOW);
digitalWrite (H1, HIGH);

digitalWrite (M2, LOW);
digitalWrite (K2, LOW);
digitalWrite (H2, HIGH);

digitalWrite (M3, LOW);
digitalWrite (K3, HIGH);
digitalWrite (H3, HIGH);

delay(d_kuning);
digitalWrite (M1, LOW);
digitalWrite (K1, HIGH);
digitalWrite (H1, HIGH);

digitalWrite (M2, HIGH);
digitalWrite (K2, HIGH);
digitalWrite (H2, LOW);

digitalWrite (M3, LOW);
digitalWrite (K3, HIGH);
digitalWrite (H3, HIGH);

delay(d_Simpang2);
digitalWrite (M1, LOW);
digitalWrite (K1, HIGH);
digitalWrite (H1, HIGH);

digitalWrite (M2, HIGH);
digitalWrite (K2, LOW);
digitalWrite (H2, HIGH);

digitalWrite (M3, LOW);
digitalWrite (K3, LOW);
digitalWrite (H3, HIGH);

delay(d_kuning);
digitalWrite (M1, LOW);
digitalWrite (K1, HIGH);
digitalWrite (H1, HIGH);

digitalWrite (M2, LOW);
digitalWrite (K2, HIGH);
digitalWrite (H2, HIGH);

digitalWrite (M3, HIGH);
digitalWrite (K3, HIGH);
digitalWrite (H3, LOW);

delay(d_Simpang3);
digitalWrite (M1, LOW);
digitalWrite (K1, LOW);
digitalWrite (H1, HIGH);

digitalWrite (M2, LOW);
digitalWrite (K2, HIGH);
digitalWrite (H2, HIGH);

digitalWrite (M2, HIGH);
digitalWrite (K2, LOW);
digitalWrite (H2, HIGH);

delay(d_kuning);
}
