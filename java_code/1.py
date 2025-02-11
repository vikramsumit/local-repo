from selenium import webdriver
from selenium.webdriver.common.by import By
import time
import os

# Path to ChromeDriver (Change as per your system)
chrome_driver_path = "chromedriver.exe"  # For Windows
# chrome_driver_path = "/usr/bin/chromedriver"  # For Linux/Mac

# Initialize WebDriver
options = webdriver.ChromeOptions()
options.add_argument("--headless")  # Run in background (optional)
driver = webdriver.Chrome(executable_path=chrome_driver_path, options=options)

# URL of the result page
url = "https://lu.indiaexaminfo.co.in/result_patliputra.aspx"

# Create a folder to save results
save_folder = "Patliputra_Results"
os.makedirs(save_folder, exist_ok=True)

# Loop through roll numbers 1 to 60
for roll in range(1, 61):
    driver.get(url)  # Open the webpage
    
    # Enter Roll Number
    roll_input = driver.find_element(By.NAME, "ctl00$ContentPlaceHolder1$txtRoll")  # Adjust name as per the HTML form
    roll_input.clear()
    roll_input.send_keys(str(roll))

    # Click "Show Marksheet" Button
    driver.find_element(By.NAME, "ctl00$ContentPlaceHolder1$btnShow").click()  # Adjust if needed

    time.sleep(3)  # Wait for results to load

    # Save the Result Page as PDF (Using Browser Print)
    pdf_path = os.path.join(save_folder, f"result_{roll}.pdf")
    driver.execute_script("window.print();")  # Triggers print action
    print(f"Downloaded: {pdf_path}")

# Close browser
driver.quit()
