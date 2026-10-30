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

// Function: sub_00409648
// Address: 0x409648 - 0x4096d0
void sub_00409648_0x409648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409648_0x409648");
#endif

    switch (ctx->pc) {
        case 0x409670u: goto label_409670;
        case 0x40967cu: goto label_40967c;
        case 0x409688u: goto label_409688;
        case 0x409694u: goto label_409694;
        default: break;
    }

    ctx->pc = 0x409648u;

    // 0x409648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40964c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x409654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409658: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40965c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x40965cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409664: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x409664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409668: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x409668u;
    SET_GPR_U32(ctx, 31, 0x409670u);
    ctx->pc = 0x40966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409668u;
    // 0x40966c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x409668u, 0x409670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409670u;
label_409670:
    // 0x409670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409674: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x409674u;
    SET_GPR_U32(ctx, 31, 0x40967Cu);
    ctx->pc = 0x409678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409674u;
    // 0x409678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x409674u, 0x40967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40967Cu;
label_40967c:
    // 0x40967c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409680: 0xc102542  jal         func_409508
    ctx->pc = 0x409680u;
    SET_GPR_U32(ctx, 31, 0x409688u);
    ctx->pc = 0x409684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409680u;
    // 0x409684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x409680u, 0x409688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409688u;
label_409688:
    // 0x409688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40968c: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40968Cu;
    SET_GPR_U32(ctx, 31, 0x409694u);
    ctx->pc = 0x409690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40968Cu;
    // 0x409690: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40968Cu, 0x409694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409694u;
label_409694:
    // 0x409694: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409698: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40969c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40969cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4096a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4096a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4096a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4096A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096A4u;
        // 0x4096a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4096A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4096ACu;
    // 0x4096ac: 0x0  nop
    ctx->pc = 0x4096acu;
    // NOP
    // 0x4096b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4096b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4096b4: 0x0  nop
    ctx->pc = 0x4096b4u;
    // NOP
    // 0x4096b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4096b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4096bc: 0x0  nop
    ctx->pc = 0x4096bcu;
    // NOP
    // 0x4096c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4096c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4096c4: 0x0  nop
    ctx->pc = 0x4096c4u;
    // NOP
    // 0x4096c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4096c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4096cc: 0x0  nop
    ctx->pc = 0x4096ccu;
    // NOP
    ctx->pc = 0x4096d0u;
}
