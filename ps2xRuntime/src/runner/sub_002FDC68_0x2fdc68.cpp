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

// Function: sub_002FDC68
// Address: 0x2fdc68 - 0x2fdcc8
void sub_002FDC68_0x2fdc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDC68_0x2fdc68");
#endif

    switch (ctx->pc) {
        case 0x2fdc8cu: goto label_2fdc8c;
        default: break;
    }

    ctx->pc = 0x2fdc68u;

    // 0x2fdc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdc6c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2fdc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2fdc70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fdc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fdc74: 0x34a56a40  ori         $a1, $a1, 0x6A40
    ctx->pc = 0x2fdc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    // 0x2fdc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdc84: 0xc089998  jal         func_226660
    ctx->pc = 0x2FDC84u;
    SET_GPR_U32(ctx, 31, 0x2FDC8Cu);
    ctx->pc = 0x2FDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC84u;
    // 0x2fdc88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FDC84u, 0x2FDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC8Cu;
label_2fdc8c:
    // 0x2fdc8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdc90: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDC90u;
    {
        const bool branch_taken_0x2fdc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC90u;
        // 0x2fdc94: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc90) {
            ctx->pc = 0x2FDCB0u;
            goto label_2fdcb0;
        }
    }
    ctx->pc = 0x2FDC98u;
    // 0x2fdc98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fdc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc9c: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2fdc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2fdca0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2fdca4: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x2fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x2fdca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDCA8u;
    {
        const bool branch_taken_0x2fdca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCA8u;
        // 0x2fdcac: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdca8) {
            ctx->pc = 0x2FDCB4u;
            goto label_2fdcb4;
        }
    }
    ctx->pc = 0x2FDCB0u;
label_2fdcb0:
    // 0x2fdcb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fdcb4:
    // 0x2fdcb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fdcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCBCu;
        // 0x2fdcc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCC4u;
    // 0x2fdcc4: 0x0  nop
    ctx->pc = 0x2fdcc4u;
    // NOP
    ctx->pc = 0x2fdcc8u;
}
