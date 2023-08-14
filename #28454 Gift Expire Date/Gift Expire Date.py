def is_valid_date(date):
    year, month, day = map(int, date.split('-'))

    if year < 1800 or year > 2023:
        return False

    if month < 1 or month > 12:
        return False

    if month == 2 and (day < 1 or day > 28):
        return False

    if month in [4, 6, 9, 11] and (day < 1 or day > 30):
        return False

    if day < 1 or day > 31:
        return False

    return True


def main():
    current_date = input()
    n = int(input())

    valid_coupons = 0

    for _ in range(n):
        coupon_date = input()

        if is_valid_date(coupon_date) and coupon_date >= current_date:
            valid_coupons += 1

    print(valid_coupons)


if __name__ == "__main__":
    main()
