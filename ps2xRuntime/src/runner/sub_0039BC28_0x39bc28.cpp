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

// Function: sub_0039BC28
// Address: 0x39bc28 - 0x39bd50
void sub_0039BC28_0x39bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BC28_0x39bc28");
#endif

    switch (ctx->pc) {
        case 0x39bc64u: goto label_39bc64;
        case 0x39bc70u: goto label_39bc70;
        case 0x39bc80u: goto label_39bc80;
        case 0x39bc8cu: goto label_39bc8c;
        case 0x39bc9cu: goto label_39bc9c;
        case 0x39bca4u: goto label_39bca4;
        case 0x39bcacu: goto label_39bcac;
        case 0x39bcb8u: goto label_39bcb8;
        case 0x39bcc8u: goto label_39bcc8;
        case 0x39bcd0u: goto label_39bcd0;
        case 0x39bcd8u: goto label_39bcd8;
        case 0x39bce4u: goto label_39bce4;
        case 0x39bcf4u: goto label_39bcf4;
        case 0x39bcfcu: goto label_39bcfc;
        case 0x39bd04u: goto label_39bd04;
        case 0x39bd10u: goto label_39bd10;
        case 0x39bd20u: goto label_39bd20;
        case 0x39bd28u: goto label_39bd28;
        default: break;
    }

    ctx->pc = 0x39bc28u;

    // 0x39bc28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39bc2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39bc30: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x39bc30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x39bc34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39bc34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc38: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x39bc38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x39bc3c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x39bc3cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x39bc40: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x39bc40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x39bc44: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x39bc44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x39bc48: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39bc4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x39bc4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x39bc50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x39bc54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x39bc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bc5c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39BC5Cu;
    SET_GPR_U32(ctx, 31, 0x39BC64u);
    ctx->pc = 0x39BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC5Cu;
    // 0x39bc60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39BC5Cu, 0x39BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC64u;
label_39bc64:
    // 0x39bc64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc68: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x39BC68u;
    SET_GPR_U32(ctx, 31, 0x39BC70u);
    ctx->pc = 0x39BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC68u;
    // 0x39bc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x39BC68u, 0x39BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC70u;
label_39bc70:
    // 0x39bc70: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x39BC70u;
    {
        const bool branch_taken_0x39bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC70u;
        // 0x39bc74: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc70) {
            ctx->pc = 0x39BD28u;
            goto label_39bd28;
        }
    }
    ctx->pc = 0x39BC78u;
    // 0x39bc78: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BC78u;
    SET_GPR_U32(ctx, 31, 0x39BC80u);
    ctx->pc = 0x39BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC78u;
    // 0x39bc7c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BC78u, 0x39BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC80u;
label_39bc80:
    // 0x39bc80: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bc84: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BC84u;
    SET_GPR_U32(ctx, 31, 0x39BC8Cu);
    ctx->pc = 0x39BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC84u;
    // 0x39bc88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BC84u, 0x39BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC8Cu;
label_39bc8c:
    // 0x39bc8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bc90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc94: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BC94u;
    SET_GPR_U32(ctx, 31, 0x39BC9Cu);
    ctx->pc = 0x39BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC94u;
    // 0x39bc98: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BC94u, 0x39BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC9Cu;
label_39bc9c:
    // 0x39bc9c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BC9Cu;
    SET_GPR_U32(ctx, 31, 0x39BCA4u);
    ctx->pc = 0x39BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC9Cu;
    // 0x39bca0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BC9Cu, 0x39BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCA4u;
label_39bca4:
    // 0x39bca4: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BCA4u;
    SET_GPR_U32(ctx, 31, 0x39BCACu);
    ctx->pc = 0x39BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCA4u;
    // 0x39bca8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BCA4u, 0x39BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCACu;
label_39bcac:
    // 0x39bcac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bcb0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x39BCB0u;
    SET_GPR_U32(ctx, 31, 0x39BCB8u);
    ctx->pc = 0x39BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCB0u;
    // 0x39bcb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39BCB0u, 0x39BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCB8u;
label_39bcb8:
    // 0x39bcb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bcbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39bcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bcc0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BCC0u;
    SET_GPR_U32(ctx, 31, 0x39BCC8u);
    ctx->pc = 0x39BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCC0u;
    // 0x39bcc4: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BCC0u, 0x39BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCC8u;
label_39bcc8:
    // 0x39bcc8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BCC8u;
    SET_GPR_U32(ctx, 31, 0x39BCD0u);
    ctx->pc = 0x39BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCC8u;
    // 0x39bccc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BCC8u, 0x39BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCD0u;
label_39bcd0:
    // 0x39bcd0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BCD0u;
    SET_GPR_U32(ctx, 31, 0x39BCD8u);
    ctx->pc = 0x39BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCD0u;
    // 0x39bcd4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BCD0u, 0x39BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCD8u;
label_39bcd8:
    // 0x39bcd8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bcdc: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x39BCDCu;
    SET_GPR_U32(ctx, 31, 0x39BCE4u);
    ctx->pc = 0x39BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCDCu;
    // 0x39bce0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39BCDCu, 0x39BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCE4u;
label_39bce4:
    // 0x39bce4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bcec: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BCECu;
    SET_GPR_U32(ctx, 31, 0x39BCF4u);
    ctx->pc = 0x39BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCECu;
    // 0x39bcf0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BCECu, 0x39BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCF4u;
label_39bcf4:
    // 0x39bcf4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BCF4u;
    SET_GPR_U32(ctx, 31, 0x39BCFCu);
    ctx->pc = 0x39BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCF4u;
    // 0x39bcf8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BCF4u, 0x39BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCFCu;
label_39bcfc:
    // 0x39bcfc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BCFCu;
    SET_GPR_U32(ctx, 31, 0x39BD04u);
    ctx->pc = 0x39BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCFCu;
    // 0x39bd00: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BCFCu, 0x39BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD04u;
label_39bd04:
    // 0x39bd04: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bd08: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x39BD08u;
    SET_GPR_U32(ctx, 31, 0x39BD10u);
    ctx->pc = 0x39BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD08u;
    // 0x39bd0c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39BD08u, 0x39BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD10u;
label_39bd10:
    // 0x39bd10: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bd14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd18: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BD18u;
    SET_GPR_U32(ctx, 31, 0x39BD20u);
    ctx->pc = 0x39BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD18u;
    // 0x39bd1c: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BD18u, 0x39BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD20u;
label_39bd20:
    // 0x39bd20: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BD20u;
    SET_GPR_U32(ctx, 31, 0x39BD28u);
    ctx->pc = 0x39BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD20u;
    // 0x39bd24: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BD20u, 0x39BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD28u;
label_39bd28:
    // 0x39bd28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39bd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bd2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39bd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bd30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39bd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bd34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bd38: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x39bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x39bd3c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x39bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x39bd40: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x39bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39bd44: 0x3e00008  jr          $ra
    ctx->pc = 0x39BD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD44u;
        // 0x39bd48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BD4Cu;
    // 0x39bd4c: 0x0  nop
    ctx->pc = 0x39bd4cu;
    // NOP
    ctx->pc = 0x39bd50u;
}
