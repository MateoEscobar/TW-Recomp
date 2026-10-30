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

// Function: sub_00323B50
// Address: 0x323b50 - 0x323bc8
void sub_00323B50_0x323b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B50_0x323b50");
#endif

    switch (ctx->pc) {
        case 0x323b98u: goto label_323b98;
        default: break;
    }

    ctx->pc = 0x323b50u;

    // 0x323b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323b58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b60: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323B60u;
    {
        const bool branch_taken_0x323b60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B60u;
        // 0x323b64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b60) {
            ctx->pc = 0x323B80u;
            goto label_323b80;
        }
    }
    ctx->pc = 0x323B68u;
    // 0x323b68: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323b6c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x323b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x323b70: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x323b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x323b74: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x323b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323B78u;
    {
        const bool branch_taken_0x323b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B78u;
        // 0x323b7c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b78) {
            ctx->pc = 0x323B90u;
            goto label_323b90;
        }
    }
    ctx->pc = 0x323B80u;
label_323b80:
    // 0x323b80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323b84: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323b88: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x323b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323b8c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x323b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_323b90:
    // 0x323b90: 0xc0cce5a  jal         func_333968
    ctx->pc = 0x323B90u;
    SET_GPR_U32(ctx, 31, 0x323B98u);
    ctx->pc = 0x323B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B90u;
    // 0x323b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333968u, 0x323B90u, 0x323B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B98u;
label_323b98:
    // 0x323b98: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x323b98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323b9c: 0x26058000  addiu       $a1, $s0, -0x8000
    ctx->pc = 0x323b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x323ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ba4: 0xfca37ff0  sd          $v1, 0x7FF0($a1)
    ctx->pc = 0x323ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32752), GPR_U64(ctx, 3));
    // 0x323ba8: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x323ba8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323bac: 0xfca47ff8  sd          $a0, 0x7FF8($a1)
    ctx->pc = 0x323bacu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32760), GPR_U64(ctx, 4));
    // 0x323bb0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x323bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x323bb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x323BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BBCu;
        // 0x323bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BC4u;
    // 0x323bc4: 0x0  nop
    ctx->pc = 0x323bc4u;
    // NOP
    ctx->pc = 0x323bc8u;
}
