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

// Function: sub_003A41F0
// Address: 0x3a41f0 - 0x3a4240
void sub_003A41F0_0x3a41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A41F0_0x3a41f0");
#endif

    switch (ctx->pc) {
        case 0x3a4230u: goto label_3a4230;
        default: break;
    }

    ctx->pc = 0x3a41f0u;

    // 0x3a41f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a41f4: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x3a41f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a41f8: 0x8c682c8c  lw          $t0, 0x2C8C($v1)
    ctx->pc = 0x3a41f8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a41fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a41fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4208: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x3a4208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3a420c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3a420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3a4210: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3a4210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4214: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3a4214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x3a4218: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a4218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a421c: 0x24c61550  addiu       $a2, $a2, 0x1550
    ctx->pc = 0x3a421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
    // 0x3a4220: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x3a4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    // 0x3a4224: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3a4224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4228: 0xc0e5fee  jal         func_397FB8
    ctx->pc = 0x3A4228u;
    SET_GPR_U32(ctx, 31, 0x3A4230u);
    ctx->pc = 0x3A422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4228u;
    // 0x3a422c: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397FB8u, 0x3A4228u, 0x3A4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4230u;
label_3a4230:
    // 0x3a4230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4234: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4234u;
        // 0x3a4238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A423Cu;
    // 0x3a423c: 0x0  nop
    ctx->pc = 0x3a423cu;
    // NOP
    ctx->pc = 0x3a4240u;
}
