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

// Function: sub_0029AA20
// Address: 0x29aa20 - 0x29aa78
void sub_0029AA20_0x29aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA20_0x29aa20");
#endif

    switch (ctx->pc) {
        case 0x29aa58u: goto label_29aa58;
        default: break;
    }

    ctx->pc = 0x29aa20u;

    // 0x29aa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29aa24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aa28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29aa2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29aa30: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AA30u;
    {
        const bool branch_taken_0x29aa30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA30u;
        // 0x29aa34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa30) {
            ctx->pc = 0x29AA50u;
            goto label_29aa50;
        }
    }
    ctx->pc = 0x29AA38u;
    // 0x29aa38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29aa3c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x29aa3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29aa40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA40u;
    {
        const bool branch_taken_0x29aa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa40) {
            ctx->pc = 0x29AA50u;
            goto label_29aa50;
        }
    }
    ctx->pc = 0x29AA48u;
    // 0x29aa48: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AA48u;
    {
        const bool branch_taken_0x29aa48 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x29AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA48u;
        // 0x29aa4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa48) {
            ctx->pc = 0x29AA64u;
            goto label_29aa64;
        }
    }
    ctx->pc = 0x29AA50u;
label_29aa50:
    // 0x29aa50: 0xc0a6d1c  jal         func_29B470
    ctx->pc = 0x29AA50u;
    SET_GPR_U32(ctx, 31, 0x29AA58u);
    ctx->pc = 0x29AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA50u;
    // 0x29aa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B470u, 0x29AA50u, 0x29AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA58u;
label_29aa58:
    // 0x29aa58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29aa5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aa60: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x29aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_29aa64:
    // 0x29aa64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29aa64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29aa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA6Cu;
        // 0x29aa70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA74u;
    // 0x29aa74: 0x0  nop
    ctx->pc = 0x29aa74u;
    // NOP
    ctx->pc = 0x29aa78u;
}
