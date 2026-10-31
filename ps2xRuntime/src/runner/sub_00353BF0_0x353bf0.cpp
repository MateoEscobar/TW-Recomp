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

// Function: sub_00353BF0
// Address: 0x353bf0 - 0x353c68
void sub_00353BF0_0x353bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353BF0_0x353bf0");
#endif

    switch (ctx->pc) {
        case 0x353c08u: goto label_353c08;
        case 0x353c40u: goto label_353c40;
        case 0x353c50u: goto label_353c50;
        default: break;
    }

    ctx->pc = 0x353bf0u;

    // 0x353bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x353bf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x353bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x353bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353c00: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x353C00u;
    SET_GPR_U32(ctx, 31, 0x353C08u);
    ctx->pc = 0x353C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C00u;
    // 0x353c04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x353C00u, 0x353C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C08u;
label_353c08:
    // 0x353c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c0c: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x353C0Cu;
    {
        const bool branch_taken_0x353c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c0c) {
            ctx->pc = 0x353C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C0Cu;
            // 0x353c10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353C54u;
            goto label_353c54;
        }
    }
    ctx->pc = 0x353C14u;
    // 0x353c14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x353c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x353c18: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x353C18u;
    {
        const bool branch_taken_0x353c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c18) {
            ctx->pc = 0x353C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C18u;
            // 0x353c1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353C54u;
            goto label_353c54;
        }
    }
    ctx->pc = 0x353C20u;
    // 0x353c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353c24: 0x5451000b  bnel        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x353C24u;
    {
        const bool branch_taken_0x353c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x353c24) {
            ctx->pc = 0x353C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C24u;
            // 0x353c28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353C54u;
            goto label_353c54;
        }
    }
    ctx->pc = 0x353C2Cu;
    // 0x353c2c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x353c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x353c30: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353C30u;
    {
        const bool branch_taken_0x353c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c30) {
            ctx->pc = 0x353C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C30u;
            // 0x353c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353C48u;
            goto label_353c48;
        }
    }
    ctx->pc = 0x353C38u;
    // 0x353c38: 0xc0e749e  jal         func_39D278
    ctx->pc = 0x353C38u;
    SET_GPR_U32(ctx, 31, 0x353C40u);
    ctx->pc = 0x353C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C38u;
    // 0x353c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D278u, 0x353C38u, 0x353C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C40u;
label_353c40:
    // 0x353c40: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x353c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x353c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353c48:
    // 0x353c48: 0xc0d4768  jal         func_351DA0
    ctx->pc = 0x353C48u;
    SET_GPR_U32(ctx, 31, 0x353C50u);
    ctx->pc = 0x353C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C48u;
    // 0x353c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DA0u, 0x353C48u, 0x353C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C50u;
label_353c50:
    // 0x353c50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x353c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353c54:
    // 0x353c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x353C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C5Cu;
        // 0x353c60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353C64u;
    // 0x353c64: 0x0  nop
    ctx->pc = 0x353c64u;
    // NOP
    ctx->pc = 0x353c68u;
}
