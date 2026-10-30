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

// Function: sub_00397078
// Address: 0x397078 - 0x3971c8
void sub_00397078_0x397078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397078_0x397078");
#endif

    switch (ctx->pc) {
        case 0x3970a8u: goto label_3970a8;
        case 0x3970c4u: goto label_3970c4;
        case 0x3970d0u: goto label_3970d0;
        case 0x3970e0u: goto label_3970e0;
        case 0x3970e8u: goto label_3970e8;
        case 0x397110u: goto label_397110;
        case 0x39711cu: goto label_39711c;
        case 0x397130u: goto label_397130;
        case 0x397140u: goto label_397140;
        case 0x397154u: goto label_397154;
        case 0x397160u: goto label_397160;
        case 0x397180u: goto label_397180;
        case 0x39718cu: goto label_39718c;
        case 0x39719cu: goto label_39719c;
        case 0x3971a4u: goto label_3971a4;
        default: break;
    }

    ctx->pc = 0x397078u;

    // 0x397078: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x397078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39707c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x39707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x397080: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x397080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x397084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x397084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397088: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x397088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39708c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x39708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x397090: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x397090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x397094: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x397094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x397098: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x397098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x39709c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3970a0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3970A0u;
    SET_GPR_U32(ctx, 31, 0x3970A8u);
    ctx->pc = 0x3970A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970A0u;
    // 0x3970a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3970A0u, 0x3970A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970A8u;
label_3970a8:
    // 0x3970a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3970a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3970ac: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x3970ACu;
    {
        const bool branch_taken_0x3970ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970ac) {
            ctx->pc = 0x3970B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970ACu;
            // 0x3970b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971A8u;
            goto label_3971a8;
        }
    }
    ctx->pc = 0x3970B4u;
    // 0x3970b4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3970B4u;
    {
        const bool branch_taken_0x3970b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3970B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970B4u;
        // 0x3970b8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3970b4) {
            ctx->pc = 0x3970F0u;
            goto label_3970f0;
        }
    }
    ctx->pc = 0x3970BCu;
    // 0x3970bc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3970BCu;
    SET_GPR_U32(ctx, 31, 0x3970C4u);
    ctx->pc = 0x3970C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970BCu;
    // 0x3970c0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3970BCu, 0x3970C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970C4u;
label_3970c4:
    // 0x3970c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3970c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3970c8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3970C8u;
    SET_GPR_U32(ctx, 31, 0x3970D0u);
    ctx->pc = 0x3970CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970C8u;
    // 0x3970cc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3970C8u, 0x3970D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970D0u;
label_3970d0:
    // 0x3970d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3970d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3970d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3970d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3970d8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3970D8u;
    SET_GPR_U32(ctx, 31, 0x3970E0u);
    ctx->pc = 0x3970DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970D8u;
    // 0x3970dc: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3970D8u, 0x3970E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970E0u;
label_3970e0:
    // 0x3970e0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3970E0u;
    SET_GPR_U32(ctx, 31, 0x3970E8u);
    ctx->pc = 0x3970E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970E0u;
    // 0x3970e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3970E0u, 0x3970E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970E8u;
label_3970e8:
    // 0x3970e8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3970E8u;
    {
        const bool branch_taken_0x3970e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970E8u;
        // 0x3970ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3970e8) {
            ctx->pc = 0x3971A8u;
            goto label_3971a8;
        }
    }
    ctx->pc = 0x3970F0u;
label_3970f0:
    // 0x3970f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3970f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3970f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3970f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3970f8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3970f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3970fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3970fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397100: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x397100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x397104: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x397104u;
    {
        const bool branch_taken_0x397104 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x397108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397104u;
        // 0x397108: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397104) {
            ctx->pc = 0x397178u;
            goto label_397178;
        }
    }
    ctx->pc = 0x39710Cu;
    // 0x39710c: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x39710cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_397110:
    // 0x397110: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x397110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x397114: 0xc0e409a  jal         func_390268
    ctx->pc = 0x397114u;
    SET_GPR_U32(ctx, 31, 0x39711Cu);
    ctx->pc = 0x397118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397114u;
    // 0x397118: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x397114u, 0x39711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39711Cu;
