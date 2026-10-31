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

// Function: sub_00396FA8
// Address: 0x396fa8 - 0x397010
void sub_00396FA8_0x396fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396FA8_0x396fa8");
#endif

    switch (ctx->pc) {
        case 0x396fc4u: goto label_396fc4;
        case 0x396fccu: goto label_396fcc;
        case 0x396fe0u: goto label_396fe0;
        case 0x396ff4u: goto label_396ff4;
        case 0x397000u: goto label_397000;
        default: break;
    }

    ctx->pc = 0x396fa8u;

    // 0x396fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x396fac: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x396facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x396fb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x396fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x396fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x396fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396fbc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396FBCu;
    SET_GPR_U32(ctx, 31, 0x396FC4u);
    ctx->pc = 0x396FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FBCu;
    // 0x396fc0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396FBCu, 0x396FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FC4u;
label_396fc4:
    // 0x396fc4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x396FC4u;
    SET_GPR_U32(ctx, 31, 0x396FCCu);
    ctx->pc = 0x396FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FC4u;
    // 0x396fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x396FC4u, 0x396FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FCCu;
label_396fcc:
    // 0x396fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396fd0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x396FD0u;
    {
        const bool branch_taken_0x396fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fd0) {
            ctx->pc = 0x396FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FD0u;
            // 0x396fd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397004u;
            goto label_397004;
        }
    }
    ctx->pc = 0x396FD8u;
    // 0x396fd8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396FD8u;
    SET_GPR_U32(ctx, 31, 0x396FE0u);
    ctx->pc = 0x396FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FD8u;
    // 0x396fdc: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396FD8u, 0x396FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FE0u;
label_396fe0:
    // 0x396fe0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x396FE0u;
    {
        const bool branch_taken_0x396fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fe0) {
            ctx->pc = 0x396FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FE0u;
            // 0x396fe4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397004u;
            goto label_397004;
        }
    }
    ctx->pc = 0x396FE8u;
    // 0x396fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x396fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396fec: 0xc089c20  jal         func_227080
    ctx->pc = 0x396FECu;
    SET_GPR_U32(ctx, 31, 0x396FF4u);
    ctx->pc = 0x396FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FECu;
    // 0x396ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x396FECu, 0x396FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FF4u;
label_396ff4:
    // 0x396ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396ff8: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x396FF8u;
    SET_GPR_U32(ctx, 31, 0x397000u);
    ctx->pc = 0x396FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FF8u;
    // 0x396ffc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x396FF8u, 0x397000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397000u;
label_397000:
    // 0x397000: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x397000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397004:
    // 0x397004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397008: 0x3e00008  jr          $ra
    ctx->pc = 0x397008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397008u;
        // 0x39700c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397010u;
}
