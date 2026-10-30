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

// Function: sub_0032BD18
// Address: 0x32bd18 - 0x32be00
void sub_0032BD18_0x32bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BD18_0x32bd18");
#endif

    switch (ctx->pc) {
        case 0x32bd30u: goto label_32bd30;
        case 0x32bd38u: goto label_32bd38;
        case 0x32bdb4u: goto label_32bdb4;
        case 0x32bddcu: goto label_32bddc;
        case 0x32bde8u: goto label_32bde8;
        default: break;
    }

    ctx->pc = 0x32bd18u;

    // 0x32bd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bd20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bd28: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BD28u;
    SET_GPR_U32(ctx, 31, 0x32BD30u);
    ctx->pc = 0x32BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD28u;
    // 0x32bd2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BD28u, 0x32BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD30u;
label_32bd30:
    // 0x32bd30: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BD30u;
    SET_GPR_U32(ctx, 31, 0x32BD38u);
    ctx->pc = 0x32BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD30u;
    // 0x32bd34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BD30u, 0x32BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD38u;
label_32bd38:
    // 0x32bd38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32bd3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32bd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32bd40: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x32bd40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x32bd44: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x32bd44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bd48: 0x0  nop
    ctx->pc = 0x32bd48u;
    // NOP
    // 0x32bd4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x32BD4Cu;
    {
        const bool branch_taken_0x32bd4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bd4c) {
            ctx->pc = 0x32BD60u;
            goto label_32bd60;
        }
    }
    ctx->pc = 0x32BD54u;
    // 0x32bd54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32bd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bd58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32BD58u;
    {
        const bool branch_taken_0x32bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bd58) {
            ctx->pc = 0x32BDC8u;
            goto label_32bdc8;
        }
    }
    ctx->pc = 0x32BD60u;
label_32bd60:
    // 0x32bd60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32bd64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd68: 0x0  nop
    ctx->pc = 0x32bd68u;
    // NOP
    // 0x32bd6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32bd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bd70: 0x0  nop
    ctx->pc = 0x32bd70u;
    // NOP
    // 0x32bd74: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x32BD74u;
    {
        const bool branch_taken_0x32bd74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bd74) {
            ctx->pc = 0x32BD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BD74u;
            // 0x32bd78: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BD90u;
            goto label_32bd90;
        }
    }
    ctx->pc = 0x32BD7Cu;
    // 0x32bd7c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x32bd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x32bd80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x32bd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x32bd84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32bd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bd88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32BD88u;
    {
        const bool branch_taken_0x32bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bd88) {
            ctx->pc = 0x32BDC8u;
            goto label_32bdc8;
        }
    }
    ctx->pc = 0x32BD90u;
label_32bd90:
    // 0x32bd90: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x32bd90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x32bd94: 0x0  nop
    ctx->pc = 0x32bd94u;
    // NOP
    // 0x32bd98: 0x0  nop
    ctx->pc = 0x32bd98u;
    // NOP
    // 0x32bd9c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x32bd9cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x32bda0: 0x0  nop
    ctx->pc = 0x32bda0u;
    // NOP
    // 0x32bda4: 0x0  nop
    ctx->pc = 0x32bda4u;
    // NOP
    // 0x32bda8: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x32bda8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x32bdac: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x32BDACu;
    SET_GPR_U32(ctx, 31, 0x32BDB4u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x32BDACu, 0x32BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDB4u;
label_32bdb4:
    // 0x32bdb4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x32bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x32bdb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x32bdb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x32bdbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32bdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bdc0: 0x0  nop
    ctx->pc = 0x32bdc0u;
    // NOP
    // 0x32bdc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32bdc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32bdc8:
    // 0x32bdc8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x32bdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x32bdcc: 0x34212edf  ori         $at, $at, 0x2EDF
    ctx->pc = 0x32bdccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11999);
    // 0x32bdd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32bdd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32bdd4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BDD4u;
    SET_GPR_U32(ctx, 31, 0x32BDDCu);
    ctx->pc = 0x32BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDD4u;
    // 0x32bdd8: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BDD4u, 0x32BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDDCu;
label_32bddc:
    // 0x32bddc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bde0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BDE0u;
    SET_GPR_U32(ctx, 31, 0x32BDE8u);
    ctx->pc = 0x32BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDE0u;
    // 0x32bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BDE0u, 0x32BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDE8u;
label_32bde8:
    // 0x32bde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bdec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x32BDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDF4u;
        // 0x32bdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BDFCu;
    // 0x32bdfc: 0x0  nop
    ctx->pc = 0x32bdfcu;
    // NOP
    ctx->pc = 0x32be00u;
}
