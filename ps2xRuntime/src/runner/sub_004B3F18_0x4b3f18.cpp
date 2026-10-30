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

// Function: sub_004B3F18
// Address: 0x4b3f18 - 0x4b3fa0
void sub_004B3F18_0x4b3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3F18_0x4b3f18");
#endif

    ctx->pc = 0x4b3f18u;

    // 0x4b3f18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3f1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3f20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3F20u;
    {
        const bool branch_taken_0x4b3f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F20u;
        // 0x4b3f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f20) {
            ctx->pc = 0x4B3F30u;
            goto label_4b3f30;
        }
    }
    ctx->pc = 0x4B3F28u;
    // 0x4b3f28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4b3f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4b3f2c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4b3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4b3f30:
    // 0x4b3f30: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x4b3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x4b3f34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3F38u;
    {
        const bool branch_taken_0x4b3f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3f38) {
            ctx->pc = 0x4B3F48u;
            goto label_4b3f48;
        }
    }
    ctx->pc = 0x4B3F40u;
    // 0x4b3f40: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4b3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4b3f44: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4b3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4b3f48:
    // 0x4b3f48: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x4b3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x4b3f4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b3f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3f50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3F50u;
    {
        const bool branch_taken_0x4b3f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3f50) {
            ctx->pc = 0x4B3F60u;
            goto label_4b3f60;
        }
    }
    ctx->pc = 0x4B3F58u;
    // 0x4b3f58: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4b3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4b3f5c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4b3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4b3f60:
    // 0x4b3f60: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x4b3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x4b3f64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b3f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3f68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3F68u;
    {
        const bool branch_taken_0x4b3f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3f68) {
            ctx->pc = 0x4B3F78u;
            goto label_4b3f78;
        }
    }
    ctx->pc = 0x4B3F70u;
    // 0x4b3f70: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4b3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4b3f74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4b3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4b3f78:
    // 0x4b3f78: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3F78u;
    {
        const bool branch_taken_0x4b3f78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F78u;
        // 0x4b3f7c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f78) {
            ctx->pc = 0x4B3F90u;
            goto label_4b3f90;
        }
    }
    ctx->pc = 0x4B3F80u;
    // 0x4b3f80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4b3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b3f84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4b3f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b3f88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3F88u;
    {
        const bool branch_taken_0x4b3f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F88u;
        // 0x4b3f8c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f88) {
            ctx->pc = 0x4B3F94u;
            goto label_4b3f94;
        }
    }
    ctx->pc = 0x4B3F90u;
label_4b3f90:
    // 0x4b3f90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4b3f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b3f94:
    // 0x4b3f94: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3F9Cu;
    // 0x4b3f9c: 0x0  nop
    ctx->pc = 0x4b3f9cu;
    // NOP
    ctx->pc = 0x4b3fa0u;
}
