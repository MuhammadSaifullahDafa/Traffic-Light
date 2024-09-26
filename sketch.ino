// Mendefinisikan pin untuk setiap LED
int lampu1_merah = 2;
int lampu1_kuning = 3;
int lampu1_hijau = 4;

int lampu2_merah = 5;
int lampu2_kuning = 6;
int lampu2_hijau = 7;

int lampu3_merah = 8;
int lampu3_kuning = 9;
int lampu3_hijau = 10;

void setup() {
  // Set semua pin sebagai output
  pinMode(lampu1_merah, OUTPUT);
  pinMode(lampu1_kuning, OUTPUT);
  pinMode(lampu1_hijau, OUTPUT);
  
  pinMode(lampu2_merah, OUTPUT);
  pinMode(lampu2_kuning, OUTPUT);
  pinMode(lampu2_hijau, OUTPUT);
  
  pinMode(lampu3_merah, OUTPUT);
  pinMode(lampu3_kuning, OUTPUT);
  pinMode(lampu3_hijau, OUTPUT);
}

void loop() {
  // Traffic light pertama menyala hijau
  digitalWrite(lampu1_hijau, HIGH); // Lampu hijau nyala
  digitalWrite(lampu1_merah, LOW);  // Lampu merah mati
  digitalWrite(lampu1_kuning, LOW); // Lampu kuning mati
  
  digitalWrite(lampu2_merah, HIGH); // Lampu merah menyala di traffic light 2
  digitalWrite(lampu2_hijau, LOW);
  digitalWrite(lampu2_kuning, LOW);
  
  digitalWrite(lampu3_merah, HIGH); // Lampu merah menyala di traffic light 3
  digitalWrite(lampu3_hijau, LOW);
  digitalWrite(lampu3_kuning, LOW);
  
  delay(5000); // Hijau menyala selama 5 detik
  
  // Traffic light pertama berubah kuning
  digitalWrite(lampu1_hijau, LOW);
  digitalWrite(lampu1_kuning, HIGH); // Lampu kuning menyala
  delay(2000); // Kuning menyala selama 2 detik
  
  digitalWrite(lampu1_kuning, LOW);
  digitalWrite(lampu1_merah, HIGH); // Lampu merah menyala di traffic light 1
  delay(1000); // Menunggu 1 detik
  
  // Traffic light kedua menyala hijau
  digitalWrite(lampu2_hijau, HIGH); // Lampu hijau nyala
  digitalWrite(lampu2_merah, LOW);  // Lampu merah mati
  digitalWrite(lampu2_kuning, LOW); // Lampu kuning mati
  
  digitalWrite(lampu1_merah, HIGH); // Lampu merah menyala di traffic light 1
  digitalWrite(lampu1_hijau, LOW);
  digitalWrite(lampu1_kuning, LOW);
  
  digitalWrite(lampu3_merah, HIGH); // Lampu merah menyala di traffic light 3
  digitalWrite(lampu3_hijau, LOW);
  digitalWrite(lampu3_kuning, LOW);
  
  delay(5000); // Hijau menyala selama 5 detik
  
  // Traffic light kedua berubah kuning
  digitalWrite(lampu2_hijau, LOW);
  digitalWrite(lampu2_kuning, HIGH); // Lampu kuning menyala
  delay(2000); // Kuning menyala selama 2 detik
  
  digitalWrite(lampu2_kuning, LOW);
  digitalWrite(lampu2_merah, HIGH); // Lampu merah menyala di traffic light 2
  delay(1000); // Menunggu 1 detik
  
  // Traffic light ketiga menyala hijau
  digitalWrite(lampu3_hijau, HIGH); // Lampu hijau nyala
  digitalWrite(lampu3_merah, LOW);  // Lampu merah mati
  digitalWrite(lampu3_kuning, LOW); // Lampu kuning mati
  
  digitalWrite(lampu1_merah, HIGH); // Lampu merah menyala di traffic light 1
  digitalWrite(lampu1_hijau, LOW);
  digitalWrite(lampu1_kuning, LOW);
  
  digitalWrite(lampu2_merah, HIGH); // Lampu merah menyala di traffic light 2
  digitalWrite(lampu2_hijau, LOW);
  digitalWrite(lampu2_kuning, LOW);
  
  delay(5000); // Hijau menyala selama 5 detik
  
  // Traffic light ketiga berubah kuning
  digitalWrite(lampu3_hijau, LOW);
  digitalWrite(lampu3_kuning, HIGH); // Lampu kuning menyala
  delay(2000); // Kuning menyala selama 2 detik
  
  digitalWrite(lampu3_kuning, LOW);
  digitalWrite(lampu3_merah, HIGH); // Lampu merah menyala di traffic light 3
  delay(1000); // Menunggu 1 detik
}
