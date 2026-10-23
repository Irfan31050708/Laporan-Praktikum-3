while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    choice = int(input("Masukkan Pilihan : "))

    if choice in (1, 2, 3, 4):
        first = float(input("Masukkan nilai pertama : "))
        second = float(input("Masukkan nilai kedua : "))

        if choice == 1:
            result = first + second
            print(f"Hasil penjumlahan antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
        elif choice == 2:
            result = first - second
            print(f"Hasil pengurangan antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
        elif choice == 3:
            result = first * second
            print(f"Hasil perkalian antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
        else:
            result = first / second
            print(f"Hasil pembagian antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")
    elif choice == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Irfan Madani Wahidun")
        break
    else:
        print("Input anda salah, silahkan coba lagi")