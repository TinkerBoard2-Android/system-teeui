/*
 * Copyright 2020, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Generated by generate_teeui_render_tests - DO NOT EDIT */

#include <getopt.h>
#include <gtest/gtest.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <teeui/example/teeui.h>
#include <unistd.h>

#include "teeui_device_config.h"
#include <teeui/test/teeui_render_test.h>

#define TeeuiLocaleTest_DO_LOG_DEBUG

namespace teeui {

namespace test {

class TeeuiLocaleTest : public ::testing::Test {};

TEST_F(TeeuiLocaleTest, Test_en) {
    int error = runRenderTest("en", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_en_M) {
    int error = runRenderTest("en", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AF) {
    int error = runRenderTest("af", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AF_M) {
    int error = runRenderTest("af", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AM) {
    int error = runRenderTest("am", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AM_M) {
    int error = runRenderTest("am", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR) {
    int error = runRenderTest("ar", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_M) {
    int error = runRenderTest("ar", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_EG) {
    int error = runRenderTest("ar-EG", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_EG_M) {
    int error = runRenderTest("ar-EG", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_JO) {
    int error = runRenderTest("ar-JO", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_JO_M) {
    int error = runRenderTest("ar-JO", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_MA) {
    int error = runRenderTest("ar-MA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_MA_M) {
    int error = runRenderTest("ar-MA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_SA) {
    int error = runRenderTest("ar-SA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_SA_M) {
    int error = runRenderTest("ar-SA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_XB) {
    int error = runRenderTest("ar-XB", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AR_XB_M) {
    int error = runRenderTest("ar-XB", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AS) {
    int error = runRenderTest("as", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AS_M) {
    int error = runRenderTest("as", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AZ) {
    int error = runRenderTest("az", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_AZ_M) {
    int error = runRenderTest("az", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BE) {
    int error = runRenderTest("be", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BE_M) {
    int error = runRenderTest("be", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BG) {
    int error = runRenderTest("bg", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BG_M) {
    int error = runRenderTest("bg", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BN) {
    int error = runRenderTest("bn", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BN_M) {
    int error = runRenderTest("bn", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BS) {
    int error = runRenderTest("bs", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_BS_M) {
    int error = runRenderTest("bs", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_CA) {
    int error = runRenderTest("ca", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_CA_M) {
    int error = runRenderTest("ca", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_CS) {
    int error = runRenderTest("cs", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_CS_M) {
    int error = runRenderTest("cs", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DA) {
    int error = runRenderTest("da", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DA_M) {
    int error = runRenderTest("da", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE) {
    int error = runRenderTest("de", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE_M) {
    int error = runRenderTest("de", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE_AT) {
    int error = runRenderTest("de-AT", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE_AT_M) {
    int error = runRenderTest("de-AT", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE_CH) {
    int error = runRenderTest("de-CH", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_DE_CH_M) {
    int error = runRenderTest("de-CH", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EL) {
    int error = runRenderTest("el", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EL_M) {
    int error = runRenderTest("el", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_AU) {
    int error = runRenderTest("en-AU", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_AU_M) {
    int error = runRenderTest("en-AU", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_CA) {
    int error = runRenderTest("en-CA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_CA_M) {
    int error = runRenderTest("en-CA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_GB) {
    int error = runRenderTest("en-GB", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_GB_M) {
    int error = runRenderTest("en-GB", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_IE) {
    int error = runRenderTest("en-IE", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_IE_M) {
    int error = runRenderTest("en-IE", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_IN) {
    int error = runRenderTest("en-IN", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_IN_M) {
    int error = runRenderTest("en-IN", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_NZ) {
    int error = runRenderTest("en-NZ", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_NZ_M) {
    int error = runRenderTest("en-NZ", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_SG) {
    int error = runRenderTest("en-SG", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_SG_M) {
    int error = runRenderTest("en-SG", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_XA) {
    int error = runRenderTest("en-XA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_XA_M) {
    int error = runRenderTest("en-XA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_XC) {
    int error = runRenderTest("en-XC", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_XC_M) {
    int error = runRenderTest("en-XC", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_ZA) {
    int error = runRenderTest("en-ZA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EN_ZA_M) {
    int error = runRenderTest("en-ZA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES) {
    int error = runRenderTest("es", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_M) {
    int error = runRenderTest("es", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_419) {
    int error = runRenderTest("es-419", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_419_M) {
    int error = runRenderTest("es-419", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_AR) {
    int error = runRenderTest("es-AR", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_AR_M) {
    int error = runRenderTest("es-AR", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_BO) {
    int error = runRenderTest("es-BO", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_BO_M) {
    int error = runRenderTest("es-BO", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CL) {
    int error = runRenderTest("es-CL", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CL_M) {
    int error = runRenderTest("es-CL", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CO) {
    int error = runRenderTest("es-CO", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CO_M) {
    int error = runRenderTest("es-CO", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CR) {
    int error = runRenderTest("es-CR", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_CR_M) {
    int error = runRenderTest("es-CR", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_DO) {
    int error = runRenderTest("es-DO", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_DO_M) {
    int error = runRenderTest("es-DO", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_EC) {
    int error = runRenderTest("es-EC", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_EC_M) {
    int error = runRenderTest("es-EC", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_GT) {
    int error = runRenderTest("es-GT", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_GT_M) {
    int error = runRenderTest("es-GT", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_HN) {
    int error = runRenderTest("es-HN", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_HN_M) {
    int error = runRenderTest("es-HN", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_MX) {
    int error = runRenderTest("es-MX", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_MX_M) {
    int error = runRenderTest("es-MX", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_NI) {
    int error = runRenderTest("es-NI", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_NI_M) {
    int error = runRenderTest("es-NI", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PA) {
    int error = runRenderTest("es-PA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PA_M) {
    int error = runRenderTest("es-PA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PE) {
    int error = runRenderTest("es-PE", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PE_M) {
    int error = runRenderTest("es-PE", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PR) {
    int error = runRenderTest("es-PR", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PR_M) {
    int error = runRenderTest("es-PR", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PY) {
    int error = runRenderTest("es-PY", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_PY_M) {
    int error = runRenderTest("es-PY", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_SV) {
    int error = runRenderTest("es-SV", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_SV_M) {
    int error = runRenderTest("es-SV", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_US) {
    int error = runRenderTest("es-US", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_US_M) {
    int error = runRenderTest("es-US", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_UY) {
    int error = runRenderTest("es-UY", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_UY_M) {
    int error = runRenderTest("es-UY", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_VE) {
    int error = runRenderTest("es-VE", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ES_VE_M) {
    int error = runRenderTest("es-VE", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ET) {
    int error = runRenderTest("et", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ET_M) {
    int error = runRenderTest("et", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EU) {
    int error = runRenderTest("eu", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_EU_M) {
    int error = runRenderTest("eu", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FA) {
    int error = runRenderTest("fa", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FA_M) {
    int error = runRenderTest("fa", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FI) {
    int error = runRenderTest("fi", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FI_M) {
    int error = runRenderTest("fi", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FIL) {
    int error = runRenderTest("fil", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FIL_M) {
    int error = runRenderTest("fil", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR) {
    int error = runRenderTest("fr", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR_M) {
    int error = runRenderTest("fr", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR_CA) {
    int error = runRenderTest("fr-CA", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR_CA_M) {
    int error = runRenderTest("fr-CA", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR_CH) {
    int error = runRenderTest("fr-CH", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_FR_CH_M) {
    int error = runRenderTest("fr-CH", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GL) {
    int error = runRenderTest("gl", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GL_M) {
    int error = runRenderTest("gl", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GSW) {
    int error = runRenderTest("gsw", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GSW_M) {
    int error = runRenderTest("gsw", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GU) {
    int error = runRenderTest("gu", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_GU_M) {
    int error = runRenderTest("gu", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HE) {
    int error = runRenderTest("he", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HE_M) {
    int error = runRenderTest("he", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HI) {
    int error = runRenderTest("hi", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HI_M) {
    int error = runRenderTest("hi", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HR) {
    int error = runRenderTest("hr", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HR_M) {
    int error = runRenderTest("hr", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HU) {
    int error = runRenderTest("hu", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HU_M) {
    int error = runRenderTest("hu", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HY) {
    int error = runRenderTest("hy", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_HY_M) {
    int error = runRenderTest("hy", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ID) {
    int error = runRenderTest("id", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ID_M) {
    int error = runRenderTest("id", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IN) {
    int error = runRenderTest("in", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IN_M) {
    int error = runRenderTest("in", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IS) {
    int error = runRenderTest("is", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IS_M) {
    int error = runRenderTest("is", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IT) {
    int error = runRenderTest("it", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IT_M) {
    int error = runRenderTest("it", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IW) {
    int error = runRenderTest("iw", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_IW_M) {
    int error = runRenderTest("iw", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_JA) {
    int error = runRenderTest("ja", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_JA_M) {
    int error = runRenderTest("ja", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KA) {
    int error = runRenderTest("ka", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KA_M) {
    int error = runRenderTest("ka", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KK) {
    int error = runRenderTest("kk", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KK_M) {
    int error = runRenderTest("kk", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KM) {
    int error = runRenderTest("km", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KM_M) {
    int error = runRenderTest("km", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KN) {
    int error = runRenderTest("kn", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KN_M) {
    int error = runRenderTest("kn", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KO) {
    int error = runRenderTest("ko", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KO_M) {
    int error = runRenderTest("ko", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KY) {
    int error = runRenderTest("ky", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_KY_M) {
    int error = runRenderTest("ky", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LN) {
    int error = runRenderTest("ln", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LN_M) {
    int error = runRenderTest("ln", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LO) {
    int error = runRenderTest("lo", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LO_M) {
    int error = runRenderTest("lo", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LT) {
    int error = runRenderTest("lt", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LT_M) {
    int error = runRenderTest("lt", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LV) {
    int error = runRenderTest("lv", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_LV_M) {
    int error = runRenderTest("lv", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MK) {
    int error = runRenderTest("mk", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MK_M) {
    int error = runRenderTest("mk", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ML) {
    int error = runRenderTest("ml", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ML_M) {
    int error = runRenderTest("ml", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MN) {
    int error = runRenderTest("mn", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MN_M) {
    int error = runRenderTest("mn", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MO) {
    int error = runRenderTest("mo", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MO_M) {
    int error = runRenderTest("mo", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MR) {
    int error = runRenderTest("mr", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MR_M) {
    int error = runRenderTest("mr", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MS) {
    int error = runRenderTest("ms", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MS_M) {
    int error = runRenderTest("ms", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MY) {
    int error = runRenderTest("my", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_MY_M) {
    int error = runRenderTest("my", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NB) {
    int error = runRenderTest("nb", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NB_M) {
    int error = runRenderTest("nb", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NE) {
    int error = runRenderTest("ne", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NE_M) {
    int error = runRenderTest("ne", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NL) {
    int error = runRenderTest("nl", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NL_M) {
    int error = runRenderTest("nl", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NO) {
    int error = runRenderTest("no", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_NO_M) {
    int error = runRenderTest("no", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_OR) {
    int error = runRenderTest("or", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_OR_M) {
    int error = runRenderTest("or", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PA) {
    int error = runRenderTest("pa", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PA_M) {
    int error = runRenderTest("pa", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PL) {
    int error = runRenderTest("pl", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PL_M) {
    int error = runRenderTest("pl", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT) {
    int error = runRenderTest("pt", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT_M) {
    int error = runRenderTest("pt", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT_BR) {
    int error = runRenderTest("pt-BR", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT_BR_M) {
    int error = runRenderTest("pt-BR", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT_PT) {
    int error = runRenderTest("pt-PT", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_PT_PT_M) {
    int error = runRenderTest("pt-PT", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_RO) {
    int error = runRenderTest("ro", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_RO_M) {
    int error = runRenderTest("ro", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_RU) {
    int error = runRenderTest("ru", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_RU_M) {
    int error = runRenderTest("ru", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SI) {
    int error = runRenderTest("si", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SI_M) {
    int error = runRenderTest("si", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SK) {
    int error = runRenderTest("sk", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SK_M) {
    int error = runRenderTest("sk", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SL) {
    int error = runRenderTest("sl", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SL_M) {
    int error = runRenderTest("sl", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SQ) {
    int error = runRenderTest("sq", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SQ_M) {
    int error = runRenderTest("sq", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SR) {
    int error = runRenderTest("sr", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SR_M) {
    int error = runRenderTest("sr", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SR_LATN) {
    int error = runRenderTest("sr-Latn", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SR_LATN_M) {
    int error = runRenderTest("sr-Latn", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SV) {
    int error = runRenderTest("sv", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SV_M) {
    int error = runRenderTest("sv", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SW) {
    int error = runRenderTest("sw", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_SW_M) {
    int error = runRenderTest("sw", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TA) {
    int error = runRenderTest("ta", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TA_M) {
    int error = runRenderTest("ta", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TE) {
    int error = runRenderTest("te", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TE_M) {
    int error = runRenderTest("te", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TH) {
    int error = runRenderTest("th", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TH_M) {
    int error = runRenderTest("th", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TL) {
    int error = runRenderTest("tl", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TL_M) {
    int error = runRenderTest("tl", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TR) {
    int error = runRenderTest("tr", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_TR_M) {
    int error = runRenderTest("tr", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UK) {
    int error = runRenderTest("uk", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UK_M) {
    int error = runRenderTest("uk", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UR) {
    int error = runRenderTest("ur", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UR_M) {
    int error = runRenderTest("ur", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UZ) {
    int error = runRenderTest("uz", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_UZ_M) {
    int error = runRenderTest("uz", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_VI) {
    int error = runRenderTest("vi", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_VI_M) {
    int error = runRenderTest("vi", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH) {
    int error = runRenderTest("zh", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_M) {
    int error = runRenderTest("zh", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_CN) {
    int error = runRenderTest("zh-CN", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_CN_M) {
    int error = runRenderTest("zh-CN", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_HK) {
    int error = runRenderTest("zh-HK", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_HK_M) {
    int error = runRenderTest("zh-HK", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_TW) {
    int error = runRenderTest("zh-TW", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZH_TW_M) {
    int error = runRenderTest("zh-TW", true /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZU) {
    int error = runRenderTest("zu", false /* magnified */);
    ASSERT_EQ(error, 0);
}

TEST_F(TeeuiLocaleTest, Test_ZU_M) {
    int error = runRenderTest("zu", true /* magnified */);
    ASSERT_EQ(error, 0);
}

}  // namespace test

}  // namespace teeui
