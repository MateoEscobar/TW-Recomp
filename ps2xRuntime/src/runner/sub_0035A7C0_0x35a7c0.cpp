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

// Function: sub_0035A7C0
// Address: 0x35a7c0 - 0x35a878
void sub_0035A7C0_0x35a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A7C0_0x35a7c0");
#endif

    switch (ctx->pc) {
        case 0x35a7ecu: goto label_35a7ec;
        case 0x35a7f4u: goto label_35a7f4;
        case 0x35a808u: goto label_35a808;
        case 0x35a810u: goto label_35a810;
        case 0x35a824u: goto label_35a824;
        case 0x35a82cu: goto label_35a82c;
        case 0x35a840u: goto label_35a840;
        case 0x35a854u: goto label_35a854;
        default: break;
    }

    ctx->pc = 0x35a7c0u;

    // 0x35a7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35a7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a7c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35a7cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35a7d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35a7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35a7dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a7e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A7E4u;
    SET_GPR_U32(ctx, 31, 0x35A7ECu);
    ctx->pc = 0x35A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A7E4u;
    // 0x35a7e8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A7E4u, 0x35A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7ECu;
label_35a7ec:
    // 0x35a7ec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A7ECu;
    SET_GPR_U32(ctx, 31, 0x35A7F4u);
    ctx->pc = 0x35A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A7ECu;
    // 0x35a7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A7ECu, 0x35A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7F4u;
label_35a7f4:
    // 0x35a7f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a7f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35a7f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a800: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A800u;
    SET_GPR_U32(ctx, 31, 0x35A808u);
    ctx->pc = 0x35A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A800u;
    // 0x35a804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A800u, 0x35A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A808u;
label_35a808:
    // 0x35a808: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35A808u;
    SET_GPR_U32(ctx, 31, 0x35A810u);
    ctx->pc = 0x35A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A808u;
    // 0x35a80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35A808u, 0x35A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A810u;
label_35a810:
    // 0x35a810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a814: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35a814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a818: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a81c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A81Cu;
    SET_GPR_U32(ctx, 31, 0x35A824u);
    ctx->pc = 0x35A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A81Cu;
    // 0x35a820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A81Cu, 0x35A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A824u;
label_35a824:
    // 0x35a824: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35A824u;
    SET_GPR_U32(ctx, 31, 0x35A82Cu);
    ctx->pc = 0x35A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A824u;
    // 0x35a828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35A824u, 0x35A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A82Cu;
label_35a82c:
    // 0x35a82c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35a82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a834: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35a834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a838: 0xc102488  jal         func_409220
    ctx->pc = 0x35A838u;
    SET_GPR_U32(ctx, 31, 0x35A840u);
    ctx->pc = 0x35A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A838u;
    // 0x35a83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A838u, 0x35A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A840u;
label_35a840:
    // 0x35a840: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a844: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a844u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a84c: 0xc107520  jal         func_41D480
    ctx->pc = 0x35A84Cu;
    SET_GPR_U32(ctx, 31, 0x35A854u);
    ctx->pc = 0x35A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A84Cu;
    // 0x35a850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D480u, 0x35A84Cu, 0x35A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A854u;
label_35a854:
    // 0x35a854: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35a854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a85c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a860: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35a860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a868: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x35a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A86Cu;
        // 0x35a870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A874u;
    // 0x35a874: 0x0  nop
    ctx->pc = 0x35a874u;
    // NOP
    ctx->pc = 0x35a878u;
}
