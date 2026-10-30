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

// Function: sub_001D6620
// Address: 0x1d6620 - 0x1d6670
void sub_001D6620_0x1d6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6620_0x1d6620");
#endif

    switch (ctx->pc) {
        case 0x1d6644u: goto label_1d6644;
        case 0x1d665cu: goto label_1d665c;
        default: break;
    }

    ctx->pc = 0x1d6620u;

    // 0x1d6620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6624: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d662c: 0x24900050  addiu       $s0, $a0, 0x50
    ctx->pc = 0x1d662cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1d6630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d663c: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1D663Cu;
    SET_GPR_U32(ctx, 31, 0x1D6644u);
    ctx->pc = 0x1D6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D663Cu;
    // 0x1d6640: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1D663Cu, 0x1D6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6644u;
label_1d6644:
    // 0x1d6644: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1d6644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1d6648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d664c: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1d664cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1d6650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6654: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1D6654u;
    SET_GPR_U32(ctx, 31, 0x1D665Cu);
    ctx->pc = 0x1D6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6654u;
    // 0x1d6658: 0xa20301b1  sb          $v1, 0x1B1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D6654u, 0x1D665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D665Cu;
label_1d665c:
    // 0x1d665c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d665cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6668: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6668u;
        // 0x1d666c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6670u;
}
