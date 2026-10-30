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

// Function: sub_0022B760
// Address: 0x22b760 - 0x22b960
void sub_0022B760_0x22b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B760_0x22b760");
#endif

    switch (ctx->pc) {
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8a0u: goto label_22b8a0;
        case 0x22b8a4u: goto label_22b8a4;
        case 0x22b8a8u: goto label_22b8a8;
        case 0x22b8acu: goto label_22b8ac;
        case 0x22b8b0u: goto label_22b8b0;
        case 0x22b8b4u: goto label_22b8b4;
        case 0x22b8b8u: goto label_22b8b8;
        case 0x22b8bcu: goto label_22b8bc;
        case 0x22b8c0u: goto label_22b8c0;
        case 0x22b8c4u: goto label_22b8c4;
        case 0x22b8c8u: goto label_22b8c8;
        case 0x22b8ccu: goto label_22b8cc;
        case 0x22b8d0u: goto label_22b8d0;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8d8u: goto label_22b8d8;
        case 0x22b8dcu: goto label_22b8dc;
        case 0x22b8e0u: goto label_22b8e0;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8e8u: goto label_22b8e8;
        case 0x22b8ecu: goto label_22b8ec;
        case 0x22b8f0u: goto label_22b8f0;
        case 0x22b8f4u: goto label_22b8f4;
        case 0x22b8f8u: goto label_22b8f8;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b950u: goto label_22b950;
        case 0x22b954u: goto label_22b954;
        case 0x22b958u: goto label_22b958;
        case 0x22b95cu: goto label_22b95c;
        default: break;
    }

    ctx->pc = 0x22b760u;

label_22b760:
    // 0x22b760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22b764:
    // 0x22b764: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22b768:
    // 0x22b768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22b76c:
    // 0x22b76c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b770:
    // 0x22b770: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22b774:
    // 0x22b774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b778:
    // 0x22b778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22b77c:
    // 0x22b77c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22b780:
    if (ctx->pc == 0x22B780u) {
        ctx->pc = 0x22B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B77Cu;
        // 0x22b780: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B784u;
        goto label_22b784;
    }
    ctx->pc = 0x22B77Cu;
    {
        const bool branch_taken_0x22b77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B77Cu;
        // 0x22b780: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b77c) {
            ctx->pc = 0x22B798u;
            goto label_22b798;
        }
    }
    ctx->pc = 0x22B784u;
label_22b784:
    // 0x22b784: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_22b788:
    if (ctx->pc == 0x22B788u) {
        ctx->pc = 0x22B78Cu;
        goto label_22b78c;
    }
    ctx->pc = 0x22B784u;
    {
        const bool branch_taken_0x22b784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b784) {
            ctx->pc = 0x22B7A0u;
            goto label_22b7a0;
        }
    }
    ctx->pc = 0x22B78Cu;
label_22b78c:
    // 0x22b78c: 0xc089a76  jal         func_2269D8
label_22b790:
    if (ctx->pc == 0x22B790u) {
        ctx->pc = 0x22B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B78Cu;
        // 0x22b790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B794u;
        goto label_22b794;
    }
    ctx->pc = 0x22B78Cu;
    SET_GPR_U32(ctx, 31, 0x22B794u);
    ctx->pc = 0x22B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B78Cu;
    // 0x22b790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B78Cu, 0x22B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B794u;
label_22b794:
    // 0x22b794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b798:
    // 0x22b798: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_22b79c:
    if (ctx->pc == 0x22B79Cu) {
        ctx->pc = 0x22B7A0u;
        goto label_22b7a0;
    }
    ctx->pc = 0x22B798u;
    {
        const bool branch_taken_0x22b798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b798) {
            ctx->pc = 0x22B7ECu;
            goto label_22b7ec;
        }
    }
    ctx->pc = 0x22B7A0u;
