#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC5A8
// Address: 0x1bc5a8 - 0x1bc930
void sub_001BC5A8_0x1bc5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC5A8_0x1bc5a8");
#endif

    switch (ctx->pc) {
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        default: break;
    }

    ctx->pc = 0x1bc5a8u;

label_1bc5a8:
    // 0x1bc5a8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1bc5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1bc5ac:
    // 0x1bc5ac: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1bc5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1bc5b0:
    // 0x1bc5b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bc5b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5b4:
    // 0x1bc5b4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1bc5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1bc5b8:
    // 0x1bc5b8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1bc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1bc5bc:
    // 0x1bc5bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bc5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1bc5c0:
    // 0x1bc5c0: 0x3c160014  lui         $s6, 0x14
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20 << 16));
label_1bc5c4:
    // 0x1bc5c4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1bc5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1bc5c8:
    // 0x1bc5c8: 0x3c1e0014  lui         $fp, 0x14
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20 << 16));
label_1bc5cc:
    // 0x1bc5cc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1bc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1bc5d0:
    // 0x1bc5d0: 0x3c170014  lui         $s7, 0x14
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)20 << 16));
label_1bc5d4:
    // 0x1bc5d4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1bc5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1bc5d8:
    // 0x1bc5d8: 0x37de0003  ori         $fp, $fp, 0x3
    ctx->pc = 0x1bc5d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3);
label_1bc5dc:
    // 0x1bc5dc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1bc5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1bc5e0:
    // 0x1bc5e0: 0x36d60002  ori         $s6, $s6, 0x2
    ctx->pc = 0x1bc5e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
label_1bc5e4:
    // 0x1bc5e4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1bc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1bc5e8:
    // 0x1bc5e8: 0x36f70001  ori         $s7, $s7, 0x1
    ctx->pc = 0x1bc5e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
label_1bc5ec:
    // 0x1bc5ec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bc5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1bc5f0:
    // 0x1bc5f0: 0xc06f0ca  jal         func_1BC328
label_1bc5f4:
    if (ctx->pc == 0x1BC5F4u) {
        ctx->pc = 0x1BC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5F0u;
        // 0x1bc5f4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5F8u;
        goto label_1bc5f8;
    }
    ctx->pc = 0x1BC5F0u;
    SET_GPR_U32(ctx, 31, 0x1BC5F8u);
    ctx->pc = 0x1BC5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5F0u;
    // 0x1bc5f4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC328u, 0x1BC5F0u, 0x1BC5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5F8u;
label_1bc5f8:
    // 0x1bc5f8: 0xc06f0ee  jal         func_1BC3B8
label_1bc5fc:
    if (ctx->pc == 0x1BC5FCu) {
        ctx->pc = 0x1BC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5F8u;
        // 0x1bc5fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC600u;
        goto label_1bc600;
    }
    ctx->pc = 0x1BC5F8u;
    SET_GPR_U32(ctx, 31, 0x1BC600u);
    ctx->pc = 0x1BC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5F8u;
    // 0x1bc5fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC3B8u, 0x1BC5F8u, 0x1BC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC600u;
label_1bc600:
    // 0x1bc600: 0xc06f110  jal         func_1BC440
label_1bc604:
    if (ctx->pc == 0x1BC604u) {
        ctx->pc = 0x1BC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC600u;
        // 0x1bc604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC608u;
        goto label_1bc608;
    }
    ctx->pc = 0x1BC600u;
    SET_GPR_U32(ctx, 31, 0x1BC608u);
    ctx->pc = 0x1BC604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC600u;
    // 0x1bc604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC440u, 0x1BC600u, 0x1BC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC608u;
label_1bc608:
    // 0x1bc608: 0xc06f12e  jal         func_1BC4B8
label_1bc60c:
    if (ctx->pc == 0x1BC60Cu) {
        ctx->pc = 0x1BC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC608u;
        // 0x1bc60c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC610u;
        goto label_1bc610;
    }
    ctx->pc = 0x1BC608u;
    SET_GPR_U32(ctx, 31, 0x1BC610u);
    ctx->pc = 0x1BC60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC608u;
    // 0x1bc60c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC4B8u, 0x1BC608u, 0x1BC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC610u;
