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

// Function: sub_004235F0
// Address: 0x4235f0 - 0x423638
void sub_004235F0_0x4235f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004235F0_0x4235f0");
#endif

    switch (ctx->pc) {
        case 0x423618u: goto label_423618;
        default: break;
    }

    ctx->pc = 0x4235f0u;

    // 0x4235f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4235f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4235f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4235f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4235f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4235f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x4235fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4235fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423600: 0x8e02504c  lw          $v0, 0x504C($s0)
    ctx->pc = 0x423600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51504Cu));
    // 0x423604: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x423604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x423608: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x423608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x42360c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423610: 0xc108d6a  jal         func_4235A8
    ctx->pc = 0x423610u;
    SET_GPR_U32(ctx, 31, 0x423618u);
    ctx->pc = 0x423614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423610u;
    // 0x423614: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4235A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4235A8u, 0x423610u, 0x423618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423618u;
label_423618:
    // 0x423618: 0x8e03504c  lw          $v1, 0x504C($s0)
    ctx->pc = 0x423618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20556)));
    // 0x42361c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x42361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x423620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423628: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x423628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x42362c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x42362cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x423630: 0x3e00008  jr          $ra
    ctx->pc = 0x423630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423630u;
        // 0x423634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423638u;
}
