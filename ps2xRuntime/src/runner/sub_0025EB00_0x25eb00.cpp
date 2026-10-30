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

// Function: sub_0025EB00
// Address: 0x25eb00 - 0x25ec28
void sub_0025EB00_0x25eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EB00_0x25eb00");
#endif

    switch (ctx->pc) {
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb08u: goto label_25eb08;
        case 0x25eb0cu: goto label_25eb0c;
        case 0x25eb10u: goto label_25eb10;
        case 0x25eb14u: goto label_25eb14;
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb5cu: goto label_25eb5c;
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        default: break;
    }

    ctx->pc = 0x25eb00u;

label_25eb00:
    // 0x25eb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25eb04:
    // 0x25eb04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25eb08:
    // 0x25eb08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25eb0c:
    // 0x25eb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25eb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25eb10:
    // 0x25eb10: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x25eb10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_25eb14:
    // 0x25eb14: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x25eb14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_25eb18:
    // 0x25eb18: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25eb18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_25eb1c:
    // 0x25eb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25eb20:
    // 0x25eb20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25eb24:
    // 0x25eb24: 0xc089b98  jal         func_226E60
label_25eb28:
    if (ctx->pc == 0x25EB28u) {
        ctx->pc = 0x25EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB24u;
        // 0x25eb28: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB2Cu;
        goto label_25eb2c;
    }
    ctx->pc = 0x25EB24u;
    SET_GPR_U32(ctx, 31, 0x25EB2Cu);
    ctx->pc = 0x25EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB24u;
    // 0x25eb28: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x25EB24u, 0x25EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB2Cu;
label_25eb2c:
    // 0x25eb2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25eb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25eb30:
    // 0x25eb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25eb34:
    // 0x25eb34: 0xc08a658  jal         func_229960
label_25eb38:
    if (ctx->pc == 0x25EB38u) {
        ctx->pc = 0x25EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB34u;
        // 0x25eb38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB3Cu;
        goto label_25eb3c;
    }
    ctx->pc = 0x25EB34u;
    SET_GPR_U32(ctx, 31, 0x25EB3Cu);
    ctx->pc = 0x25EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB34u;
    // 0x25eb38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x25EB34u, 0x25EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB3Cu;
label_25eb3c:
    // 0x25eb3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25eb3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25eb40:
    // 0x25eb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25eb44:
    // 0x25eb44: 0xc095142  jal         func_254508
label_25eb48:
    if (ctx->pc == 0x25EB48u) {
        ctx->pc = 0x25EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB44u;
        // 0x25eb48: 0x2405027d  addiu       $a1, $zero, 0x27D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB4Cu;
        goto label_25eb4c;
    }
    ctx->pc = 0x25EB44u;
    SET_GPR_U32(ctx, 31, 0x25EB4Cu);
    ctx->pc = 0x25EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB44u;
    // 0x25eb48: 0x2405027d  addiu       $a1, $zero, 0x27D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x25EB44u, 0x25EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB4Cu;
label_25eb4c:
    // 0x25eb4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25eb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25eb50:
    // 0x25eb50: 0x0  nop
    ctx->pc = 0x25eb50u;
    // NOP
label_25eb54:
    // 0x25eb54: 0x4602a832  c.eq.s      $f21, $f2
    ctx->pc = 0x25eb54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25eb58:
    // 0x25eb58: 0x0  nop
    ctx->pc = 0x25eb58u;
    // NOP
label_25eb5c:
    // 0x25eb5c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_25eb60:
    if (ctx->pc == 0x25EB60u) {
        ctx->pc = 0x25EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB5Cu;
        // 0x25eb60: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB64u;
        goto label_25eb64;
    }
    ctx->pc = 0x25EB5Cu;
    {
        const bool branch_taken_0x25eb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB5Cu;
        // 0x25eb60: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb5c) {
            ctx->pc = 0x25EB8Cu;
            goto label_25eb8c;
        }
    }
    ctx->pc = 0x25EB64u;
label_25eb64:
    // 0x25eb64: 0xc05d484  jal         func_175210
label_25eb68:
    if (ctx->pc == 0x25EB68u) {
        ctx->pc = 0x25EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB64u;
        // 0x25eb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB6Cu;
        goto label_25eb6c;
    }
    ctx->pc = 0x25EB64u;
    SET_GPR_U32(ctx, 31, 0x25EB6Cu);
    ctx->pc = 0x25EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB64u;
    // 0x25eb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25EB64u, 0x25EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB6Cu;
label_25eb6c:
    // 0x25eb6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25eb70:
    // 0x25eb70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25eb70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25eb74:
    // 0x25eb74: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_25eb78:
    // 0x25eb78: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x25eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_25eb7c:
    // 0x25eb7c: 0xa0f809  jalr        $a1
label_25eb80:
    if (ctx->pc == 0x25EB80u) {
        ctx->pc = 0x25EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB7Cu;
        // 0x25eb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB84u;
        goto label_25eb84;
    }
    ctx->pc = 0x25EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25EB84u);
        ctx->pc = 0x25EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB7Cu;
        // 0x25eb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB7Cu, 0x25EB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EB84u;
label_25eb84:
    // 0x25eb84: 0x10000020  b           . + 4 + (0x20 << 2)
label_25eb88:
    if (ctx->pc == 0x25EB88u) {
        ctx->pc = 0x25EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB84u;
        // 0x25eb88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB8Cu;
        goto label_25eb8c;
    }
    ctx->pc = 0x25EB84u;
    {
        const bool branch_taken_0x25eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB84u;
        // 0x25eb88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb84) {
            ctx->pc = 0x25EC08u;
            goto label_25ec08;
        }
    }
    ctx->pc = 0x25EB8Cu;
