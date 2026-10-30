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

// Function: sub_00107F60
// Address: 0x107f60 - 0x108200
void sub_00107F60_0x107f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107F60_0x107f60");
#endif

    switch (ctx->pc) {
        case 0x108018u: goto label_108018;
        case 0x108058u: goto label_108058;
        case 0x108070u: goto label_108070;
        case 0x108084u: goto label_108084;
        case 0x1080dcu: goto label_1080dc;
        case 0x1080f4u: goto label_1080f4;
        case 0x108114u: goto label_108114;
        case 0x10814cu: goto label_10814c;
        case 0x108164u: goto label_108164;
        case 0x108184u: goto label_108184;
        case 0x1081dcu: goto label_1081dc;
        default: break;
    }

    ctx->pc = 0x107f60u;

    // 0x107f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107f64: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x107f68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x107f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x107f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x107f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f7c: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x107f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107f84: 0x0  nop
    ctx->pc = 0x107f84u;
    // NOP
    // 0x107f88: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x107F88u;
    {
        const bool branch_taken_0x107f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107f88) {
            ctx->pc = 0x107F9Cu;
            goto label_107f9c;
        }
    }
    ctx->pc = 0x107F90u;
    // 0x107f90: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x107f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x107f94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x107F94u;
    {
        const bool branch_taken_0x107f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F94u;
        // 0x107f98: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f94) {
            ctx->pc = 0x108010u;
            goto label_108010;
        }
    }
    ctx->pc = 0x107F9Cu;
label_107f9c:
    // 0x107f9c: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x107fa0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x107fa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107fa8: 0x0  nop
    ctx->pc = 0x107fa8u;
    // NOP
    // 0x107fac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x107facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107fb0: 0x0  nop
    ctx->pc = 0x107fb0u;
    // NOP
    // 0x107fb4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x107FB4u;
    {
        const bool branch_taken_0x107fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107fb4) {
            ctx->pc = 0x107FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107FB4u;
            // 0x107fb8: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FE8u;
            goto label_107fe8;
        }
    }
    ctx->pc = 0x107FBCu;
    // 0x107fbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x107fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x107fc0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x107fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x107fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107fc8: 0x0  nop
    ctx->pc = 0x107fc8u;
    // NOP
    // 0x107fcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107fd0: 0x0  nop
    ctx->pc = 0x107fd0u;
    // NOP
    // 0x107fd4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x107FD4u;
    {
        const bool branch_taken_0x107fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107fd4) {
            ctx->pc = 0x107FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107FD4u;
            // 0x107fd8: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FE8u;
            goto label_107fe8;
        }
    }
    ctx->pc = 0x107FDCu;
    // 0x107fdc: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x107fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x107fe0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107FE0u;
    {
        const bool branch_taken_0x107fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FE0u;
        // 0x107fe4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fe0) {
            ctx->pc = 0x108010u;
            goto label_108010;
        }
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0x3c01403f  lui         $at, 0x403F
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16447 << 16));
    // 0x107fec: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x107fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x107ff0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x107ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107ff4: 0x0  nop
    ctx->pc = 0x107ff4u;
    // NOP
    // 0x107ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107ffc: 0x0  nop
    ctx->pc = 0x107ffcu;
    // NOP
    // 0x108000: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x108000u;
    {
        const bool branch_taken_0x108000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108000u;
        // 0x108004: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108000) {
            ctx->pc = 0x108028u;
            goto label_108028;
        }
    }
    ctx->pc = 0x108008u;
    // 0x108008: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x108008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10800c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x10800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_108010:
    // 0x108010: 0xc041338  jal         func_104CE0
    ctx->pc = 0x108010u;
    SET_GPR_U32(ctx, 31, 0x108018u);
    ctx->pc = 0x108014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108010u;
    // 0x108014: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108010u, 0x108018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108018u;