label_1bc610:
    // 0x1bc610: 0xc06f14c  jal         func_1BC530
label_1bc614:
    if (ctx->pc == 0x1BC614u) {
        ctx->pc = 0x1BC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC610u;
        // 0x1bc614: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC618u;
        goto label_1bc618;
    }
    ctx->pc = 0x1BC610u;
    SET_GPR_U32(ctx, 31, 0x1BC618u);
    ctx->pc = 0x1BC614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC610u;
    // 0x1bc614: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC530u, 0x1BC610u, 0x1BC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC618u;
label_1bc618:
    // 0x1bc618: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bc61c:
    // 0x1bc61c: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x1bc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_1bc620:
    // 0x1bc620: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bc624:
    if (ctx->pc == 0x1BC624u) {
        ctx->pc = 0x1BC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC620u;
        // 0x1bc624: 0x3c090014  lui         $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC628u;
        goto label_1bc628;
    }
    ctx->pc = 0x1BC620u;
    {
        const bool branch_taken_0x1bc620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC620u;
        // 0x1bc624: 0x3c090014  lui         $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc620) {
            ctx->pc = 0x1BC644u;
            goto label_1bc644;
        }
    }
    ctx->pc = 0x1BC628u;
label_1bc628:
    // 0x1bc628: 0x3c1e0015  lui         $fp, 0x15
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
label_1bc62c:
    // 0x1bc62c: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x1bc62cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
label_1bc630:
    // 0x1bc630: 0x3c170015  lui         $s7, 0x15
    ctx->pc = 0x1bc630u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)21 << 16));
label_1bc634:
    // 0x1bc634: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x1bc634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
label_1bc638:
    // 0x1bc638: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x1bc638u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
label_1bc63c:
    // 0x1bc63c: 0x36d60003  ori         $s6, $s6, 0x3
    ctx->pc = 0x1bc63cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)3);
label_1bc640:
    // 0x1bc640: 0x36f70001  ori         $s7, $s7, 0x1
    ctx->pc = 0x1bc640u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
label_1bc644:
    // 0x1bc644: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bc648:
    // 0x1bc648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc64c:
    // 0x1bc64c: 0x26b101a0  addiu       $s1, $s5, 0x1A0
    ctx->pc = 0x1bc64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
label_1bc650:
    // 0x1bc650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc654:
    // 0x1bc654: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bc654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bc658:
    // 0x1bc658: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1bc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1bc65c:
    // 0x1bc65c: 0xe6a001a0  swc1        $f0, 0x1A0($s5)
    ctx->pc = 0x1bc65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 416), bits); }
label_1bc660:
    // 0x1bc660: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bc664:
    // 0x1bc664: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1bc664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1bc668:
    // 0x1bc668: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bc668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bc66c:
    // 0x1bc66c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1bc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1bc670:
    // 0x1bc670: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bc674:
    // 0x1bc674: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1bc674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1bc678:
    // 0x1bc678: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1bc67c:
    // 0x1bc67c: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x1bc67cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
label_1bc680:
    // 0x1bc680: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1bc680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc684:
    // 0x1bc684: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1bc684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1bc688:
    // 0x1bc688: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_1bc68c:
    // 0x1bc68c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bc68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bc690:
    // 0x1bc690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc694:
    // 0x1bc694: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1bc694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1bc698:
    // 0x1bc698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc69c:
    // 0x1bc69c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bc69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc6a0:
    // 0x1bc6a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc6a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6a4:
    // 0x1bc6a4: 0xc4cce878  lwc1        $f12, -0x1788($a2)
    ctx->pc = 0x1bc6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc6a8:
    // 0x1bc6a8: 0x26b201b0  addiu       $s2, $s5, 0x1B0
    ctx->pc = 0x1bc6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
