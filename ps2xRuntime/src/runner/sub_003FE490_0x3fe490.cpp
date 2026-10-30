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

// Function: sub_003FE490
// Address: 0x3fe490 - 0x3fe6b8
void sub_003FE490_0x3fe490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE490_0x3fe490");
#endif

    switch (ctx->pc) {
        case 0x3fe490u: goto label_3fe490;
        case 0x3fe494u: goto label_3fe494;
        case 0x3fe498u: goto label_3fe498;
        case 0x3fe49cu: goto label_3fe49c;
        case 0x3fe4a0u: goto label_3fe4a0;
        case 0x3fe4a4u: goto label_3fe4a4;
        case 0x3fe4a8u: goto label_3fe4a8;
        case 0x3fe4acu: goto label_3fe4ac;
        case 0x3fe4b0u: goto label_3fe4b0;
        case 0x3fe4b4u: goto label_3fe4b4;
        case 0x3fe4b8u: goto label_3fe4b8;
        case 0x3fe4bcu: goto label_3fe4bc;
        case 0x3fe4c0u: goto label_3fe4c0;
        case 0x3fe4c4u: goto label_3fe4c4;
        case 0x3fe4c8u: goto label_3fe4c8;
        case 0x3fe4ccu: goto label_3fe4cc;
        case 0x3fe4d0u: goto label_3fe4d0;
        case 0x3fe4d4u: goto label_3fe4d4;
        case 0x3fe4d8u: goto label_3fe4d8;
        case 0x3fe4dcu: goto label_3fe4dc;
        case 0x3fe4e0u: goto label_3fe4e0;
        case 0x3fe4e4u: goto label_3fe4e4;
        case 0x3fe4e8u: goto label_3fe4e8;
        case 0x3fe4ecu: goto label_3fe4ec;
        case 0x3fe4f0u: goto label_3fe4f0;
        case 0x3fe4f4u: goto label_3fe4f4;
        case 0x3fe4f8u: goto label_3fe4f8;
        case 0x3fe4fcu: goto label_3fe4fc;
        case 0x3fe500u: goto label_3fe500;
        case 0x3fe504u: goto label_3fe504;
        case 0x3fe508u: goto label_3fe508;
        case 0x3fe50cu: goto label_3fe50c;
        case 0x3fe510u: goto label_3fe510;
        case 0x3fe514u: goto label_3fe514;
        case 0x3fe518u: goto label_3fe518;
        case 0x3fe51cu: goto label_3fe51c;
        case 0x3fe520u: goto label_3fe520;
        case 0x3fe524u: goto label_3fe524;
        case 0x3fe528u: goto label_3fe528;
        case 0x3fe52cu: goto label_3fe52c;
        case 0x3fe530u: goto label_3fe530;
        case 0x3fe534u: goto label_3fe534;
        case 0x3fe538u: goto label_3fe538;
        case 0x3fe53cu: goto label_3fe53c;
        case 0x3fe540u: goto label_3fe540;
        case 0x3fe544u: goto label_3fe544;
        case 0x3fe548u: goto label_3fe548;
        case 0x3fe54cu: goto label_3fe54c;
        case 0x3fe550u: goto label_3fe550;
        case 0x3fe554u: goto label_3fe554;
        case 0x3fe558u: goto label_3fe558;
        case 0x3fe55cu: goto label_3fe55c;
        case 0x3fe560u: goto label_3fe560;
        case 0x3fe564u: goto label_3fe564;
        case 0x3fe568u: goto label_3fe568;
        case 0x3fe56cu: goto label_3fe56c;
        case 0x3fe570u: goto label_3fe570;
        case 0x3fe574u: goto label_3fe574;
        case 0x3fe578u: goto label_3fe578;
        case 0x3fe57cu: goto label_3fe57c;
        case 0x3fe580u: goto label_3fe580;
        case 0x3fe584u: goto label_3fe584;
        case 0x3fe588u: goto label_3fe588;
        case 0x3fe58cu: goto label_3fe58c;
        case 0x3fe590u: goto label_3fe590;
        case 0x3fe594u: goto label_3fe594;
        case 0x3fe598u: goto label_3fe598;
        case 0x3fe59cu: goto label_3fe59c;
        case 0x3fe5a0u: goto label_3fe5a0;
        case 0x3fe5a4u: goto label_3fe5a4;
        case 0x3fe5a8u: goto label_3fe5a8;
        case 0x3fe5acu: goto label_3fe5ac;
        case 0x3fe5b0u: goto label_3fe5b0;
        case 0x3fe5b4u: goto label_3fe5b4;
        case 0x3fe5b8u: goto label_3fe5b8;
        case 0x3fe5bcu: goto label_3fe5bc;
        case 0x3fe5c0u: goto label_3fe5c0;
        case 0x3fe5c4u: goto label_3fe5c4;
        case 0x3fe5c8u: goto label_3fe5c8;
        case 0x3fe5ccu: goto label_3fe5cc;
        case 0x3fe5d0u: goto label_3fe5d0;
        case 0x3fe5d4u: goto label_3fe5d4;
        case 0x3fe5d8u: goto label_3fe5d8;
        case 0x3fe5dcu: goto label_3fe5dc;
        case 0x3fe5e0u: goto label_3fe5e0;
        case 0x3fe5e4u: goto label_3fe5e4;
        case 0x3fe5e8u: goto label_3fe5e8;
        case 0x3fe5ecu: goto label_3fe5ec;
        case 0x3fe5f0u: goto label_3fe5f0;
        case 0x3fe5f4u: goto label_3fe5f4;
        case 0x3fe5f8u: goto label_3fe5f8;
        case 0x3fe5fcu: goto label_3fe5fc;
        case 0x3fe600u: goto label_3fe600;
        case 0x3fe604u: goto label_3fe604;
        case 0x3fe608u: goto label_3fe608;
        case 0x3fe60cu: goto label_3fe60c;
        case 0x3fe610u: goto label_3fe610;
        case 0x3fe614u: goto label_3fe614;
        case 0x3fe618u: goto label_3fe618;
        case 0x3fe61cu: goto label_3fe61c;
        case 0x3fe620u: goto label_3fe620;
        case 0x3fe624u: goto label_3fe624;
        case 0x3fe628u: goto label_3fe628;
        case 0x3fe62cu: goto label_3fe62c;
        case 0x3fe630u: goto label_3fe630;
        case 0x3fe634u: goto label_3fe634;
        case 0x3fe638u: goto label_3fe638;
        case 0x3fe63cu: goto label_3fe63c;
        case 0x3fe640u: goto label_3fe640;
        case 0x3fe644u: goto label_3fe644;
        case 0x3fe648u: goto label_3fe648;
        case 0x3fe64cu: goto label_3fe64c;
        case 0x3fe650u: goto label_3fe650;
        case 0x3fe654u: goto label_3fe654;
        case 0x3fe658u: goto label_3fe658;
        case 0x3fe65cu: goto label_3fe65c;
        case 0x3fe660u: goto label_3fe660;
        case 0x3fe664u: goto label_3fe664;
        case 0x3fe668u: goto label_3fe668;
        case 0x3fe66cu: goto label_3fe66c;
        case 0x3fe670u: goto label_3fe670;
        case 0x3fe674u: goto label_3fe674;
        case 0x3fe678u: goto label_3fe678;
        case 0x3fe67cu: goto label_3fe67c;
        case 0x3fe680u: goto label_3fe680;
        case 0x3fe684u: goto label_3fe684;
        case 0x3fe688u: goto label_3fe688;
        case 0x3fe68cu: goto label_3fe68c;
        case 0x3fe690u: goto label_3fe690;
        case 0x3fe694u: goto label_3fe694;
        case 0x3fe698u: goto label_3fe698;
        case 0x3fe69cu: goto label_3fe69c;
        case 0x3fe6a0u: goto label_3fe6a0;
        case 0x3fe6a4u: goto label_3fe6a4;
        case 0x3fe6a8u: goto label_3fe6a8;
        case 0x3fe6acu: goto label_3fe6ac;
        case 0x3fe6b0u: goto label_3fe6b0;
        case 0x3fe6b4u: goto label_3fe6b4;
        default: break;
    }

    ctx->pc = 0x3fe490u;

