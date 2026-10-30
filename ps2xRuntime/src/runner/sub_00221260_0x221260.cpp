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

// Function: sub_00221260
// Address: 0x221260 - 0x2212a0
void sub_00221260_0x221260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221260_0x221260");
#endif

    ctx->pc = 0x221260u;

    // 0x221260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221264: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221264u;
    {
        const bool branch_taken_0x221264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x221268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221264u;
        // 0x221268: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221264) {
            ctx->pc = 0x22127Cu;
            goto label_22127c;
        }
    }
    ctx->pc = 0x22126Cu;
    // 0x22126c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22126Cu;
    {
        const bool branch_taken_0x22126c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x22126c) {
            ctx->pc = 0x22128Cu;
            goto label_22128c;
        }
    }
    ctx->pc = 0x221274u;
    // 0x221274: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x221274u;
    {
        const bool branch_taken_0x221274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221274) {
            ctx->pc = 0x221294u;
            goto label_221294;
        }
    }
    ctx->pc = 0x22127Cu;
label_22127c:
    // 0x22127c: 0x3c0142a4  lui         $at, 0x42A4
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17060 << 16));
    // 0x221280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221284: 0x3e00008  jr          $ra
    ctx->pc = 0x221284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22128Cu;
label_22128c:
    // 0x22128c: 0x3e00008  jr          $ra
    ctx->pc = 0x22128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22128Cu;
        // 0x221290: 0xc480027c  lwc1        $f0, 0x27C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22128Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221294u;
label_221294:
    // 0x221294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x221294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221298: 0x3e00008  jr          $ra
    ctx->pc = 0x221298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2212A0u;
}
