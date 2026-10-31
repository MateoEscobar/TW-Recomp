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

// Function: sub_0035E378
// Address: 0x35e378 - 0x35e418
void sub_0035E378_0x35e378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E378_0x35e378");
#endif

    switch (ctx->pc) {
        case 0x35e3a4u: goto label_35e3a4;
        case 0x35e3acu: goto label_35e3ac;
        case 0x35e3c0u: goto label_35e3c0;
        case 0x35e3c8u: goto label_35e3c8;
        case 0x35e3dcu: goto label_35e3dc;
        case 0x35e3e4u: goto label_35e3e4;
        case 0x35e3f4u: goto label_35e3f4;
        default: break;
    }

    ctx->pc = 0x35e378u;

    // 0x35e378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35e37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e380: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35e384: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35e388: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35e388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e38c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35e38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35e394: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35e394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35e398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e39c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E39Cu;
    SET_GPR_U32(ctx, 31, 0x35E3A4u);
    ctx->pc = 0x35E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E39Cu;
    // 0x35e3a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E39Cu, 0x35E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3A4u;
label_35e3a4:
    // 0x35e3a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E3A4u;
    SET_GPR_U32(ctx, 31, 0x35E3ACu);
    ctx->pc = 0x35E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3A4u;
    // 0x35e3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E3A4u, 0x35E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3ACu;
label_35e3ac:
    // 0x35e3ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35e3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e3b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E3B8u;
    SET_GPR_U32(ctx, 31, 0x35E3C0u);
    ctx->pc = 0x35E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3B8u;
    // 0x35e3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E3B8u, 0x35E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3C0u;
label_35e3c0:
    // 0x35e3c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E3C0u;
    SET_GPR_U32(ctx, 31, 0x35E3C8u);
    ctx->pc = 0x35E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3C0u;
    // 0x35e3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E3C0u, 0x35E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3C8u;
label_35e3c8:
    // 0x35e3c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35e3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E3D4u;
    SET_GPR_U32(ctx, 31, 0x35E3DCu);
    ctx->pc = 0x35E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3D4u;
    // 0x35e3d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E3D4u, 0x35E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3DCu;
label_35e3dc:
    // 0x35e3dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E3DCu;
    SET_GPR_U32(ctx, 31, 0x35E3E4u);
    ctx->pc = 0x35E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3DCu;
    // 0x35e3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E3DCu, 0x35E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3E4u;
label_35e3e4:
    // 0x35e3e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35e3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3ec: 0xc0a5210  jal         func_294840
    ctx->pc = 0x35E3ECu;
    SET_GPR_U32(ctx, 31, 0x35E3F4u);
    ctx->pc = 0x35E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E3ECu;
    // 0x35e3f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294840u, 0x35E3ECu, 0x35E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3F4u;
label_35e3f4:
    // 0x35e3f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35e3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35e3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e404: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35e404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e40c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E40Cu;
        // 0x35e410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E414u;
    // 0x35e414: 0x0  nop
    ctx->pc = 0x35e414u;
    // NOP
    ctx->pc = 0x35e418u;
}
