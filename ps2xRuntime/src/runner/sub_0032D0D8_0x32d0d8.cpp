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

// Function: sub_0032D0D8
// Address: 0x32d0d8 - 0x32d138
void sub_0032D0D8_0x32d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D0D8_0x32d0d8");
#endif

    switch (ctx->pc) {
        case 0x32d0f0u: goto label_32d0f0;
        default: break;
    }

    ctx->pc = 0x32d0d8u;

    // 0x32d0d8: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x32d0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d0dc: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32D0DCu;
    {
        const bool branch_taken_0x32d0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0DCu;
        // 0x32d0e0: 0x24a8ffff  addiu       $t0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0dc) {
            ctx->pc = 0x32D12Cu;
            goto label_32d12c;
        }
    }
    ctx->pc = 0x32D0E4u;
    // 0x32d0e4: 0x24e901ac  addiu       $t1, $a3, 0x1AC
    ctx->pc = 0x32d0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 428));
    // 0x32d0e8: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x32d0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32d0ec: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x32d0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32d0f0:
    // 0x32d0f0: 0x94e2001e  lhu         $v0, 0x1E($a3)
    ctx->pc = 0x32d0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x32d0f4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x32d0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x32d0f8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x32d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32d0fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32d100: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x32d100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x32d104: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32d104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d108: 0xa4e2001e  sh          $v0, 0x1E($a3)
    ctx->pc = 0x32d108u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x32d10c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x32d10cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x32d110: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x32d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x32d114: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x32d114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x32d118: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d11c: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x32d11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32d120: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32d124: 0x150afff2  bne         $t0, $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x32D124u;
    {
        const bool branch_taken_0x32d124 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x32D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D124u;
        // 0x32d128: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d124) {
            ctx->pc = 0x32D0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d0f0;
        }
    }
    ctx->pc = 0x32D12Cu;
label_32d12c:
    // 0x32d12c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D134u;
    // 0x32d134: 0x0  nop
    ctx->pc = 0x32d134u;
    // NOP
    ctx->pc = 0x32d138u;
}
