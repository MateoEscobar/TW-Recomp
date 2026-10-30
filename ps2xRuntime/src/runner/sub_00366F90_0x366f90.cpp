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

// Function: sub_00366F90
// Address: 0x366f90 - 0x367030
void sub_00366F90_0x366f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366F90_0x366f90");
#endif

    switch (ctx->pc) {
        case 0x366fbcu: goto label_366fbc;
        case 0x366fc4u: goto label_366fc4;
        case 0x366fd8u: goto label_366fd8;
        case 0x366fe0u: goto label_366fe0;
        case 0x366ff4u: goto label_366ff4;
        case 0x367004u: goto label_367004;
        case 0x367010u: goto label_367010;
        default: break;
    }

    ctx->pc = 0x366f90u;

    // 0x366f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x366f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x366f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x366f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x366f9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x366f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x366fa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x366fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x366fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x366fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366fb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366FB4u;
    SET_GPR_U32(ctx, 31, 0x366FBCu);
    ctx->pc = 0x366FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FB4u;
    // 0x366fb8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366FB4u, 0x366FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FBCu;
label_366fbc:
    // 0x366fbc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366FBCu;
    SET_GPR_U32(ctx, 31, 0x366FC4u);
    ctx->pc = 0x366FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FBCu;
    // 0x366fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366FBCu, 0x366FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FC4u;
label_366fc4:
    // 0x366fc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366fd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366FD0u;
    SET_GPR_U32(ctx, 31, 0x366FD8u);
    ctx->pc = 0x366FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FD0u;
    // 0x366fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366FD0u, 0x366FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FD8u;
label_366fd8:
    // 0x366fd8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366FD8u;
    SET_GPR_U32(ctx, 31, 0x366FE0u);
    ctx->pc = 0x366FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FD8u;
    // 0x366fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366FD8u, 0x366FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FE0u;
label_366fe0:
    // 0x366fe0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fec: 0xc102488  jal         func_409220
    ctx->pc = 0x366FECu;
    SET_GPR_U32(ctx, 31, 0x366FF4u);
    ctx->pc = 0x366FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FECu;
    // 0x366ff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366FECu, 0x366FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FF4u;
label_366ff4:
    // 0x366ff4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x366ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x366ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ffc: 0xc04731a  jal         func_11CC68
    ctx->pc = 0x366FFCu;
    SET_GPR_U32(ctx, 31, 0x367004u);
    ctx->pc = 0x367000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FFCu;
    // 0x367000: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC68u, 0x366FFCu, 0x367004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367004u;
label_367004:
    // 0x367004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x367004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367008: 0xc102562  jal         func_409588
    ctx->pc = 0x367008u;
    SET_GPR_U32(ctx, 31, 0x367010u);
    ctx->pc = 0x36700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367008u;
    // 0x36700c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x367008u, 0x367010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367010u;
label_367010:
    // 0x367010: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x367010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367018: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x367018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36701c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36701cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367024: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x367024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367028: 0x3e00008  jr          $ra
    ctx->pc = 0x367028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367028u;
        // 0x36702c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367030u;
}
