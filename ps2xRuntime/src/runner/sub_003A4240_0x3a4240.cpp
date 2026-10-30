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

// Function: sub_003A4240
// Address: 0x3a4240 - 0x3a4288
void sub_003A4240_0x3a4240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4240_0x3a4240");
#endif

    switch (ctx->pc) {
        case 0x3a4278u: goto label_3a4278;
        default: break;
    }

    ctx->pc = 0x3a4240u;

    // 0x3a4240: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a4244: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x3a4244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a4248: 0x8c672c8c  lw          $a3, 0x2C8C($v1)
    ctx->pc = 0x3a4248u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a424c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a424cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4250: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4258: 0xe63818  mult        $a3, $a3, $a2
    ctx->pc = 0x3a4258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3a425c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3a425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3a4260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4264: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3a4264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x3a4268: 0x24c61550  addiu       $a2, $a2, 0x1550
    ctx->pc = 0x3a4268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
    // 0x3a426c: 0x8c640848  lw          $a0, 0x848($v1)
    ctx->pc = 0x3a426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2120)));
    // 0x3a4270: 0xc0e432e  jal         func_390CB8
    ctx->pc = 0x3A4270u;
    SET_GPR_U32(ctx, 31, 0x3A4278u);
    ctx->pc = 0x3A4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4270u;
    // 0x3a4274: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390CB8u, 0x3A4270u, 0x3A4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4278u;
label_3a4278:
    // 0x3a4278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a427c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A427Cu;
        // 0x3a4280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4284u;
    // 0x3a4284: 0x0  nop
    ctx->pc = 0x3a4284u;
    // NOP
    ctx->pc = 0x3a4288u;
}
