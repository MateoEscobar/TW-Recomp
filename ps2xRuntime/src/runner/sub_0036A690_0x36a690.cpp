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

// Function: sub_0036A690
// Address: 0x36a690 - 0x36a728
void sub_0036A690_0x36a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A690_0x36a690");
#endif

    switch (ctx->pc) {
        case 0x36a6bcu: goto label_36a6bc;
        case 0x36a6d0u: goto label_36a6d0;
        case 0x36a6d8u: goto label_36a6d8;
        case 0x36a6ecu: goto label_36a6ec;
        case 0x36a6f4u: goto label_36a6f4;
        case 0x36a704u: goto label_36a704;
        default: break;
    }

    ctx->pc = 0x36a690u;

    // 0x36a690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a698: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36a69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36a6a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36a6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a6b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36a6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6b4: 0xc102488  jal         func_409220
    ctx->pc = 0x36A6B4u;
    SET_GPR_U32(ctx, 31, 0x36A6BCu);
    ctx->pc = 0x36A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6B4u;
    // 0x36a6b8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36A6B4u, 0x36A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6BCu;
label_36a6bc:
    // 0x36a6bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36a6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a6c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A6C8u;
    SET_GPR_U32(ctx, 31, 0x36A6D0u);
    ctx->pc = 0x36A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6C8u;
    // 0x36a6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A6C8u, 0x36A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6D0u;
label_36a6d0:
    // 0x36a6d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A6D0u;
    SET_GPR_U32(ctx, 31, 0x36A6D8u);
    ctx->pc = 0x36A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6D0u;
    // 0x36a6d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A6D0u, 0x36A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6D8u;
label_36a6d8:
    // 0x36a6d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36a6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36a6dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36a6e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a6e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A6E4u;
    SET_GPR_U32(ctx, 31, 0x36A6ECu);
    ctx->pc = 0x36A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6E4u;
    // 0x36a6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A6E4u, 0x36A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6ECu;
label_36a6ec:
    // 0x36a6ec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A6ECu;
    SET_GPR_U32(ctx, 31, 0x36A6F4u);
    ctx->pc = 0x36A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6ECu;
    // 0x36a6f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A6ECu, 0x36A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6F4u;
label_36a6f4:
    // 0x36a6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36a6f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36a6fc: 0xc0e443c  jal         func_3910F0
    ctx->pc = 0x36A6FCu;
    SET_GPR_U32(ctx, 31, 0x36A704u);
    ctx->pc = 0x36A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6FCu;
    // 0x36a700: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3910F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3910F0u, 0x36A6FCu, 0x36A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A704u;
label_36a704:
    // 0x36a704: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a70c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36a70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a710: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36a710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a718: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A71Cu;
        // 0x36a720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A724u;
    // 0x36a724: 0x0  nop
    ctx->pc = 0x36a724u;
    // NOP
    ctx->pc = 0x36a728u;
}
