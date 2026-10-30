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

// Function: sub_00333010
// Address: 0x333010 - 0x333168
void sub_00333010_0x333010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333010_0x333010");
#endif

    switch (ctx->pc) {
        case 0x333050u: goto label_333050;
        case 0x333068u: goto label_333068;
        case 0x333070u: goto label_333070;
        case 0x333080u: goto label_333080;
        case 0x3330b0u: goto label_3330b0;
        case 0x3330c8u: goto label_3330c8;
        case 0x3330e8u: goto label_3330e8;
        case 0x3330f8u: goto label_3330f8;
        case 0x333110u: goto label_333110;
        case 0x333118u: goto label_333118;
        case 0x333128u: goto label_333128;
        default: break;
    }

    ctx->pc = 0x333010u;

    // 0x333010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x333010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x333014: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x333014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x333018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x333018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33301c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33301cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333020: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x333020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x333024: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x333024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333028: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x333028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x33302c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33302cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333030: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x333030u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333034: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x333034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x333038: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x333038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x33303c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333040: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x333040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333044: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x333044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333048: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x333048u;
    SET_GPR_U32(ctx, 31, 0x333050u);
    ctx->pc = 0x33304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333048u;
    // 0x33304c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x333048u, 0x333050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333050u;
label_333050:
    // 0x333050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333058: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x333058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
    // 0x33305c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333060: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x333060u;
    SET_GPR_U32(ctx, 31, 0x333068u);
    ctx->pc = 0x333064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333060u;
    // 0x333064: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x333060u, 0x333068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333068u;
label_333068:
    // 0x333068: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x333068u;
    {
        const bool branch_taken_0x333068 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x33306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333068u;
        // 0x33306c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333068) {
            ctx->pc = 0x33309Cu;
            goto label_33309c;
        }
    }
    ctx->pc = 0x333070u;
label_333070:
    // 0x333070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333074: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x333074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333078: 0xc0ccb4a  jal         func_332D28
    ctx->pc = 0x333078u;
    SET_GPR_U32(ctx, 31, 0x333080u);
    ctx->pc = 0x33307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333078u;
    // 0x33307c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332D28u, 0x333078u, 0x333080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333080u;
label_333080:
    // 0x333080: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x333080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x333084: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x333084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x333088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33308c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333090: 0x230282a  slt         $a1, $s1, $s0
    ctx->pc = 0x333090u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x333094: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x333094u;
    {
        const bool branch_taken_0x333094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x333098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333094u;
        // 0x333098: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333094) {
            ctx->pc = 0x333070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333070;
        }
    }
    ctx->pc = 0x33309Cu;
label_33309c:
    // 0x33309c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3330a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3330a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330a8: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x3330A8u;
    SET_GPR_U32(ctx, 31, 0x3330B0u);
    ctx->pc = 0x3330ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330A8u;
    // 0x3330ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x3330A8u, 0x3330B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330B0u;
label_3330b0:
    // 0x3330b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3330b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3330b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330b8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3330b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x3330bc: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3330c0: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3330C0u;
    SET_GPR_U32(ctx, 31, 0x3330C8u);
    ctx->pc = 0x3330C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330C0u;
    // 0x3330c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3330C0u, 0x3330C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330C8u;
label_3330c8:
    // 0x3330c8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3330c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3330cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3330ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330d0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3330d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3330d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3330d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3330dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330e0: 0xc0ccaec  jal         func_332BB0
    ctx->pc = 0x3330E0u;
    SET_GPR_U32(ctx, 31, 0x3330E8u);
    ctx->pc = 0x3330E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330E0u;
    // 0x3330e4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BB0u, 0x3330E0u, 0x3330E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330E8u;
label_3330e8:
    // 0x3330e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3330e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3330ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330f0: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x3330F0u;
    SET_GPR_U32(ctx, 31, 0x3330F8u);
    ctx->pc = 0x3330F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330F0u;
    // 0x3330f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x3330F0u, 0x3330F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330F8u;
label_3330f8:
    // 0x3330f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3330f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3330fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333100: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x333100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x333104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333108: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x333108u;
    SET_GPR_U32(ctx, 31, 0x333110u);
    ctx->pc = 0x33310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333108u;
    // 0x33310c: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x333108u, 0x333110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333110u;
label_333110:
    // 0x333110: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x333110u;
    {
        const bool branch_taken_0x333110 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x333114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333110u;
        // 0x333114: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333110) {
            ctx->pc = 0x333144u;
            goto label_333144;
        }
    }
    ctx->pc = 0x333118u;
label_333118:
    // 0x333118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33311c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333120: 0xc0ccc5a  jal         func_333168
    ctx->pc = 0x333120u;
    SET_GPR_U32(ctx, 31, 0x333128u);
    ctx->pc = 0x333124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333120u;
    // 0x333124: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333168u, 0x333120u, 0x333128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333128u;
label_333128:
    // 0x333128: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x333128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x33312c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x33312cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x333130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x333134: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x333134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333138: 0x230282a  slt         $a1, $s1, $s0
    ctx->pc = 0x333138u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x33313c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x33313Cu;
    {
        const bool branch_taken_0x33313c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x333140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33313Cu;
        // 0x333140: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33313c) {
            ctx->pc = 0x333118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333118;
        }
    }
    ctx->pc = 0x333144u;
label_333144:
    // 0x333144: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x333144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x333148: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x333148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33314c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33314cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333154: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x333154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333158: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x333158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33315c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333160: 0x3e00008  jr          $ra
    ctx->pc = 0x333160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333160u;
        // 0x333164: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333168u;
}