label_3fe490:
    // 0x3fe490: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3fe490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3fe494:
    // 0x3fe494: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3fe494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3fe498:
    // 0x3fe498: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3fe498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3fe49c:
    // 0x3fe49c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3fe49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4a0:
    // 0x3fe4a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3fe4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4a4:
    // 0x3fe4a4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3fe4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3fe4a8:
    // 0x3fe4a8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3fe4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3fe4ac:
    // 0x3fe4ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fe4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4b0:
    // 0x3fe4b0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3fe4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3fe4b4:
    // 0x3fe4b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fe4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4b8:
    // 0x3fe4b8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3fe4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3fe4bc:
    // 0x3fe4bc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3fe4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3fe4c0:
    // 0x3fe4c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3fe4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3fe4c4:
    // 0x3fe4c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3fe4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3fe4c8:
    // 0x3fe4c8: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x3fe4c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3fe4cc:
    // 0x3fe4cc: 0xc0ea146  jal         func_3A8518
label_3fe4d0:
    if (ctx->pc == 0x3FE4D0u) {
        ctx->pc = 0x3FE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4CCu;
        // 0x3fe4d0: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE4D4u;
        goto label_3fe4d4;
    }
    ctx->pc = 0x3FE4CCu;
    SET_GPR_U32(ctx, 31, 0x3FE4D4u);
    ctx->pc = 0x3FE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4CCu;
    // 0x3fe4d0: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FE4CCu, 0x3FE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4D4u;
