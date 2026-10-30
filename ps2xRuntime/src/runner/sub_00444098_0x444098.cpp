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

// Function: sub_00444098
// Address: 0x444098 - 0x444108
void sub_00444098_0x444098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444098_0x444098");
#endif

    ctx->pc = 0x444098u;

    // 0x444098: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x444098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x44409c: 0x24479ea0  addiu       $a3, $v0, -0x6160
    ctx->pc = 0x44409cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x4440a0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x4440a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x519EB4u));
    // 0x4440a4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4440A4u;
    {
        const bool branch_taken_0x4440a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4440a4) {
            ctx->pc = 0x4440B8u;
            goto label_4440b8;
        }
    }
    ctx->pc = 0x4440ACu;
    // 0x4440ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4440acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4440b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4440B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4440B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4440B0u;
        // 0x4440b4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4440B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4440B8u;
label_4440b8:
    // 0x4440b8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4440b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4440bc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x4440bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4440c0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4440c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4440c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4440c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4440c8: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x4440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x4440cc: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x4440ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x4440d0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x4440d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x4440d4: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x4440d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x4440d8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x4440d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4440dc: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x4440dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x4440e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4440e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4440e4: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x4440e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x4440e8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4440ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4440ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4440f0: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x4440f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x4440f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4440f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4440f8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x4440f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x4440fc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4440fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x444100: 0x3e00008  jr          $ra
    ctx->pc = 0x444100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444100u;
        // 0x444104: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444108u;
}
