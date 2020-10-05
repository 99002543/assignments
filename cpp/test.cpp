#include "base.h"
#include "perfor.h"
#include <gtest/gtest.h>
namespace {

class LTTSperformance : public ::testing::Test 
{

protected:
  void SetUp() { 
	per.get_data();
}
void TearDown() {}
perfor per;
};
TEST_F(LTTSperformance, heightprice) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ(1658, per.high_rate());
}
TEST_F(LTTSperformance, heightpricedate) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ("2019-10-18", per.day_high());
}

TEST_F(LTTSperformance, lowestprice ) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ(1510, per.low_rate());
}
TEST_F(LTTSperformance, lowestpricedate ) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ("2019-10-03", per.day_low());
}

}