label_3fe4d4:
    // 0x3fe4d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fe4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4d8:
    // 0x3fe4d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fe4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4dc:
    // 0x3fe4dc: 0xc0ea12a  jal         func_3A84A8
label_3fe4e0:
    if (ctx->pc == 0x3FE4E0u) {
        ctx->pc = 0x3FE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4DCu;
        // 0x3fe4e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE4E4u;
        goto label_3fe4e4;
    }
    ctx->pc = 0x3FE4DCu;
    SET_GPR_U32(ctx, 31, 0x3FE4E4u);
    ctx->pc = 0x3FE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4DCu;
    // 0x3fe4e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FE4DCu, 0x3FE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4E4u;
label_3fe4e4:
    // 0x3fe4e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fe4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fe4e8:
    // 0x3fe4e8: 0xc0ea12a  jal         func_3A84A8
label_3fe4ec:
    if (ctx->pc == 0x3FE4ECu) {
        ctx->pc = 0x3FE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4E8u;
        // 0x3fe4ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE4F0u;
        goto label_3fe4f0;
    }
    ctx->pc = 0x3FE4E8u;
    SET_GPR_U32(ctx, 31, 0x3FE4F0u);
    ctx->pc = 0x3FE4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4E8u;
    // 0x3fe4ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FE4E8u, 0x3FE4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4F0u;
label_3fe4f0:
    // 0x3fe4f0: 0xc0ea146  jal         func_3A8518
label_3fe4f4:
    if (ctx->pc == 0x3FE4F4u) {
        ctx->pc = 0x3FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4F0u;
        // 0x3fe4f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE4F8u;
        goto label_3fe4f8;
    }
    ctx->pc = 0x3FE4F0u;
    SET_GPR_U32(ctx, 31, 0x3FE4F8u);
    ctx->pc = 0x3FE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4F0u;
    // 0x3fe4f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FE4F0u, 0x3FE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE4F8u;
label_3fe4f8:
    // 0x3fe4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fe4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe4fc:
    // 0x3fe4fc: 0xc0ea14c  jal         func_3A8530
label_3fe500:
    if (ctx->pc == 0x3FE500u) {
        ctx->pc = 0x3FE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE4FCu;
        // 0x3fe500: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE504u;
        goto label_3fe504;
    }
    ctx->pc = 0x3FE4FCu;
    SET_GPR_U32(ctx, 31, 0x3FE504u);
    ctx->pc = 0x3FE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE4FCu;
    // 0x3fe500: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FE4FCu, 0x3FE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE504u;
label_3fe504:
    // 0x3fe504: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3fe504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe508:
    // 0x3fe508: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fe508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fe50c:
    // 0x3fe50c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3fe50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3fe510:
    // 0x3fe510: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x3fe510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
label_3fe514:
    // 0x3fe514: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3fe514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3fe518:
    // 0x3fe518: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3fe518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3fe51c:
    // 0x3fe51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe520:
    // 0x3fe520: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3fe520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3fe524:
    // 0x3fe524: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fe524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fe528:
    // 0x3fe528: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fe528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fe52c:
    // 0x3fe52c: 0x60f809  jalr        $v1
