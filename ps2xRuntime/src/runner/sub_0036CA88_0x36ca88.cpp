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

// Function: sub_0036CA88
// Address: 0x36ca88 - 0x36cb70
void sub_0036CA88_0x36ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CA88_0x36ca88");
#endif

    switch (ctx->pc) {
        case 0x36cabcu: goto label_36cabc;
        case 0x36cac4u: goto label_36cac4;
        case 0x36cad8u: goto label_36cad8;
        case 0x36cae0u: goto label_36cae0;
        case 0x36caf4u: goto label_36caf4;
        case 0x36cafcu: goto label_36cafc;
        case 0x36cb10u: goto label_36cb10;
        case 0x36cb24u: goto label_36cb24;
        case 0x36cb2cu: goto label_36cb2c;
        case 0x36cb44u: goto label_36cb44;
        default: break;
    }

    ctx->pc = 0x36ca88u;

    // 0x36ca88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36ca8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36ca94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36ca98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36ca9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36caa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36caa4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36caa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36caa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36caac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36caacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36cab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cab4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CAB4u;
    SET_GPR_U32(ctx, 31, 0x36CABCu);
    ctx->pc = 0x36CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAB4u;
    // 0x36cab8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CAB4u, 0x36CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CABCu;
label_36cabc:
    // 0x36cabc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CABCu;
    SET_GPR_U32(ctx, 31, 0x36CAC4u);
    ctx->pc = 0x36CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CABCu;
    // 0x36cac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CABCu, 0x36CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAC4u;
label_36cac4:
    // 0x36cac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cac8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36cac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cacc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36caccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cad0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CAD0u;
    SET_GPR_U32(ctx, 31, 0x36CAD8u);
    ctx->pc = 0x36CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAD0u;
    // 0x36cad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CAD0u, 0x36CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAD8u;
label_36cad8:
    // 0x36cad8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36CAD8u;
    SET_GPR_U32(ctx, 31, 0x36CAE0u);
    ctx->pc = 0x36CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAD8u;
    // 0x36cadc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36CAD8u, 0x36CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAE0u;
label_36cae0:
    // 0x36cae0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36cae0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36cae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cae8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36caec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CAECu;
    SET_GPR_U32(ctx, 31, 0x36CAF4u);
    ctx->pc = 0x36CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAECu;
    // 0x36caf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CAECu, 0x36CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAF4u;
label_36caf4:
    // 0x36caf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CAF4u;
    SET_GPR_U32(ctx, 31, 0x36CAFCu);
    ctx->pc = 0x36CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAF4u;
    // 0x36caf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CAF4u, 0x36CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAFCu;
label_36cafc:
    // 0x36cafc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36cafcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36cb08: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36CB08u;
    SET_GPR_U32(ctx, 31, 0x36CB10u);
    ctx->pc = 0x36CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB08u;
    // 0x36cb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36CB08u, 0x36CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB10u;
label_36cb10:
    // 0x36cb10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb14: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x36cb14u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36cb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CB1Cu;
    SET_GPR_U32(ctx, 31, 0x36CB24u);
    ctx->pc = 0x36CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB1Cu;
    // 0x36cb20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CB1Cu, 0x36CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB24u;
label_36cb24:
    // 0x36cb24: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36CB24u;
    SET_GPR_U32(ctx, 31, 0x36CB2Cu);
    ctx->pc = 0x36CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB24u;
    // 0x36cb28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36CB24u, 0x36CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB2Cu;
label_36cb2c:
    // 0x36cb2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36cb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36cb34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36cb38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb3c: 0xc0e16c2  jal         func_385B08
    ctx->pc = 0x36CB3Cu;
    SET_GPR_U32(ctx, 31, 0x36CB44u);
    ctx->pc = 0x36CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB3Cu;
    // 0x36cb40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385B08u, 0x36CB3Cu, 0x36CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB44u;
label_36cb44:
    // 0x36cb44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36cb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36cb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36cb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36cb50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36cb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36cb54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36cb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cb58: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36cb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cb5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cb60: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x36cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36cb64: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB64u;
        // 0x36cb68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB6Cu;
    // 0x36cb6c: 0x0  nop
    ctx->pc = 0x36cb6cu;
    // NOP
    ctx->pc = 0x36cb70u;
}
