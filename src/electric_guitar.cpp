#include "electric_guitar.hpp"
#include <iostream>

GuitarMake::GuitarMake() : brand_name(""), product_name("") {}

GuitarMake::GuitarMake(std::string brand_name, std::string product_name) {
  this->brand_name = brand_name;
  this->product_name = product_name;
}

Pickup::Pickup() : active(false), pickupPos(PickupPos::Bridge) {}

Pickup::Pickup(bool active, PickupPos pickupPos) {
  this->active = active;
  this->pickupPos = pickupPos;
}

const std::string& Chord::note() {
  return _note;
}

const int& Chord::octave() {
  return _octave;
}

Chord::Chord() : _note("A"), _octave(0) {}

Chord::Chord(std::string note, int octave) {
  this->_note = note;
  this->_octave = octave;
}

ElectricGuitar::ElectricGuitar(GuitarMake guitarMake, int string_count, std::string tuning) {
  this->guitarMake = guitarMake;
  this->string_count = string_count;
  this->tuning = tuning;
}

void ElectricGuitar::setTuning(std::string tuning) {
  this->tuning = tuning;
}

void ElectricGuitar::set_pickup(Pickup pickup) {
  selected_pickup = pickup;
}

void ElectricGuitar::set_volume_knob(int pct) {
  volume_knob = pct;
}

void ElectricGuitar::set_tone_knob(int pct) {
  tone_knob = pct;
}

void ElectricGuitar::play_string(std::pair<int, int> note) {
  std::cout << "playing the " << note.first << " string on the " << note.second << " fret" << std::endl;
}

void ElectricGuitar::play_strings(std::vector<std::pair<int, int>> notes) {
  for (const auto& note : notes)
    play_string(note);
}

void ElectricGuitar::whammy_bar(int pct) {
  std::cout << "whammying by " << pct << "%" << std::endl;
}

void ElectricGuitar::play_chord(Chord chord) {
  std::cout << "playing the chord of " << chord.note() << " on octave " << chord.octave() << std::endl;
}