label_3fe530:
    if (ctx->pc == 0x3FE530u) {
        ctx->pc = 0x3FE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE52Cu;
        // 0x3fe530: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE534u;
        goto label_3fe534;
    }
    ctx->pc = 0x3FE52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FE534u);
        ctx->pc = 0x3FE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE52Cu;
        // 0x3fe530: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE52Cu, 0x3FE534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE534u;
label_3fe534:
    // 0x3fe534: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3fe534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3fe538:
    // 0x3fe538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe53c:
    // 0x3fe53c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3fe53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3fe540:
    // 0x3fe540: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3fe540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3fe544:
    // 0x3fe544: 0x60f809  jalr        $v1
label_3fe548:
    if (ctx->pc == 0x3FE548u) {
        ctx->pc = 0x3FE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE544u;
        // 0x3fe548: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE54Cu;
        goto label_3fe54c;
    }
    ctx->pc = 0x3FE544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FE54Cu);
        ctx->pc = 0x3FE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE544u;
        // 0x3fe548: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE544u, 0x3FE54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE54Cu;
label_3fe54c:
    // 0x3fe54c: 0xc0e896e  jal         func_3A25B8
label_3fe550:
    if (ctx->pc == 0x3FE550u) {
        ctx->pc = 0x3FE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE54Cu;
        // 0x3fe550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE554u;
        goto label_3fe554;
    }
    ctx->pc = 0x3FE54Cu;
    SET_GPR_U32(ctx, 31, 0x3FE554u);
    ctx->pc = 0x3FE550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE54Cu;
    // 0x3fe550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3FE54Cu, 0x3FE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE554u;
label_3fe554:
    // 0x3fe554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fe554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe558:
    // 0x3fe558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fe558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe55c:
    // 0x3fe55c: 0xc0e8604  jal         func_3A1810
label_3fe560:
    if (ctx->pc == 0x3FE560u) {
        ctx->pc = 0x3FE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE55Cu;
        // 0x3fe560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE564u;
        goto label_3fe564;
    }
    ctx->pc = 0x3FE55Cu;
    SET_GPR_U32(ctx, 31, 0x3FE564u);
    ctx->pc = 0x3FE560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE55Cu;
    // 0x3fe560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3FE55Cu, 0x3FE564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE564u;
label_3fe564:
    // 0x3fe564: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3fe564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3fe568:
    // 0x3fe568: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3fe568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3fe56c:
    // 0x3fe56c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3fe56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3fe570:
    // 0x3fe570: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3fe570u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fe574:
    // 0x3fe574: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3fe574u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fe578:
    // 0x3fe578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fe578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fe57c:
    // 0x3fe57c: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3fe57cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3fe580:
    // 0x3fe580: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3fe580u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_3fe584:
    // 0x3fe584: 0x7e840010  sq          $a0, 0x10($s4)
    ctx->pc = 0x3fe584u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 4));
label_3fe588:
    // 0x3fe588: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_3fe58c:
    if (ctx->pc == 0x3FE58Cu) {
        ctx->pc = 0x3FE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE588u;
        // 0x3fe58c: 0x7ee50010  sq          $a1, 0x10($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE590u;
        goto label_3fe590;
    }
    ctx->pc = 0x3FE588u;
    {
        const bool branch_taken_0x3fe588 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE588u;
        // 0x3fe58c: 0x7ee50010  sq          $a1, 0x10($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe588) {
            ctx->pc = 0x3FE5E8u;
            goto label_3fe5e8;
        }
    }
    ctx->pc = 0x3FE590u;
label_3fe590:
    // 0x3fe590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fe590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe594:
    // 0x3fe594: 0xc0e8e26  jal         func_3A3898
label_3fe598:
    if (ctx->pc == 0x3FE598u) {
        ctx->pc = 0x3FE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE594u;
        // 0x3fe598: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE59Cu;
        goto label_3fe59c;
    }
    ctx->pc = 0x3FE594u;
    SET_GPR_U32(ctx, 31, 0x3FE59Cu);
    ctx->pc = 0x3FE598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE594u;
    // 0x3fe598: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FE594u, 0x3FE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE59Cu;
