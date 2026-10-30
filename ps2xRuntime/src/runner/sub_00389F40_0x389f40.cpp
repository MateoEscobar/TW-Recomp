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

// Function: sub_00389F40
// Address: 0x389f40 - 0x389fa8
void sub_00389F40_0x389f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389F40_0x389f40");
#endif

    switch (ctx->pc) {
        case 0x389f68u: goto label_389f68;
        case 0x389f78u: goto label_389f78;
        default: break;
    }

    ctx->pc = 0x389f40u;

    // 0x389f40: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x389F40u;
    {
        const bool branch_taken_0x389f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389f40) {
            ctx->pc = 0x389F70u;
            goto label_389f70;
        }
    }
    ctx->pc = 0x389F48u;
    // 0x389f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f4c: 0x0  nop
    ctx->pc = 0x389f4cu;
    // NOP
    // 0x389f50: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x389f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389f54: 0x0  nop
    ctx->pc = 0x389f54u;
    // NOP
    // 0x389f58: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x389F58u;
    {
        const bool branch_taken_0x389f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F58u;
        // 0x389f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f58) {
            ctx->pc = 0x389FA0u;
            goto label_389fa0;
        }
    }
    ctx->pc = 0x389F60u;
    // 0x389f60: 0x3e00008  jr          $ra
    ctx->pc = 0x389F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F60u;
        // 0x389f64: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389F68u;
label_389f68:
    // 0x389f68: 0x3e00008  jr          $ra
    ctx->pc = 0x389F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F68u;
        // 0x389f6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389F70u;
label_389f70:
    // 0x389f70: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x389F70u;
    {
        const bool branch_taken_0x389f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F70u;
        // 0x389f74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f70) {
            ctx->pc = 0x389F9Cu;
            goto label_389f9c;
        }
    }
    ctx->pc = 0x389F78u;
label_389f78:
    // 0x389f78: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x389f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389f7c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x389f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389f80: 0x0  nop
    ctx->pc = 0x389f80u;
    // NOP
    // 0x389f84: 0x4501fff8  bc1t        . + 4 + (-0x8 << 2)
    ctx->pc = 0x389F84u;
    {
        const bool branch_taken_0x389f84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389f84) {
            ctx->pc = 0x389F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389f68;
        }
    }
    ctx->pc = 0x389F8Cu;
    // 0x389f8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x389f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x389f90: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x389f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x389f94: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x389F94u;
    {
        const bool branch_taken_0x389f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F94u;
        // 0x389f98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f94) {
            ctx->pc = 0x389F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389f78;
        }
    }
    ctx->pc = 0x389F9Cu;
label_389f9c:
    // 0x389f9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x389f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_389fa0:
    // 0x389fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x389FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389FA8u;
}
