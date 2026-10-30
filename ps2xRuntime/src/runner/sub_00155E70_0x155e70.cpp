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

// Function: sub_00155E70
// Address: 0x155e70 - 0x155eb8
void sub_00155E70_0x155e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155E70_0x155e70");
#endif

    switch (ctx->pc) {
        case 0x155e98u: goto label_155e98;
        default: break;
    }

    ctx->pc = 0x155e70u;

    // 0x155e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155e74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x155e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x155e78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x155e7c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155E7Cu;
    {
        const bool branch_taken_0x155e7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x155E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E7Cu;
        // 0x155e80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e7c) {
            ctx->pc = 0x155EA4u;
            goto label_155ea4;
        }
    }
    ctx->pc = 0x155E84u;
    // 0x155e84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155E84u;
    {
        const bool branch_taken_0x155e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E84u;
        // 0x155e88: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e84) {
            ctx->pc = 0x155EA4u;
            goto label_155ea4;
        }
    }
    ctx->pc = 0x155E8Cu;
    // 0x155e8c: 0x261053a0  addiu       $s0, $s0, 0x53A0
    ctx->pc = 0x155e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21408));
    // 0x155e90: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x155E90u;
    SET_GPR_U32(ctx, 31, 0x155E98u);
    ctx->pc = 0x155E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E90u;
    // 0x155e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x155E90u, 0x155E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E98u;
label_155e98:
    // 0x155e98: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x155e9c: 0x24638360  addiu       $v1, $v1, -0x7CA0
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935392));
    // 0x155ea0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x155ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_155ea4:
    // 0x155ea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155eac: 0x3e00008  jr          $ra
    ctx->pc = 0x155EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EACu;
        // 0x155eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155EB4u;
    // 0x155eb4: 0x0  nop
    ctx->pc = 0x155eb4u;
    // NOP
    ctx->pc = 0x155eb8u;
}
