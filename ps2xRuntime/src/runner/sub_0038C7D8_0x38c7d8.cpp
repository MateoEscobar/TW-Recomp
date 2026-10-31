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

// Function: sub_0038C7D8
// Address: 0x38c7d8 - 0x38c868
void sub_0038C7D8_0x38c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C7D8_0x38c7d8");
#endif

    ctx->pc = 0x38c7d8u;

    // 0x38c7d8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x38c7d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c7dc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x38C7DCu;
    {
        const bool branch_taken_0x38c7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7DCu;
        // 0x38c7e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7dc) {
            ctx->pc = 0x38C844u;
            goto label_38c844;
        }
    }
    ctx->pc = 0x38C7E4u;
    // 0x38c7e4: 0x8d2311e0  lw          $v1, 0x11E0($t1)
    ctx->pc = 0x38c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4576)));
    // 0x38c7e8: 0x240205f0  addiu       $v0, $zero, 0x5F0
    ctx->pc = 0x38c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38c7ec: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x38c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x38c7f0: 0x8d2611f8  lw          $a2, 0x11F8($t1)
    ctx->pc = 0x38c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4600)));
    // 0x38c7f4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x38c7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38c7f8: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x38c7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38c7fc: 0x8d2711f0  lw          $a3, 0x11F0($t1)
    ctx->pc = 0x38c7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4592)));
    // 0x38c800: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x38c800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c804: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x38c804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x38c808: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38c808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38c80c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x38c80cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x38c810: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x38c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
    // 0x38c814: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x38c814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x38c818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38c81c: 0xad2611f8  sw          $a2, 0x11F8($t1)
    ctx->pc = 0x38c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4600), GPR_U32(ctx, 6));
    // 0x38c820: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x38c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38c824: 0xad2711f0  sw          $a3, 0x11F0($t1)
    ctx->pc = 0x38c824u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4592), GPR_U32(ctx, 7));
    // 0x38c828: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x38c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x38c82c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x38c82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x38c830: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38C830u;
    {
        const bool branch_taken_0x38c830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C830u;
        // 0x38c834: 0x481004  sllv        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c830) {
            ctx->pc = 0x38C85Cu;
            goto label_38c85c;
        }
    }
    ctx->pc = 0x38C838u;
    // 0x38c838: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x38c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x38c83c: 0x3e00008  jr          $ra
    ctx->pc = 0x38C83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C83Cu;
        // 0x38c840: 0xad2211f0  sw          $v0, 0x11F0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C844u;
label_38c844:
    // 0x38c844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c848: 0x8d2311f0  lw          $v1, 0x11F0($t1)
    ctx->pc = 0x38c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4592)));
    // 0x38c84c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x38c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x38c850: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x38c850u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x38c854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38c858: 0xad2311f0  sw          $v1, 0x11F0($t1)
    ctx->pc = 0x38c858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4592), GPR_U32(ctx, 3));
label_38c85c:
    // 0x38c85c: 0x3e00008  jr          $ra
    ctx->pc = 0x38C85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C864u;
    // 0x38c864: 0x0  nop
    ctx->pc = 0x38c864u;
    // NOP
    ctx->pc = 0x38c868u;
}