label_108018:
    // 0x108018: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x108018u;
    {
        const bool branch_taken_0x108018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108018u;
        // 0x10801c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108018) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x108020u;
    // 0x108020: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x108020u;
    {
        const bool branch_taken_0x108020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108020u;
        // 0x108024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108020) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x108028u;
label_108028:
    // 0x108028: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x10802c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x10802cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x108030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108034: 0x0  nop
    ctx->pc = 0x108034u;
    // NOP
    // 0x108038: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x108038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10803c: 0x0  nop
    ctx->pc = 0x10803cu;
    // NOP
    // 0x108040: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x108040u;
    {
        const bool branch_taken_0x108040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108040) {
            ctx->pc = 0x10808Cu;
            goto label_10808c;
        }
    }
    ctx->pc = 0x108048u;
    // 0x108048: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10804c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108050: 0xc041338  jal         func_104CE0
    ctx->pc = 0x108050u;
    SET_GPR_U32(ctx, 31, 0x108058u);
    ctx->pc = 0x108054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108050u;
    // 0x108054: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108050u, 0x108058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108058u;
label_108058:
    // 0x108058: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x108058u;
    {
        const bool branch_taken_0x108058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108058u;
        // 0x10805c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108058) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x108060u;
    // 0x108060: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x108060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x108064: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108068: 0xc041338  jal         func_104CE0
    ctx->pc = 0x108068u;
    SET_GPR_U32(ctx, 31, 0x108070u);
    ctx->pc = 0x10806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108068u;
    // 0x10806c: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108068u, 0x108070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108070u;
label_108070:
    // 0x108070: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x108070u;
    {
        const bool branch_taken_0x108070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108070u;
        // 0x108074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108070) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x108078u;
    // 0x108078: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x108078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10807c: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10807Cu;
    SET_GPR_U32(ctx, 31, 0x108084u);
    ctx->pc = 0x108080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10807Cu;
    // 0x108080: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10807Cu, 0x108084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108084u;
label_108084:
    // 0x108084: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x108084u;
    {
        const bool branch_taken_0x108084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108084u;
        // 0x108088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108084) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x10808Cu;
label_10808c:
    // 0x10808c: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x10808cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x108090: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x108090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x108094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108098: 0x0  nop
    ctx->pc = 0x108098u;
    // NOP
    // 0x10809c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x10809cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1080a0: 0x0  nop
    ctx->pc = 0x1080a0u;
    // NOP
    // 0x1080a4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1080A4u;
    {
        const bool branch_taken_0x1080a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1080a4) {
            ctx->pc = 0x10811Cu;
            goto label_10811c;
        }
    }
    ctx->pc = 0x1080ACu;
    // 0x1080ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1080acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1080b0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1080b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1080b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1080b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1080b8: 0x0  nop
    ctx->pc = 0x1080b8u;
    // NOP
    // 0x1080bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1080bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1080c0: 0x0  nop
    ctx->pc = 0x1080c0u;
    // NOP
    // 0x1080c4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1080C4u;
    {
        const bool branch_taken_0x1080c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1080c4) {
            ctx->pc = 0x10811Cu;
            goto label_10811c;
        }
    }
    ctx->pc = 0x1080CCu;
    // 0x1080cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1080d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1080d4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x1080D4u;
    SET_GPR_U32(ctx, 31, 0x1080DCu);
    ctx->pc = 0x1080D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1080D4u;
    // 0x1080d8: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x1080D4u, 0x1080DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080DCu;
label_1080dc:
    // 0x1080dc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1080DCu;
    {
        const bool branch_taken_0x1080dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080DCu;
        // 0x1080e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080dc) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1080E4u;
    // 0x1080e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1080e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1080e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1080e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1080ec: 0xc041338  jal         func_104CE0
    ctx->pc = 0x1080ECu;
    SET_GPR_U32(ctx, 31, 0x1080F4u);
    ctx->pc = 0x1080F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1080ECu;
    // 0x1080f0: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x1080ECu, 0x1080F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080F4u;
label_1080f4:
    // 0x1080f4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1080F4u;
    {
        const bool branch_taken_0x1080f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f4) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1080FCu;
    // 0x1080fc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1080fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108104: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108108: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10810c: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10810Cu;
    SET_GPR_U32(ctx, 31, 0x108114u);
    ctx->pc = 0x108110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10810Cu;
    // 0x108110: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10810Cu, 0x108114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108114u;
label_108114:
    // 0x108114: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x108114u;
    {
        const bool branch_taken_0x108114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108114u;
        // 0x108118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108114) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x10811Cu;
label_10811c:
    // 0x10811c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x108120: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x108120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x108124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108128: 0x0  nop
    ctx->pc = 0x108128u;
    // NOP
    // 0x10812c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x10812cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108130: 0x0  nop
    ctx->pc = 0x108130u;
    // NOP
    // 0x108134: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x108134u;
    {
        const bool branch_taken_0x108134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108134) {
            ctx->pc = 0x10818Cu;
            goto label_10818c;
        }
    }
    ctx->pc = 0x10813Cu;
    // 0x10813c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x108140: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108144: 0xc041338  jal         func_104CE0
    ctx->pc = 0x108144u;
    SET_GPR_U32(ctx, 31, 0x10814Cu);
    ctx->pc = 0x108148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108144u;
    // 0x108148: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108144u, 0x10814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10814Cu;
label_10814c:
    // 0x10814c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10814Cu;
    {
        const bool branch_taken_0x10814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10814Cu;
        // 0x108150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10814c) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x108154u;
    // 0x108154: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x108154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x108158: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10815c: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10815Cu;
    SET_GPR_U32(ctx, 31, 0x108164u);
    ctx->pc = 0x108160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10815Cu;
    // 0x108160: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10815Cu, 0x108164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108164u;
label_108164:
    // 0x108164: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x108164u;
    {
        const bool branch_taken_0x108164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108164u;
        // 0x108168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108164) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x10816Cu;
    // 0x10816c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x10816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108170: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x108170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x108174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108178: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10817c: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10817Cu;
    SET_GPR_U32(ctx, 31, 0x108184u);
    ctx->pc = 0x108180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10817Cu;
    // 0x108180: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10817Cu, 0x108184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108184u;
label_108184:
    // 0x108184: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x108184u;
    {
        const bool branch_taken_0x108184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108184u;
        // 0x108188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108184) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x10818Cu;
label_10818c:
    // 0x10818c: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x108190: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x108190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x108194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108198: 0x0  nop
    ctx->pc = 0x108198u;
    // NOP
    // 0x10819c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x10819cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1081a0: 0x0  nop
    ctx->pc = 0x1081a0u;
    // NOP
    // 0x1081a4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1081A4u;
    {
        const bool branch_taken_0x1081a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081A4u;
        // 0x1081a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081a4) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1081ACu;
    // 0x1081ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1081b0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1081b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1081b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1081b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1081b8: 0x0  nop
    ctx->pc = 0x1081b8u;
    // NOP
    // 0x1081bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1081bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1081c0: 0x0  nop
    ctx->pc = 0x1081c0u;
    // NOP
    // 0x1081c4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1081C4u;
    {
        const bool branch_taken_0x1081c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1081c4) {
            ctx->pc = 0x1081C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1081C4u;
            // 0x1081c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1081F0u;
            goto label_1081f0;
        }
    }
    ctx->pc = 0x1081CCu;
    // 0x1081cc: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x1081ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1081d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1081d4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x1081D4u;
    SET_GPR_U32(ctx, 31, 0x1081DCu);
    ctx->pc = 0x1081D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1081D4u;
    // 0x1081d8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x1081D4u, 0x1081DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081DCu;
label_1081dc:
    // 0x1081dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1081dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1081E0u;
    {
        const bool branch_taken_0x1081e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E0u;
        // 0x1081e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081e0) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1081E8u;
    // 0x1081e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1081e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1081ec:
    // 0x1081ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1081ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1081f0:
    // 0x1081f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1081f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1081f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1081F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081F4u;
        // 0x1081f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081FCu;
    // 0x1081fc: 0x0  nop
    ctx->pc = 0x1081fcu;
    // NOP
    ctx->pc = 0x108200u;
}
