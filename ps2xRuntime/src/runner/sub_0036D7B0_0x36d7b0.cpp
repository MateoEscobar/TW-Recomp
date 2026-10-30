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

// Function: sub_0036D7B0
// Address: 0x36d7b0 - 0x36d848
void sub_0036D7B0_0x36d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D7B0_0x36d7b0");
#endif

    switch (ctx->pc) {
        case 0x36d7dcu: goto label_36d7dc;
        case 0x36d7f0u: goto label_36d7f0;
        case 0x36d7f8u: goto label_36d7f8;
        case 0x36d80cu: goto label_36d80c;
        case 0x36d814u: goto label_36d814;
        case 0x36d824u: goto label_36d824;
        default: break;
    }

    ctx->pc = 0x36d7b0u;

    // 0x36d7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36d7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d7b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36d7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36d7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36d7cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36d7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d7d4: 0xc102488  jal         func_409220
    ctx->pc = 0x36D7D4u;
    SET_GPR_U32(ctx, 31, 0x36D7DCu);
    ctx->pc = 0x36D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D7D4u;
    // 0x36d7d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D7D4u, 0x36D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D7DCu;
label_36d7dc:
    // 0x36d7dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36d7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d7e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D7E8u;
    SET_GPR_U32(ctx, 31, 0x36D7F0u);
    ctx->pc = 0x36D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D7E8u;
    // 0x36d7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D7E8u, 0x36D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D7F0u;
label_36d7f0:
    // 0x36d7f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D7F0u;
    SET_GPR_U32(ctx, 31, 0x36D7F8u);
    ctx->pc = 0x36D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D7F0u;
    // 0x36d7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D7F0u, 0x36D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D7F8u;
label_36d7f8:
    // 0x36d7f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d804: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D804u;
    SET_GPR_U32(ctx, 31, 0x36D80Cu);
    ctx->pc = 0x36D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D804u;
    // 0x36d808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D804u, 0x36D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D80Cu;
label_36d80c:
    // 0x36d80c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D80Cu;
    SET_GPR_U32(ctx, 31, 0x36D814u);
    ctx->pc = 0x36D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D80Cu;
    // 0x36d810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D80Cu, 0x36D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D814u;
label_36d814:
    // 0x36d814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d81c: 0xc0e1904  jal         func_386410
    ctx->pc = 0x36D81Cu;
    SET_GPR_U32(ctx, 31, 0x36D824u);
    ctx->pc = 0x36D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D81Cu;
    // 0x36d820: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386410u, 0x36D81Cu, 0x36D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D824u;
label_36d824:
    // 0x36d824: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36d824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d82c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36d82cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36d830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d834: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36d834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d83c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D83Cu;
        // 0x36d840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D844u;
    // 0x36d844: 0x0  nop
    ctx->pc = 0x36d844u;
    // NOP
    ctx->pc = 0x36d848u;
}
