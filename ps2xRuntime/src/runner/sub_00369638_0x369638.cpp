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

// Function: sub_00369638
// Address: 0x369638 - 0x3696d8
void sub_00369638_0x369638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369638_0x369638");
#endif

    switch (ctx->pc) {
        case 0x369664u: goto label_369664;
        case 0x36966cu: goto label_36966c;
        case 0x369680u: goto label_369680;
        case 0x369688u: goto label_369688;
        case 0x36969cu: goto label_36969c;
        case 0x3696a4u: goto label_3696a4;
        case 0x3696b4u: goto label_3696b4;
        default: break;
    }

    ctx->pc = 0x369638u;

    // 0x369638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36963c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369640: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x369640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x369644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x369644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x369648: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36964c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36964cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369654: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x369654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x369658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36965c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36965Cu;
    SET_GPR_U32(ctx, 31, 0x369664u);
    ctx->pc = 0x369660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36965Cu;
    // 0x369660: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36965Cu, 0x369664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369664u;
label_369664:
    // 0x369664: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369664u;
    SET_GPR_U32(ctx, 31, 0x36966Cu);
    ctx->pc = 0x369668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369664u;
    // 0x369668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369664u, 0x36966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36966Cu;
label_36966c:
    // 0x36966c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369670: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369674: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369678: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369678u;
    SET_GPR_U32(ctx, 31, 0x369680u);
    ctx->pc = 0x36967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369678u;
    // 0x36967c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369678u, 0x369680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369680u;
label_369680:
    // 0x369680: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369680u;
    SET_GPR_U32(ctx, 31, 0x369688u);
    ctx->pc = 0x369684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369680u;
    // 0x369684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369680u, 0x369688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369688u;
label_369688:
    // 0x369688: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36968c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36968cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369694: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369694u;
    SET_GPR_U32(ctx, 31, 0x36969Cu);
    ctx->pc = 0x369698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369694u;
    // 0x369698: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369694u, 0x36969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36969Cu;
label_36969c:
    // 0x36969c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36969Cu;
    SET_GPR_U32(ctx, 31, 0x3696A4u);
    ctx->pc = 0x3696A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36969Cu;
    // 0x3696a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36969Cu, 0x3696A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696A4u;
label_3696a4:
    // 0x3696a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3696a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3696a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696ac: 0xc0519ea  jal         func_1467A8
    ctx->pc = 0x3696ACu;
    SET_GPR_U32(ctx, 31, 0x3696B4u);
    ctx->pc = 0x3696B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3696ACu;
    // 0x3696b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1467A8u, 0x3696ACu, 0x3696B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696B4u;
label_3696b4:
    // 0x3696b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3696b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3696b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3696b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3696bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3696c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3696c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3696c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3696c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3696c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3696c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3696cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3696CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3696D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696CCu;
        // 0x3696d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3696CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696D4u;
    // 0x3696d4: 0x0  nop
    ctx->pc = 0x3696d4u;
    // NOP
    ctx->pc = 0x3696d8u;
}
