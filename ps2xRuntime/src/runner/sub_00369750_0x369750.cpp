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

// Function: sub_00369750
// Address: 0x369750 - 0x3697f0
void sub_00369750_0x369750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369750_0x369750");
#endif

    switch (ctx->pc) {
        case 0x36977cu: goto label_36977c;
        case 0x369784u: goto label_369784;
        case 0x369798u: goto label_369798;
        case 0x3697a0u: goto label_3697a0;
        case 0x3697b4u: goto label_3697b4;
        case 0x3697bcu: goto label_3697bc;
        case 0x3697ccu: goto label_3697cc;
        default: break;
    }

    ctx->pc = 0x369750u;

    // 0x369750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x369754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369758: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x369758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36975c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x369760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x369764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36976c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x369770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369774: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369774u;
    SET_GPR_U32(ctx, 31, 0x36977Cu);
    ctx->pc = 0x369778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369774u;
    // 0x369778: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369774u, 0x36977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36977Cu;
label_36977c:
    // 0x36977c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36977Cu;
    SET_GPR_U32(ctx, 31, 0x369784u);
    ctx->pc = 0x369780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36977Cu;
    // 0x369780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36977Cu, 0x369784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369784u;
label_369784:
    // 0x369784: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369788: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36978c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369790: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369790u;
    SET_GPR_U32(ctx, 31, 0x369798u);
    ctx->pc = 0x369794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369790u;
    // 0x369794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369790u, 0x369798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369798u;
label_369798:
    // 0x369798: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369798u;
    SET_GPR_U32(ctx, 31, 0x3697A0u);
    ctx->pc = 0x36979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369798u;
    // 0x36979c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369798u, 0x3697A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697A0u;
label_3697a0:
    // 0x3697a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3697a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3697a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3697a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3697ACu;
    SET_GPR_U32(ctx, 31, 0x3697B4u);
    ctx->pc = 0x3697B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697ACu;
    // 0x3697b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3697ACu, 0x3697B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697B4u;
label_3697b4:
    // 0x3697b4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3697B4u;
    SET_GPR_U32(ctx, 31, 0x3697BCu);
    ctx->pc = 0x3697B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697B4u;
    // 0x3697b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3697B4u, 0x3697BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697BCu;
label_3697bc:
    // 0x3697bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3697bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3697c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697c4: 0xc051d98  jal         func_147660
    ctx->pc = 0x3697C4u;
    SET_GPR_U32(ctx, 31, 0x3697CCu);
    ctx->pc = 0x3697C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697C4u;
    // 0x3697c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147660u, 0x3697C4u, 0x3697CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697CCu;
label_3697cc:
    // 0x3697cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3697ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3697d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3697d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3697d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3697d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3697d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3697dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3697dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3697e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3697e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3697e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3697E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3697E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697E4u;
        // 0x3697e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3697E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3697ECu;
    // 0x3697ec: 0x0  nop
    ctx->pc = 0x3697ecu;
    // NOP
    ctx->pc = 0x3697f0u;
}
