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

// Function: sub_00362B18
// Address: 0x362b18 - 0x362c00
void sub_00362B18_0x362b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362B18_0x362b18");
#endif

    switch (ctx->pc) {
        case 0x362b48u: goto label_362b48;
        case 0x362b50u: goto label_362b50;
        case 0x362b64u: goto label_362b64;
        case 0x362b6cu: goto label_362b6c;
        case 0x362b84u: goto label_362b84;
        case 0x362b8cu: goto label_362b8c;
        case 0x362ba4u: goto label_362ba4;
        case 0x362bacu: goto label_362bac;
        case 0x362bc0u: goto label_362bc0;
        case 0x362bd8u: goto label_362bd8;
        default: break;
    }

    ctx->pc = 0x362b18u;

    // 0x362b18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362b20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x362b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x362b24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x362b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x362b28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x362b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362b34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x362b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x362b38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362b40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362B40u;
    SET_GPR_U32(ctx, 31, 0x362B48u);
    ctx->pc = 0x362B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B40u;
    // 0x362b44: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362B40u, 0x362B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B48u;
label_362b48:
    // 0x362b48: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362B48u;
    SET_GPR_U32(ctx, 31, 0x362B50u);
    ctx->pc = 0x362B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B48u;
    // 0x362b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362B48u, 0x362B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B50u;
label_362b50:
    // 0x362b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362b5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362B5Cu;
    SET_GPR_U32(ctx, 31, 0x362B64u);
    ctx->pc = 0x362B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B5Cu;
    // 0x362b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362B5Cu, 0x362B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B64u;
label_362b64:
    // 0x362b64: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362B64u;
    SET_GPR_U32(ctx, 31, 0x362B6Cu);
    ctx->pc = 0x362B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B64u;
    // 0x362b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362B64u, 0x362B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B6Cu;
label_362b6c:
    // 0x362b6c: 0x34068060  ori         $a2, $zero, 0x8060
    ctx->pc = 0x362b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32864);
    // 0x362b70: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x362b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x362b74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362b7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362B7Cu;
    SET_GPR_U32(ctx, 31, 0x362B84u);
    ctx->pc = 0x362B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B7Cu;
    // 0x362b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362B7Cu, 0x362B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B84u;
label_362b84:
    // 0x362b84: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362B84u;
    SET_GPR_U32(ctx, 31, 0x362B8Cu);
    ctx->pc = 0x362B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B84u;
    // 0x362b88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362B84u, 0x362B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B8Cu;
label_362b8c:
    // 0x362b8c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x362b8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x362b90: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x362b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x362b94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x362b94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x362b98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362b9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362B9Cu;
    SET_GPR_U32(ctx, 31, 0x362BA4u);
    ctx->pc = 0x362BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B9Cu;
    // 0x362ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362B9Cu, 0x362BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BA4u;
label_362ba4:
    // 0x362ba4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362BA4u;
    SET_GPR_U32(ctx, 31, 0x362BACu);
    ctx->pc = 0x362BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BA4u;
    // 0x362ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362BA4u, 0x362BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BACu;
label_362bac:
    // 0x362bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x362bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362bb8: 0xc102488  jal         func_409220
    ctx->pc = 0x362BB8u;
    SET_GPR_U32(ctx, 31, 0x362BC0u);
    ctx->pc = 0x362BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BB8u;
    // 0x362bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x362BB8u, 0x362BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BC0u;
label_362bc0:
    // 0x362bc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x362bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x362bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x362bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362bcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x362bccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x362bd0: 0xc0b3d20  jal         func_2CF480
    ctx->pc = 0x362BD0u;
    SET_GPR_U32(ctx, 31, 0x362BD8u);
    ctx->pc = 0x362BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362BD0u;
    // 0x362bd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF480u, 0x362BD0u, 0x362BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BD8u;
label_362bd8:
    // 0x362bd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x362bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362be0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x362be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x362be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362be8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x362be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362bf0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x362bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x362bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x362BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BF4u;
        // 0x362bf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BFCu;
    // 0x362bfc: 0x0  nop
    ctx->pc = 0x362bfcu;
    // NOP
    ctx->pc = 0x362c00u;
}
