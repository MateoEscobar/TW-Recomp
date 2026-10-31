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

// Function: sub_002B2B90
// Address: 0x2b2b90 - 0x2b2c20
void sub_002B2B90_0x2b2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B90_0x2b2b90");
#endif

    switch (ctx->pc) {
        case 0x2b2bb0u: goto label_2b2bb0;
        case 0x2b2bb8u: goto label_2b2bb8;
        case 0x2b2bccu: goto label_2b2bcc;
        case 0x2b2bd4u: goto label_2b2bd4;
        case 0x2b2be8u: goto label_2b2be8;
        case 0x2b2bf4u: goto label_2b2bf4;
        case 0x2b2c0cu: goto label_2b2c0c;
        default: break;
    }

    ctx->pc = 0x2b2b90u;

    // 0x2b2b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2b94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b2b98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b2b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b2b9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b2b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ba0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b2ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2ba8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B2BA8u;
    SET_GPR_U32(ctx, 31, 0x2B2BB0u);
    ctx->pc = 0x2B2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BA8u;
    // 0x2b2bac: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B2BA8u, 0x2B2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BB0u;
label_2b2bb0:
    // 0x2b2bb0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B2BB0u;
    SET_GPR_U32(ctx, 31, 0x2B2BB8u);
    ctx->pc = 0x2B2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BB0u;
    // 0x2b2bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B2BB0u, 0x2B2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BB8u;
label_2b2bb8:
    // 0x2b2bb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bbc: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2BBCu;
    {
        const bool branch_taken_0x2b2bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bbc) {
            ctx->pc = 0x2B2BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BBCu;
            // 0x2b2bc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C10u;
            goto label_2b2c10;
        }
    }
    ctx->pc = 0x2B2BC4u;
    // 0x2b2bc4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B2BC4u;
    SET_GPR_U32(ctx, 31, 0x2B2BCCu);
    ctx->pc = 0x2B2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BC4u;
    // 0x2b2bc8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B2BC4u, 0x2B2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BCCu;
label_2b2bcc:
    // 0x2b2bcc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B2BCCu;
    SET_GPR_U32(ctx, 31, 0x2B2BD4u);
    ctx->pc = 0x2B2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BCCu;
    // 0x2b2bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B2BCCu, 0x2B2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BD4u;
label_2b2bd4:
    // 0x2b2bd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bd8: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B2BD8u;
    {
        const bool branch_taken_0x2b2bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bd8) {
            ctx->pc = 0x2B2BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BD8u;
            // 0x2b2bdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C10u;
            goto label_2b2c10;
        }
    }
    ctx->pc = 0x2B2BE0u;
    // 0x2b2be0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B2BE0u;
    SET_GPR_U32(ctx, 31, 0x2B2BE8u);
    ctx->pc = 0x2B2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BE0u;
    // 0x2b2be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B2BE0u, 0x2B2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BE8u;
label_2b2be8:
    // 0x2b2be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bec: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B2BECu;
    SET_GPR_U32(ctx, 31, 0x2B2BF4u);
    ctx->pc = 0x2B2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BECu;
    // 0x2b2bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B2BECu, 0x2B2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BF4u;
label_2b2bf4:
    // 0x2b2bf4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2b2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b2bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c00: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2b2c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2b2c04: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x2B2C04u;
    SET_GPR_U32(ctx, 31, 0x2B2C0Cu);
    ctx->pc = 0x2B2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C04u;
    // 0x2b2c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2B2C04u, 0x2B2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C0Cu;
label_2b2c0c:
    // 0x2b2c0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b2c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b2c10:
    // 0x2b2c10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b2c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C18u;
        // 0x2b2c1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C20u;
}
