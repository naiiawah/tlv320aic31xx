#ifdef ARDUINO
#include <Arduino.h>
#include <Wire.h>
#include "tlv320aic31xx_codec.h"

// Arduino Setup
void setup(void) {  
    // Open Serial 
    Serial.begin(115200);
    TLV320AIC31xx codec;
    codec.initialize();
}

void loop() {
  sleep(1);
}
#else

#include <iostream>
#include "tlv320aic31xx_codec.h"

int main() {
    TLV320AIC31xx codec;
    codec.initialize();
    codec.setWordLength(AIC31XX_WORD_LEN_16BITS);
    codec.setCLKMUX(AIC31XX_PLL_CLKIN_BCLK, AIC31XX_CODEC_CLKIN_PLL);
    std::cout << "configureClocks(128,2,32,0)" << std::endl;
    codec.configureClocks(1, 2, 32, 0); // uint8_t pll_p, uint8_t pll_r, uint8_t pll_j, uint16_t pll_d
    codec.setPLLPower(1);
    codec.enableHeadsetDetect();
    codec.setHSDetectInt1(true);
    codec.enableDAC();
    codec.setDACVolume(20.0f,20.0f);
    codec.enableADC();
    codec.setADCGain(-12.0f);
    codec.enableHeadphoneAmp();
    codec.setHeadphoneMute(false); // unmute
    codec.setHeadphoneVolume(-5.0f,-5.0f); // unmute
    codec.setHeadphoneGain(8.0f,8.0f);
    codec.enableSpeakerAmp();
    codec.setSpeakerMute(false); // unmute class d speaker amp
    codec.setSpeakerGain(18.0f); // valid db: 6, 12, 18, 24
    std::cout <<  "Is HS detected: " << codec.isHeadsetDetected() << std::endl;
}
#endif
