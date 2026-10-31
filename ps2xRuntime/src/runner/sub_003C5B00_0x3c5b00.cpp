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

// Function: sub_003C5B00
// Address: 0x3c5b00 - 0x3c5c18
void sub_003C5B00_0x3c5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5B00_0x3c5b00");
#endif

    switch (ctx->pc) {
        case 0x3c5b60u: goto label_3c5b60;
        case 0x3c5b6cu: goto label_3c5b6c;
        case 0x3c5b78u: goto label_3c5b78;
        case 0x3c5b84u: goto label_3c5b84;
        case 0x3c5b90u: goto label_3c5b90;
        case 0x3c5b9cu: goto label_3c5b9c;
        case 0x3c5ba8u: goto label_3c5ba8;
        case 0x3c5bb4u: goto label_3c5bb4;
        case 0x3c5bc0u: goto label_3c5bc0;
        case 0x3c5bccu: goto label_3c5bcc;
        case 0x3c5bdcu: goto label_3c5bdc;
        case 0x3c5be4u: goto label_3c5be4;
        default: break;
    }

    ctx->pc = 0x3c5b00u;

    // 0x3c5b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c5b04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c5b08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c5b0c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c5b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c5b1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b20: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c5b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c5b24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b28: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3c5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3c5b2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c5b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b30: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x3c5b30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3c5b34: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3c5b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5b38: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3c5b38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3c5b3c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x3c5b3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x3c5b40: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3c5b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3c5b44: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3c5b44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x3c5b48: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3c5b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3c5b4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3c5b4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3c5b50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5b58: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5B58u;
    SET_GPR_U32(ctx, 31, 0x3C5B60u);
    ctx->pc = 0x3C5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B58u;
    // 0x3c5b5c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5B58u, 0x3C5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B60u;
label_3c5b60:
    // 0x3c5b60: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5b64: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5B64u;
    SET_GPR_U32(ctx, 31, 0x3C5B6Cu);
    ctx->pc = 0x3C5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B64u;
    // 0x3c5b68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5B64u, 0x3C5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B6Cu;
label_3c5b6c:
    // 0x3c5b6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5b70: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5B70u;
    SET_GPR_U32(ctx, 31, 0x3C5B78u);
    ctx->pc = 0x3C5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B70u;
    // 0x3c5b74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5B70u, 0x3C5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B78u;
label_3c5b78:
    // 0x3c5b78: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5b7c: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5B7Cu;
    SET_GPR_U32(ctx, 31, 0x3C5B84u);
    ctx->pc = 0x3C5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B7Cu;
    // 0x3c5b80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5B7Cu, 0x3C5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B84u;
label_3c5b84:
    // 0x3c5b84: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5b88: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5B88u;
    SET_GPR_U32(ctx, 31, 0x3C5B90u);
    ctx->pc = 0x3C5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B88u;
    // 0x3c5b8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5B88u, 0x3C5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B90u;
label_3c5b90:
    // 0x3c5b90: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5b94: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5B94u;
    SET_GPR_U32(ctx, 31, 0x3C5B9Cu);
    ctx->pc = 0x3C5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B94u;
    // 0x3c5b98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5B94u, 0x3C5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B9Cu;
label_3c5b9c:
    // 0x3c5b9c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5ba0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5BA0u;
    SET_GPR_U32(ctx, 31, 0x3C5BA8u);
    ctx->pc = 0x3C5BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BA0u;
    // 0x3c5ba4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5BA0u, 0x3C5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BA8u;
label_3c5ba8:
    // 0x3c5ba8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5bac: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5BACu;
    SET_GPR_U32(ctx, 31, 0x3C5BB4u);
    ctx->pc = 0x3C5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BACu;
    // 0x3c5bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5BACu, 0x3C5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BB4u;
label_3c5bb4:
    // 0x3c5bb4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5bb8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5BB8u;
    SET_GPR_U32(ctx, 31, 0x3C5BC0u);
    ctx->pc = 0x3C5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BB8u;
    // 0x3c5bbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5BB8u, 0x3C5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BC0u;
label_3c5bc0:
    // 0x3c5bc0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5bc4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5BC4u;
    SET_GPR_U32(ctx, 31, 0x3C5BCCu);
    ctx->pc = 0x3C5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BC4u;
    // 0x3c5bc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5BC4u, 0x3C5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BCCu;
label_3c5bcc:
    // 0x3c5bcc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5bd0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5bd4: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5BD4u;
    SET_GPR_U32(ctx, 31, 0x3C5BDCu);
    ctx->pc = 0x3C5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BD4u;
    // 0x3c5bd8: 0x24a540d8  addiu       $a1, $a1, 0x40D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5BD4u, 0x3C5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BDCu;
label_3c5bdc:
    // 0x3c5bdc: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5BDCu;
    SET_GPR_U32(ctx, 31, 0x3C5BE4u);
    ctx->pc = 0x3C5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BDCu;
    // 0x3c5be0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5BDCu, 0x3C5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BE4u;
label_3c5be4:
    // 0x3c5be4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c5be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c5be8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c5be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c5bec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c5becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c5bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5bf4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c5bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5bf8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3c5bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5c00: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x3c5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3c5c04: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x3c5c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3c5c08: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3c5c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c5c0c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3c5c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5c10: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C10u;
        // 0x3c5c14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5C18u;
}
