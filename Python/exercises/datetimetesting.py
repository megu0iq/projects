import time

# Set the initial time
start_time = time.time()

# Define the time interval (1 hour)
hour_interval = 60  # 1 hour = 60 minutes * 60 seconds

while True: 
    current_time = time.time()
    elapsed_time = current_time - start_time
    print("starting")
    if elapsed_time >= hour_interval:
        print("An hour has passed!")
        start_time = current_time  # Reset the start time

    # You can perform other tasks here

    # Sleep for a short duration to avoid high CPU usage
    time.sleep(60)  # Sleep for 60 seconds (adjust as needed)