label_22b7a0:
    // 0x22b7a0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_22b7a4:
    if (ctx->pc == 0x22B7A4u) {
        ctx->pc = 0x22B7A8u;
        goto label_22b7a8;
    }
    ctx->pc = 0x22B7A0u;
    {
        const bool branch_taken_0x22b7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b7a0) {
            ctx->pc = 0x22B7B4u;
            goto label_22b7b4;
        }
    }
    ctx->pc = 0x22B7A8u;
label_22b7a8:
    // 0x22b7a8: 0xc089a76  jal         func_2269D8
label_22b7ac:
    if (ctx->pc == 0x22B7ACu) {
        ctx->pc = 0x22B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A8u;
        // 0x22b7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7B0u;
        goto label_22b7b0;
    }
    ctx->pc = 0x22B7A8u;
    SET_GPR_U32(ctx, 31, 0x22B7B0u);
    ctx->pc = 0x22B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7A8u;
    // 0x22b7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B7A8u, 0x22B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7B0u;
label_22b7b0:
    // 0x22b7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b7b4:
    // 0x22b7b4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_22b7b8:
    if (ctx->pc == 0x22B7B8u) {
        ctx->pc = 0x22B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B4u;
        // 0x22b7b8: 0x263200c4  addiu       $s2, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7BCu;
        goto label_22b7bc;
    }
    ctx->pc = 0x22B7B4u;
    {
        const bool branch_taken_0x22b7b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B4u;
        // 0x22b7b8: 0x263200c4  addiu       $s2, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7b4) {
            ctx->pc = 0x22B7ECu;
            goto label_22b7ec;
        }
    }
    ctx->pc = 0x22B7BCu;
label_22b7bc:
    // 0x22b7bc: 0xc0e409a  jal         func_390268
label_22b7c0:
    if (ctx->pc == 0x22B7C0u) {
        ctx->pc = 0x22B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7BCu;
        // 0x22b7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7C4u;
        goto label_22b7c4;
    }
    ctx->pc = 0x22B7BCu;
    SET_GPR_U32(ctx, 31, 0x22B7C4u);
    ctx->pc = 0x22B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7BCu;
    // 0x22b7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B7BCu, 0x22B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7C4u;
label_22b7c4:
    // 0x22b7c4: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_22b7c8:
    if (ctx->pc == 0x22B7C8u) {
        ctx->pc = 0x22B7CCu;
        goto label_22b7cc;
    }
    ctx->pc = 0x22B7C4u;
    {
        const bool branch_taken_0x22b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x22b7c4) {
            ctx->pc = 0x22B7ECu;
            goto label_22b7ec;
        }
    }
    ctx->pc = 0x22B7CCu;
label_22b7cc:
    // 0x22b7cc: 0xc0e409a  jal         func_390268
label_22b7d0:
    if (ctx->pc == 0x22B7D0u) {
        ctx->pc = 0x22B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7CCu;
        // 0x22b7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7D4u;
        goto label_22b7d4;
    }
    ctx->pc = 0x22B7CCu;
    SET_GPR_U32(ctx, 31, 0x22B7D4u);
    ctx->pc = 0x22B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7CCu;
    // 0x22b7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B7CCu, 0x22B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7D4u;
label_22b7d4:
    // 0x22b7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b7d8:
    // 0x22b7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b7dc:
    // 0x22b7dc: 0xc08acca  jal         func_22B328
label_22b7e0:
    if (ctx->pc == 0x22B7E0u) {
        ctx->pc = 0x22B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7DCu;
        // 0x22b7e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7E4u;
        goto label_22b7e4;
    }
    ctx->pc = 0x22B7DCu;
    SET_GPR_U32(ctx, 31, 0x22B7E4u);
    ctx->pc = 0x22B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7DCu;
    // 0x22b7e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B328u, 0x22B7DCu, 0x22B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7E4u;
label_22b7e4:
    // 0x22b7e4: 0x10000057  b           . + 4 + (0x57 << 2)
