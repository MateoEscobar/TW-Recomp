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

// Function: sub_00363A68
// Address: 0x363a68 - 0x363b38
void sub_00363A68_0x363a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363A68_0x363a68");
#endif

    switch (ctx->pc) {
        case 0x363a98u: goto label_363a98;
        case 0x363aa0u: goto label_363aa0;
        case 0x363ab4u: goto label_363ab4;
        case 0x363abcu: goto label_363abc;
        case 0x363ad0u: goto label_363ad0;
        case 0x363ae4u: goto label_363ae4;
        case 0x363af8u: goto label_363af8;
        case 0x363b10u: goto label_363b10;
        default: break;
    }

    ctx->pc = 0x363a68u;

    // 0x363a68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x363a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x363a6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363a70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x363a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x363a74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x363a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x363a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x363a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363a84: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x363a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x363a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363a90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363A90u;
    SET_GPR_U32(ctx, 31, 0x363A98u);
    ctx->pc = 0x363A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A90u;
    // 0x363a94: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363A90u, 0x363A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A98u;
label_363a98:
    // 0x363a98: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363A98u;
    SET_GPR_U32(ctx, 31, 0x363AA0u);
    ctx->pc = 0x363A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A98u;
    // 0x363a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363A98u, 0x363AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AA0u;
label_363aa0:
    // 0x363aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363aa4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363aa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363aac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363AACu;
    SET_GPR_U32(ctx, 31, 0x363AB4u);
    ctx->pc = 0x363AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AACu;
    // 0x363ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363AACu, 0x363AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AB4u;
label_363ab4:
    // 0x363ab4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363AB4u;
    SET_GPR_U32(ctx, 31, 0x363ABCu);
    ctx->pc = 0x363AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AB4u;
    // 0x363ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363AB4u, 0x363ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363ABCu;
label_363abc:
    // 0x363abc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363abcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x363ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ac4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363ac8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363AC8u;
    SET_GPR_U32(ctx, 31, 0x363AD0u);
    ctx->pc = 0x363ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AC8u;
    // 0x363acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363AC8u, 0x363AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AD0u;
label_363ad0:
    // 0x363ad0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x363ad0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ad8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363adc: 0xc102488  jal         func_409220
    ctx->pc = 0x363ADCu;
    SET_GPR_U32(ctx, 31, 0x363AE4u);
    ctx->pc = 0x363AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363ADCu;
    // 0x363ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363ADCu, 0x363AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AE4u;
label_363ae4:
    // 0x363ae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363aec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363af0: 0xc102488  jal         func_409220
    ctx->pc = 0x363AF0u;
    SET_GPR_U32(ctx, 31, 0x363AF8u);
    ctx->pc = 0x363AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AF0u;
    // 0x363af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363AF0u, 0x363AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AF8u;
label_363af8:
    // 0x363af8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x363af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x363afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x363b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x363b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b08: 0xc0ab4b0  jal         func_2AD2C0
    ctx->pc = 0x363B08u;
    SET_GPR_U32(ctx, 31, 0x363B10u);
    ctx->pc = 0x363B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B08u;
    // 0x363b0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2C0u, 0x363B08u, 0x363B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B10u;
label_363b10:
    // 0x363b10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x363b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x363b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363b20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x363b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363b28: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x363b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x363B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B2Cu;
        // 0x363b30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363B34u;
    // 0x363b34: 0x0  nop
    ctx->pc = 0x363b34u;
    // NOP
    ctx->pc = 0x363b38u;
}