label_39711c:
    // 0x39711c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39711cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397120: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x397120u;
    {
        const bool branch_taken_0x397120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x397124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397120u;
        // 0x397124: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397120) {
            ctx->pc = 0x397164u;
            goto label_397164;
        }
    }
    ctx->pc = 0x397128u;
    // 0x397128: 0xc08a17e  jal         func_2285F8
    ctx->pc = 0x397128u;
    SET_GPR_U32(ctx, 31, 0x397130u);
    ctx->pc = 0x39712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397128u;
    // 0x39712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x397128u, 0x397130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397130u;
label_397130:
    // 0x397130: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x397130u;
    {
        const bool branch_taken_0x397130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397130u;
        // 0x397134: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397130) {
            ctx->pc = 0x397164u;
            goto label_397164;
        }
    }
    ctx->pc = 0x397138u;
    // 0x397138: 0xc089c18  jal         func_227060
    ctx->pc = 0x397138u;
    SET_GPR_U32(ctx, 31, 0x397140u);
    ctx->pc = 0x39713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397138u;
    // 0x39713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x397138u, 0x397140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397140u;
label_397140:
    // 0x397140: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x397140u;
    {
        const bool branch_taken_0x397140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x397144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397140u;
        // 0x397144: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397140) {
            ctx->pc = 0x397164u;
            goto label_397164;
        }
    }
    ctx->pc = 0x397148u;
    // 0x397148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39714c: 0xc08b900  jal         func_22E400
    ctx->pc = 0x39714Cu;
    SET_GPR_U32(ctx, 31, 0x397154u);
    ctx->pc = 0x397150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39714Cu;
    // 0x397150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x39714Cu, 0x397154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397154u;
label_397154:
    // 0x397154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397158: 0xc089974  jal         func_2265D0
    ctx->pc = 0x397158u;
    SET_GPR_U32(ctx, 31, 0x397160u);
    ctx->pc = 0x39715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397158u;
    // 0x39715c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x397158u, 0x397160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397160u;
label_397160:
    // 0x397160: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x397160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_397164:
    // 0x397164: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x397164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x397168: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x397168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x39716c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39716cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x397170: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x397170u;
    {
        const bool branch_taken_0x397170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397170u;
        // 0x397174: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397170) {
            ctx->pc = 0x397110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397110;
        }
    }
    ctx->pc = 0x397178u;
label_397178:
    // 0x397178: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x397178u;
    SET_GPR_U32(ctx, 31, 0x397180u);
    ctx->pc = 0x39717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397178u;
    // 0x39717c: 0x8ea42c7c  lw          $a0, 0x2C7C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x397178u, 0x397180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397180u;
label_397180:
    // 0x397180: 0x8ea42c7c  lw          $a0, 0x2C7C($s5)
    ctx->pc = 0x397180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
    // 0x397184: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x397184u;
    SET_GPR_U32(ctx, 31, 0x39718Cu);
    ctx->pc = 0x397188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397184u;
    // 0x397188: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x397184u, 0x39718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39718Cu;
label_39718c:
    // 0x39718c: 0x8ea42c7c  lw          $a0, 0x2C7C($s5)
    ctx->pc = 0x39718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
    // 0x397190: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x397190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397194: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x397194u;
    SET_GPR_U32(ctx, 31, 0x39719Cu);
    ctx->pc = 0x397198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397194u;
    // 0x397198: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x397194u, 0x39719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39719Cu;
label_39719c:
    // 0x39719c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39719Cu;
    SET_GPR_U32(ctx, 31, 0x3971A4u);
    ctx->pc = 0x3971A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39719Cu;
    // 0x3971a0: 0x8ea42c7c  lw          $a0, 0x2C7C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39719Cu, 0x3971A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971A4u;
label_3971a4:
    // 0x3971a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3971a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3971a8:
    // 0x3971a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3971a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3971ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3971acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3971b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3971b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3971b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3971b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3971b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3971b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3971bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3971bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3971c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3971C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3971C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971C0u;
        // 0x3971c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3971C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3971C8u;
}
