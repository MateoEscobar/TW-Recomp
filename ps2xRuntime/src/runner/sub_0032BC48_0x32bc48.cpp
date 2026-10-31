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

// Function: sub_0032BC48
// Address: 0x32bc48 - 0x32bd18
void sub_0032BC48_0x32bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BC48_0x32bc48");
#endif

    switch (ctx->pc) {
        case 0x32bc60u: goto label_32bc60;
        case 0x32bc68u: goto label_32bc68;
        case 0x32bce0u: goto label_32bce0;
        case 0x32bcf4u: goto label_32bcf4;
        case 0x32bd00u: goto label_32bd00;
        default: break;
    }

    ctx->pc = 0x32bc48u;

    // 0x32bc48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bc4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bc50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bc58: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BC58u;
    SET_GPR_U32(ctx, 31, 0x32BC60u);
    ctx->pc = 0x32BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC58u;
    // 0x32bc5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BC58u, 0x32BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC60u;
label_32bc60:
    // 0x32bc60: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BC60u;
    SET_GPR_U32(ctx, 31, 0x32BC68u);
    ctx->pc = 0x32BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC60u;
    // 0x32bc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BC60u, 0x32BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC68u;
label_32bc68:
    // 0x32bc68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32bc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32bc6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32bc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32bc70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x32bc70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x32bc74: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x32bc74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bc78: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x32bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x32bc7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x32bc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x32bc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bc84: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x32BC84u;
    {
        const bool branch_taken_0x32bc84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bc84) {
            ctx->pc = 0x32BCE0u;
            goto label_32bce0;
        }
    }
    ctx->pc = 0x32BC8Cu;
    // 0x32bc8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32bc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32bc90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bc94: 0x0  nop
    ctx->pc = 0x32bc94u;
    // NOP
    // 0x32bc98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32bc98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bc9c: 0x0  nop
    ctx->pc = 0x32bc9cu;
    // NOP
    // 0x32bca0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x32BCA0u;
    {
        const bool branch_taken_0x32bca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bca0) {
            ctx->pc = 0x32BCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BCA0u;
            // 0x32bca4: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BCBCu;
            goto label_32bcbc;
        }
    }
    ctx->pc = 0x32BCA8u;
    // 0x32bca8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x32bca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x32bcac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x32bcacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x32bcb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32BCB4u;
    {
        const bool branch_taken_0x32bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bcb4) {
            ctx->pc = 0x32BCE0u;
            goto label_32bce0;
        }
    }
    ctx->pc = 0x32BCBCu;
label_32bcbc:
    // 0x32bcbc: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x32bcbcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x32bcc0: 0x0  nop
    ctx->pc = 0x32bcc0u;
    // NOP
    // 0x32bcc4: 0x0  nop
    ctx->pc = 0x32bcc4u;
    // NOP
    // 0x32bcc8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x32bcc8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x32bccc: 0x0  nop
    ctx->pc = 0x32bcccu;
    // NOP
    // 0x32bcd0: 0x0  nop
    ctx->pc = 0x32bcd0u;
    // NOP
    // 0x32bcd4: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x32bcd4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x32bcd8: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x32BCD8u;
    SET_GPR_U32(ctx, 31, 0x32BCE0u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x32BCD8u, 0x32BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCE0u;
label_32bce0:
    // 0x32bce0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x32bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x32bce4: 0x34212edf  ori         $at, $at, 0x2EDF
    ctx->pc = 0x32bce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11999);
    // 0x32bce8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32bce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32bcec: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BCECu;
    SET_GPR_U32(ctx, 31, 0x32BCF4u);
    ctx->pc = 0x32BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCECu;
    // 0x32bcf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BCECu, 0x32BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCF4u;
label_32bcf4:
    // 0x32bcf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcf8: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BCF8u;
    SET_GPR_U32(ctx, 31, 0x32BD00u);
    ctx->pc = 0x32BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCF8u;
    // 0x32bcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BCF8u, 0x32BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD00u;
label_32bd00:
    // 0x32bd00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD0Cu;
        // 0x32bd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BD14u;
    // 0x32bd14: 0x0  nop
    ctx->pc = 0x32bd14u;
    // NOP
    ctx->pc = 0x32bd18u;
}
