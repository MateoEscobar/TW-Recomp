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

// Function: sub_00106B90
// Address: 0x106b90 - 0x106bf8
void sub_00106B90_0x106b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106B90_0x106b90");
#endif

    switch (ctx->pc) {
        case 0x106b90u: goto label_106b90;
        case 0x106b94u: goto label_106b94;
        case 0x106b98u: goto label_106b98;
        case 0x106b9cu: goto label_106b9c;
        case 0x106ba0u: goto label_106ba0;
        case 0x106ba4u: goto label_106ba4;
        case 0x106ba8u: goto label_106ba8;
        case 0x106bacu: goto label_106bac;
        case 0x106bb0u: goto label_106bb0;
        case 0x106bb4u: goto label_106bb4;
        case 0x106bb8u: goto label_106bb8;
        case 0x106bbcu: goto label_106bbc;
        case 0x106bc0u: goto label_106bc0;
        case 0x106bc4u: goto label_106bc4;
        case 0x106bc8u: goto label_106bc8;
        case 0x106bccu: goto label_106bcc;
        case 0x106bd0u: goto label_106bd0;
        case 0x106bd4u: goto label_106bd4;
        case 0x106bd8u: goto label_106bd8;
        case 0x106bdcu: goto label_106bdc;
        case 0x106be0u: goto label_106be0;
        case 0x106be4u: goto label_106be4;
        case 0x106be8u: goto label_106be8;
        case 0x106becu: goto label_106bec;
        case 0x106bf0u: goto label_106bf0;
        case 0x106bf4u: goto label_106bf4;
        default: break;
    }

    ctx->pc = 0x106b90u;

label_106b90:
    // 0x106b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106b94:
    // 0x106b94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_106b98:
    // 0x106b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106b9c:
    // 0x106b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106ba0:
    // 0x106ba0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x106ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_106ba4:
    // 0x106ba4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_106ba8:
    if (ctx->pc == 0x106BA8u) {
        ctx->pc = 0x106BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BA4u;
        // 0x106ba8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106BACu;
        goto label_106bac;
    }
    ctx->pc = 0x106BA4u;
    {
        const bool branch_taken_0x106ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106ba4) {
            ctx->pc = 0x106BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106BA4u;
            // 0x106ba8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106BB8u;
            goto label_106bb8;
        }
    }
    ctx->pc = 0x106BACu;
label_106bac:
    // 0x106bac: 0xc041544  jal         func_105510
label_106bb0:
    if (ctx->pc == 0x106BB0u) {
        ctx->pc = 0x106BB4u;
        goto label_106bb4;
    }
    ctx->pc = 0x106BACu;
    SET_GPR_U32(ctx, 31, 0x106BB4u);
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x106BACu, 0x106BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BB4u;
label_106bb4:
    // 0x106bb4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_106bb8:
    // 0x106bb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_106bbc:
    // 0x106bbc: 0xc0e409a  jal         func_390268
label_106bc0:
    if (ctx->pc == 0x106BC0u) {
        ctx->pc = 0x106BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BBCu;
        // 0x106bc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106BC4u;
        goto label_106bc4;
    }
    ctx->pc = 0x106BBCu;
    SET_GPR_U32(ctx, 31, 0x106BC4u);
    ctx->pc = 0x106BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BBCu;
    // 0x106bc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x106BBCu, 0x106BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BC4u;
label_106bc4:
    // 0x106bc4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x106bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_106bc8:
    // 0x106bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106bcc:
    // 0x106bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106bd0:
    // 0x106bd0: 0x60f809  jalr        $v1
label_106bd4:
    if (ctx->pc == 0x106BD4u) {
        ctx->pc = 0x106BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BD0u;
        // 0x106bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106BD8u;
        goto label_106bd8;
    }
    ctx->pc = 0x106BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106BD8u);
        ctx->pc = 0x106BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BD0u;
        // 0x106bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106BD0u, 0x106BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106BD8u;
label_106bd8:
    // 0x106bd8: 0xc042ef4  jal         func_10BBD0
label_106bdc:
    if (ctx->pc == 0x106BDCu) {
        ctx->pc = 0x106BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BD8u;
        // 0x106bdc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106BE0u;
        goto label_106be0;
    }
    ctx->pc = 0x106BD8u;
    SET_GPR_U32(ctx, 31, 0x106BE0u);
    ctx->pc = 0x106BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BD8u;
    // 0x106bdc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x106BD8u, 0x106BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BE0u;
label_106be0:
    // 0x106be0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x106be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_106be4:
    // 0x106be4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x106be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106be8:
    // 0x106be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106bec:
    // 0x106bec: 0x3e00008  jr          $ra
label_106bf0:
    if (ctx->pc == 0x106BF0u) {
        ctx->pc = 0x106BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BECu;
        // 0x106bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106BF4u;
        goto label_106bf4;
    }
    ctx->pc = 0x106BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BECu;
        // 0x106bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BF4u;
label_106bf4:
    // 0x106bf4: 0x0  nop
    ctx->pc = 0x106bf4u;
    // NOP
    ctx->pc = 0x106bf8u;
}
