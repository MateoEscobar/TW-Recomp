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

// Function: sub_001E3F98
// Address: 0x1e3f98 - 0x1e4050
void sub_001E3F98_0x1e3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F98_0x1e3f98");
#endif

    switch (ctx->pc) {
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4028u: goto label_1e4028;
        default: break;
    }

    ctx->pc = 0x1e3f98u;

    // 0x1e3f98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e3f9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e3f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e3fa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fa4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e3fa8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e3fac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e3fb0: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1e3fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e3fb4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e3fb8: 0x26500140  addiu       $s0, $s2, 0x140
    ctx->pc = 0x1e3fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x1e3fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3fc0: 0xc078d16  jal         func_1E3458
    ctx->pc = 0x1E3FC0u;
    SET_GPR_U32(ctx, 31, 0x1E3FC8u);
    ctx->pc = 0x1E3FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FC0u;
    // 0x1e3fc4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3458u, 0x1E3FC0u, 0x1E3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FC8u;
label_1e3fc8:
    // 0x1e3fc8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e3fcc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e3fd0: 0x2442c490  addiu       $v0, $v0, -0x3B70
    ctx->pc = 0x1e3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
    // 0x1e3fd4: 0x2463c4b8  addiu       $v1, $v1, -0x3B48
    ctx->pc = 0x1e3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952120));
    // 0x1e3fd8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1e3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1e3fdc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1e3fe0:
    // 0x1e3fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fe4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E3FE4u;
    SET_GPR_U32(ctx, 31, 0x1E3FECu);
    ctx->pc = 0x1E3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FE4u;
    // 0x1e3fe8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E3FE4u, 0x1E3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FECu;
label_1e3fec:
    // 0x1e3fec: 0x0  nop
    ctx->pc = 0x1e3fecu;
    // NOP
    // 0x1e3ff0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E3FF0u;
    {
        const bool branch_taken_0x1e3ff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FF0u;
        // 0x1e3ff4: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ff0) {
            ctx->pc = 0x1E3FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3fe0;
        }
    }
    ctx->pc = 0x1E3FF8u;
    // 0x1e3ff8: 0x26500ed0  addiu       $s0, $s2, 0xED0
    ctx->pc = 0x1e3ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
    // 0x1e3ffc: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1e3ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e4000: 0x26541c60  addiu       $s4, $s2, 0x1C60
    ctx->pc = 0x1e4000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
    // 0x1e4004: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e4004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4008:
    // 0x1e4008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e400c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E400Cu;
    SET_GPR_U32(ctx, 31, 0x1E4014u);
    ctx->pc = 0x1E4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E400Cu;
    // 0x1e4010: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E400Cu, 0x1E4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4014u;
label_1e4014:
    // 0x1e4014: 0x0  nop
    ctx->pc = 0x1e4014u;
    // NOP
    // 0x1e4018: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E4018u;
    {
        const bool branch_taken_0x1e4018 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4018u;
        // 0x1e401c: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4018) {
            ctx->pc = 0x1E4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4008;
        }
    }
    ctx->pc = 0x1E4020u;
    // 0x1e4020: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E4020u;
    SET_GPR_U32(ctx, 31, 0x1E4028u);
    ctx->pc = 0x1E4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4020u;
    // 0x1e4024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E4020u, 0x1E4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4028u;
label_1e4028:
    // 0x1e4028: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e4028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e402c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e402cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4030: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e4030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4034: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e4034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4038: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e4038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e403c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e403cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4044: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4044u;
        // 0x1e4048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E404Cu;
    // 0x1e404c: 0x0  nop
    ctx->pc = 0x1e404cu;
    // NOP
    ctx->pc = 0x1e4050u;
}
