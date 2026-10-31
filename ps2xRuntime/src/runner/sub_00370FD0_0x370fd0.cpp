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

// Function: sub_00370FD0
// Address: 0x370fd0 - 0x371090
void sub_00370FD0_0x370fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370FD0_0x370fd0");
#endif

    switch (ctx->pc) {
        case 0x371000u: goto label_371000;
        case 0x371014u: goto label_371014;
        case 0x37101cu: goto label_37101c;
        case 0x371030u: goto label_371030;
        case 0x371038u: goto label_371038;
        case 0x37104cu: goto label_37104c;
        case 0x371054u: goto label_371054;
        case 0x371068u: goto label_371068;
        default: break;
    }

    ctx->pc = 0x370fd0u;

    // 0x370fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x370fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370fd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x370fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x370fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370fe4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x370fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x370fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x370fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370fec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x370fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x370ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x370ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370ff8: 0xc102488  jal         func_409220
    ctx->pc = 0x370FF8u;
    SET_GPR_U32(ctx, 31, 0x371000u);
    ctx->pc = 0x370FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370FF8u;
    // 0x370ffc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x370FF8u, 0x371000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371000u;
label_371000:
    // 0x371000: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x371004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37100c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37100Cu;
    SET_GPR_U32(ctx, 31, 0x371014u);
    ctx->pc = 0x371010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37100Cu;
    // 0x371010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37100Cu, 0x371014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371014u;
label_371014:
    // 0x371014: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371014u;
    SET_GPR_U32(ctx, 31, 0x37101Cu);
    ctx->pc = 0x371018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371014u;
    // 0x371018: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371014u, 0x37101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37101Cu;
label_37101c:
    // 0x37101c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37101cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x371020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371024: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x371024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371028: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371028u;
    SET_GPR_U32(ctx, 31, 0x371030u);
    ctx->pc = 0x37102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371028u;
    // 0x37102c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371028u, 0x371030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371030u;
label_371030:
    // 0x371030: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371030u;
    SET_GPR_U32(ctx, 31, 0x371038u);
    ctx->pc = 0x371034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371030u;
    // 0x371034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371030u, 0x371038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371038u;
label_371038:
    // 0x371038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37103c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37103cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x371040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x371040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371044: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371044u;
    SET_GPR_U32(ctx, 31, 0x37104Cu);
    ctx->pc = 0x371048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371044u;
    // 0x371048: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371044u, 0x37104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37104Cu;
label_37104c:
    // 0x37104c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37104Cu;
    SET_GPR_U32(ctx, 31, 0x371054u);
    ctx->pc = 0x371050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37104Cu;
    // 0x371050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37104Cu, 0x371054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371054u;
label_371054:
    // 0x371054: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37105c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37105cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371060: 0xc044d0e  jal         func_113438
    ctx->pc = 0x371060u;
    SET_GPR_U32(ctx, 31, 0x371068u);
    ctx->pc = 0x371064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371060u;
    // 0x371064: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113438u, 0x371060u, 0x371068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371068u;
label_371068:
    // 0x371068: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x371068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37106c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37106cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371070: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x371070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371078: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x371078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37107c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371080: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x371080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371084: 0x3e00008  jr          $ra
    ctx->pc = 0x371084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371084u;
        // 0x371088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37108Cu;
    // 0x37108c: 0x0  nop
    ctx->pc = 0x37108cu;
    // NOP
    ctx->pc = 0x371090u;
}
