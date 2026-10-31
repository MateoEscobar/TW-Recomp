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

// Function: sub_00144EF8
// Address: 0x144ef8 - 0x144f48
void sub_00144EF8_0x144ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144EF8_0x144ef8");
#endif

    ctx->pc = 0x144ef8u;

    // 0x144ef8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x144ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x144efc: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144f00: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x144f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144f04: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x144f08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x144f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144f0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144f10: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144f14: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144F14u;
    {
        const bool branch_taken_0x144f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x144F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F14u;
        // 0x144f18: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f14) {
            ctx->pc = 0x144F24u;
            goto label_144f24;
        }
    }
    ctx->pc = 0x144F1Cu;
    // 0x144f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x144F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F1Cu;
        // 0x144f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F24u;
label_144f24:
    // 0x144f24: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x144f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x144f28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x144f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144f2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x144f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x144f30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x144f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144f34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x144f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x144f38: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x144f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x144f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x144F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F3Cu;
        // 0x144f40: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F44u;
    // 0x144f44: 0x0  nop
    ctx->pc = 0x144f44u;
    // NOP
    ctx->pc = 0x144f48u;
}
