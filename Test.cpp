#include "doctest.h"
#include "OrgChart.hpp"

#include <string>
#include <algorithm>
using namespace std;

#include <vector>


namespace ariel{

TEST_CASE("Good input") {
    OrgChart org;
    org.add_root("1");

    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));
    CHECK_NOTHROW(org.add_sub("HAIM", "KING"));


    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));
    // CHECK_NOTHROW(a.add_sub("HAIM", "KING"));




    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");
    // CHECK(org.m_first->m_value=="1");

}
}

// TEST_CASE("Good input") {

//     OrgChart org;
//     org.add_root("1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");
//     CHECK(org.m_first->m_value=="1");

//     // CHECK(org.end_level_order=="1")
//     // CHECK(org.size,1);
// }
// //     org.add_sub("1","2");
// //     CHECK(org.reverse_order=="1")
// //     CHECK(org.end_level_order=="2")
// //     CHECK(org.size,2);

// //     org.add_sub("2","3");
// //     CHECK(org.size,3);
// //     CHECK(org.end_level_order=="3")
// //     CHECK(org.reverse_order=="1")

// //     org.add_sub("3","4");
// //     CHECK(org.end_level_order=="4")
// //     CHECK(org.reverse_order=="1")
// //     CHECK(org.size,4);

// //     org.add_sub("4","5");
// //     CHECK(org.end_level_order=="5")
// //     CHECK(org.reverse_order=="1")
// //     CHECK(org.size,5);

// // }

// // TEST_CASE("Bad input") {

// //     OrgChart org;
// //     org.add_root("1");
// //     CHECK_NOTHROW(org.add_root("10"));
// //     ASSERT_NE(org.reverse_order, "2");

// //     org.add_sub("1","2");
// //     CHECK_NOTHROW(org.add_root("11"));
// //     ASSERT_NE(org.reverse_order, "3");

// //     org.add_sub("2","3");
// //     CHECK_NOTHROW(org.add_root("12"));
// //     ASSERT_NE(org.reverse_order, "4");

// //     org.add_sub("3","4");
// //     CHECK_NOTHROW(org.add_root("13"));
// //     ASSERT_NE(org.reverse_order, "5");

// //     org.add_sub("4","5");
// //     CHECK_NOTHROW(org.add_root("14"));
// //     ASSERT_NE(org.reverse_order, "6");


// // }

// }

