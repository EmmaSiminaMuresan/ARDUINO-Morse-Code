# Room Temperature Monitoring with Morse Code LED Display

This Arduino project reads the room temperature from an analog sensor and displays the status (Hot, OK, Cold) using LEDs. The project utilizes a **Red**, **Green**, and **Blue** LED to indicate the temperature status in **Morse Code**.

## Features

- **Temperature Monitoring**: The project uses an analog temperature sensor connected to **A0** to monitor the room temperature.
- **Morse Code LED Display**: 
  - Red LED flashes the Morse code for "H" when the room is hot.
  - Green LED flashes the Morse code for "O" when the room temperature is okay.
  - Blue LED flashes the Morse code for "C" when the room is cold.
- **LED Color Indicators**:
  - **Red LED**: Indicates a hot temperature.
  - **Green LED**: Indicates a moderate temperature.
  - **Blue LED**: Indicates a cold temperature.

## Components

- **Arduino Uno (or compatible board)**.
- **Temperature Sensor** (connected to analog pin A0).
- **Red, Green, and Blue LEDs**:
  - Red LED connected to pin **5**.
  - Green LED connected to pin **3**.
  - Blue LED connected to pin **6**.
- **Resistors** for the LEDs.

## How It Works

1. **Temperature Reading**: 
    - The temperature sensor provides an analog input value to **A0**.
    - This value is checked against preset ranges for Hot, Okay, and Cold temperatures.

2. **Morse Code Display**:
    - **Hot Temperature** (analog value >= 60): Red LED flashes Morse code for "H".
    - **Okay Temperature** (analog value between 40 and 60): Green LED flashes Morse code for "O".
    - **Cold Temperature** (analog value <= 40): Blue LED flashes Morse code for "C".

3. **LED Flashing**:
    - Each LED flashes for a specific duration (in milliseconds) to represent the Morse code for the respective letter.


## Setup Instructions

1. **Connect the Components**:
   - Connect the temperature sensor to **A0**.
   - Connect the Red, Green, and Blue LEDs to pins **5**, **3**, and **6** respectively with appropriate resistors.

2. **Upload the Code**:
   - Open the Arduino IDE, paste the code, and upload it to your Arduino board.

3. **Monitor the Temperature**:
   - Open the **Serial Monitor** to see the raw temperature readings.
   - Watch the LEDs blink in Morse code according to the temperature range.


## Acknowledgments

- **Arduino**: For providing the open-source hardware platform.
- **Morse Code**: Using Morse code to creatively represent temperature states.

