 # Basketball-counter 

The smart basketball shot tracker is an ARDUINO powered training device that tracks shot attempts, made shots, rim hits, and airballs using sensors mounted on the hoop. Before each shot, the player presses a button to register the attempt, and the device automatically detects the shot result using vibration and IR sensors.

## Features
 
- **Shot Attempt Tracking** — Records each shot attempt via button press
- **Made Shots Detection** — IR sensor detects when the ball passes through the net
- **Rim Hits** — Vibration sensor identifies contact with the rim
- **Airballs** — Distinguishes missed shots that don't touch the rim
- **Training Data** — Logs statistics for player improvement

## Required Components
 
1. Arduino (Uno, Nano, or similar)
2. Vibration Sensor (ky-002 or for better option sw-420)
3. IR Sensor (Digital - e.g., ir-08h or similar)
4. LED (5mm)
5. Resistor (220Ω for LED)
6. Push Button (momentary switch)
7. Jumper Cables
8. Arduino IDE (installed on your computer)
9. USB Cable (for Arduino programming)
10. Soldering rings (to put it in the hole)
11. Some hot glue

## How It Works

1. **Button Press** — Player presses the button before attempting a shot, registering the attempt
2. **LED** — Lights up to strat 
3. **Vibration Detection** — When the ball hits the rim, the vibration sensor triggers
4. **IR Detection** — The IR sensor detects the ball passing through the net (made shot)
5. **Result Logic**:
   - **Made Shot** — Ball detected in net (IR sensor trigger)
   - **Rim Hit** — Vibration detected but no net detection
   - **Made the shot with a rim hit** - Vibration detected and net detection
   - **Airball** — Neither rim vibration nor net detection
6. **Data Logging** — Statistics are tracked (attempts, makes, percentage, etc.)

### Wiring Diagram

Link:https://www.tinkercad.com/things/2WcNuUxIM9s-basketball-counter

   
