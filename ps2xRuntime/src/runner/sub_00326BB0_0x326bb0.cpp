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

// Function: sub_00326BB0
// Address: 0x326bb0 - 0x326c38
void sub_00326BB0_0x326bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326BB0_0x326bb0");
#endif

    switch (ctx->pc) {
        case 0x326c00u: goto label_326c00;
        case 0x326c14u: goto label_326c14;
        case 0x326c2cu: goto label_326c2c;
        default: break;
    }

    ctx->pc = 0x326bb0u;

    // 0x326bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326bbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x326bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x326bc0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x326BC0u;
    {
        const bool branch_taken_0x326bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BC0u;
        // 0x326bc4: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bc0) {
            ctx->pc = 0x326BF4u;
            goto label_326bf4;
        }
    }
    ctx->pc = 0x326BC8u;
    // 0x326bc8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x326bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x326bcc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x326BCCu;
    {
        const bool branch_taken_0x326bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326bcc) {
            ctx->pc = 0x326BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326BCCu;
            // 0x326bd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326BE4u;
            goto label_326be4;
        }
    }
    ctx->pc = 0x326BD4u;
    // 0x326bd4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x326BD4u;
    {
        const bool branch_taken_0x326bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BD4u;
        // 0x326bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bd4) {
            ctx->pc = 0x326C08u;
            goto label_326c08;
        }
    }
    ctx->pc = 0x326BDCu;
    // 0x326bdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x326BDCu;
    {
        const bool branch_taken_0x326bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326bdc) {
            ctx->pc = 0x326C30u;
            goto label_326c30;
        }
    }
    ctx->pc = 0x326BE4u;
label_326be4:
    // 0x326be4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x326BE4u;
    {
        const bool branch_taken_0x326be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BE4u;
        // 0x326be8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326be4) {
            ctx->pc = 0x326C1Cu;
            goto label_326c1c;
        }
    }
    ctx->pc = 0x326BECu;
    // 0x326bec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x326BECu;
    {
        const bool branch_taken_0x326bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326bec) {
            ctx->pc = 0x326C30u;
            goto label_326c30;
        }
    }
    ctx->pc = 0x326BF4u;
label_326bf4:
    // 0x326bf4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x326bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x326bf8: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326BF8u;
    SET_GPR_U32(ctx, 31, 0x326C00u);
    ctx->pc = 0x326BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326BF8u;
    // 0x326bfc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326BF8u, 0x326C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C00u;
label_326c00:
    // 0x326c00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326C00u;
    {
        const bool branch_taken_0x326c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C00u;
        // 0x326c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c00) {
            ctx->pc = 0x326C30u;
            goto label_326c30;
        }
    }
    ctx->pc = 0x326C08u;
label_326c08:
    // 0x326c08: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x326c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x326c0c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326C0Cu;
    SET_GPR_U32(ctx, 31, 0x326C14u);
    ctx->pc = 0x326C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C0Cu;
    // 0x326c10: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326C0Cu, 0x326C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C14u;
label_326c14:
    // 0x326c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326C14u;
    {
        const bool branch_taken_0x326c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C14u;
        // 0x326c18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c14) {
            ctx->pc = 0x326C30u;
            goto label_326c30;
        }
    }
    ctx->pc = 0x326C1Cu;
label_326c1c:
    // 0x326c1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x326c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x326c20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x326c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326c24: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x326C24u;
    SET_GPR_U32(ctx, 31, 0x326C2Cu);
    ctx->pc = 0x326C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C24u;
    // 0x326c28: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x326C24u, 0x326C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C2Cu;
label_326c2c:
    // 0x326c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326c30:
    // 0x326c30: 0x3e00008  jr          $ra
    ctx->pc = 0x326C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C30u;
        // 0x326c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326C38u;
}
