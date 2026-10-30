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

// Function: sub_0036D0E0
// Address: 0x36d0e0 - 0x36d1c8
void sub_0036D0E0_0x36d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D0E0_0x36d0e0");
#endif

    switch (ctx->pc) {
        case 0x36d114u: goto label_36d114;
        case 0x36d11cu: goto label_36d11c;
        case 0x36d130u: goto label_36d130;
        case 0x36d144u: goto label_36d144;
        case 0x36d14cu: goto label_36d14c;
        case 0x36d160u: goto label_36d160;
        case 0x36d168u: goto label_36d168;
        case 0x36d17cu: goto label_36d17c;
        case 0x36d184u: goto label_36d184;
        case 0x36d19cu: goto label_36d19c;
        default: break;
    }

    ctx->pc = 0x36d0e0u;

    // 0x36d0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36d0e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d0e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36d0ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36d0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36d0fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36d100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d104: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36d108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d10c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D10Cu;
    SET_GPR_U32(ctx, 31, 0x36D114u);
    ctx->pc = 0x36D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D10Cu;
    // 0x36d110: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D10Cu, 0x36D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D114u;
label_36d114:
    // 0x36d114: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D114u;
    SET_GPR_U32(ctx, 31, 0x36D11Cu);
    ctx->pc = 0x36D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D114u;
    // 0x36d118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D114u, 0x36D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D11Cu;
label_36d11c:
    // 0x36d11c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36d11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d124: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d128: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36D128u;
    SET_GPR_U32(ctx, 31, 0x36D130u);
    ctx->pc = 0x36D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D128u;
    // 0x36d12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36D128u, 0x36D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D130u;
label_36d130:
    // 0x36d130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d134: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x36d134u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36d138: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36d138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d13c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D13Cu;
    SET_GPR_U32(ctx, 31, 0x36D144u);
    ctx->pc = 0x36D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D13Cu;
    // 0x36d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D13Cu, 0x36D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D144u;
label_36d144:
    // 0x36d144: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36D144u;
    SET_GPR_U32(ctx, 31, 0x36D14Cu);
    ctx->pc = 0x36D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D144u;
    // 0x36d148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36D144u, 0x36D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D14Cu;
label_36d14c:
    // 0x36d14c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36d14cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36d150: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d154: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d158: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D158u;
    SET_GPR_U32(ctx, 31, 0x36D160u);
    ctx->pc = 0x36D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D158u;
    // 0x36d15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D158u, 0x36D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D160u;
label_36d160:
    // 0x36d160: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36D160u;
    SET_GPR_U32(ctx, 31, 0x36D168u);
    ctx->pc = 0x36D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D160u;
    // 0x36d164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36D160u, 0x36D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D168u;
label_36d168:
    // 0x36d168: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d16c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d174: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D174u;
    SET_GPR_U32(ctx, 31, 0x36D17Cu);
    ctx->pc = 0x36D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D174u;
    // 0x36d178: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D174u, 0x36D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D17Cu;
label_36d17c:
    // 0x36d17c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D17Cu;
    SET_GPR_U32(ctx, 31, 0x36D184u);
    ctx->pc = 0x36D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D17Cu;
    // 0x36d180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D17Cu, 0x36D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D184u;
label_36d184:
    // 0x36d184: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36d184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d18c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d190: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36d190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36d194: 0xc1052f0  jal         func_414BC0
    ctx->pc = 0x36D194u;
    SET_GPR_U32(ctx, 31, 0x36D19Cu);
    ctx->pc = 0x36D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D194u;
    // 0x36d198: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414BC0u, 0x36D194u, 0x36D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D19Cu;
label_36d19c:
    // 0x36d19c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36d19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36d1a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d1a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36d1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d1a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36d1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d1ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36d1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d1b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36d1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d1b8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x36d1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1BCu;
        // 0x36d1c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D1C4u;
    // 0x36d1c4: 0x0  nop
    ctx->pc = 0x36d1c4u;
    // NOP
    ctx->pc = 0x36d1c8u;
}
