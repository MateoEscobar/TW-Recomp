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

// Function: sub_00365370
// Address: 0x365370 - 0x365408
void sub_00365370_0x365370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365370_0x365370");
#endif

    switch (ctx->pc) {
        case 0x365398u: goto label_365398;
        case 0x3653a0u: goto label_3653a0;
        case 0x3653b4u: goto label_3653b4;
        case 0x3653bcu: goto label_3653bc;
        case 0x3653d0u: goto label_3653d0;
        case 0x3653e0u: goto label_3653e0;
        case 0x3653ecu: goto label_3653ec;
        default: break;
    }

    ctx->pc = 0x365370u;

    // 0x365370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x365374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x365378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36537c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x365380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365388: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x365388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36538c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365390: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365390u;
    SET_GPR_U32(ctx, 31, 0x365398u);
    ctx->pc = 0x365394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365390u;
    // 0x365394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365390u, 0x365398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365398u;
label_365398:
    // 0x365398: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365398u;
    SET_GPR_U32(ctx, 31, 0x3653A0u);
    ctx->pc = 0x36539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365398u;
    // 0x36539c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365398u, 0x3653A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653A0u;
label_3653a0:
    // 0x3653a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3653a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3653a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3653a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3653ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3653ACu;
    SET_GPR_U32(ctx, 31, 0x3653B4u);
    ctx->pc = 0x3653B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653ACu;
    // 0x3653b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3653ACu, 0x3653B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653B4u;
label_3653b4:
    // 0x3653b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3653B4u;
    SET_GPR_U32(ctx, 31, 0x3653BCu);
    ctx->pc = 0x3653B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653B4u;
    // 0x3653b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3653B4u, 0x3653BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653BCu;
label_3653bc:
    // 0x3653bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3653bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3653c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3653c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3653c8: 0xc102488  jal         func_409220
    ctx->pc = 0x3653C8u;
    SET_GPR_U32(ctx, 31, 0x3653D0u);
    ctx->pc = 0x3653CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653C8u;
    // 0x3653cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3653C8u, 0x3653D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653D0u;
label_3653d0:
    // 0x3653d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3653d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3653d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653d8: 0xc08e1a4  jal         func_238690
    ctx->pc = 0x3653D8u;
    SET_GPR_U32(ctx, 31, 0x3653E0u);
    ctx->pc = 0x3653DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653D8u;
    // 0x3653dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x3653D8u, 0x3653E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653E0u;
label_3653e0:
    // 0x3653e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3653e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3653e4: 0xc102562  jal         func_409588
    ctx->pc = 0x3653E4u;
    SET_GPR_U32(ctx, 31, 0x3653ECu);
    ctx->pc = 0x3653E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653E4u;
    // 0x3653e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3653E4u, 0x3653ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653ECu;
label_3653ec:
    // 0x3653ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3653ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3653f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3653f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3653f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3653f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3653f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3653f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3653fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3653fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365400: 0x3e00008  jr          $ra
    ctx->pc = 0x365400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365400u;
        // 0x365404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365408u;
}
