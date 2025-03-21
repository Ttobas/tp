/**
 * c_m3d_g_aab.cpp
 *
 */

#include "SSystem/SComponent/c_m3d_g_aab.h"

/* 8026EC54-8026EC88 0034+00 s=0 e=4 z=0  None .text      Set__8cM3dGAabFPC4cXyzPC4cXyz */
void cM3dGAab::Set(const cXyz* min, const cXyz* max) {
    mMin = *min;
    mMax = *max;
}

/* 8026EC88-8026ECD0 0048+00 s=0 e=6 z=0  None .text      CrossY__8cM3dGAabCFPC4cXyz */
bool cM3dGAab::CrossY(const cXyz* other) const {
    if (mMin.x > other->x || mMax.x < other->x || mMin.z > other->z || mMax.z < other->z) {
        return false;
    } else {
        return true;
    }
}

/* 8026ECD0-8026ECE4 0014+00 s=0 e=6 z=0  None .text      UnderPlaneYUnder__8cM3dGAabCFf */
bool cM3dGAab::UnderPlaneYUnder(f32 y) const {
    if (mMin.y < y) {
        return true;
    }

    return false;
}

/* 8026ECE4-8026ECF8 0014+00 s=0 e=6 z=0  None .text      TopPlaneYUnder__8cM3dGAabCFf */
bool cM3dGAab::TopPlaneYUnder(f32 y) const {
    if (mMax.y < y) {
        return true;
    }

    return false;
}

/* 8026ECF8-8026ED1C 0024+00 s=0 e=6 z=0  None .text      ClearForMinMax__8cM3dGAabFv */
void cM3dGAab::ClearForMinMax() {
    mMin.x = mMin.y = mMin.z = 1000000000.0f;
    mMax.x = mMax.y = mMax.z = -1000000000.0f;
}

/* 8026ED1C-8026ED60 0044+00 s=1 e=3 z=0  None .text      SetMinMax__8cM3dGAabFRC4cXyz */
void cM3dGAab::SetMinMax(const cXyz& pMinMax) {
    this->SetMin(pMinMax);
    this->SetMax(pMinMax);
}

/* 8026ED60-8026EDA4 0044+00 s=0 e=2 z=0  None .text      SetMinMax__8cM3dGAabFRC8cM3dGAab */
void cM3dGAab::SetMinMax(const cM3dGAab& other) {
    this->SetMinMax(other.mMin);
    this->SetMinMax(other.mMax);
}

/* 8026EDA4-8026EDE4 0040+00 s=1 e=1 z=0  None .text      SetMin__8cM3dGAabFRC4cXyz */
void cM3dGAab::SetMin(const cXyz& min) {
    if (mMin.x > min.x) {
        mMin.x = min.x;
    }
    if (mMin.y > min.y) {
        mMin.y = min.y;
    }
    if (mMin.z > min.z) {
        mMin.z = min.z;
    }
}

/* 8026EDE4-8026EE24 0040+00 s=1 e=1 z=0  None .text      SetMax__8cM3dGAabFRC4cXyz */
void cM3dGAab::SetMax(const cXyz& max) {
    if (mMax.x < max.x) {
        mMax.x = max.x;
    }
    if (mMax.y < max.y) {
        mMax.y = max.y;
    }
    if (mMax.z < max.z) {
        mMax.z = max.z;
    }
}

/* 8026EE24-8026EE68 0044+00 s=0 e=1 z=0  None .text      CalcCenter__8cM3dGAabCFP4cXyz */
void cM3dGAab::CalcCenter(cXyz* out) const {
    PSVECAdd(&mMin, &mMax, out);
    PSVECScale(out, out, 0.5f);
}

/* 8026EE68-8026EEB4 004C+00 s=0 e=1 z=0  None .text      PlusR__8cM3dGAabFf */
void cM3dGAab::PlusR(f32 r) {
    mMin.x -= r;
    mMin.y -= r;
    mMin.z -= r;

    mMax.x += r;
    mMax.y += r;
    mMax.z += r;
}
