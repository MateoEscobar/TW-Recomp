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

// Function: sub_0035CAB0
// Address: 0x35cab0 - 0x35cb70
void sub_0035CAB0_0x35cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CAB0_0x35cab0");
#endif

    switch (ctx->pc) {
        case 0x35cadcu: goto label_35cadc;
        case 0x35cae4u: goto label_35cae4;
        case 0x35caf8u: goto label_35caf8;
        case 0x35cb0cu: goto label_35cb0c;
        case 0x35cb20u: goto label_35cb20;
        case 0x35cb34u: goto label_35cb34;
        case 0x35cb4cu: goto label_35cb4c;
        default: break;
    }

    ctx->pc = 0x35cab0u;

    // 0x35cab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35cab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cab8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35cabc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cac0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x35cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x35cac4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35cac8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x35cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35cacc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x35caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x35cad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cad4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CAD4u;
    SET_GPR_U32(ctx, 31, 0x35CADCu);
    ctx->pc = 0x35CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CAD4u;
    // 0x35cad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CAD4u, 0x35CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CADCu;
label_35cadc:
    // 0x35cadc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CADCu;
    SET_GPR_U32(ctx, 31, 0x35CAE4u);
    ctx->pc = 0x35CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CADCu;
    // 0x35cae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CADCu, 0x35CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CAE4u;
label_35cae4:
    // 0x35cae4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35cae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35caec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35caf0: 0xc102488  jal         func_409220
    ctx->pc = 0x35CAF0u;
    SET_GPR_U32(ctx, 31, 0x35CAF8u);
    ctx->pc = 0x35CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CAF0u;
    // 0x35caf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CAF0u, 0x35CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CAF8u;
label_35caf8:
    // 0x35caf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35caf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35cb04: 0xc102488  jal         func_409220
    ctx->pc = 0x35CB04u;
    SET_GPR_U32(ctx, 31, 0x35CB0Cu);
    ctx->pc = 0x35CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB04u;
    // 0x35cb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CB04u, 0x35CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB0Cu;
label_35cb0c:
    // 0x35cb0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35cb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35cb18: 0xc102488  jal         func_409220
    ctx->pc = 0x35CB18u;
    SET_GPR_U32(ctx, 31, 0x35CB20u);
    ctx->pc = 0x35CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB18u;
    // 0x35cb1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CB18u, 0x35CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB20u;
label_35cb20:
    // 0x35cb20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35cb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35cb2c: 0xc102488  jal         func_409220
    ctx->pc = 0x35CB2Cu;
    SET_GPR_U32(ctx, 31, 0x35CB34u);
    ctx->pc = 0x35CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB2Cu;
    // 0x35cb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CB2Cu, 0x35CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB34u;
label_35cb34:
    // 0x35cb34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35cb34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35cb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb44: 0xc08d2fe  jal         func_234BF8
    ctx->pc = 0x35CB44u;
    SET_GPR_U32(ctx, 31, 0x35CB4Cu);
    ctx->pc = 0x35CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB44u;
    // 0x35cb48: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234BF8u, 0x35CB44u, 0x35CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB4Cu;
label_35cb4c:
    // 0x35cb4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x35cb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cb50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35cb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35cb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cb5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x35cb5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cb60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x35cb60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb68: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB68u;
        // 0x35cb6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CB70u;
}
