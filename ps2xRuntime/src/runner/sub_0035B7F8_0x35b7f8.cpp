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

// Function: sub_0035B7F8
// Address: 0x35b7f8 - 0x35b848
void sub_0035B7F8_0x35b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B7F8_0x35b7f8");
#endif

    switch (ctx->pc) {
        case 0x35b814u: goto label_35b814;
        case 0x35b81cu: goto label_35b81c;
        case 0x35b824u: goto label_35b824;
        case 0x35b830u: goto label_35b830;
        default: break;
    }

    ctx->pc = 0x35b7f8u;

    // 0x35b7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b80c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B80Cu;
    SET_GPR_U32(ctx, 31, 0x35B814u);
    ctx->pc = 0x35B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B80Cu;
    // 0x35b810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B80Cu, 0x35B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B814u;
label_35b814:
    // 0x35b814: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B814u;
    SET_GPR_U32(ctx, 31, 0x35B81Cu);
    ctx->pc = 0x35B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B814u;
    // 0x35b818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B814u, 0x35B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B81Cu;
label_35b81c:
    // 0x35b81c: 0xc08d606  jal         func_235818
    ctx->pc = 0x35B81Cu;
    SET_GPR_U32(ctx, 31, 0x35B824u);
    ctx->pc = 0x35B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B81Cu;
    // 0x35b820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235818u, 0x35B81Cu, 0x35B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B824u;
label_35b824:
    // 0x35b824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b828: 0xc102562  jal         func_409588
    ctx->pc = 0x35B828u;
    SET_GPR_U32(ctx, 31, 0x35B830u);
    ctx->pc = 0x35B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B828u;
    // 0x35b82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B828u, 0x35B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B830u;
label_35b830:
    // 0x35b830: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B83Cu;
        // 0x35b840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B844u;
    // 0x35b844: 0x0  nop
    ctx->pc = 0x35b844u;
    // NOP
    ctx->pc = 0x35b848u;
}
