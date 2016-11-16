//--------//--------//--------//--------//--------//--------//--------//--------
/*
  ==============================================================================

   This file follows the same open source licensing as the JUCE library.
   Copyright (c) 2016 John Flynn

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL v3

   Details of these licenses can be found at: www.gnu.org/licenses

   Judio is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ==============================================================================
*/
//--------//--------//--------//--------//--------//--------//--------//--------

#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

#include "../../JuceLibraryCode/JuceHeader.h"

namespace jdo
{
//--------//--------//--------//--------//--------//--------//--------//--------
/**
    @brief  Loads JUCE binary data in WAV format into AudioBuffer<float>

    @param  binaryData      Binary data. Needs WAV but DOES NOT CHECK!!!
    @param  binaryDataSize  Binary data size.
    @param  targetBuffer    buffer to write into. Will be cleared and resized!!!

    @see    AudioBuffer<T>
*/
void bufferLoadFromWavBinaryData (const void* binaryData,
                                  size_t binaryDataSize,
                                  AudioBuffer<float>& targetBuffer);

//--------//--------//--------//--------//--------//--------//--------//--------
/**
    @brief  Fills entire AudioBuffer<float> with value 1.0f

    @param  buffer  Buffer to fill.

    @see    AudioBuffer<T>
*/
void bufferFillAllOnes (AudioBuffer<float>& buffer);

//--------//--------//--------//--------//--------//--------//--------//--------
/**
    @brief  Sums the elements of an AudioBuffer<float>

    @param  buffer  Buffer to sum.
    @return         Summed value.

    @see    AudioBuffer<T>
*/
float bufferSumElements (const AudioBuffer<float>& buffer);

//--------//--------//--------//--------//--------//--------//--------//--------
/** 
    Next power of two integer larger than x
*/
int nextPowerOf2 (int x);

} // namespace

#endif  // UTILITY_H_INCLUDED
