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

// Function: sub_0039C7D8
// Address: 0x39c7d8 - 0x39c8f8
void sub_0039C7D8_0x39c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C7D8_0x39c7d8");
#endif

    switch (ctx->pc) {
        case 0x39c7d8u: goto label_39c7d8;
        case 0x39c7dcu: goto label_39c7dc;
        case 0x39c7e0u: goto label_39c7e0;
        case 0x39c7e4u: goto label_39c7e4;
        case 0x39c7e8u: goto label_39c7e8;
        case 0x39c7ecu: goto label_39c7ec;
        case 0x39c7f0u: goto label_39c7f0;
        case 0x39c7f4u: goto label_39c7f4;
        case 0x39c7f8u: goto label_39c7f8;
        case 0x39c7fcu: goto label_39c7fc;
        case 0x39c800u: goto label_39c800;
        case 0x39c804u: goto label_39c804;
        case 0x39c808u: goto label_39c808;
        case 0x39c80cu: goto label_39c80c;
        case 0x39c810u: goto label_39c810;
        case 0x39c814u: goto label_39c814;
        case 0x39c818u: goto label_39c818;
        case 0x39c81cu: goto label_39c81c;
        case 0x39c820u: goto label_39c820;
        case 0x39c824u: goto label_39c824;
        case 0x39c828u: goto label_39c828;
        case 0x39c82cu: goto label_39c82c;
        case 0x39c830u: goto label_39c830;
        case 0x39c834u: goto label_39c834;
        case 0x39c838u: goto label_39c838;
        case 0x39c83cu: goto label_39c83c;
        case 0x39c840u: goto label_39c840;
        case 0x39c844u: goto label_39c844;
        case 0x39c848u: goto label_39c848;
        case 0x39c84cu: goto label_39c84c;
        case 0x39c850u: goto label_39c850;
        case 0x39c854u: goto label_39c854;
        case 0x39c858u: goto label_39c858;
        case 0x39c85cu: goto label_39c85c;
        case 0x39c860u: goto label_39c860;
        case 0x39c864u: goto label_39c864;
        case 0x39c868u: goto label_39c868;
        case 0x39c86cu: goto label_39c86c;
        case 0x39c870u: goto label_39c870;
        case 0x39c874u: goto label_39c874;
        case 0x39c878u: goto label_39c878;
        case 0x39c87cu: goto label_39c87c;
        case 0x39c880u: goto label_39c880;
        case 0x39c884u: goto label_39c884;
        case 0x39c888u: goto label_39c888;
        case 0x39c88cu: goto label_39c88c;
        case 0x39c890u: goto label_39c890;
        case 0x39c894u: goto label_39c894;
        case 0x39c898u: goto label_39c898;
        case 0x39c89cu: goto label_39c89c;
        case 0x39c8a0u: goto label_39c8a0;
        case 0x39c8a4u: goto label_39c8a4;
        case 0x39c8a8u: goto label_39c8a8;
        case 0x39c8acu: goto label_39c8ac;
        case 0x39c8b0u: goto label_39c8b0;
        case 0x39c8b4u: goto label_39c8b4;
        case 0x39c8b8u: goto label_39c8b8;
        case 0x39c8bcu: goto label_39c8bc;
        case 0x39c8c0u: goto label_39c8c0;
        case 0x39c8c4u: goto label_39c8c4;
        case 0x39c8c8u: goto label_39c8c8;
        case 0x39c8ccu: goto label_39c8cc;
        case 0x39c8d0u: goto label_39c8d0;
        case 0x39c8d4u: goto label_39c8d4;
        case 0x39c8d8u: goto label_39c8d8;
        case 0x39c8dcu: goto label_39c8dc;
        case 0x39c8e0u: goto label_39c8e0;
        case 0x39c8e4u: goto label_39c8e4;
        case 0x39c8e8u: goto label_39c8e8;
        case 0x39c8ecu: goto label_39c8ec;
        case 0x39c8f0u: goto label_39c8f0;
        case 0x39c8f4u: goto label_39c8f4;
        default: break;
    }

    ctx->pc = 0x39c7d8u;

