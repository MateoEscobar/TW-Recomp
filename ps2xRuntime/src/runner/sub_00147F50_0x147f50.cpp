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

// Function: sub_00147F50
// Address: 0x147f50 - 0x147f98
void sub_00147F50_0x147f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147F50_0x147f50");
#endif

    switch (ctx->pc) {
        case 0x147f80u: goto label_147f80;
        default: break;
    }

    ctx->pc = 0x147f50u;

    // 0x147f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147f58: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x147f58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x147f5c: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x147F5Cu;
    {
        const bool branch_taken_0x147f5c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x147F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F5Cu;
        // 0x147f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f5c) {
            ctx->pc = 0x147F88u;
            goto label_147f88;
        }
    }
    ctx->pc = 0x147F64u;
    // 0x147f64: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x147f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147f68: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x147f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147f6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x147f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x147f70: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x147f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x147f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x147f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f78: 0xc051282  jal         func_144A08
    ctx->pc = 0x147F78u;
    SET_GPR_U32(ctx, 31, 0x147F80u);
    ctx->pc = 0x147F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F78u;
    // 0x147f7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x147F78u, 0x147F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F80u;
label_147f80:
    // 0x147f80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x147f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x147f84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_147f88:
    // 0x147f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x147F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F8Cu;
        // 0x147f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147F94u;
    // 0x147f94: 0x0  nop
    ctx->pc = 0x147f94u;
    // NOP
    ctx->pc = 0x147f98u;
}