label_22b7e8:
    if (ctx->pc == 0x22B7E8u) {
        ctx->pc = 0x22B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7E4u;
        // 0x22b7e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7ECu;
        goto label_22b7ec;
    }
    ctx->pc = 0x22B7E4u;
    {
        const bool branch_taken_0x22b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7E4u;
        // 0x22b7e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7e4) {
            ctx->pc = 0x22B944u;
            goto label_22b944;
        }
    }
    ctx->pc = 0x22B7ECu;
label_22b7ec:
    // 0x22b7ec: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_22b7f0:
    if (ctx->pc == 0x22B7F0u) {
        ctx->pc = 0x22B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ECu;
        // 0x22b7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7F4u;
        goto label_22b7f4;
    }
    ctx->pc = 0x22B7ECu;
    {
        const bool branch_taken_0x22b7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ECu;
        // 0x22b7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7ec) {
            ctx->pc = 0x22B940u;
            goto label_22b940;
        }
    }
    ctx->pc = 0x22B7F4u;
label_22b7f4:
    // 0x22b7f4: 0xc08997c  jal         func_2265F0
label_22b7f8:
    if (ctx->pc == 0x22B7F8u) {
        ctx->pc = 0x22B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F4u;
        // 0x22b7f8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7FCu;
        goto label_22b7fc;
    }
    ctx->pc = 0x22B7F4u;
    SET_GPR_U32(ctx, 31, 0x22B7FCu);
    ctx->pc = 0x22B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7F4u;
    // 0x22b7f8: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22B7F4u, 0x22B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7FCu;
label_22b7fc:
    // 0x22b7fc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_22b800:
    if (ctx->pc == 0x22B800u) {
        ctx->pc = 0x22B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7FCu;
        // 0x22b800: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B804u;
        goto label_22b804;
    }
    ctx->pc = 0x22B7FCu;
    {
        const bool branch_taken_0x22b7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7FCu;
        // 0x22b800: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7fc) {
            ctx->pc = 0x22B940u;
            goto label_22b940;
        }
    }
    ctx->pc = 0x22B804u;
label_22b804:
    // 0x22b804: 0xc089988  jal         func_226620
label_22b808:
    if (ctx->pc == 0x22B808u) {
        ctx->pc = 0x22B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B804u;
        // 0x22b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B80Cu;
        goto label_22b80c;
    }
    ctx->pc = 0x22B804u;
    SET_GPR_U32(ctx, 31, 0x22B80Cu);
    ctx->pc = 0x22B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B804u;
    // 0x22b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B804u, 0x22B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B80Cu;
label_22b80c:
    // 0x22b80c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x22b80cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_22b810:
    // 0x22b810: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x22b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_22b814:
    // 0x22b814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b818:
    // 0x22b818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22b81c:
    // 0x22b81c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22b820:
    // 0x22b820: 0xc089a80  jal         func_226A00
label_22b824:
    if (ctx->pc == 0x22B824u) {
        ctx->pc = 0x22B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B820u;
        // 0x22b824: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B828u;
        goto label_22b828;
    }
    ctx->pc = 0x22B820u;
    SET_GPR_U32(ctx, 31, 0x22B828u);
    ctx->pc = 0x22B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B820u;
    // 0x22b824: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x22B820u, 0x22B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B828u;
label_22b828:
    // 0x22b828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b82c:
    // 0x22b82c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b830:
    // 0x22b830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22b834:
    // 0x22b834: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22b834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22b838:
    // 0x22b838: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22b83c:
    // 0x22b83c: 0x40f809  jalr        $v0
label_22b840:
    if (ctx->pc == 0x22B840u) {
        ctx->pc = 0x22B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B83Cu;
        // 0x22b840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B844u;
        goto label_22b844;
    }
    ctx->pc = 0x22B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B844u);
        ctx->pc = 0x22B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B83Cu;
        // 0x22b840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B83Cu, 0x22B844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B844u;
label_22b844:
    // 0x22b844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b848:
    // 0x22b848: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b84c:
    // 0x22b84c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b850:
    // 0x22b850: 0x40f809  jalr        $v0