label_1bc6ac:
    // 0x1bc6ac: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1bc6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1bc6b0:
    // 0x1bc6b0: 0x8eaa0090  lw          $t2, 0x90($s5)
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_1bc6b4:
    // 0x1bc6b4: 0xc66de844  lwc1        $f13, -0x17BC($s3)
    ctx->pc = 0x1bc6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc6b8:
    // 0x1bc6b8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1bc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1bc6bc:
    // 0x1bc6bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1bc6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1bc6c0:
    // 0x1bc6c0: 0xc06876e  jal         func_1A1DB8
label_1bc6c4:
    if (ctx->pc == 0x1BC6C4u) {
        ctx->pc = 0x1BC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6C0u;
        // 0x1bc6c4: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6C8u;
        goto label_1bc6c8;
    }
    ctx->pc = 0x1BC6C0u;
    SET_GPR_U32(ctx, 31, 0x1BC6C8u);
    ctx->pc = 0x1BC6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6C0u;
    // 0x1bc6c4: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BC6C0u, 0x1BC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6C8u;
label_1bc6c8:
    // 0x1bc6c8: 0xa3b00064  sb          $s0, 0x64($sp)
    ctx->pc = 0x1bc6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 16));
label_1bc6cc:
    // 0x1bc6cc: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x1bc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1bc6d0:
    // 0x1bc6d0: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1bc6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1bc6d4:
    // 0x1bc6d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bc6d8:
    // 0x1bc6d8: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1bc6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
label_1bc6dc:
    // 0x1bc6dc: 0x3c090019  lui         $t1, 0x19
    ctx->pc = 0x1bc6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25 << 16));
label_1bc6e0:
    // 0x1bc6e0: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1bc6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
label_1bc6e4:
    // 0x1bc6e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bc6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc6e8:
    // 0x1bc6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc6ec:
    // 0x1bc6ec: 0x3529000b  ori         $t1, $t1, 0xB
    ctx->pc = 0x1bc6ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
label_1bc6f0:
    // 0x1bc6f0: 0x8eaa0094  lw          $t2, 0x94($s5)
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_1bc6f4:
    // 0x1bc6f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc6f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6f8:
    // 0x1bc6f8: 0xc46ce880  lwc1        $f12, -0x1780($v1)
    ctx->pc = 0x1bc6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc6fc:
    // 0x1bc6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc700:
    // 0x1bc700: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1bc704:
    // 0x1bc704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc708:
    // 0x1bc708: 0xc66de844  lwc1        $f13, -0x17BC($s3)
    ctx->pc = 0x1bc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc70c:
    // 0x1bc70c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1bc70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1bc710:
    // 0x1bc710: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1bc710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1bc714:
    // 0x1bc714: 0xc06876e  jal         func_1A1DB8
label_1bc718:
    if (ctx->pc == 0x1BC718u) {
        ctx->pc = 0x1BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC714u;
        // 0x1bc718: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC71Cu;
        goto label_1bc71c;
    }
    ctx->pc = 0x1BC714u;
    SET_GPR_U32(ctx, 31, 0x1BC71Cu);
    ctx->pc = 0x1BC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC714u;
    // 0x1bc718: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BC714u, 0x1BC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC71Cu;
label_1bc71c:
    // 0x1bc71c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc720:
    // 0x1bc720: 0xc0687f2  jal         func_1A1FC8
label_1bc724:
    if (ctx->pc == 0x1BC724u) {
        ctx->pc = 0x1BC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC720u;
        // 0x1bc724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC728u;
        goto label_1bc728;
    }
    ctx->pc = 0x1BC720u;
    SET_GPR_U32(ctx, 31, 0x1BC728u);
    ctx->pc = 0x1BC724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC720u;
    // 0x1bc724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1FC8u, 0x1BC720u, 0x1BC728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC728u;
label_1bc728:
    // 0x1bc728: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bc728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bc72c:
    // 0x1bc72c: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1bc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1bc730:
    // 0x1bc730: 0xa3a30068  sb          $v1, 0x68($sp)
    ctx->pc = 0x1bc730u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 3));
