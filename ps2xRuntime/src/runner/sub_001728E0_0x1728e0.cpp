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

// Function: sub_001728E0
// Address: 0x1728e0 - 0x172940
void sub_001728E0_0x1728e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001728E0_0x1728e0");
#endif

    ctx->pc = 0x1728e0u;

    // 0x1728e0: 0x2ca2001a  sltiu       $v0, $a1, 0x1A
    ctx->pc = 0x1728e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1728e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1728E4u;
    {
        const bool branch_taken_0x1728e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1728E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E4u;
        // 0x1728e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728e4) {
            ctx->pc = 0x172914u;
            goto label_172914;
        }
    }
    ctx->pc = 0x1728ECu;
    // 0x1728ec: 0x24a4ffe7  addiu       $a0, $a1, -0x19
    ctx->pc = 0x1728ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967271));
    // 0x1728f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1728f4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1728f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1728f8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1728f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1728fc: 0x34427c31  ori         $v0, $v0, 0x7C31
    ctx->pc = 0x1728fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31793);
    // 0x172900: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x172900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x172904: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x172904u;
    {
        const bool branch_taken_0x172904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172904) {
            ctx->pc = 0x172930u;
            goto label_172930;
        }
    }
    ctx->pc = 0x17290Cu;
    // 0x17290c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17290Cu;
    {
        const bool branch_taken_0x17290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17290c) {
            ctx->pc = 0x172938u;
            goto label_172938;
        }
    }
    ctx->pc = 0x172914u;
label_172914:
    // 0x172914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172918: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x172918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x17291c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x17291cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x172920: 0x34427c31  ori         $v0, $v0, 0x7C31
    ctx->pc = 0x172920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31793);
    // 0x172924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x172924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x172928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172928u;
    {
        const bool branch_taken_0x172928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172928u;
        // 0x17292c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172928) {
            ctx->pc = 0x172938u;
            goto label_172938;
        }
    }
    ctx->pc = 0x172930u;
label_172930:
    // 0x172930: 0x3e00008  jr          $ra
    ctx->pc = 0x172930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172930u;
        // 0x172934: 0x8cc20024  lw          $v0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172938u;
label_172938:
    // 0x172938: 0x3e00008  jr          $ra
    ctx->pc = 0x172938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172938u;
        // 0x17293c: 0x8c62d268  lw          $v0, -0x2D98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955624)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172940u;
}
