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

// Function: sub_00280F30
// Address: 0x280f30 - 0x280fa0
void sub_00280F30_0x280f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F30_0x280f30");
#endif

    switch (ctx->pc) {
        case 0x280f50u: goto label_280f50;
        default: break;
    }

    ctx->pc = 0x280f30u;

    // 0x280f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280f38: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x280f38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x280f3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280f3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280f40: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x280F40u;
    {
        const bool branch_taken_0x280f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f40) {
            ctx->pc = 0x280F8Cu;
            goto label_280f8c;
        }
    }
    ctx->pc = 0x280F48u;
    // 0x280f48: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x280F48u;
    SET_GPR_U32(ctx, 31, 0x280F50u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x280F48u, 0x280F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F50u;
label_280f50:
    // 0x280f50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f54: 0x90a2004d  lbu         $v0, 0x4D($a1)
    ctx->pc = 0x280f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 77)));
    // 0x280f58: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x280F58u;
    {
        const bool branch_taken_0x280f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f58) {
            ctx->pc = 0x280F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F58u;
            // 0x280f5c: 0xa0a0004d  sb          $zero, 0x4D($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F84u;
            goto label_280f84;
        }
    }
    ctx->pc = 0x280F60u;
    // 0x280f60: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x280f64: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280F64u;
    {
        const bool branch_taken_0x280f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F64u;
        // 0x280f68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f64) {
            ctx->pc = 0x280F8Cu;
            goto label_280f8c;
        }
    }
    ctx->pc = 0x280F6Cu;
    // 0x280f6c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x280f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x280f70: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x280f74: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x280f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x280f78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280F78u;
    {
        const bool branch_taken_0x280f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F78u;
        // 0x280f7c: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f78) {
            ctx->pc = 0x280F94u;
            goto label_280f94;
        }
    }
    ctx->pc = 0x280F80u;
    // 0x280f80: 0xa0a0004d  sb          $zero, 0x4D($a1)
    ctx->pc = 0x280f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 0));
label_280f84:
    // 0x280f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280F84u;
    {
        const bool branch_taken_0x280f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F84u;
        // 0x280f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f84) {
            ctx->pc = 0x280F94u;
            goto label_280f94;
        }
    }
    ctx->pc = 0x280F8Cu;
label_280f8c:
    // 0x280f8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280f90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_280f94:
    // 0x280f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280f98: 0x3e00008  jr          $ra
    ctx->pc = 0x280F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F98u;
        // 0x280f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FA0u;
}
