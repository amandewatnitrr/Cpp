import time
import requests
import math
import random
import board
import busio as io
import adafruit_mlx90614

i2c = io.I2C(board.SCL, board.SDA, frequency=100000)
mlx = adafruit_mlx90614.MLX90614(i2c)

TOKEN = "BBFF-iOmMivPDmCC2wnkIAJuRsidfopDO2E"  # Put your TOKEN here
DEVICE_LABEL = "test"  # Put your device label here 
VARIABLE_LABEL_1 = "5ff42a8c1d84721d4382f630"  # Put your first variable label here
VARIABLE_LABEL_2 = "spo2"  # Put your second variable label here
#VARIABLE_LABEL_3 = "position"  # Put your second variable label here


def build_payload(variable_1,variable_2):
    # Creates two random values for sending data
    value_1 = mlx.ambient_temperature
    value_2 = random.randint(94, 98)
    payload = {variable_1: value_1,variable_2: value_2}

    return payload


def post_request(payload):
    # Creates the headers for the HTTP requests
    url = "http://industrial.api.ubidots.com"
    url = "{}/api/v1.6/devices/{}".format(url, DEVICE_LABEL)
    headers = {"X-Auth-Token": TOKEN, "Content-Type": "application/json"}

    # Makes the HTTP requests
    status = 400
    attempts = 0
    while status >= 400 and attempts <= 5:
        req = requests.post(url=url, headers=headers, json=payload)
        status = req.status_code
        attempts += 1
        time.sleep(1)

    # Processes results
    print(req.status_code, req.json())
    if status >= 400:
        print("[ERROR] Could not send data after 5 attempts, please check \
            your token credentials and internet connection")
        return False

    print("[INFO] request made properly, your device is updated")
    return True


def main():
    payload = build_payload(
        VARIABLE_LABEL_1,VARIABLE_LABEL_2)

    print("[INFO] Attemping to send data")
    post_request(payload)
    print("[INFO] finished")


if __name__ == '__main__':
    while (True):
        main()
        time.sleep(1)
