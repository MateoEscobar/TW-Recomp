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

// Function: sub_00180790
// Address: 0x180790 - 0x1807e0
void sub_00180790_0x180790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180790_0x180790");
#endif

    switch (ctx->pc) {
        case 0x1807d4u: goto label_1807d4;
        default: break;
    }

    ctx->pc = 0x180790u;

    // 0x180790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180794: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18079c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1807a0: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1807a4: 0xac83de88  sw          $v1, -0x2178($a0)
    ctx->pc = 0x1807a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FDE88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FDE88u, _value); } while (0);
    // 0x1807a8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1807a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1807ac: 0x2442fbf0  addiu       $v0, $v0, -0x410
    ctx->pc = 0x1807acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966256));
    // 0x1807b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1807B0u;
    {
        const bool branch_taken_0x1807b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1807B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807B0u;
        // 0x1807b4: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807b0) {
            ctx->pc = 0x1807C8u;
            goto label_1807c8;
        }
    }
    ctx->pc = 0x1807B8u;
    // 0x1807b8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1807bc: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
    // 0x1807c0: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1807c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x1807c4: 0x0  nop
    ctx->pc = 0x1807c4u;
    // NOP
label_1807c8:
    // 0x1807c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807cc: 0xc109b1e  jal         func_426C78
    ctx->pc = 0x1807CCu;
    SET_GPR_U32(ctx, 31, 0x1807D4u);
    ctx->pc = 0x1807D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807CCu;
    // 0x1807d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C78u, 0x1807CCu, 0x1807D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807D4u;
label_1807d4:
    // 0x1807d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1807d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1807D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1807DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807D8u;
        // 0x1807dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1807D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1807E0u;
}
