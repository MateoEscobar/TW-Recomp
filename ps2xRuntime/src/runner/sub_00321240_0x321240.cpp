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

// Function: sub_00321240
// Address: 0x321240 - 0x321268
void sub_00321240_0x321240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321240_0x321240");
#endif

    switch (ctx->pc) {
        case 0x321250u: goto label_321250;
        default: break;
    }

    ctx->pc = 0x321240u;

    // 0x321240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321248: 0xc05a526  jal         func_169498
    ctx->pc = 0x321248u;
    SET_GPR_U32(ctx, 31, 0x321250u);
    ctx->pc = 0x32124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321248u;
    // 0x32124c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169498u, 0x321248u, 0x321250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321250u;
label_321250:
    // 0x321250: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x321250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x321254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321258: 0xac40164c  sw          $zero, 0x164C($v0)
    ctx->pc = 0x321258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x51164Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51164Cu, _value); } while (0);
    // 0x32125c: 0x3e00008  jr          $ra
    ctx->pc = 0x32125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32125Cu;
        // 0x321260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321264u;
    // 0x321264: 0x0  nop
    ctx->pc = 0x321264u;
    // NOP
    ctx->pc = 0x321268u;
}
