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

// Function: sub_00144F48
// Address: 0x144f48 - 0x144f98
void sub_00144F48_0x144f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144F48_0x144f48");
#endif

    ctx->pc = 0x144f48u;

    // 0x144f48: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144f4c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x144f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x144f50: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144f54: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x144f58: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144f5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144f60: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144f64: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144F64u;
    {
        const bool branch_taken_0x144f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x144F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F64u;
        // 0x144f68: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f64) {
            ctx->pc = 0x144F74u;
            goto label_144f74;
        }
    }
    ctx->pc = 0x144F6Cu;
    // 0x144f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x144F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F6Cu;
        // 0x144f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F74u;
label_144f74:
    // 0x144f74: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x144f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x144f78: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x144f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144f7c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x144f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x144f80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x144f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144f84: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x144f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x144f88: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x144f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x144f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x144F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F8Cu;
        // 0x144f90: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F94u;
    // 0x144f94: 0x0  nop
    ctx->pc = 0x144f94u;
    // NOP
    ctx->pc = 0x144f98u;
}
