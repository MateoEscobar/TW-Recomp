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

// Function: sub_0041ABF8
// Address: 0x41abf8 - 0x41ac88
void sub_0041ABF8_0x41abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ABF8_0x41abf8");
#endif

    ctx->pc = 0x41abf8u;

    // 0x41abf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41abfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41ac00: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41ac00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41ac04: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x41ac04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ac08: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x41ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x41ac0c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ac0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ac10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x41ac10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x41ac14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x41ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41ac18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x41ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41ac1c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x41AC1Cu;
    {
        const bool branch_taken_0x41ac1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC1Cu;
        // 0x41ac20: 0x8c67572c  lw          $a3, 0x572C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac1c) {
            ctx->pc = 0x41AC44u;
            goto label_41ac44;
        }
    }
    ctx->pc = 0x41AC24u;
    // 0x41ac24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x41ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x41ac28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ac2c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x41ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x41ac30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x41ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x41ac34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x41ac34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x41ac38: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x41ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x41ac3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x41AC3Cu;
    {
        const bool branch_taken_0x41ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC3Cu;
        // 0x41ac40: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac3c) {
            ctx->pc = 0x41AC64u;
            goto label_41ac64;
        }
    }
    ctx->pc = 0x41AC44u;
label_41ac44:
    // 0x41ac44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x41ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x41ac48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ac4c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x41ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x41ac50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x41ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x41ac54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x41ac54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x41ac58: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x41ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x41ac5c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x41ac5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x41ac60: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x41ac60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_41ac64:
    // 0x41ac64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41ac68: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x41ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x41ac6c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x41ac6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ac70: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ac70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ac74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x41ac74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x41ac78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41ac7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x41ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x41ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x41AC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC80u;
        // 0x41ac84: 0xac47572c  sw          $a3, 0x572C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AC88u;
}
