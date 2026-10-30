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

// Function: sub_003230A0
// Address: 0x3230a0 - 0x323160
void sub_003230A0_0x3230a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003230A0_0x3230a0");
#endif

    switch (ctx->pc) {
        case 0x3230c8u: goto label_3230c8;
        case 0x3230d0u: goto label_3230d0;
        case 0x3230dcu: goto label_3230dc;
        case 0x3230ecu: goto label_3230ec;
        case 0x3230fcu: goto label_3230fc;
        case 0x323118u: goto label_323118;
        case 0x323120u: goto label_323120;
        default: break;
    }

    ctx->pc = 0x3230a0u;

    // 0x3230a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3230a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3230a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3230a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3230a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3230a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3230ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3230acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3230b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3230b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3230b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3230b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3230b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3230b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3230bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3230bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3230c0: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x3230c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3230c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3230c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3230c8:
    // 0x3230c8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3230C8u;
    SET_GPR_U32(ctx, 31, 0x3230D0u);
    ctx->pc = 0x3230CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230C8u;
    // 0x3230cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3230C8u, 0x3230D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230D0u;
label_3230d0:
    // 0x3230d0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x3230d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3230d4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3230D4u;
    SET_GPR_U32(ctx, 31, 0x3230DCu);
    ctx->pc = 0x3230D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230D4u;
    // 0x3230d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3230D4u, 0x3230DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230DCu;
label_3230dc:
    // 0x3230dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3230DCu;
    {
        const bool branch_taken_0x3230dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230DCu;
        // 0x3230e0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230dc) {
            ctx->pc = 0x323134u;
            goto label_323134;
        }
    }
    ctx->pc = 0x3230E4u;
    // 0x3230e4: 0xc087502  jal         func_21D408
    ctx->pc = 0x3230E4u;
    SET_GPR_U32(ctx, 31, 0x3230ECu);
    ctx->pc = 0x3230E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230E4u;
    // 0x3230e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3230E4u, 0x3230ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230ECu;
label_3230ec:
    // 0x3230ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3230ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3230f0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3230f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3230f4: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x3230F4u;
    SET_GPR_U32(ctx, 31, 0x3230FCu);
    ctx->pc = 0x3230F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230F4u;
    // 0x3230f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3230F4u, 0x3230FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230FCu;
label_3230fc:
    // 0x3230fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3230fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323100: 0x602000c  bltzl       $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x323100u;
    {
        const bool branch_taken_0x323100 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x323100) {
            ctx->pc = 0x323104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323100u;
            // 0x323104: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323134u;
            goto label_323134;
        }
    }
    ctx->pc = 0x323108u;
    // 0x323108: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x32310c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x32310cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x323110: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x323110u;
    {
        const bool branch_taken_0x323110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323110) {
            ctx->pc = 0x323114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323110u;
            // 0x323114: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323134u;
            goto label_323134;
        }
    }
    ctx->pc = 0x323118u;
label_323118:
    // 0x323118: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x323118u;
    SET_GPR_U32(ctx, 31, 0x323120u);
    ctx->pc = 0x32311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323118u;
    // 0x32311c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x323118u, 0x323120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323120u;
label_323120:
    // 0x323120: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x323120u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x323124: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x323124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x323128: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x323128u;
    {
        const bool branch_taken_0x323128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x323128) {
            ctx->pc = 0x323118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323118;
        }
    }
    ctx->pc = 0x323130u;
    // 0x323130: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x323130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323134:
    // 0x323134: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x323134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x323138: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x323138u;
    {
        const bool branch_taken_0x323138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323138) {
            ctx->pc = 0x32313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323138u;
            // 0x32313c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3230C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3230c8;
        }
    }
    ctx->pc = 0x323140u;
    // 0x323140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x323140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x323144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32314c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32314cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323154: 0x3e00008  jr          $ra
    ctx->pc = 0x323154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323154u;
        // 0x323158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32315Cu;
    // 0x32315c: 0x0  nop
    ctx->pc = 0x32315cu;
    // NOP
    ctx->pc = 0x323160u;
}
