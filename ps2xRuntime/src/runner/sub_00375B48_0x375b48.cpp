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

// Function: sub_00375B48
// Address: 0x375b48 - 0x375ca0
void sub_00375B48_0x375b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375B48_0x375b48");
#endif

    switch (ctx->pc) {
        case 0x375b88u: goto label_375b88;
        case 0x375b90u: goto label_375b90;
        case 0x375ba4u: goto label_375ba4;
        case 0x375bacu: goto label_375bac;
        case 0x375bc0u: goto label_375bc0;
        case 0x375bd4u: goto label_375bd4;
        case 0x375be8u: goto label_375be8;
        case 0x375bfcu: goto label_375bfc;
        case 0x375c10u: goto label_375c10;
        case 0x375c28u: goto label_375c28;
        case 0x375c30u: goto label_375c30;
        case 0x375c44u: goto label_375c44;
        case 0x375c6cu: goto label_375c6c;
        default: break;
    }

    ctx->pc = 0x375b48u;

    // 0x375b48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x375b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x375b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375b50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x375b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x375b54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x375b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x375b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x375b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x375b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x375b64: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x375b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x375b68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x375b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x375b70: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x375b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x375b74: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x375b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x375b78: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x375b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x375b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375b80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375B80u;
    SET_GPR_U32(ctx, 31, 0x375B88u);
    ctx->pc = 0x375B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B80u;
    // 0x375b84: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375B80u, 0x375B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B88u;
label_375b88:
    // 0x375b88: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375B88u;
    SET_GPR_U32(ctx, 31, 0x375B90u);
    ctx->pc = 0x375B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B88u;
    // 0x375b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375B88u, 0x375B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B90u;
label_375b90:
    // 0x375b90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b94: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x375b94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375b9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375B9Cu;
    SET_GPR_U32(ctx, 31, 0x375BA4u);
    ctx->pc = 0x375BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B9Cu;
    // 0x375ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375B9Cu, 0x375BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BA4u;
label_375ba4:
    // 0x375ba4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375BA4u;
    SET_GPR_U32(ctx, 31, 0x375BACu);
    ctx->pc = 0x375BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BA4u;
    // 0x375ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375BA4u, 0x375BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BACu;
label_375bac:
    // 0x375bac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x375bacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375bb8: 0xc102488  jal         func_409220
    ctx->pc = 0x375BB8u;
    SET_GPR_U32(ctx, 31, 0x375BC0u);
    ctx->pc = 0x375BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BB8u;
    // 0x375bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375BB8u, 0x375BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BC0u;
label_375bc0:
    // 0x375bc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x375bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375bcc: 0xc102488  jal         func_409220
    ctx->pc = 0x375BCCu;
    SET_GPR_U32(ctx, 31, 0x375BD4u);
    ctx->pc = 0x375BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BCCu;
    // 0x375bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375BCCu, 0x375BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BD4u;
label_375bd4:
    // 0x375bd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bdc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375be0: 0xc102488  jal         func_409220
    ctx->pc = 0x375BE0u;
    SET_GPR_U32(ctx, 31, 0x375BE8u);
    ctx->pc = 0x375BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BE0u;
    // 0x375be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375BE0u, 0x375BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BE8u;
label_375be8:
    // 0x375be8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375bf4: 0xc102488  jal         func_409220
    ctx->pc = 0x375BF4u;
    SET_GPR_U32(ctx, 31, 0x375BFCu);
    ctx->pc = 0x375BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BF4u;
    // 0x375bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375BF4u, 0x375BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BFCu;
label_375bfc:
    // 0x375bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x375bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x375c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375c08: 0xc102488  jal         func_409220
    ctx->pc = 0x375C08u;
    SET_GPR_U32(ctx, 31, 0x375C10u);
    ctx->pc = 0x375C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C08u;
    // 0x375c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375C08u, 0x375C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C10u;
label_375c10:
    // 0x375c10: 0x34068020  ori         $a2, $zero, 0x8020
    ctx->pc = 0x375c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x375c14: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375c18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x375c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x375c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x375c20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375C20u;
    SET_GPR_U32(ctx, 31, 0x375C28u);
    ctx->pc = 0x375C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C20u;
    // 0x375c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375C20u, 0x375C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C28u;
label_375c28:
    // 0x375c28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375C28u;
    SET_GPR_U32(ctx, 31, 0x375C30u);
    ctx->pc = 0x375C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C28u;
    // 0x375c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375C28u, 0x375C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C30u;
label_375c30:
    // 0x375c30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x375c30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x375c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x375c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x375c3c: 0xc102488  jal         func_409220
    ctx->pc = 0x375C3Cu;
    SET_GPR_U32(ctx, 31, 0x375C44u);
    ctx->pc = 0x375C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C3Cu;
    // 0x375c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375C3Cu, 0x375C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C44u;
label_375c44:
    // 0x375c44: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x375c44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x375c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x375c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x375c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c54: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x375c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x375c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c5c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x375c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c60: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x375c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c64: 0xc0c59ee  jal         func_3167B8
    ctx->pc = 0x375C64u;
    SET_GPR_U32(ctx, 31, 0x375C6Cu);
    ctx->pc = 0x375C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C64u;
    // 0x375c68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3167B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3167B8u, 0x375C64u, 0x375C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C6Cu;
label_375c6c:
    // 0x375c6c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x375c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x375c70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c74: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x375c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x375c78: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x375c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375c7c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x375c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375c80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x375c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375c84: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x375c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375c88: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x375c88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375c8c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x375c8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375c94: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x375c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375c98: 0x3e00008  jr          $ra
    ctx->pc = 0x375C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C98u;
        // 0x375c9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375CA0u;
}