label_1bc734:
    // 0x1bc734: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bc734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bc738:
    // 0x1bc738: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1bc738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1bc73c:
    // 0x1bc73c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1bc740:
    // 0x1bc740: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bc740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bc744:
    // 0x1bc744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc748:
    // 0x1bc748: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1bc748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1bc74c:
    // 0x1bc74c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1bc74cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1bc750:
    // 0x1bc750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc754:
    // 0x1bc754: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc754u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc758:
    // 0x1bc758: 0x8eaa0090  lw          $t2, 0x90($s5)
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_1bc75c:
    // 0x1bc75c: 0xc48ce888  lwc1        $f12, -0x1778($a0)
    ctx->pc = 0x1bc75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc760:
    // 0x1bc760: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc764:
    // 0x1bc764: 0x26a40590  addiu       $a0, $s5, 0x590
    ctx->pc = 0x1bc764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1424));
label_1bc768:
    // 0x1bc768: 0xc50de848  lwc1        $f13, -0x17B8($t0)
    ctx->pc = 0x1bc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294961224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc76c:
    // 0x1bc76c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc770:
    // 0x1bc770: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1bc770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1bc774:
    // 0x1bc774: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bc774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bc778:
    // 0x1bc778: 0xc06876e  jal         func_1A1DB8
label_1bc77c:
    if (ctx->pc == 0x1BC77Cu) {
        ctx->pc = 0x1BC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC778u;
        // 0x1bc77c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC780u;
        goto label_1bc780;
    }
    ctx->pc = 0x1BC778u;
    SET_GPR_U32(ctx, 31, 0x1BC780u);
    ctx->pc = 0x1BC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC778u;
    // 0x1bc77c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BC778u, 0x1BC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC780u;
label_1bc780:
    // 0x1bc780: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bc780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bc784:
    // 0x1bc784: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bc788:
    // 0x1bc788: 0xc440e864  lwc1        $f0, -0x179C($v0)
    ctx->pc = 0x1bc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc78c:
    // 0x1bc78c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bc790:
    // 0x1bc790: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bc794:
    // 0x1bc794: 0xc461e850  lwc1        $f1, -0x17B0($v1)
    ctx->pc = 0x1bc794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc798:
    // 0x1bc798: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bc798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bc79c:
    // 0x1bc79c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bc7a0:
    // 0x1bc7a0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1bc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1bc7a4:
    // 0x1bc7a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bc7a8:
    // 0x1bc7a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1bc7ac:
    // 0x1bc7ac: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bc7b0:
    // 0x1bc7b0: 0xc440e854  lwc1        $f0, -0x17AC($v0)
    ctx->pc = 0x1bc7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc7b4:
    // 0x1bc7b4: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1bc7b8:
    // 0x1bc7b8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1bc7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1bc7bc:
    // 0x1bc7bc: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bc7c0:
    // 0x1bc7c0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1bc7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1bc7c4:
    // 0x1bc7c4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1bc7c8:
    // 0x1bc7c8: 0xc461e858  lwc1        $f1, -0x17A8($v1)
    ctx->pc = 0x1bc7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc7cc:
    // 0x1bc7cc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1bc7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1bc7d0:
    // 0x1bc7d0: 0xc482e85c  lwc1        $f2, -0x17A4($a0)
    ctx->pc = 0x1bc7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bc7d4:
    // 0x1bc7d4: 0x24a54bf0  addiu       $a1, $a1, 0x4BF0
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19440));
label_1bc7d8:
    // 0x1bc7d8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bc7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1bc7dc:
    // 0x1bc7dc: 0x25084c08  addiu       $t0, $t0, 0x4C08
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19464));
label_1bc7e0:
    // 0x1bc7e0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1bc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1bc7e4:
    // 0x1bc7e4: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x1bc7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_1bc7e8:
    // 0x1bc7e8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1bc7e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1bc7ec:
    // 0x1bc7ec: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bc7f0:
    // 0x1bc7f0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bc7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1bc7f4:
    // 0x1bc7f4: 0x240900b9  addiu       $t1, $zero, 0xB9
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_1bc7f8:
    // 0x1bc7f8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1bc7f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1bc7fc:
    // 0x1bc7fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc800:
    // 0x1bc800: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bc800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1bc804:
    // 0x1bc804: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc804u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc808:
    // 0x1bc808: 0x8dac27e4  lw          $t4, 0x27E4($t5)
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 10212)));
label_1bc80c:
    // 0x1bc80c: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1bc80cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1bc810:
    // 0x1bc810: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1bc814:
    // 0x1bc814: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1bc818:
    // 0x1bc818: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bc81c:
    // 0x1bc81c: 0x40f809  jalr        $v0
