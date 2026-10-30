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

// Function: sub_0015DF68
// Address: 0x15df68 - 0x15dfb0
void sub_0015DF68_0x15df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DF68_0x15df68");
#endif

    switch (ctx->pc) {
        case 0x15df90u: goto label_15df90;
        default: break;
    }

    ctx->pc = 0x15df68u;

    // 0x15df68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15df6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15df70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15df74: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DF74u;
    {
        const bool branch_taken_0x15df74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF74u;
        // 0x15df78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df74) {
            ctx->pc = 0x15DF9Cu;
            goto label_15df9c;
        }
    }
    ctx->pc = 0x15DF7Cu;
    // 0x15df7c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DF7Cu;
    {
        const bool branch_taken_0x15df7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF7Cu;
        // 0x15df80: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df7c) {
            ctx->pc = 0x15DF9Cu;
            goto label_15df9c;
        }
    }
    ctx->pc = 0x15DF84u;
    // 0x15df84: 0x26106550  addiu       $s0, $s0, 0x6550
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25936));
    // 0x15df88: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15DF88u;
    SET_GPR_U32(ctx, 31, 0x15DF90u);
    ctx->pc = 0x15DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF88u;
    // 0x15df8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15DF88u, 0x15DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF90u;
label_15df90:
    // 0x15df90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15df94: 0x246386e8  addiu       $v1, $v1, -0x7918
    ctx->pc = 0x15df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936296));
    // 0x15df98: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15df98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_15df9c:
    // 0x15df9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15df9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x15DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA4u;
        // 0x15dfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DFACu;
    // 0x15dfac: 0x0  nop
    ctx->pc = 0x15dfacu;
    // NOP
    ctx->pc = 0x15dfb0u;
}
