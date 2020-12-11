/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "micro_features_no_micro_features_data.h"

// Golden test values for the expected spectrogram from a "no" sample file
// speech_commands_test_set_v0.02/no/f9643d42_nohash_4.wav.

const int g_no_micro_f9643d42_nohash_4_width = 40;
const int g_no_micro_f9643d42_nohash_4_height = 49;
const unsigned char g_no_micro_f9643d42_nohash_4_data[] = {
  197, 198, 218, 208, 212, 206, 213, 204, 219, 200, 
  202, 210, 226, 211, 213, 205, 218, 209, 219, 204, 
  216, 203, 219, 216, 228, 213, 218, 210, 221, 204, 
  221, 210, 222, 209, 217, 203, 206, 198, 205, 192, 
  211, 203, 213, 206, 217, 184, 197, 185, 209, 193, 
  216, 185, 199, 184, 210, 193, 210, 191, 223, 206, 
  226, 209, 213, 192, 217, 188, 203, 198, 220, 196, 
  204, 193, 208, 187, 210, 194, 205, 191, 199, 181, 
  187, 145, 194, 180, 197, 178, 200, 187, 183, 187, 
  211, 186, 211, 190, 210, 193, 190, 177, 193, 191, 
  196, 190, 216, 178, 195, 185, 200, 190, 201, 185, 
  216, 193, 203, 180, 198, 181, 196, 177, 190, 176, 
  186, 193, 207, 190, 208, 187, 210, 174, 169, 185, 
  212, 186, 216, 184, 206, 182, 203, 190, 194, 180, 
  205, 186, 206, 183, 195, 180, 197, 172, 202, 191, 
  200, 168, 198, 187, 207, 178, 197, 169, 201, 178, 
  201, 174, 198, 136, 192, 178, 178, 164, 197, 177, 
  184, 166, 196, 176, 186, 166, 204, 175, 189, 162, 
  195, 167, 198, 158, 181, 166, 199, 163, 187, 179, 
  198, 163, 187, 167, 191, 174, 189, 174, 191, 157, 
  148, 95, 139, 51, 170, 137, 211, 187, 190, 145, 
  164, 161, 184, 171, 206, 173, 173, 161, 195, 158, 
  185, 172, 193, 176, 199, 174, 201, 166, 188, 146, 
  193, 166, 203, 175, 187, 170, 184, 156, 181, 154, 
  184, 181, 202, 139, 187, 157, 208, 185, 184, 157, 
  174, 169, 197, 175, 191, 130, 172, 143, 185, 156, 
  185, 171, 188, 143, 192, 171, 201, 166, 194, 155, 
  184, 160, 187, 163, 173, 135, 179, 154, 185, 169, 
  193, 171, 176, 137, 173, 159, 170, 150, 189, 161, 
  176, 162, 200, 177, 201, 157, 198, 185, 193, 160, 
  184, 144, 185, 159, 160, 99, 190, 164, 199, 161, 
  197, 152, 190, 165, 191, 140, 177, 138, 180, 132, 
  105, 0, 140, 141, 188, 164, 174, 128, 193, 141, 
  179, 143, 179, 90, 164, 78, 194, 179, 197, 161, 
  187, 120, 193, 147, 182, 138, 177, 148, 169, 149, 
  168, 146, 186, 135, 169, 135, 186, 158, 180, 128, 
  105, 112, 177, 152, 178, 95, 173, 90, 189, 152, 
  173, 119, 191, 164, 188, 163, 166, 157, 181, 165, 
  194, 150, 176, 122, 187, 157, 176, 99, 176, 158, 
  171, 107, 173, 136, 176, 119, 174, 136, 184, 110, 
  179, 99, 176, 159, 179, 123, 120, 119, 176, 140, 
  180, 117, 156, 133, 181, 143, 166, 114, 188, 107, 
  184, 136, 158, 95, 191, 136, 175, 153, 169, 144, 
  172, 139, 189, 156, 166, 131, 173, 148, 176, 132, 
  194, 176, 198, 146, 172, 145, 155, 116, 189, 171, 
  191, 166, 186, 127, 184, 160, 187, 166, 159, 148, 
  140, 51, 188, 107, 145, 127, 187, 138, 175, 145, 
  185, 123, 155, 142, 184, 158, 185, 125, 184, 144, 
  134, 85, 119, 0, 110, 0, 129, 128, 179, 99, 
  145, 160, 187, 146, 180, 164, 197, 171, 184, 144, 
  176, 140, 200, 132, 177, 120, 174, 119, 160, 129, 
  185, 151, 169, 116, 183, 130, 169, 68, 139, 78, 
  150, 51, 175, 51, 184, 162, 123, 99, 173, 0, 
  188, 164, 188, 128, 180, 137, 192, 160, 167, 147, 
  190, 187, 233, 192, 183, 138, 185, 112, 195, 172, 
  173, 125, 175, 110, 173, 125, 166, 112, 154, 85, 
  191, 135, 116, 78, 144, 130, 157, 95, 186, 148, 
  166, 0, 167, 126, 151, 119, 161, 51, 177, 149, 
  187, 179, 225, 182, 156, 114, 189, 146, 170, 157, 
  176, 128, 174, 110, 161, 51, 160, 112, 147, 78, 
  191, 161, 153, 107, 156, 0, 110, 0, 146, 85, 
  145, 0, 147, 107, 169, 117, 148, 0, 176, 161, 
  185, 171, 211, 158, 191, 172, 194, 95, 177, 162, 
  177, 119, 159, 110, 151, 0, 151, 90, 154, 0, 
  90, 0, 95, 0, 169, 107, 140, 107, 123, 0, 
  145, 0, 102, 117, 142, 0, 128, 0, 182, 145, 
  180, 105, 179, 85, 177, 123, 105, 68, 157, 51, 
  159, 102, 171, 105, 149, 90, 130, 68, 147, 95, 
  127, 78, 148, 99, 161, 112, 181, 129, 149, 114, 
  185, 110, 68, 0, 170, 0, 78, 78, 166, 119, 
  160, 78, 189, 153, 161, 0, 163, 120, 144, 51, 
  150, 78, 159, 128, 165, 95, 152, 78, 151, 90, 
  160, 139, 186, 95, 0, 0, 156, 0, 90, 117, 
  140, 0, 134, 128, 167, 85, 123, 0, 166, 114, 
  158, 51, 137, 0, 120, 0, 136, 119, 151, 0, 
  132, 0, 158, 68, 146, 102, 162, 107, 139, 90, 
  151, 0, 123, 0, 141, 0, 152, 78, 164, 114, 
  177, 90, 126, 0, 114, 68, 132, 0, 152, 51, 
  164, 110, 135, 0, 162, 114, 120, 51, 146, 0, 
  152, 90, 152, 68, 146, 0, 137, 105, 134, 0, 
  150, 0, 144, 0, 128, 0, 0, 0, 68, 0, 
  126, 0, 0, 0, 133, 0, 161, 126, 171, 78, 
  142, 0, 123, 0, 138, 68, 160, 0, 114, 0, 
  107, 95, 117, 0, 139, 107, 147, 95, 145, 68, 
  198, 173, 157, 179, 205, 150, 179, 125, 132, 120, 
  179, 173, 159, 139, 182, 140, 181, 148, 146, 99, 
  159, 78, 68, 0, 122, 0, 143, 85, 107, 85, 
  150, 85, 117, 0, 136, 78, 150, 0, 133, 68, 
  202, 183, 225, 207, 227, 213, 217, 193, 190, 184, 
  218, 204, 131, 51, 114, 99, 149, 51, 130, 0, 
  169, 68, 0, 0, 51, 78, 159, 105, 150, 0, 
  110, 99, 157, 110, 117, 68, 145, 90, 144, 90, 
  211, 147, 230, 210, 230, 218, 231, 202, 215, 208, 
  220, 207, 209, 190, 177, 95, 128, 0, 141, 0, 
  142, 130, 0, 0, 134, 0, 51, 0, 126, 51, 
  129, 0, 143, 68, 136, 68, 105, 0, 117, 0, 
  216, 166, 229, 210, 210, 196, 223, 191, 221, 212, 
  233, 195, 223, 210, 211, 0, 172, 102, 90, 95, 
  166, 68, 85, 0, 117, 0, 95, 0, 105, 0, 
  141, 0, 114, 105, 154, 105, 157, 85, 117, 0, 
  219, 180, 211, 200, 213, 164, 217, 179, 220, 179, 
  224, 184, 221, 205, 229, 170, 143, 0, 153, 107, 
  151, 0, 0, 0, 99, 0, 0, 0, 146, 114, 
  142, 0, 126, 0, 128, 0, 95, 0, 129, 78, 
  224, 191, 207, 198, 220, 174, 225, 192, 221, 175, 
  226, 200, 220, 196, 230, 203, 204, 0, 85, 51, 
  85, 0, 0, 0, 152, 68, 107, 0, 105, 68, 
  129, 90, 147, 0, 143, 0, 85, 0, 130, 0, 
  219, 189, 172, 192, 225, 180, 228, 207, 227, 200, 
  217, 209, 231, 208, 219, 204, 218, 139, 139, 0, 
  105, 0, 0, 0, 116, 0, 68, 51, 145, 123, 
  152, 0, 123, 68, 138, 0, 131, 90, 144, 99, 
  186, 152, 196, 199, 228, 184, 237, 220, 222, 202, 
  222, 210, 236, 221, 221, 203, 238, 206, 215, 78, 
  138, 0, 0, 68, 147, 151, 197, 175, 194, 138, 
  85, 85, 123, 68, 126, 0, 126, 112, 193, 164, 
  197, 177, 149, 173, 211, 181, 239, 221, 226, 208, 
  222, 213, 239, 223, 238, 200, 233, 220, 244, 204, 
  197, 153, 187, 190, 210, 212, 233, 207, 196, 171, 
  171, 85, 164, 85, 182, 197, 174, 145, 206, 195, 
  201, 176, 85, 0, 163, 187, 226, 200, 235, 215, 
  223, 202, 232, 203, 218, 208, 222, 212, 234, 216, 
  216, 169, 170, 192, 227, 208, 232, 192, 203, 179, 
  193, 151, 133, 68, 170, 176, 185, 119, 175, 146, 
  187, 133, 147, 0, 125, 186, 207, 160, 229, 197, 
  209, 138, 231, 198, 234, 212, 192, 191, 203, 207, 
  238, 202, 166, 169, 211, 199, 212, 173, 218, 190, 
  214, 191, 177, 90, 166, 192, 209, 95, 132, 85, 
  107, 0, 176, 90, 138, 172, 151, 0, 205, 168, 
  218, 154, 186, 183, 238, 212, 228, 185, 215, 204, 
  232, 203, 195, 193, 221, 192, 215, 192, 204, 177, 
  210, 185, 193, 112, 180, 188, 206, 68, 176, 161, 
  183, 110, 174, 0, 182, 170, 145, 184, 207, 159, 
  192, 90, 146, 0, 180, 173, 226, 211, 221, 200, 
  229, 201, 214, 202, 221, 192, 211, 191, 216, 162, 
  197, 174, 191, 133, 181, 161, 157, 155, 203, 171, 
  171, 133, 162, 51, 203, 169, 190, 140, 206, 152, 
  145, 0, 0, 0, 161, 105, 202, 177, 211, 203, 
  225, 209, 223, 200, 216, 180, 190, 201, 231, 202, 
  202, 131, 170, 134, 166, 112, 193, 200, 120, 68, 
  110, 146, 159, 135, 192, 51, 162, 0, 138, 0, 
  51, 0, 122, 0, 112, 90, 170, 134, 203, 163, 
  215, 211, 213, 175, 214, 187, 200, 189, 227, 200, 
  211, 114, 139, 51, 0, 0, 151, 51, 51, 90, 
  68, 158, 163, 117, 183, 0, 0, 0, 133, 0, 
  0, 0, 0, 0, 0, 0, 152, 102, 184, 51, 
  161, 163, 207, 184, 194, 163, 193, 154, 189, 116, 
  182, 95, 133, 0, 138, 0, 102, 99, 0, 0, 
  105, 145, 178, 0, 0, 0, 0, 0, 150, 0, 
  0, 0, 0, 0, 0, 51, 169, 0, 128, 0, 
  171, 0, 159, 167, 188, 51, 171, 137, 181, 90, 
  165, 0, 51, 51, 127, 0, 110, 0, 68, 0, 
  85, 0, 0, 0, 137, 0, 51, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 132, 0, 105, 0, 
  148, 0, 174, 152, 172, 114, 107, 0, 162, 0, 
  90, 0, 78, 0, 0, 0, 0, 0, 51, 0, 
  102, 0, 0, 0, 99, 0, 0, 0, 114, 0, 
  0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 
  138, 0, 136, 119, 164, 0, 95, 78, 157, 0, 
  85, 0, 85, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 
  0, 0, 117, 0, 78, 0, 95, 78, 120, 0, 
  107, 0, 138, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 
  0, 0, 68, 0, 78, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
