# Flight Seating System

A C++ application designed to manage seating assignments for a small airline's single airplane, with a maximum capacity of 30 seats. The system offers an automated and user-friendly way to allocate seats in either the First Class or Economy section.

---

## Features

- **Random Seat Assignment:**
  - Assigns random seats in the First Class (1-10) or Economy (11-30) sections.
  - Ensures no duplicate seat assignments.

- **Dynamic Reallocation:**
  - If First Class is full, passengers can opt for Economy seats and vice versa.

- **User Validation:**
  - Handles invalid inputs gracefully by prompting the user to re-enter choices.

- **Flight Capacity Management:**
  - Notifies users when all seats are booked.
  - Suggests alternative flight schedules if necessary.

---

## Usage

1. Compile the program using a C++ compiler (e.g., g++, clang++):
   ```bash
   g++ -o FlightSeatingSystem FlightSeatingSystem.cpp
   ```

2. Run the compiled program:
   ```bash
   ./FlightSeatingSystem
   ```

3. Follow the on-screen instructions:
   - Type `1` to request a First Class seat.
   - Type `2` to request an Economy seat.

4. View your boarding pass, which includes your seat number and section.

---

## Input Validation

- Invalid choices (values other than `1` or `2`) prompt an error message and a request for re-entry.
- Passengers can accept alternate seating or wait for the next available flight.

---

## Example Workflow

- Initial prompt:
  ```
  Flight Seating System
  Type 1 for "First Class."
  Type 2 for "Economy."
  ```
- Output example:
  ```
  ---Boarding Pass---
  Seat Number: 5
  Section: First Class
  ```
- When a section is full:
  ```
  First Class is Full. Would you like a seat in Economy Class? For "Yes" Press "1" For "No" Press "2"
  ```
- If both sections are full:
  ```
  This flight's capacity is full. The next flight leaves in 3 hours.
  ```

---

## Technical Details

- The program uses a one-dimensional array to represent the seating chart.
- Unassigned seats are initialized to `0`, while assigned seats are marked.
- Random seat assignment avoids collisions by ensuring unique seat numbers.

---

## Future Improvements

- **Persistent Storage:** Maintain seat availability across program executions.
- **GUI:** Implement a graphical user interface for better user interaction.
- **Multi-Language Support:** Support languages other than English for international passengers.

---

## License

This project is licensed under the MIT License. See the LICENSE file for details.

---

## Contribution

Feel free to fork this repository and contribute to the project. Pull requests are welcome for enhancements and bug fixes.

---

## Contact

For questions or support, please reach out to the repository maintainer or open an issue on GitHub.

