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

// Function: sub_002381F0
// Address: 0x2381f0 - 0x238230
void sub_002381F0_0x2381f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002381F0_0x2381f0");
#endif

    switch (ctx->pc) {
        case 0x238204u: goto label_238204;
        case 0x23820cu: goto label_23820c;
        default: break;
    }

    ctx->pc = 0x2381f0u;

    // 0x2381f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2381f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2381f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2381f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2381f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2381fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2381FCu;
    SET_GPR_U32(ctx, 31, 0x238204u);
    ctx->pc = 0x238200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381FCu;
    // 0x238200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2381FCu, 0x238204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238204u;
label_238204:
    // 0x238204: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238204u;
    SET_GPR_U32(ctx, 31, 0x23820Cu);
    ctx->pc = 0x238208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238204u;
    // 0x238208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238204u, 0x23820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23820Cu;
label_23820c:
    // 0x23820c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23820Cu;
    {
        const bool branch_taken_0x23820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23820Cu;
        // 0x238210: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23820c) {
            ctx->pc = 0x23821Cu;
            goto label_23821c;
        }
    }
    ctx->pc = 0x238214u;
    // 0x238214: 0xa0400254  sb          $zero, 0x254($v0)
    ctx->pc = 0x238214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 596), (uint8_t)GPR_U32(ctx, 0));
    // 0x238218: 0xac400250  sw          $zero, 0x250($v0)
    ctx->pc = 0x238218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 0));
label_23821c:
    // 0x23821c: 0x3e00008  jr          $ra
    ctx->pc = 0x23821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23821Cu;
        // 0x238220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238224u;
    // 0x238224: 0x0  nop
    ctx->pc = 0x238224u;
    // NOP
    // 0x238228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23822c: 0x0  nop
    ctx->pc = 0x23822cu;
    // NOP
    ctx->pc = 0x238230u;
}
