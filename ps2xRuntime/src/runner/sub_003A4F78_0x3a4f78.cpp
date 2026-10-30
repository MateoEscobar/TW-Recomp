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

// Function: sub_003A4F78
// Address: 0x3a4f78 - 0x3a4fd0
void sub_003A4F78_0x3a4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4F78_0x3a4f78");
#endif

    switch (ctx->pc) {
        case 0x3a4f9cu: goto label_3a4f9c;
        case 0x3a4facu: goto label_3a4fac;
        default: break;
    }

    ctx->pc = 0x3a4f78u;

    // 0x3a4f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a4f7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a4f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a4f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a4f84: 0x48402  srl         $s0, $a0, 16
    ctx->pc = 0x3a4f84u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3a4f88: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a4f88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a4f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4f90: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x3a4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x3a4f94: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x3A4F94u;
    SET_GPR_U32(ctx, 31, 0x3A4F9Cu);
    ctx->pc = 0x3A4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F94u;
    // 0x3a4f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x3A4F94u, 0x3A4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F9Cu;
label_3a4f9c:
    // 0x3a4f9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4F9Cu;
    {
        const bool branch_taken_0x3a4f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F9Cu;
        // 0x3a4fa0: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f9c) {
            ctx->pc = 0x3A4FB4u;
            goto label_3a4fb4;
        }
    }
    ctx->pc = 0x3A4FA4u;
    // 0x3a4fa4: 0xc062be2  jal         func_18AF88
    ctx->pc = 0x3A4FA4u;
    SET_GPR_U32(ctx, 31, 0x3A4FACu);
    ctx->pc = 0x3A4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FA4u;
    // 0x3a4fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x3A4FA4u, 0x3A4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FACu;
label_3a4fac:
    // 0x3a4fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4FACu;
    {
        const bool branch_taken_0x3a4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FACu;
        // 0x3a4fb0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fac) {
            ctx->pc = 0x3A4FBCu;
            goto label_3a4fbc;
        }
    }
    ctx->pc = 0x3A4FB4u;
label_3a4fb4:
    // 0x3a4fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4fb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a4fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4fbc:
    // 0x3a4fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FC4u;
        // 0x3a4fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4FCCu;
    // 0x3a4fcc: 0x0  nop
    ctx->pc = 0x3a4fccu;
    // NOP
    ctx->pc = 0x3a4fd0u;
}
