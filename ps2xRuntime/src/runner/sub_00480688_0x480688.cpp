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

// Function: sub_00480688
// Address: 0x480688 - 0x4806e0
void sub_00480688_0x480688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480688_0x480688");
#endif

    ctx->pc = 0x480688u;

    // 0x480688: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x480688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48068c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x48068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x480690: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x480690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x480694: 0x24830027  addiu       $v1, $a0, 0x27
    ctx->pc = 0x480694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 39));
    // 0x480698: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x480698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48069c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4806a0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4806a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4806a4: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x4806a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4806a8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x4806a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4806ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4806ACu;
    {
        const bool branch_taken_0x4806ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4806B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4806ACu;
        // 0x4806b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4806ac) {
            ctx->pc = 0x4806D4u;
            goto label_4806d4;
        }
    }
    ctx->pc = 0x4806B4u;
    // 0x4806b4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x4806b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x4806b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4806b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4806bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4806bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x4806c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4806c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x4806c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4806c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x4806c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4806c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4806cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4806CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4806D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4806CCu;
        // 0x4806d0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4806CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4806D4u;
label_4806d4:
    // 0x4806d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4806D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4806D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4806D4u;
        // 0x4806d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4806D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4806DCu;
    // 0x4806dc: 0x0  nop
    ctx->pc = 0x4806dcu;
    // NOP
    ctx->pc = 0x4806e0u;
}