label_22b854:
    if (ctx->pc == 0x22B854u) {
        ctx->pc = 0x22B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B850u;
        // 0x22b854: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B858u;
        goto label_22b858;
    }
    ctx->pc = 0x22B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B858u);
        ctx->pc = 0x22B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B850u;
        // 0x22b854: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B850u, 0x22B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B858u;
label_22b858:
    // 0x22b858: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22b85c:
    if (ctx->pc == 0x22B85Cu) {
        ctx->pc = 0x22B860u;
        goto label_22b860;
    }
    ctx->pc = 0x22B858u;
    {
        const bool branch_taken_0x22b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b858) {
            ctx->pc = 0x22B89Cu;
            goto label_22b89c;
        }
    }
    ctx->pc = 0x22B860u;
label_22b860:
    // 0x22b860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b864:
    // 0x22b864: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b868:
    // 0x22b868: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b86c:
    // 0x22b86c: 0x40f809  jalr        $v0
label_22b870:
    if (ctx->pc == 0x22B870u) {
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B874u;
        goto label_22b874;
    }
    ctx->pc = 0x22B86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B874u);
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B86Cu, 0x22B874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B874u;
label_22b874:
    // 0x22b874: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b874u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b878:
    // 0x22b878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b87c:
    // 0x22b87c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b880:
    // 0x22b880: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b884:
    // 0x22b884: 0x40f809  jalr        $v0
label_22b888:
    if (ctx->pc == 0x22B888u) {
        ctx->pc = 0x22B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B884u;
        // 0x22b888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B88Cu;
        goto label_22b88c;
    }
    ctx->pc = 0x22B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B88Cu);
        ctx->pc = 0x22B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B884u;
        // 0x22b888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B884u, 0x22B88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B88Cu;
label_22b88c:
    // 0x22b88c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b890:
    // 0x22b890: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b894:
    // 0x22b894: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b898:
    // 0x22b898: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b89c:
    // 0x22b89c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_22b8a0:
    if (ctx->pc == 0x22B8A0u) {
        ctx->pc = 0x22B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B89Cu;
        // 0x22b8a0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8A4u;
        goto label_22b8a4;
    }
    ctx->pc = 0x22B89Cu;
    {
        const bool branch_taken_0x22b89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B89Cu;
        // 0x22b8a0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b89c) {
            ctx->pc = 0x22B940u;
            goto label_22b940;
        }
    }
    ctx->pc = 0x22B8A4u;
label_22b8a4:
    // 0x22b8a4: 0xc089988  jal         func_226620
label_22b8a8:
    if (ctx->pc == 0x22B8A8u) {
        ctx->pc = 0x22B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8A4u;
        // 0x22b8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8ACu;
        goto label_22b8ac;
    }
    ctx->pc = 0x22B8A4u;
    SET_GPR_U32(ctx, 31, 0x22B8ACu);
    ctx->pc = 0x22B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8A4u;
    // 0x22b8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B8A4u, 0x22B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8ACu;
label_22b8ac:
    // 0x22b8ac: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x22b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_22b8b0:
    // 0x22b8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b8b4:
    // 0x22b8b4: 0xc089a80  jal         func_226A00
label_22b8b8:
    if (ctx->pc == 0x22B8B8u) {
        ctx->pc = 0x22B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8B4u;
        // 0x22b8b8: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8BCu;
        goto label_22b8bc;
    }
    ctx->pc = 0x22B8B4u;
    SET_GPR_U32(ctx, 31, 0x22B8BCu);
    ctx->pc = 0x22B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8B4u;
    // 0x22b8b8: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x22B8B4u, 0x22B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8BCu;
label_22b8bc:
    // 0x22b8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b8c0:
    // 0x22b8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b8c4:
    // 0x22b8c4: 0xc08bd3e  jal         func_22F4F8
label_22b8c8:
    if (ctx->pc == 0x22B8C8u) {
        ctx->pc = 0x22B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8C4u;
        // 0x22b8c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8CCu;
        goto label_22b8cc;
    }
    ctx->pc = 0x22B8C4u;
    SET_GPR_U32(ctx, 31, 0x22B8CCu);
    ctx->pc = 0x22B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8C4u;
    // 0x22b8c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x22B8C4u, 0x22B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8CCu;
