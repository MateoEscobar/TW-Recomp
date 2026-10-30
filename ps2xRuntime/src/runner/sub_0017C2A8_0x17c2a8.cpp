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

// Function: sub_0017C2A8
// Address: 0x17c2a8 - 0x17c308
void sub_0017C2A8_0x17c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C2A8_0x17c2a8");
#endif

    switch (ctx->pc) {
        case 0x17c2d4u: goto label_17c2d4;
        default: break;
    }

    ctx->pc = 0x17c2a8u;

    // 0x17c2a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x17c2ac: 0x8c65ccd8  lw          $a1, -0x3328($v1)
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50CCD8u));
    // 0x17c2b0: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x17c2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c2b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17C2B4u;
    {
        const bool branch_taken_0x17c2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2B4u;
        // 0x17c2b8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2b4) {
            ctx->pc = 0x17C2FCu;
            goto label_17c2fc;
        }
    }
    ctx->pc = 0x17C2BCu;
    // 0x17c2bc: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x17c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x17c2c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x17c2c4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x17c2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17c2c8: 0x2442d9f0  addiu       $v0, $v0, -0x2610
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
    // 0x17c2cc: 0x248500c0  addiu       $a1, $a0, 0xC0
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x17c2d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c2d4:
    // 0x17c2d4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x17c2d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c2d8: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x17c2d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17c2dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c2e0: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x17c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x17c2e4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17c2e8: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C2E8u;
    {
        const bool branch_taken_0x17c2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2E8u;
        // 0x17c2ec: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2e8) {
            ctx->pc = 0x17C2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c2d4;
        }
    }
    ctx->pc = 0x17C2F0u;
    // 0x17c2f0: 0x8cc2ccd8  lw          $v0, -0x3328($a2)
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954200)));
    // 0x17c2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c2f8: 0xacc2ccd8  sw          $v0, -0x3328($a2)
    ctx->pc = 0x17c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954200), GPR_U32(ctx, 2));
label_17c2fc:
    // 0x17c2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C304u;
    // 0x17c304: 0x0  nop
    ctx->pc = 0x17c304u;
    // NOP
    ctx->pc = 0x17c308u;
}