label_3fe59c:
    // 0x3fe59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe5a0:
    // 0x3fe5a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fe5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fe5a4:
    // 0x3fe5a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fe5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fe5a8:
    // 0x3fe5a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3fe5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fe5ac:
    // 0x3fe5ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3fe5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3fe5b0:
    // 0x3fe5b0: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3fe5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3fe5b4:
    // 0x3fe5b4: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3fe5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3fe5b8:
    // 0x3fe5b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3fe5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3fe5bc:
    // 0x3fe5bc: 0xc136b30  jal         func_4DACC0
label_3fe5c0:
    if (ctx->pc == 0x3FE5C0u) {
        ctx->pc = 0x3FE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE5BCu;
        // 0x3fe5c0: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE5C4u;
        goto label_3fe5c4;
    }
    ctx->pc = 0x3FE5BCu;
    SET_GPR_U32(ctx, 31, 0x3FE5C4u);
    ctx->pc = 0x3FE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5BCu;
    // 0x3fe5c0: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FE5BCu, 0x3FE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5C4u;
label_3fe5c4:
    // 0x3fe5c4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fe5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fe5c8:
    // 0x3fe5c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fe5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe5cc:
    // 0x3fe5cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fe5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fe5d0:
    // 0x3fe5d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3fe5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fe5d4:
    // 0x3fe5d4: 0xc136b18  jal         func_4DAC60
label_3fe5d8:
    if (ctx->pc == 0x3FE5D8u) {
        ctx->pc = 0x3FE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE5D4u;
        // 0x3fe5d8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE5DCu;
        goto label_3fe5dc;
    }
    ctx->pc = 0x3FE5D4u;
    SET_GPR_U32(ctx, 31, 0x3FE5DCu);
    ctx->pc = 0x3FE5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5D4u;
    // 0x3fe5d8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FE5D4u, 0x3FE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5DCu;
label_3fe5dc:
    // 0x3fe5dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fe5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fe5e0:
    // 0x3fe5e0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3fe5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3fe5e4:
    // 0x3fe5e4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3fe5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3fe5e8:
    // 0x3fe5e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fe5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe5ec:
    // 0x3fe5ec: 0xc0ea176  jal         func_3A85D8
label_3fe5f0:
    if (ctx->pc == 0x3FE5F0u) {
        ctx->pc = 0x3FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE5ECu;
        // 0x3fe5f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE5F4u;
        goto label_3fe5f4;
    }
    ctx->pc = 0x3FE5ECu;
    SET_GPR_U32(ctx, 31, 0x3FE5F4u);
    ctx->pc = 0x3FE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE5ECu;
    // 0x3fe5f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FE5ECu, 0x3FE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE5F4u;
label_3fe5f4:
    // 0x3fe5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe5f8:
    // 0x3fe5f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fe5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fe5fc:
    // 0x3fe5fc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3fe5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3fe600:
    // 0x3fe600: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3fe600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe604:
    // 0x3fe604: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3fe604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe608:
    // 0x3fe608: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fe608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fe60c:
    // 0x3fe60c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fe60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fe610:
    // 0x3fe610: 0x40f809  jalr        $v0
label_3fe614:
    if (ctx->pc == 0x3FE614u) {
        ctx->pc = 0x3FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE610u;
        // 0x3fe614: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE618u;
        goto label_3fe618;
    }
    ctx->pc = 0x3FE610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FE618u);
        ctx->pc = 0x3FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE610u;
        // 0x3fe614: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE610u, 0x3FE618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE618u;
label_3fe618:
    // 0x3fe618: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fe618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe61c:
    // 0x3fe61c: 0xc0e8e26  jal         func_3A3898
label_3fe620:
    if (ctx->pc == 0x3FE620u) {
        ctx->pc = 0x3FE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE61Cu;
        // 0x3fe620: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE624u;
        goto label_3fe624;
    }
    ctx->pc = 0x3FE61Cu;
    SET_GPR_U32(ctx, 31, 0x3FE624u);
    ctx->pc = 0x3FE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE61Cu;
    // 0x3fe620: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FE61Cu, 0x3FE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE624u;
label_3fe624:
    // 0x3fe624: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x3fe624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3fe628:
    // 0x3fe628: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fe628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fe62c:
    // 0x3fe62c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3fe62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3fe630:
    // 0x3fe630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3fe630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fe634:
    // 0x3fe634: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3fe634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3fe638:
    // 0x3fe638: 0xc0e8dee  jal         func_3A37B8