label_22b8cc:
    // 0x22b8cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b8d0:
    // 0x22b8d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b8d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22b8d4:
    // 0x22b8d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b8d8:
    // 0x22b8d8: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22b8dc:
    // 0x22b8dc: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22b8e0:
    // 0x22b8e0: 0x40f809  jalr        $v0
label_22b8e4:
    if (ctx->pc == 0x22B8E4u) {
        ctx->pc = 0x22B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8E0u;
        // 0x22b8e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8E8u;
        goto label_22b8e8;
    }
    ctx->pc = 0x22B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B8E8u);
        ctx->pc = 0x22B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8E0u;
        // 0x22b8e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B8E0u, 0x22B8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B8E8u;
label_22b8e8:
    // 0x22b8e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b8ec:
    // 0x22b8ec: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b8f0:
    // 0x22b8f0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b8f4:
    // 0x22b8f4: 0x40f809  jalr        $v0
label_22b8f8:
    if (ctx->pc == 0x22B8F8u) {
        ctx->pc = 0x22B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8F4u;
        // 0x22b8f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8FCu;
        goto label_22b8fc;
    }
    ctx->pc = 0x22B8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B8FCu);
        ctx->pc = 0x22B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8F4u;
        // 0x22b8f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B8F4u, 0x22B8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B8FCu;
label_22b8fc:
    // 0x22b8fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22b900:
    if (ctx->pc == 0x22B900u) {
        ctx->pc = 0x22B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8FCu;
        // 0x22b900: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B904u;
        goto label_22b904;
    }
    ctx->pc = 0x22B8FCu;
    {
        const bool branch_taken_0x22b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8FCu;
        // 0x22b900: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8fc) {
            ctx->pc = 0x22B944u;
            goto label_22b944;
        }
    }
    ctx->pc = 0x22B904u;
label_22b904:
    // 0x22b904: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b908:
    // 0x22b908: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b90c:
    // 0x22b90c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b910:
    // 0x22b910: 0x40f809  jalr        $v0
label_22b914:
    if (ctx->pc == 0x22B914u) {
        ctx->pc = 0x22B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B910u;
        // 0x22b914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B918u;
        goto label_22b918;
    }
    ctx->pc = 0x22B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B918u);
        ctx->pc = 0x22B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B910u;
        // 0x22b914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B910u, 0x22B918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B918u;
label_22b918:
    // 0x22b918: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b91c:
    // 0x22b91c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b920:
    // 0x22b920: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b924:
    // 0x22b924: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b928:
    // 0x22b928: 0x40f809  jalr        $v0
label_22b92c:
    if (ctx->pc == 0x22B92Cu) {
        ctx->pc = 0x22B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B928u;
        // 0x22b92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B930u;
        goto label_22b930;
    }
    ctx->pc = 0x22B928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B930u);
        ctx->pc = 0x22B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B928u;
        // 0x22b92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B928u, 0x22B930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B930u;
label_22b930:
    // 0x22b930: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b934:
    // 0x22b934: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b938:
    // 0x22b938: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b93c:
    // 0x22b93c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b940:
    // 0x22b940: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b944:
    // 0x22b944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b948:
    // 0x22b948: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b94c:
    // 0x22b94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b950:
    // 0x22b950: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22b954:
    // 0x22b954: 0x3e00008  jr          $ra
label_22b958:
    if (ctx->pc == 0x22B958u) {
        ctx->pc = 0x22B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B954u;
        // 0x22b958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B95Cu;
        goto label_22b95c;
    }
    ctx->pc = 0x22B954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B954u;
        // 0x22b958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B95Cu;
label_22b95c:
    // 0x22b95c: 0x0  nop
    ctx->pc = 0x22b95cu;
    // NOP
    ctx->pc = 0x22b960u;
}