label_1bc820:
    if (ctx->pc == 0x1BC820u) {
        ctx->pc = 0x1BC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC81Cu;
        // 0x1bc820: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC824u;
        goto label_1bc824;
    }
    ctx->pc = 0x1BC81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC824u);
        ctx->pc = 0x1BC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC81Cu;
        // 0x1bc820: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC81Cu, 0x1BC824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC824u;
label_1bc824:
    // 0x1bc824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bc828:
    if (ctx->pc == 0x1BC828u) {
        ctx->pc = 0x1BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC824u;
        // 0x1bc828: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC82Cu;
        goto label_1bc82c;
    }
    ctx->pc = 0x1BC824u;
    {
        const bool branch_taken_0x1bc824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC824u;
        // 0x1bc828: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc824) {
            ctx->pc = 0x1BC838u;
            goto label_1bc838;
        }
    }
    ctx->pc = 0x1BC82Cu;
label_1bc82c:
    // 0x1bc82c: 0xc0742aa  jal         func_1D0AA8
label_1bc830:
    if (ctx->pc == 0x1BC830u) {
        ctx->pc = 0x1BC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC82Cu;
        // 0x1bc830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC834u;
        goto label_1bc834;
    }
    ctx->pc = 0x1BC82Cu;
    SET_GPR_U32(ctx, 31, 0x1BC834u);
    ctx->pc = 0x1BC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC82Cu;
    // 0x1bc830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AA8u, 0x1BC82Cu, 0x1BC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC834u;
label_1bc834:
    // 0x1bc834: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bc838:
    // 0x1bc838: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bc838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bc83c:
    // 0x1bc83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc840:
    // 0x1bc840: 0xc06f0b0  jal         func_1BC2C0
label_1bc844:
    if (ctx->pc == 0x1BC844u) {
        ctx->pc = 0x1BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC840u;
        // 0x1bc844: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC848u;
        goto label_1bc848;
    }
    ctx->pc = 0x1BC840u;
    SET_GPR_U32(ctx, 31, 0x1BC848u);
    ctx->pc = 0x1BC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC840u;
    // 0x1bc844: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC2C0u, 0x1BC840u, 0x1BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC848u;
label_1bc848:
    // 0x1bc848: 0x26b102b0  addiu       $s1, $s5, 0x2B0
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_1bc84c:
    // 0x1bc84c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_1bc850:
    // 0x1bc850: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc854:
    // 0x1bc854: 0x8eab0090  lw          $t3, 0x90($s5)
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_1bc858:
    // 0x1bc858: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bc858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bc85c:
    // 0x1bc85c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc860:
    // 0x1bc860: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc864:
    // 0x1bc864: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
label_1bc868:
    // 0x1bc868: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bc868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1bc86c:
    // 0x1bc86c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc870:
    // 0x1bc870: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1bc870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bc874:
    // 0x1bc874: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1bc878:
    // 0x1bc878: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1bc878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1bc87c:
    // 0x1bc87c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1bc880:
    // 0x1bc880: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1bc880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1bc884:
    // 0x1bc884: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x1bc884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_1bc888:
    // 0x1bc888: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bc88c:
    // 0x1bc88c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bc88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc890:
    // 0x1bc890: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1bc894:
    // 0x1bc894: 0x40f809  jalr        $v0
label_1bc898:
    if (ctx->pc == 0x1BC898u) {
        ctx->pc = 0x1BC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC894u;
        // 0x1bc898: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC89Cu;
        goto label_1bc89c;
    }
    ctx->pc = 0x1BC894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC89Cu);
        ctx->pc = 0x1BC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC894u;
        // 0x1bc898: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC894u, 0x1BC89Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC89Cu;
