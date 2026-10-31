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

// Function: sub_0040A3B0
// Address: 0x40a3b0 - 0x40a460
void sub_0040A3B0_0x40a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A3B0_0x40a3b0");
#endif

    switch (ctx->pc) {
        case 0x40a3dcu: goto label_40a3dc;
        case 0x40a3e4u: goto label_40a3e4;
        case 0x40a3f0u: goto label_40a3f0;
        case 0x40a3fcu: goto label_40a3fc;
        case 0x40a408u: goto label_40a408;
        case 0x40a418u: goto label_40a418;
        case 0x40a424u: goto label_40a424;
        case 0x40a42cu: goto label_40a42c;
        case 0x40a43cu: goto label_40a43c;
        case 0x40a448u: goto label_40a448;
        default: break;
    }

    ctx->pc = 0x40a3b0u;

    // 0x40a3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40a3b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40a3b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40a3bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40a3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40a3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3c8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a3d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40a3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3d4: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A3D4u;
    SET_GPR_U32(ctx, 31, 0x40A3DCu);
    ctx->pc = 0x40A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A3D4u;
    // 0x40a3d8: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A3D4u, 0x40A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A3DCu;
label_40a3dc:
    // 0x40a3dc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A3DCu;
    SET_GPR_U32(ctx, 31, 0x40A3E4u);
    ctx->pc = 0x40A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A3DCu;
    // 0x40a3e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A3DCu, 0x40A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A3E4u;
label_40a3e4:
    // 0x40a3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3e8: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A3E8u;
    SET_GPR_U32(ctx, 31, 0x40A3F0u);
    ctx->pc = 0x40A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A3E8u;
    // 0x40a3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A3E8u, 0x40A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A3F0u;
label_40a3f0:
    // 0x40a3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3f4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A3F4u;
    SET_GPR_U32(ctx, 31, 0x40A3FCu);
    ctx->pc = 0x40A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A3F4u;
    // 0x40a3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A3F4u, 0x40A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A3FCu;
label_40a3fc:
    // 0x40a3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a400: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40A400u;
    SET_GPR_U32(ctx, 31, 0x40A408u);
    ctx->pc = 0x40A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A400u;
    // 0x40a404: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A400u, 0x40A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A408u;
label_40a408:
    // 0x40a408: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a410: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A410u;
    SET_GPR_U32(ctx, 31, 0x40A418u);
    ctx->pc = 0x40A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A410u;
    // 0x40a414: 0x24a58198  addiu       $a1, $a1, -0x7E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A410u, 0x40A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A418u;
label_40a418:
    // 0x40a418: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40a41c: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40A41Cu;
    SET_GPR_U32(ctx, 31, 0x40A424u);
    ctx->pc = 0x40A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A41Cu;
    // 0x40a420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A41Cu, 0x40A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A424u;
label_40a424:
    // 0x40a424: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40A424u;
    SET_GPR_U32(ctx, 31, 0x40A42Cu);
    ctx->pc = 0x40A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A424u;
    // 0x40a428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40A424u, 0x40A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A42Cu;
label_40a42c:
    // 0x40a42c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40a42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a434: 0xc0cc9b8  jal         func_3326E0
    ctx->pc = 0x40A434u;
    SET_GPR_U32(ctx, 31, 0x40A43Cu);
    ctx->pc = 0x40A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A434u;
    // 0x40a438: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326E0u, 0x40A434u, 0x40A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A43Cu;
label_40a43c:
    // 0x40a43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a440: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A440u;
    SET_GPR_U32(ctx, 31, 0x40A448u);
    ctx->pc = 0x40A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A440u;
    // 0x40a444: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A440u, 0x40A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A448u;
label_40a448:
    // 0x40a448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40a448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a450: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40a450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a458: 0x3e00008  jr          $ra
    ctx->pc = 0x40A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A458u;
        // 0x40a45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A460u;
}
