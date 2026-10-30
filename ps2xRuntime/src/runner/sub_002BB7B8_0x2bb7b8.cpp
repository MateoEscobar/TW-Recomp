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

// Function: sub_002BB7B8
// Address: 0x2bb7b8 - 0x2bb858
void sub_002BB7B8_0x2bb7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB7B8_0x2bb7b8");
#endif

    switch (ctx->pc) {
        case 0x2bb7f0u: goto label_2bb7f0;
        case 0x2bb7fcu: goto label_2bb7fc;
        case 0x2bb80cu: goto label_2bb80c;
        case 0x2bb834u: goto label_2bb834;
        default: break;
    }

    ctx->pc = 0x2bb7b8u;

    // 0x2bb7b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb7bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bb7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2bb7c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bb7c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb7cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb7d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BB7D0u;
    {
        const bool branch_taken_0x2bb7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7D0u;
        // 0x2bb7d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7d0) {
            ctx->pc = 0x2BB83Cu;
            goto label_2bb83c;
        }
    }
    ctx->pc = 0x2BB7D8u;
    // 0x2bb7d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bb7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb7dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bb7e4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb7e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB7E8u;
    SET_GPR_U32(ctx, 31, 0x2BB7F0u);
    ctx->pc = 0x2BB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7E8u;
    // 0x2bb7ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB7E8u, 0x2BB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7F0u;
label_2bb7f0:
    // 0x2bb7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7f4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2BB7F4u;
    SET_GPR_U32(ctx, 31, 0x2BB7FCu);
    ctx->pc = 0x2BB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7F4u;
    // 0x2bb7f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BB7F4u, 0x2BB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7FCu;
label_2bb7fc:
    // 0x2bb7fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BB7FCu;
    {
        const bool branch_taken_0x2bb7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7FCu;
        // 0x2bb800: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7fc) {
            ctx->pc = 0x2BB840u;
            goto label_2bb840;
        }
    }
    ctx->pc = 0x2BB804u;
    // 0x2bb804: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB804u;
    SET_GPR_U32(ctx, 31, 0x2BB80Cu);
    ctx->pc = 0x2BB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB804u;
    // 0x2bb808: 0x244400c4  addiu       $a0, $v0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB804u, 0x2BB80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB80Cu;
label_2bb80c:
    // 0x2bb80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb810: 0x14b2000b  bne         $a1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB810u;
    {
        const bool branch_taken_0x2bb810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB810u;
        // 0x2bb814: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb810) {
            ctx->pc = 0x2BB840u;
            goto label_2bb840;
        }
    }
    ctx->pc = 0x2BB818u;
    // 0x2bb818: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2bb818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2bb81c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2bb81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2bb820: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bb820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bb824: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bb828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bb82c: 0xc088cfa  jal         func_2233E8
    ctx->pc = 0x2BB82Cu;
    SET_GPR_U32(ctx, 31, 0x2BB834u);
    ctx->pc = 0x2BB830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB82Cu;
    // 0x2bb830: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233E8u, 0x2BB82Cu, 0x2BB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB834u;
label_2bb834:
    // 0x2bb834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb838: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x2bb838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
label_2bb83c:
    // 0x2bb83c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bb83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb840:
    // 0x2bb840: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bb840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB84Cu;
        // 0x2bb850: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB854u;
    // 0x2bb854: 0x0  nop
    ctx->pc = 0x2bb854u;
    // NOP
    ctx->pc = 0x2bb858u;
}