label_3fe63c:
    if (ctx->pc == 0x3FE63Cu) {
        ctx->pc = 0x3FE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE638u;
        // 0x3fe63c: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE640u;
        goto label_3fe640;
    }
    ctx->pc = 0x3FE638u;
    SET_GPR_U32(ctx, 31, 0x3FE640u);
    ctx->pc = 0x3FE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE638u;
    // 0x3fe63c: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FE638u, 0x3FE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE640u;
label_3fe640:
    // 0x3fe640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fe640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe644:
    // 0x3fe644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fe644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fe648:
    // 0x3fe648: 0xc0ea164  jal         func_3A8590
label_3fe64c:
    if (ctx->pc == 0x3FE64Cu) {
        ctx->pc = 0x3FE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE648u;
        // 0x3fe64c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE650u;
        goto label_3fe650;
    }
    ctx->pc = 0x3FE648u;
    SET_GPR_U32(ctx, 31, 0x3FE650u);
    ctx->pc = 0x3FE64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE648u;
    // 0x3fe64c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3FE648u, 0x3FE650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE650u;
label_3fe650:
    // 0x3fe650: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fe650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fe654:
    // 0x3fe654: 0xc0ea158  jal         func_3A8560
label_3fe658:
    if (ctx->pc == 0x3FE658u) {
        ctx->pc = 0x3FE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE654u;
        // 0x3fe658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE65Cu;
        goto label_3fe65c;
    }
    ctx->pc = 0x3FE654u;
    SET_GPR_U32(ctx, 31, 0x3FE65Cu);
    ctx->pc = 0x3FE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE654u;
    // 0x3fe658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3FE654u, 0x3FE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE65Cu;
label_3fe65c:
    // 0x3fe65c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fe65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe660:
    // 0x3fe660: 0xc0ea16a  jal         func_3A85A8
label_3fe664:
    if (ctx->pc == 0x3FE664u) {
        ctx->pc = 0x3FE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE660u;
        // 0x3fe664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE668u;
        goto label_3fe668;
    }
    ctx->pc = 0x3FE660u;
    SET_GPR_U32(ctx, 31, 0x3FE668u);
    ctx->pc = 0x3FE664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE660u;
    // 0x3fe664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FE660u, 0x3FE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE668u;
label_3fe668:
    // 0x3fe668: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3fe668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3fe66c:
    // 0x3fe66c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3fe66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fe670:
    // 0x3fe670: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3fe670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3fe674:
    // 0x3fe674: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fe674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fe678:
    // 0x3fe678: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fe678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fe67c:
    // 0x3fe67c: 0x40f809  jalr        $v0
label_3fe680:
    if (ctx->pc == 0x3FE680u) {
        ctx->pc = 0x3FE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE67Cu;
        // 0x3fe680: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE684u;
        goto label_3fe684;
    }
    ctx->pc = 0x3FE67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FE684u);
        ctx->pc = 0x3FE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE67Cu;
        // 0x3fe680: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE67Cu, 0x3FE684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE684u;
label_3fe684:
    // 0x3fe684: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3fe684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3fe688:
    // 0x3fe688: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3fe688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3fe68c:
    // 0x3fe68c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3fe68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3fe690:
    // 0x3fe690: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3fe690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fe694:
    // 0x3fe694: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3fe694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe698:
    // 0x3fe698: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3fe698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe69c:
    // 0x3fe69c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3fe69cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fe6a0:
    // 0x3fe6a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3fe6a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fe6a4:
    // 0x3fe6a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3fe6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3fe6a8:
    // 0x3fe6a8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3fe6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fe6ac:
    // 0x3fe6ac: 0x3e00008  jr          $ra
label_3fe6b0:
    if (ctx->pc == 0x3FE6B0u) {
        ctx->pc = 0x3FE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6ACu;
        // 0x3fe6b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE6B4u;
        goto label_3fe6b4;
    }
    ctx->pc = 0x3FE6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6ACu;
        // 0x3fe6b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE6B4u;
label_3fe6b4:
    // 0x3fe6b4: 0x0  nop
    ctx->pc = 0x3fe6b4u;
    // NOP
    ctx->pc = 0x3fe6b8u;
}
