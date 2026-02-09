#define BUZZER_PIN 25

// Frequencies for notes (covering a wide range)
#define NOTE_SILENT 0

#define NOTE_B0 31

#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62

#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 92
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123

#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247

#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494

#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988

#define BPM 140
#define WHOLE_NOTE (60000*4) / BPM
#define HALF_NOTE WHOLE_NOTE / 2
#define QUARTER_NOTE WHOLE_NOTE / 4
#define EIGHTH_NOTE WHOLE_NOTE / 8

using usi = unsigned short int;

std::vector<std::pair<usi, usi>> melodyTreb { {
  //Verse 1
  //FULL
  {NOTE_SILENT, HALF_NOTE},
  {NOTE_D4, HALF_NOTE}, //Iiiiiii
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //thought
  {NOTE_D4, QUARTER_NOTE}, //I
  {NOTE_B3, QUARTER_NOTE}, //saw
  {NOTE_D4, QUARTER_NOTE}, //your
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //face
  {NOTE_A3, EIGHTH_NOTE}, //to-
  {NOTE_A3, QUARTER_NOTE + EIGHTH_NOTE}, //-day
  {NOTE_SILENT, EIGHTH_NOTE},
  {NOTE_G3, EIGHTH_NOTE}, //But
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //I
  {NOTE_D4, QUARTER_NOTE}, //just
  {NOTE_E4, QUARTER_NOTE}, //turned
  {NOTE_G4, QUARTER_NOTE}, //myyyy
  //FULL
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_E4, EIGHTH_NOTE}, //head
  {NOTE_D4, EIGHTH_NOTE}, //a-
  {NOTE_D4, QUARTER_NOTE}, //-way
  {NOTE_D4, QUARTER_NOTE}, //Your
  //TAKING QUARTER_NOTE
  {NOTE_B3, QUARTER_NOTE}, //face
  {NOTE_D4, EIGHTH_NOTE}, //a-
  {NOTE_B3, QUARTER_NOTE + EIGHTH_NOTE}, //-gainst
  {NOTE_D4, EIGHTH_NOTE}, //the
  {NOTE_A3, QUARTER_NOTE + EIGHTH_NOTE}, //trees
  //GIVING QUARTER_NOTE
  {NOTE_SILENT, HALF_NOTE + EIGHTH_NOTE}, 
  {NOTE_G3, EIGHTH_NOTE}, //But
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //I
  {NOTE_D4, QUARTER_NOTE}, //just
  {NOTE_E4, QUARTER_NOTE}, //see
  {NOTE_SILENT, EIGHTH_NOTE}, 
  {NOTE_G4, EIGHTH_NOTE}, //the
  //FULL
  {NOTE_E4, EIGHTH_NOTE}, //mem-
  {NOTE_D4, EIGHTH_NOTE}, //-o-
  {NOTE_D4, QUARTER_NOTE}, //-ries
  {NOTE_B3, QUARTER_NOTE}, //as
  {NOTE_SILENT, QUARTER_NOTE}, 
  //FULL
  {NOTE_D4, QUARTER_NOTE}, //they
  {NOTE_A3, HALF_NOTE + QUARTER_NOTE}, //come
  //FULL
  {NOTE_SILENT, HALF_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //As
  {NOTE_SILENT, QUARTER_NOTE},
  //FULL
  {NOTE_G3, QUARTER_NOTE}, //they
  {NOTE_G3, HALF_NOTE + QUARTER_NOTE}, //come
  //FULL
  {NOTE_SILENT, HALF_NOTE}, 
  {NOTE_G3, QUARTER_NOTE}, //And
  {NOTE_G3, QUARTER_NOTE}, //I
  //FULL
  {NOTE_A3, EIGHTH_NOTE}, //could-
  {NOTE_B3, EIGHTH_NOTE}, //-nt
  {NOTE_A3, QUARTER_NOTE}, //help
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, EIGHTH_NOTE}, //but
  {NOTE_A3, EIGHTH_NOTE}, //fall
  //FULL
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //in
  {NOTE_A3, QUARTER_NOTE}, //love
  {NOTE_B3, EIGHTH_NOTE}, //a-
  {NOTE_A3, EIGHTH_NOTE}, //-gain
  //FULL
  {NOTE_SILENT, WHOLE_NOTE},   
  //FULL
  {NOTE_SILENT, HALF_NOTE}, 
  {NOTE_G3, QUARTER_NOTE}, //Oh
  {NOTE_G3, QUARTER_NOTE}, //I
  //FULL
  {NOTE_A3, EIGHTH_NOTE}, //could-
  {NOTE_B3, EIGHTH_NOTE}, //-nt
  {NOTE_A3, QUARTER_NOTE}, //help
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, EIGHTH_NOTE}, //but
  {NOTE_A3, EIGHTH_NOTE}, //fall
  //FULL
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //in
  {NOTE_A3, QUARTER_NOTE}, //love
  {NOTE_B3, EIGHTH_NOTE}, //a-
  {NOTE_A3, EIGHTH_NOTE}, //-gain
  //FULL
  {NOTE_SILENT, WHOLE_NOTE},
  //Verse 2
  //FULL
  {NOTE_SILENT, HALF_NOTE},
  {NOTE_D4, HALF_NOTE}, //Iiiiiii
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //saw
  {NOTE_D4, QUARTER_NOTE}, //it
  {NOTE_B3, QUARTER_NOTE}, //glit-
  {NOTE_D4, QUARTER_NOTE}, //-ter
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //as
  {NOTE_A3, EIGHTH_NOTE}, //I
  {NOTE_A3, QUARTER_NOTE + EIGHTH_NOTE}, //grew
  {NOTE_SILENT, EIGHTH_NOTE},
  {NOTE_G3, EIGHTH_NOTE}, //And
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //loved
  {NOTE_D4, QUARTER_NOTE}, //it
  {NOTE_E4, QUARTER_NOTE}, //boy
  {NOTE_G4, QUARTER_NOTE}, //Iiiii
  //FULL
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_E4, EIGHTH_NOTE}, //nev-
  {NOTE_D4, EIGHTH_NOTE}, //-ver
  {NOTE_D4, QUARTER_NOTE}, //knew
  {NOTE_D4, QUARTER_NOTE}, //I
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //thought
  {NOTE_D4, QUARTER_NOTE}, //this
  {NOTE_B3, QUARTER_NOTE + EIGHTH_NOTE}, //place
  {NOTE_D4, EIGHTH_NOTE}, //was
  //FULL
  {NOTE_B3, EIGHTH_NOTE}, //hea-
  {NOTE_A3, QUARTER_NOTE}, //-ven
  {NOTE_A3, EIGHTH_NOTE}, //sent 
  {NOTE_SILENT, QUARTER_NOTE + EIGHTH_NOTE}, 
  {NOTE_G3, EIGHTH_NOTE}, //But
  //FULL
  {NOTE_B3, QUARTER_NOTE}, //now
  {NOTE_D4, QUARTER_NOTE}, //it's
  {NOTE_E4, QUARTER_NOTE}, //just
  {NOTE_SILENT, EIGHTH_NOTE}, 
  {NOTE_G4, EIGHTH_NOTE}, //a
  //TAKING EIGHTH_NOTE
  {NOTE_E4, EIGHTH_NOTE}, //mo-
  {NOTE_D4, EIGHTH_NOTE}, //-onu-
  {NOTE_D4, QUARTER_NOTE}, //-ment
  {NOTE_B3, QUARTER_NOTE}, //in
  {NOTE_D4, QUARTER_NOTE + EIGHTH_NOTE}, //my
  //GIVING EIGHTH_NOTE
  {NOTE_SILENT, EIGHTH_NOTE}, 
  {NOTE_A3, HALF_NOTE + QUARTER_NOTE}, //mind
  //FULL
  {NOTE_SILENT, HALF_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //In
  {NOTE_SILENT, QUARTER_NOTE},
  //FULL
  {NOTE_G3, QUARTER_NOTE}, //my
  {NOTE_G3, HALF_NOTE + QUARTER_NOTE}, //mind
  //FULL
  {NOTE_SILENT, HALF_NOTE}, 
  {NOTE_G3, QUARTER_NOTE}, //And
  {NOTE_G3, QUARTER_NOTE}, //I
  //FULL
  {NOTE_A3, EIGHTH_NOTE}, //could-
  {NOTE_B3, EIGHTH_NOTE}, //-nt
  {NOTE_A3, QUARTER_NOTE}, //help
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, EIGHTH_NOTE}, //but
  {NOTE_A3, EIGHTH_NOTE}, //fall
  //FULL
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //in
  {NOTE_A3, QUARTER_NOTE}, //love
  {NOTE_B3, EIGHTH_NOTE}, //a-
  {NOTE_A3, EIGHTH_NOTE}, //-gain
  //FULL
  {NOTE_SILENT, WHOLE_NOTE},   
  //FULL
  {NOTE_SILENT, HALF_NOTE}, 
  {NOTE_G3, QUARTER_NOTE}, //Oh
  {NOTE_G3, QUARTER_NOTE}, //I
  //FULL
  {NOTE_A3, EIGHTH_NOTE}, //could-
  {NOTE_B3, EIGHTH_NOTE}, //-nt
  {NOTE_A3, QUARTER_NOTE}, //help
  {NOTE_SILENT, QUARTER_NOTE},
  {NOTE_B3, QUARTER_NOTE}, //but
  //TAKING EIGHTH_NOTE
  {NOTE_A3, QUARTER_NOTE}, //fall
  {NOTE_B3, QUARTER_NOTE}, //in
  {NOTE_C4, QUARTER_NOTE}, //love
  {NOTE_B3, EIGHTH_NOTE}, //a-
  {NOTE_A3, QUARTER_NOTE} //-gain
} };

void setup() 
{
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() 
{
  for (auto i {0uz}; i < melodyTreb.size(); i++) 
  {
    usi note = melodyTreb[i].first;
    usi duration = melodyTreb[i].second;

    if (note != 0) 
    {
      tone(BUZZER_PIN, note, duration);
	    delay(duration); 
	    noTone(BUZZER_PIN); 
    }
    else
    {
      delay(duration);
    }
  }

  delay(5000);
}
