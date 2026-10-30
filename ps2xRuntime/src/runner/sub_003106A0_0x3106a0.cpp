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

// Function: sub_003106A0
// Address: 0x3106a0 - 0x310768
void sub_003106A0_0x3106a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003106A0_0x3106a0");
#endif

    switch (ctx->pc) {
        case 0x3106c0u: goto label_3106c0;
        case 0x3106e0u: goto label_3106e0;
        case 0x3106f0u: goto label_3106f0;
        case 0x310710u: goto label_310710;
        case 0x310718u: goto label_310718;
        case 0x310720u: goto label_310720;
        case 0x310730u: goto label_310730;
        case 0x31074cu: goto label_31074c;
        default: break;
    }

    ctx->pc = 0x3106a0u;

    // 0x3106a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3106a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3106a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3106a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3106a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3106a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3106acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3106b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3106b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3106b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3106b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3106b8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3106B8u;
    SET_GPR_U32(ctx, 31, 0x3106C0u);
    ctx->pc = 0x3106BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106B8u;
    // 0x3106bc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3106B8u, 0x3106C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3106C0u;
label_3106c0:
    // 0x3106c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3106c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106c4: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3106C4u;
    {
        const bool branch_taken_0x3106c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106c4) {
            ctx->pc = 0x3106C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3106C4u;
            // 0x3106c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310704u;
            goto label_310704;
        }
    }
    ctx->pc = 0x3106CCu;
    // 0x3106cc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3106ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3106d0: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3106D0u;
    {
        const bool branch_taken_0x3106d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3106d0) {
            ctx->pc = 0x3106D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3106D0u;
            // 0x3106d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310704u;
            goto label_310704;
        }
    }
    ctx->pc = 0x3106D8u;
    // 0x3106d8: 0xc08750a  jal         func_21D428
    ctx->pc = 0x3106D8u;
    SET_GPR_U32(ctx, 31, 0x3106E0u);
    ctx->pc = 0x3106DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106D8u;
    // 0x3106dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x3106D8u, 0x3106E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3106E0u;
label_3106e0:
    // 0x3106e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3106e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106e4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3106e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3106e8: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x3106E8u;
    SET_GPR_U32(ctx, 31, 0x3106F0u);
    ctx->pc = 0x3106ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106E8u;
    // 0x3106ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3106E8u, 0x3106F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3106F0u;
label_3106f0:
    // 0x3106f0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3106f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3106f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3106f8: 0xa2020274  sb          $v0, 0x274($s0)
    ctx->pc = 0x3106f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x3106fc: 0xa2030275  sb          $v1, 0x275($s0)
    ctx->pc = 0x3106fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 629), (uint8_t)GPR_U32(ctx, 3));
    // 0x310700: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x310700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310704:
    // 0x310704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x310704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310708: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31070c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310710:
    // 0x310710: 0xc137826  jal         func_4DE098
    ctx->pc = 0x310710u;
    SET_GPR_U32(ctx, 31, 0x310718u);
    ctx->pc = 0x310714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310710u;
    // 0x310714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310710u, 0x310718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310718u;
label_310718:
    // 0x310718: 0xc0e409a  jal         func_390268
    ctx->pc = 0x310718u;
    SET_GPR_U32(ctx, 31, 0x310720u);
    ctx->pc = 0x31071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310718u;
    // 0x31071c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310718u, 0x310720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310720u;
label_310720:
    // 0x310720: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x310720u;
    {
        const bool branch_taken_0x310720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310720) {
            ctx->pc = 0x310724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310720u;
            // 0x310724: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310738u;
            goto label_310738;
        }
    }
    ctx->pc = 0x310728u;
    // 0x310728: 0xc087502  jal         func_21D408
    ctx->pc = 0x310728u;
    SET_GPR_U32(ctx, 31, 0x310730u);
    ctx->pc = 0x31072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310728u;
    // 0x31072c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310728u, 0x310730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310730u;
label_310730:
    // 0x310730: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x310730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x310734: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x310734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_310738:
    // 0x310738: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x310738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31073c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31073Cu;
    {
        const bool branch_taken_0x31073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31073Cu;
        // 0x310740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31073c) {
            ctx->pc = 0x310710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310710;
        }
    }
    ctx->pc = 0x310744u;
    // 0x310744: 0xc05a526  jal         func_169498
    ctx->pc = 0x310744u;
    SET_GPR_U32(ctx, 31, 0x31074Cu);
    ctx->pc = 0x310748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310744u;
    // 0x310748: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169498u, 0x310744u, 0x31074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31074Cu;
label_31074c:
    // 0x31074c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31074cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310750: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x310750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310754: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x310754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31075c: 0x3e00008  jr          $ra
    ctx->pc = 0x31075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31075Cu;
        // 0x310760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310764u;
    // 0x310764: 0x0  nop
    ctx->pc = 0x310764u;
    // NOP
    ctx->pc = 0x310768u;
}
