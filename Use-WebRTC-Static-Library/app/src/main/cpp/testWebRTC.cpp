//
// Created by frank on 2022/12/15.
//
#include <string>
#include <rtc_base/timeutils.h>
#include <rtc_base/logging.h>


int main(int argc, char *argv[]) {
    int64_t t = rtc::TimeMillis();
    LOG(LS_INFO) << "get " << t;
    return 0;
}