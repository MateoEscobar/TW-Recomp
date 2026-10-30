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

// Function: sub_00360690
// Address: 0x360690 - 0x360730
void sub_00360690_0x360690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360690_0x360690");
#endif

    switch (ctx->pc) {
        case 0x3606bcu: goto label_3606bc;
        case 0x3606c4u: goto label_3606c4;
        case 0x3606d8u: goto label_3606d8;
        case 0x3606e0u: goto label_3606e0;
        case 0x3606f4u: goto label_3606f4;
        case 0x3606fcu: goto label_3606fc;
        case 0x36070cu: goto label_36070c;
        default: break;
    }

    ctx->pc = 0x360690u;

    // 0x360690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x360690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x360694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360698: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x360698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36069c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3606a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3606a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3606a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3606a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3606ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3606acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3606b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3606b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3606b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3606B4u;
    SET_GPR_U32(ctx, 31, 0x3606BCu);
    ctx->pc = 0x3606B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606B4u;
    // 0x3606b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3606B4u, 0x3606BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606BCu;
label_3606bc:
    // 0x3606bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3606BCu;
    SET_GPR_U32(ctx, 31, 0x3606C4u);
    ctx->pc = 0x3606C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606BCu;
    // 0x3606c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3606BCu, 0x3606C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606C4u;
label_3606c4:
    // 0x3606c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3606c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3606c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3606ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3606d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3606D0u;
    SET_GPR_U32(ctx, 31, 0x3606D8u);
    ctx->pc = 0x3606D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606D0u;
    // 0x3606d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3606D0u, 0x3606D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606D8u;
label_3606d8:
    // 0x3606d8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3606D8u;
    SET_GPR_U32(ctx, 31, 0x3606E0u);
    ctx->pc = 0x3606DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606D8u;
    // 0x3606dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3606D8u, 0x3606E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606E0u;
label_3606e0:
    // 0x3606e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3606e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3606e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3606e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3606ECu;
    SET_GPR_U32(ctx, 31, 0x3606F4u);
    ctx->pc = 0x3606F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606ECu;
    // 0x3606f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3606ECu, 0x3606F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606F4u;
label_3606f4:
    // 0x3606f4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3606F4u;
    SET_GPR_U32(ctx, 31, 0x3606FCu);
    ctx->pc = 0x3606F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606F4u;
    // 0x3606f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3606F4u, 0x3606FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606FCu;
label_3606fc:
    // 0x3606fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3606fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360704: 0xc0b7c6a  jal         func_2DF1A8
    ctx->pc = 0x360704u;
    SET_GPR_U32(ctx, 31, 0x36070Cu);
    ctx->pc = 0x360708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360704u;
    // 0x360708: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1A8u, 0x360704u, 0x36070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36070Cu;
label_36070c:
    // 0x36070c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36070cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360714: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x360714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36071c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36071cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360724: 0x3e00008  jr          $ra
    ctx->pc = 0x360724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360724u;
        // 0x360728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36072Cu;
    // 0x36072c: 0x0  nop
    ctx->pc = 0x36072cu;
    // NOP
    ctx->pc = 0x360730u;
}
