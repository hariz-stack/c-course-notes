# Digital Clock Project

## Goal

Display a real-time digital clock that updates every second.

## Concepts Used

- `<time.h>` library
- `time()` and `localtime()` functions
- Infinite loops (`while(1)`)
- Character output formatting
- `fflush()` for immediate output

## How It Works

1. Start an infinite loop
2. Get current time using `time(NULL)`
3. Convert to local time structure using `localtime()`
4. Format and print as HH:MM:SS
5. Use `\r` (carriage return) to overwrite previous line
6. Wait ~1 second before next update

## Notes

- Uses `\r` to return cursor to start of line (overwrite effect)
- `fflush(stdout)` ensures output appears immediately
- Simple busy-wait for delay (not ideal but works)
- Press Ctrl+C to stop

## Compile & Run

```bash
gcc -o digital_clock digital_clock.c
./digital_clock
```
