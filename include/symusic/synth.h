//
// Created by nhy on 2024/2/12.
//
#pragma once
#ifndef SYNTH_H
#define SYNTH_H

#include "prestosynth/synthesizer.h"
#include "symusic/score.h"


namespace symusic {
class Synthesizer {
private:
    psynth::Synthesizer synthesizer;

public:
    Synthesizer(const std::string &sfPath, u32 sampleRate, u8 quality, u8 worker_num = 1):
        synthesizer(sfPath, sampleRate, quality, worker_num) {}

    template<TType T>
    psynth::AudioData render(const Score<T> & score, bool stereo);
};

namespace details {
    psynth::Sequence toSequence(const Score<Second> & score);
}

}
#endif //SYNTH_H