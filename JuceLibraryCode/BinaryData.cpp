/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== Stereo64SamplesAllOnes.wav ==================
static const unsigned char temp_binary_data_0[] =
{ 82,73,70,70,164,1,0,0,87,65,86,69,102,109,116,32,16,0,0,0,1,0,2,0,68,172,0,0,152,9,4,0,6,0,24,0,100,97,116,97,128,1,0,0,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,
255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,255,255,127,0,0 };

const char* Stereo64SamplesAllOnes_wav = (const char*) temp_binary_data_0;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x86e526e8:  numBytes = 428; return Stereo64SamplesAllOnes_wav;
        default: break;
    }

    numBytes = 0;
    return 0;
}

const char* namedResourceList[] =
{
    "Stereo64SamplesAllOnes_wav"
};

}
