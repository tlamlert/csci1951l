/*
 * This file belongs to Brown University's computer
 * science department as part of csci1951L - Blockchains
 * and cryptocurrencies.
 *
 * This software was developed by Colby Anderson (HTA)
 * and Parker Ljung (TA) of csci1951L in Summer of 2021.
 */

#include <gtest/gtest.h>
#include <rathcrypto.h>

TEST(Crypto, Hash) {
EXPECT_FALSE(RathCrypto::hash("Hello") == RathCrypto::hash("hello"));
EXPECT_EQ(RathCrypto::hash("hello"), RathCrypto::hash("hello"));
EXPECT_FALSE(RathCrypto::hash("Hello") == RathCrypto::hash("hEllo"));
EXPECT_FALSE(RathCrypto::hash("hello") == RathCrypto::hash("hello1"));
EXPECT_EQ(RathCrypto::hash("new"), RathCrypto::hash("new"));
std::string long_str1 = "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000";
std::string long_str2 = "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000"
                        "000000000000000000000000000000000000000000000000000000";
EXPECT_EQ(RathCrypto::hash(long_str1), RathCrypto::hash(long_str2));
}