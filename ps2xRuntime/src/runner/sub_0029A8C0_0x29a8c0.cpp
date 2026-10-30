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

// Function: sub_0029A8C0
// Address: 0x29a8c0 - 0x29aa20
void sub_0029A8C0_0x29a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8C0_0x29a8c0");
#endif

    switch (ctx->pc) {
        case 0x29a91cu: goto label_29a91c;
        case 0x29a940u: goto label_29a940;
        case 0x29a954u: goto label_29a954;
        case 0x29a99cu: goto label_29a99c;
        case 0x29a9b4u: goto label_29a9b4;
        case 0x29a9d8u: goto label_29a9d8;
        case 0x29a9e8u: goto label_29a9e8;
        default: break;
    }

    ctx->pc = 0x29a8c0u;

    // 0x29a8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29a8c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a8c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x29a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x29a8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a8d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x29a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x29a8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29a8dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x29a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x29a8e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29a8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x29a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x29a8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a8ec: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x29a8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a8f0: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x29a8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x29a8f4: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x29a8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a8f8: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x29a8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a8fc: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x29a8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a900: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x29a900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a904: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29a904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x29a908: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29a908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29a90c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a910: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x29a910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a914: 0xc091e56  jal         func_247958
    ctx->pc = 0x29A914u;
    SET_GPR_U32(ctx, 31, 0x29A91Cu);
    ctx->pc = 0x29A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A914u;
    // 0x29a918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x29A914u, 0x29A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A91Cu;
label_29a91c:
    // 0x29a91c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29a91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a920: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x29A920u;
    {
        const bool branch_taken_0x29a920 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A920u;
        // 0x29a924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a920) {
            ctx->pc = 0x29A9F0u;
            goto label_29a9f0;
        }
    }
    ctx->pc = 0x29A928u;
    // 0x29a928: 0x7a2202b0  lq          $v0, 0x2B0($s1)
    ctx->pc = 0x29a928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x29a92c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a930: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29a930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a934: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x29a938: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x29A938u;
    SET_GPR_U32(ctx, 31, 0x29A940u);
    ctx->pc = 0x29A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A938u;
    // 0x29a93c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x29A938u, 0x29A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A940u;
label_29a940:
    // 0x29a940: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29a940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a944: 0x1054002e  beq         $v0, $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x29A944u;
    {
        const bool branch_taken_0x29a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x29A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A944u;
        // 0x29a948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a944) {
            ctx->pc = 0x29AA00u;
            goto label_29aa00;
        }
    }
    ctx->pc = 0x29A94Cu;
    // 0x29a94c: 0xc0941c2  jal         func_250708
    ctx->pc = 0x29A94Cu;
    SET_GPR_U32(ctx, 31, 0x29A954u);
    ctx->pc = 0x29A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A94Cu;
    // 0x29a950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x29A94Cu, 0x29A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A954u;
label_29a954:
    // 0x29a954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a958: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29A958u;
    {
        const bool branch_taken_0x29a958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a958) {
            ctx->pc = 0x29A95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A958u;
            // 0x29a95c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A984u;
            goto label_29a984;
        }
    }
    ctx->pc = 0x29A960u;
    // 0x29a960: 0x5251000b  beql        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x29A960u;
    {
        const bool branch_taken_0x29a960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x29a960) {
            ctx->pc = 0x29A964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A960u;
            // 0x29a964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A990u;
            goto label_29a990;
        }
    }
    ctx->pc = 0x29A968u;
    // 0x29a968: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x29a968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x29a96c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A96Cu;
    {
        const bool branch_taken_0x29a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a96c) {
            ctx->pc = 0x29A970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A96Cu;
            // 0x29a970: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A984u;
            goto label_29a984;
        }
    }
    ctx->pc = 0x29A974u;
    // 0x29a974: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x29a978: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A978u;
    {
        const bool branch_taken_0x29a978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A978u;
        // 0x29a97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a978) {
            ctx->pc = 0x29A990u;
            goto label_29a990;
        }
    }
    ctx->pc = 0x29A980u;
    // 0x29a980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29a984:
    // 0x29a984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a988: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29A988u;
    {
        const bool branch_taken_0x29a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A988u;
        // 0x29a98c: 0xac740284  sw          $s4, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a988) {
            ctx->pc = 0x29AA00u;
            goto label_29aa00;
        }
    }
    ctx->pc = 0x29A990u;
label_29a990:
    // 0x29a990: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a994: 0xc094454  jal         func_251150
    ctx->pc = 0x29A994u;
    SET_GPR_U32(ctx, 31, 0x29A99Cu);
    ctx->pc = 0x29A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A994u;
    // 0x29a998: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x29A994u, 0x29A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A99Cu;
label_29a99c:
    // 0x29a99c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29a99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9a0: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x29A9A0u;
    {
        const bool branch_taken_0x29a9a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9A0u;
        // 0x29a9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9a0) {
            ctx->pc = 0x29A9F0u;
            goto label_29a9f0;
        }
    }
    ctx->pc = 0x29A9A8u;
    // 0x29a9a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9ac: 0xc094454  jal         func_251150
    ctx->pc = 0x29A9ACu;
    SET_GPR_U32(ctx, 31, 0x29A9B4u);
    ctx->pc = 0x29A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9ACu;
    // 0x29a9b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x29A9ACu, 0x29A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9B4u;
label_29a9b4:
    // 0x29a9b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29A9B4u;
    {
        const bool branch_taken_0x29a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9B4u;
        // 0x29a9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9b4) {
            ctx->pc = 0x29A9F0u;
            goto label_29a9f0;
        }
    }
    ctx->pc = 0x29A9BCu;
    // 0x29a9bc: 0x960a0014  lhu         $t2, 0x14($s0)
    ctx->pc = 0x29a9bcu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29a9c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29a9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29a9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9c8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29a9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29a9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9d0: 0xc094472  jal         func_2511C8
    ctx->pc = 0x29A9D0u;
    SET_GPR_U32(ctx, 31, 0x29A9D8u);
    ctx->pc = 0x29A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9D0u;
    // 0x29a9d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2511C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2511C8u, 0x29A9D0u, 0x29A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9D8u;
label_29a9d8:
    // 0x29a9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A9D8u;
    {
        const bool branch_taken_0x29a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9D8u;
        // 0x29a9dc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9d8) {
            ctx->pc = 0x29A9F0u;
            goto label_29a9f0;
        }
    }
    ctx->pc = 0x29A9E0u;
    // 0x29a9e0: 0xc0a6db6  jal         func_29B6D8
    ctx->pc = 0x29A9E0u;
    SET_GPR_U32(ctx, 31, 0x29A9E8u);
    ctx->pc = 0x29A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9E0u;
    // 0x29a9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B6D8u, 0x29A9E0u, 0x29A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9E8u;
label_29a9e8:
    // 0x29a9e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A9E8u;
    {
        const bool branch_taken_0x29a9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9E8u;
        // 0x29a9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9e8) {
            ctx->pc = 0x29AA00u;
            goto label_29aa00;
        }
    }
    ctx->pc = 0x29A9F0u;
label_29a9f0:
    // 0x29a9f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a9f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a9fc: 0xac830284  sw          $v1, 0x284($a0)
    ctx->pc = 0x29a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 3));
label_29aa00:
    // 0x29aa00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x29aa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29aa04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x29aa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aa08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x29aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aa0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29aa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29aa10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x29aa10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29aa14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa18: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA18u;
        // 0x29aa1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA20u;
}