label_1bc89c:
    // 0x1bc89c: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_1bc8a0:
    // 0x1bc8a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bc8a4:
    // 0x1bc8a4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1bc8a8:
    // 0x1bc8a8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1bc8ac:
    // 0x1bc8ac: 0x60f809  jalr        $v1
label_1bc8b0:
    if (ctx->pc == 0x1BC8B0u) {
        ctx->pc = 0x1BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ACu;
        // 0x1bc8b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8B4u;
        goto label_1bc8b4;
    }
    ctx->pc = 0x1BC8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC8B4u);
        ctx->pc = 0x1BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ACu;
        // 0x1bc8b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC8ACu, 0x1BC8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC8B4u;
label_1bc8b4:
    // 0x1bc8b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bc8b8:
    // 0x1bc8b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bc8bc:
    // 0x1bc8bc: 0xc440e88c  lwc1        $f0, -0x1774($v0)
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc8c0:
    // 0x1bc8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bc8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8c4:
    // 0x1bc8c4: 0xc461e890  lwc1        $f1, -0x1770($v1)
    ctx->pc = 0x1bc8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc8c8:
    // 0x1bc8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8cc:
    // 0x1bc8cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1bc8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1bc8d0:
    // 0x1bc8d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc8d4:
    // 0x1bc8d4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1bc8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1bc8d8:
    // 0x1bc8d8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1bc8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1bc8dc:
    // 0x1bc8dc: 0xc073ad0  jal         func_1CEB40
label_1bc8e0:
    if (ctx->pc == 0x1BC8E0u) {
        ctx->pc = 0x1BC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8DCu;
        // 0x1bc8e0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8E4u;
        goto label_1bc8e4;
    }
    ctx->pc = 0x1BC8DCu;
    SET_GPR_U32(ctx, 31, 0x1BC8E4u);
    ctx->pc = 0x1BC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8DCu;
    // 0x1bc8e0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1BC8DCu, 0x1BC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8E4u;
label_1bc8e4:
    // 0x1bc8e4: 0xc067b9c  jal         func_19EE70
label_1bc8e8:
    if (ctx->pc == 0x1BC8E8u) {
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8ECu;
        goto label_1bc8ec;
    }
    ctx->pc = 0x1BC8E4u;
    SET_GPR_U32(ctx, 31, 0x1BC8ECu);
    ctx->pc = 0x1BC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8E4u;
    // 0x1bc8e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1BC8E4u, 0x1BC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8f0:
    // 0x1bc8f0: 0xc073b0a  jal         func_1CEC28
label_1bc8f4:
    if (ctx->pc == 0x1BC8F4u) {
        ctx->pc = 0x1BC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8F0u;
        // 0x1bc8f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8F8u;
        goto label_1bc8f8;
    }
    ctx->pc = 0x1BC8F0u;
    SET_GPR_U32(ctx, 31, 0x1BC8F8u);
    ctx->pc = 0x1BC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8F0u;
    // 0x1bc8f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1BC8F0u, 0x1BC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8F8u;
label_1bc8f8:
    // 0x1bc8f8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1bc8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1bc8fc:
    // 0x1bc8fc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1bc8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1bc900:
    // 0x1bc900: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1bc900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1bc904:
    // 0x1bc904: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1bc904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bc908:
    // 0x1bc908: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1bc908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bc90c:
    // 0x1bc90c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1bc90cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bc910:
    // 0x1bc910: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1bc910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bc914:
    // 0x1bc914: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1bc914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bc918:
    // 0x1bc918: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1bc918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bc91c:
    // 0x1bc91c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bc920:
    // 0x1bc920: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1bc920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bc924:
    // 0x1bc924: 0x3e00008  jr          $ra
label_1bc928:
    if (ctx->pc == 0x1BC928u) {
        ctx->pc = 0x1BC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC924u;
        // 0x1bc928: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC92Cu;
        goto label_1bc92c;
    }
    ctx->pc = 0x1BC924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC924u;
        // 0x1bc928: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC92Cu;
label_1bc92c:
    // 0x1bc92c: 0x0  nop
    ctx->pc = 0x1bc92cu;
    // NOP
    ctx->pc = 0x1bc930u;
}