label_39c7d8:
    // 0x39c7d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_39c7dc:
    // 0x39c7dc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x39c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_39c7e0:
    // 0x39c7e0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x39c7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_39c7e4:
    // 0x39c7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39c7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39c7e8:
    // 0x39c7e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_39c7ec:
    // 0x39c7ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x39c7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_39c7f0:
    // 0x39c7f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39c7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39c7f4:
    // 0x39c7f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x39c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_39c7f8:
    // 0x39c7f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39c7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c7fc:
    // 0x39c7fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_39c800:
    // 0x39c800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39c800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c804:
    // 0x39c804: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x39c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_39c808:
    // 0x39c808: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x39c808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c80c:
    // 0x39c80c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x39c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_39c810:
    // 0x39c810: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x39c810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c814:
    // 0x39c814: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x39c814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_39c818:
    // 0x39c818: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x39c818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c81c:
    // 0x39c81c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c820:
    // 0x39c820: 0x10000022  b           . + 4 + (0x22 << 2)
label_39c824:
    if (ctx->pc == 0x39C824u) {
        ctx->pc = 0x39C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C820u;
        // 0x39c824: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C828u;
        goto label_39c828;
    }
    ctx->pc = 0x39C820u;
    {
        const bool branch_taken_0x39c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C820u;
        // 0x39c824: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c820) {
            ctx->pc = 0x39C8ACu;
            goto label_39c8ac;
        }
    }
    ctx->pc = 0x39C828u;
label_39c828:
    // 0x39c828: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39c828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39c82c:
    // 0x39c82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39c830:
    // 0x39c830: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39c830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39c834:
    // 0x39c834: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_39c838:
    if (ctx->pc == 0x39C838u) {
        ctx->pc = 0x39C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C834u;
        // 0x39c838: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C83Cu;
        goto label_39c83c;
    }
    ctx->pc = 0x39C834u;
    {
        const bool branch_taken_0x39c834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c834) {
            ctx->pc = 0x39C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C834u;
            // 0x39c838: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C8ACu;
            goto label_39c8ac;
        }
    }
    ctx->pc = 0x39C83Cu;
label_39c83c:
    // 0x39c83c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c840:
    // 0x39c840: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39c840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39c844:
    // 0x39c844: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39c848:
    // 0x39c848: 0x40f809  jalr        $v0
label_39c84c:
    if (ctx->pc == 0x39C84Cu) {
        ctx->pc = 0x39C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C848u;
        // 0x39c84c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C850u;
        goto label_39c850;
    }
    ctx->pc = 0x39C848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C850u);
        ctx->pc = 0x39C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C848u;
        // 0x39c84c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C848u, 0x39C850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C850u;
label_39c850:
    // 0x39c850: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_39c854:
    if (ctx->pc == 0x39C854u) {
        ctx->pc = 0x39C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C850u;
        // 0x39c854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C858u;
        goto label_39c858;
    }
    ctx->pc = 0x39C850u;
    {
        const bool branch_taken_0x39c850 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C850u;
        // 0x39c854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c850) {
            ctx->pc = 0x39C868u;
            goto label_39c868;
        }
    }
    ctx->pc = 0x39C858u;
label_39c858:
    // 0x39c858: 0xc10d74c  jal         func_435D30
label_39c85c:
    if (ctx->pc == 0x39C85Cu) {
        ctx->pc = 0x39C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C858u;
        // 0x39c85c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C860u;
        goto label_39c860;
    }
    ctx->pc = 0x39C858u;
    SET_GPR_U32(ctx, 31, 0x39C860u);
    ctx->pc = 0x39C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C858u;
    // 0x39c85c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x39C858u, 0x39C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C860u;
label_39c860:
    // 0x39c860: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_39c864:
    if (ctx->pc == 0x39C864u) {
        ctx->pc = 0x39C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C860u;
        // 0x39c864: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C868u;
        goto label_39c868;
    }
    ctx->pc = 0x39C860u;
    {
        const bool branch_taken_0x39c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c860) {
            ctx->pc = 0x39C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C860u;
            // 0x39c864: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C8ACu;
            goto label_39c8ac;
        }
    }
    ctx->pc = 0x39C868u;