label_25eb8c:
    // 0x25eb8c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_25eb90:
    if (ctx->pc == 0x25EB90u) {
        ctx->pc = 0x25EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB8Cu;
        // 0x25eb90: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EB94u;
        goto label_25eb94;
    }
    ctx->pc = 0x25EB8Cu;
    {
        const bool branch_taken_0x25eb8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB8Cu;
        // 0x25eb90: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb8c) {
            ctx->pc = 0x25EBCCu;
            goto label_25ebcc;
        }
    }
    ctx->pc = 0x25EB94u;
label_25eb94:
    // 0x25eb94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25eb98:
    // 0x25eb98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25eb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25eb9c:
    // 0x25eb9c: 0x0  nop
    ctx->pc = 0x25eb9cu;
    // NOP
label_25eba0:
    // 0x25eba0: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x25eba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_25eba4:
    // 0x25eba4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25eba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25eba8:
    // 0x25eba8: 0x0  nop
    ctx->pc = 0x25eba8u;
    // NOP
label_25ebac:
    // 0x25ebac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_25ebb0:
    if (ctx->pc == 0x25EBB0u) {
        ctx->pc = 0x25EBB4u;
        goto label_25ebb4;
    }
    ctx->pc = 0x25EBACu;
    {
        const bool branch_taken_0x25ebac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ebac) {
            ctx->pc = 0x25EBCCu;
            goto label_25ebcc;
        }
    }
    ctx->pc = 0x25EBB4u;
label_25ebb4:
    // 0x25ebb4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x25ebb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ebb8:
    // 0x25ebb8: 0x0  nop
    ctx->pc = 0x25ebb8u;
    // NOP
label_25ebbc:
    // 0x25ebbc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25ebc0:
    if (ctx->pc == 0x25EBC0u) {
        ctx->pc = 0x25EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBBCu;
        // 0x25ebc0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBC4u;
        goto label_25ebc4;
    }
    ctx->pc = 0x25EBBCu;
    {
        const bool branch_taken_0x25ebbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBBCu;
        // 0x25ebc0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebbc) {
            ctx->pc = 0x25EBCCu;
            goto label_25ebcc;
        }
    }
    ctx->pc = 0x25EBC4u;
label_25ebc4:
    // 0x25ebc4: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x25ebc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_25ebc8:
    // 0x25ebc8: 0x46006541  sub.s       $f21, $f12, $f0
    ctx->pc = 0x25ebc8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_25ebcc:
    // 0x25ebcc: 0xc05d484  jal         func_175210
label_25ebd0:
    if (ctx->pc == 0x25EBD0u) {
        ctx->pc = 0x25EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBCCu;
        // 0x25ebd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBD4u;
        goto label_25ebd4;
    }
    ctx->pc = 0x25EBCCu;
    SET_GPR_U32(ctx, 31, 0x25EBD4u);
    ctx->pc = 0x25EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBCCu;
    // 0x25ebd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25EBCCu, 0x25EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBD4u;
label_25ebd4:
    // 0x25ebd4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x25ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_25ebd8:
    // 0x25ebd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25ebdc:
    // 0x25ebdc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_25ebe0:
    if (ctx->pc == 0x25EBE0u) {
        ctx->pc = 0x25EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBDCu;
        // 0x25ebe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBE4u;
        goto label_25ebe4;
    }
    ctx->pc = 0x25EBDCu;
    {
        const bool branch_taken_0x25ebdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBDCu;
        // 0x25ebe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebdc) {
            ctx->pc = 0x25EC08u;
            goto label_25ec08;
        }
    }
    ctx->pc = 0x25EBE4u;
label_25ebe4:
    // 0x25ebe4: 0xc05d484  jal         func_175210
label_25ebe8:
    if (ctx->pc == 0x25EBE8u) {
        ctx->pc = 0x25EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBE4u;
        // 0x25ebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EBECu;
        goto label_25ebec;
    }
    ctx->pc = 0x25EBE4u;
    SET_GPR_U32(ctx, 31, 0x25EBECu);
    ctx->pc = 0x25EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBE4u;
    // 0x25ebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25EBE4u, 0x25EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBECu;
label_25ebec:
    // 0x25ebec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ebf0:
    // 0x25ebf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25ebf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25ebf4:
    // 0x25ebf4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25ebf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25ebf8:
    // 0x25ebf8: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x25ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25ebfc:
    // 0x25ebfc: 0xa0f809  jalr        $a1
label_25ec00:
    if (ctx->pc == 0x25EC00u) {
        ctx->pc = 0x25EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBFCu;
        // 0x25ec00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC04u;
        goto label_25ec04;
    }
    ctx->pc = 0x25EBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25EC04u);
        ctx->pc = 0x25EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBFCu;
        // 0x25ec00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EBFCu, 0x25EC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EC04u;
label_25ec04:
    // 0x25ec04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25ec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25ec08:
    // 0x25ec08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25ec08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25ec0c:
    // 0x25ec0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25ec0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25ec10:
    // 0x25ec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ec14:
    // 0x25ec14: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x25ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25ec18:
    // 0x25ec18: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25ec1c:
    // 0x25ec1c: 0x3e00008  jr          $ra
label_25ec20:
    if (ctx->pc == 0x25EC20u) {
        ctx->pc = 0x25EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC1Cu;
        // 0x25ec20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EC24u;
        goto label_25ec24;
    }
    ctx->pc = 0x25EC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC1Cu;
        // 0x25ec20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC24u;
label_25ec24:
    // 0x25ec24: 0x0  nop
    ctx->pc = 0x25ec24u;
    // NOP
    ctx->pc = 0x25ec28u;
}
