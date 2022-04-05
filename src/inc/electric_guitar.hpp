 #ifndef ELECTRIC_GUITAR_HPP
 #define ELECTRIC_GUITAR_HPP

#include <string>
#include <utility>
#include <vector>

class GuitarMake {
  std::string brand_name;
  std::string product_name;
  
public:
  GuitarMake();
  GuitarMake(std::string brand_name, std::string product_name);
};

enum class PickupPos {
  Bridge,
  Middle,
  Neck
};

class Pickup {
  bool active;
  PickupPos pickupPos;

public:
  Pickup();
  Pickup(bool active, PickupPos pickupPos);
};

class Chord {
  std::string _note;
  int _octave;

public:
  const std::string& note();
  const int& octave();

  Chord();
  Chord(std::string note, int octave);
};

class ElectricGuitar {
  GuitarMake guitarMake;
  int string_count;
  std::string tuning;
  Pickup selected_pickup;
  int volume_knob = 100;
  int tone_knob = 100;

public:
  ElectricGuitar(GuitarMake guitarMake, int string_count, std::string tuning);
  
  void setTuning(std::string tuning);
  void set_pickup(Pickup pickup);
  void set_volume_knob(int pct);
  void set_tone_knob(int pct);
  void play_string(std::pair<int, int> note);
  void play_strings(std::vector<std::pair<int, int>> notes);
  void whammy_bar(int pct);
  void play_chord(Chord chord);
};

 #endif