label_39c868:
    // 0x39c868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c86c:
    // 0x39c86c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39c870:
    // 0x39c870: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x39c870u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_39c874:
    // 0x39c874: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x39c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_39c878:
    // 0x39c878: 0x60f809  jalr        $v1
label_39c87c:
    if (ctx->pc == 0x39C87Cu) {
        ctx->pc = 0x39C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C878u;
        // 0x39c87c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C880u;
        goto label_39c880;
    }
    ctx->pc = 0x39C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C880u);
        ctx->pc = 0x39C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C878u;
        // 0x39c87c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C878u, 0x39C880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C880u;
label_39c880:
    // 0x39c880: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x39c880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39c884:
    // 0x39c884: 0xc0cdb38  jal         func_336CE0
label_39c888:
    if (ctx->pc == 0x39C888u) {
        ctx->pc = 0x39C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C884u;
        // 0x39c888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C88Cu;
        goto label_39c88c;
    }
    ctx->pc = 0x39C884u;
    SET_GPR_U32(ctx, 31, 0x39C88Cu);
    ctx->pc = 0x39C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C884u;
    // 0x39c888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x39C884u, 0x39C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C88Cu;
label_39c88c:
    // 0x39c88c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x39c88cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_39c890:
    // 0x39c890: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x39c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c894:
    // 0x39c894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39c894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39c898:
    // 0x39c898: 0x0  nop
    ctx->pc = 0x39c898u;
    // NOP
label_39c89c:
    // 0x39c89c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_39c8a0:
    if (ctx->pc == 0x39C8A0u) {
        ctx->pc = 0x39C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C89Cu;
        // 0x39c8a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C8A4u;
        goto label_39c8a4;
    }
    ctx->pc = 0x39C89Cu;
    {
        const bool branch_taken_0x39c89c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C89Cu;
        // 0x39c8a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c89c) {
            ctx->pc = 0x39C8ACu;
            goto label_39c8ac;
        }
    }
    ctx->pc = 0x39C8A4u;
label_39c8a4:
    // 0x39c8a4: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x39c8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_39c8a8:
    // 0x39c8a8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x39c8a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c8ac:
    // 0x39c8ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39c8b0:
    // 0x39c8b0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39c8b4:
    // 0x39c8b4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39c8b8:
    // 0x39c8b8: 0x40f809  jalr        $v0
label_39c8bc:
    if (ctx->pc == 0x39C8BCu) {
        ctx->pc = 0x39C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8B8u;
        // 0x39c8bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C8C0u;
        goto label_39c8c0;
    }
    ctx->pc = 0x39C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C8C0u);
        ctx->pc = 0x39C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8B8u;
        // 0x39c8bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C8B8u, 0x39C8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C8C0u;
label_39c8c0:
    // 0x39c8c0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39c8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39c8c4:
    // 0x39c8c4: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_39c8c8:
    if (ctx->pc == 0x39C8C8u) {
        ctx->pc = 0x39C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8C4u;
        // 0x39c8c8: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C8CCu;
        goto label_39c8cc;
    }
    ctx->pc = 0x39C8C4u;
    {
        const bool branch_taken_0x39c8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c8c4) {
            ctx->pc = 0x39C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C8C4u;
            // 0x39c8c8: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c828;
        }
    }
    ctx->pc = 0x39C8CCu;
label_39c8cc:
    // 0x39c8cc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x39c8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39c8d0:
    // 0x39c8d0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x39c8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39c8d4:
    // 0x39c8d4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x39c8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39c8d8:
    // 0x39c8d8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39c8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39c8dc:
    // 0x39c8dc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x39c8dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c8e0:
    // 0x39c8e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39c8e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c8e4:
    // 0x39c8e4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x39c8e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c8e8:
    // 0x39c8e8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x39c8e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c8ec:
    // 0x39c8ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c8f0:
    // 0x39c8f0: 0x3e00008  jr          $ra
label_39c8f4:
    if (ctx->pc == 0x39C8F4u) {
        ctx->pc = 0x39C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8F0u;
        // 0x39c8f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C8F8u;
        goto label_fallthrough_0x39c8f0;
    }
    ctx->pc = 0x39C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8F0u;
        // 0x39c8f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c8f0:
    ctx->pc = 0x39C8F8u;
}
