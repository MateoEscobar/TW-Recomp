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

// Function: sub_004ED1E8
// Address: 0x4ed1e8 - 0x4ed250
void sub_004ED1E8_0x4ed1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1E8_0x4ed1e8");
#endif

    switch (ctx->pc) {
        case 0x4ed200u: goto label_4ed200;
        default: break;
    }

    ctx->pc = 0x4ed1e8u;

    // 0x4ed1e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ed1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1ec: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4ed1ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1f0: 0x24c8fffc  addiu       $t0, $a2, -0x4
    ctx->pc = 0x4ed1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4ed1f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ED1F4u;
    {
        const bool branch_taken_0x4ed1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED1F4u;
        // 0x4ed1f8: 0x3c0a0051  lui         $t2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed1f4) {
            ctx->pc = 0x4ED208u;
            goto label_4ed208;
        }
    }
    ctx->pc = 0x4ED1FCu;
    // 0x4ed1fc: 0x0  nop
    ctx->pc = 0x4ed1fcu;
    // NOP
label_4ed200:
    // 0x4ed200: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4ed200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed204: 0x24c8fffc  addiu       $t0, $a2, -0x4
    ctx->pc = 0x4ed204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_4ed208:
    // 0x4ed208: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4ed208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed20c: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x4ed20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ed210: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ed210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ed214: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4ed214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ed218: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4ed218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ed21c: 0x8d44489c  lw          $a0, 0x489C($t2)
    ctx->pc = 0x4ed21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18588)));
    // 0x4ed220: 0xa25818  mult        $t3, $a1, $v0
    ctx->pc = 0x4ed220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4ed224: 0x248414d4  addiu       $a0, $a0, 0x14D4
    ctx->pc = 0x4ed224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    // 0x4ed228: 0x1642821  addu        $a1, $t3, $a0
    ctx->pc = 0x4ed228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x4ed22c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ed22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ed230: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x4ed230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ed234: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x4ed234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ed238: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ed238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed23c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4ED23Cu;
    {
        const bool branch_taken_0x4ed23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ed23c) {
            ctx->pc = 0x4ED240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED23Cu;
            // 0x4ed240: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ED200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ed200;
        }
    }
    ctx->pc = 0x4ED244u;
    // 0x4ed244: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED244u;
        // 0x4ed248: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED24Cu;
    // 0x4ed24c: 0x0  nop
    ctx->pc = 0x4ed24cu;
    // NOP
    ctx->pc = 0x4ed250u;
}
