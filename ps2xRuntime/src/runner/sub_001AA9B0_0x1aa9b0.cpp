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

// Function: sub_001AA9B0
// Address: 0x1aa9b0 - 0x1aaba8
void sub_001AA9B0_0x1aa9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA9B0_0x1aa9b0");
#endif

    switch (ctx->pc) {
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aab94u: goto label_1aab94;
        default: break;
    }

    ctx->pc = 0x1aa9b0u;

    // 0x1aa9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa9b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aa9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aa9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9c0: 0x8e020a98  lw          $v0, 0xA98($s0)
    ctx->pc = 0x1aa9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2712)));
    // 0x1aa9c4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1AA9C4u;
    {
        const bool branch_taken_0x1aa9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9C4u;
        // 0x1aa9c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9c4) {
            ctx->pc = 0x1AAB94u;
            goto label_1aab94;
        }
    }
    ctx->pc = 0x1AA9CCu;
    // 0x1aa9cc: 0x8e040a90  lw          $a0, 0xA90($s0)
    ctx->pc = 0x1aa9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x1aa9d0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1aa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x1aa9d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1aa9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1aa9d8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1aa9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1aa9dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AA9DCu;
    SET_GPR_U32(ctx, 31, 0x1AA9E4u);
    ctx->pc = 0x1AA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9DCu;
    // 0x1aa9e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AA9DCu, 0x1AA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9E4u;
label_1aa9e4:
    // 0x1aa9e4: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x1AA9E4u;
    {
        const bool branch_taken_0x1aa9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9e4) {
            ctx->pc = 0x1AA9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA9E4u;
            // 0x1aa9e8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB60u;
            goto label_1aab60;
        }
    }
    ctx->pc = 0x1AA9ECu;
    // 0x1aa9ec: 0xc087502  jal         func_21D408
    ctx->pc = 0x1AA9ECu;
    SET_GPR_U32(ctx, 31, 0x1AA9F4u);
    ctx->pc = 0x1AA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9ECu;
    // 0x1aa9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1AA9ECu, 0x1AA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9F4u;
label_1aa9f4:
    // 0x1aa9f4: 0x8c46020c  lw          $a2, 0x20C($v0)
    ctx->pc = 0x1aa9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1aa9f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aa9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1aa9fc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x1aa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x1aaa00: 0x8cc405e8  lw          $a0, 0x5E8($a2)
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1512)));
    // 0x1aaa04: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AAA04u;
    {
        const bool branch_taken_0x1aaa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA04u;
        // 0x1aaa08: 0x8c650048  lw          $a1, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa04) {
            ctx->pc = 0x1AAAA8u;
            goto label_1aaaa8;
        }
    }
    ctx->pc = 0x1AAA0Cu;
    // 0x1aaa0c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1aaa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1aaa10: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aaa14: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1aaa14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1aaa18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aaa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAA1Cu;
    {
        const bool branch_taken_0x1aaa1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA1Cu;
        // 0x1aaa20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa1c) {
            ctx->pc = 0x1AAA38u;
            goto label_1aaa38;
        }
    }
    ctx->pc = 0x1AAA24u;
    // 0x1aaa24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aaa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aaa28: 0x0  nop
    ctx->pc = 0x1aaa28u;
    // NOP
    // 0x1aaa2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aaa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aaa30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAA30u;
    {
        const bool branch_taken_0x1aaa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa30) {
            ctx->pc = 0x1AAA50u;
            goto label_1aaa50;
        }
    }
    ctx->pc = 0x1AAA38u;
label_1aaa38:
    // 0x1aaa38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aaa3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aaa40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aaa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aaa44: 0x0  nop
    ctx->pc = 0x1aaa44u;
    // NOP
    // 0x1aaa48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aaa48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aaa4c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1aaa4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1aaa50:
    // 0x1aaa50: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1aaa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1aaa54: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1aaa54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1aaa58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aaa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaa5c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1aaa60: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aaa60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aaa64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aaa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aaa68: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aaa68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aaa6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aaa6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaa70: 0x0  nop
    ctx->pc = 0x1aaa70u;
    // NOP
    // 0x1aaa74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAA74u;
    {
        const bool branch_taken_0x1aaa74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aaa74) {
            ctx->pc = 0x1AAA84u;
            goto label_1aaa84;
        }
    }
    ctx->pc = 0x1AAA7Cu;
    // 0x1aaa7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaa80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aaa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaa84:
    // 0x1aaa84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aaa84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aaa88: 0x0  nop
    ctx->pc = 0x1aaa88u;
    // NOP
    // 0x1aaa8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1aaa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaa90: 0x0  nop
    ctx->pc = 0x1aaa90u;
    // NOP
    // 0x1aaa94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AAA94u;
    {
        const bool branch_taken_0x1aaa94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aaa94) {
            ctx->pc = 0x1AAA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAA94u;
            // 0x1aaa98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAA9Cu;
            goto label_1aaa9c;
        }
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x1aaa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x1aaaa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAAA0u;
    {
        const bool branch_taken_0x1aaaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAA0u;
        // 0x1aaaa4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaa0) {
            ctx->pc = 0x1AAAB0u;
            goto label_1aaab0;
        }
    }
    ctx->pc = 0x1AAAA8u;
label_1aaaa8:
    // 0x1aaaa8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1aaaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1aaaac: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x1aaaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_1aaab0:
    // 0x1aaab0: 0x8cc205f0  lw          $v0, 0x5F0($a2)
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1520)));
    // 0x1aaab4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AAAB4u;
    {
        const bool branch_taken_0x1aaab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAB4u;
        // 0x1aaab8: 0x451823  subu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaab4) {
            ctx->pc = 0x1AAB54u;
            goto label_1aab54;
        }
    }
    ctx->pc = 0x1AAABCu;
    // 0x1aaabc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1aaabcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaac0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1aaac0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1aaac4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aaac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaac8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAAC8u;
    {
        const bool branch_taken_0x1aaac8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAC8u;
        // 0x1aaacc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaac8) {
            ctx->pc = 0x1AAAE4u;
            goto label_1aaae4;
        }
    }
    ctx->pc = 0x1AAAD0u;
    // 0x1aaad0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aaad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aaad4: 0x0  nop
    ctx->pc = 0x1aaad4u;
    // NOP
    // 0x1aaad8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aaad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aaadc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAADCu;
    {
        const bool branch_taken_0x1aaadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaadc) {
            ctx->pc = 0x1AAAFCu;
            goto label_1aaafc;
        }
    }
    ctx->pc = 0x1AAAE4u;
label_1aaae4:
    // 0x1aaae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aaae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aaae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aaae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aaaec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aaaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aaaf0: 0x0  nop
    ctx->pc = 0x1aaaf0u;
    // NOP
    // 0x1aaaf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aaaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aaaf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1aaaf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1aaafc:
    // 0x1aaafc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1aaafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1aab00: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1aab00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1aab04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aab08: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1aab0c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aab0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aab10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aab10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aab14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aab14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aab18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aab18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aab1c: 0x0  nop
    ctx->pc = 0x1aab1cu;
    // NOP
    // 0x1aab20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAB20u;
    {
        const bool branch_taken_0x1aab20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aab20) {
            ctx->pc = 0x1AAB30u;
            goto label_1aab30;
        }
    }
    ctx->pc = 0x1AAB28u;
    // 0x1aab28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aab2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aab2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aab30:
    // 0x1aab30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aab30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aab34: 0x0  nop
    ctx->pc = 0x1aab34u;
    // NOP
    // 0x1aab38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1aab38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aab3c: 0x0  nop
    ctx->pc = 0x1aab3cu;
    // NOP
    // 0x1aab40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AAB40u;
    {
        const bool branch_taken_0x1aab40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aab40) {
            ctx->pc = 0x1AAB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAB40u;
            // 0x1aab44: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB48u;
            goto label_1aab48;
        }
    }
    ctx->pc = 0x1AAB48u;
label_1aab48:
    // 0x1aab48: 0xe6000368  swc1        $f0, 0x368($s0)
    ctx->pc = 0x1aab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
    // 0x1aab4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAB4Cu;
    {
        const bool branch_taken_0x1aab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB4Cu;
        // 0x1aab50: 0xe6000258  swc1        $f0, 0x258($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab4c) {
            ctx->pc = 0x1AAB5Cu;
            goto label_1aab5c;
        }
    }
    ctx->pc = 0x1AAB54u;
label_1aab54:
    // 0x1aab54: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x1aab58: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x1aab58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
label_1aab5c:
    // 0x1aab5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aab60:
    // 0x1aab60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1aab60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1aab64: 0xc442d390  lwc1        $f2, -0x2C70($v0)
    ctx->pc = 0x1aab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aab68: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x1aab6c: 0xc461d394  lwc1        $f1, -0x2C6C($v1)
    ctx->pc = 0x1aab6cu;
    { uint32_t bits = FAST_READ32(0x50D394u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aab70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aab70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aab78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aab78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aab7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aab80: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1aab80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1aab84: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1aab84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aab88: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1aab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aab8c: 0xc079ce8  jal         func_1E73A0
    ctx->pc = 0x1AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB94u);
    ctx->pc = 0x1AAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB8Cu;
    // 0x1aab90: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73A0u, 0x1AAB8Cu, 0x1AAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB94u;
label_1aab94:
    // 0x1aab94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aab94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aab98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB9Cu;
        // 0x1aaba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AABA4u;
    // 0x1aaba4: 0x0  nop
    ctx->pc = 0x1aaba4u;
    // NOP
    ctx->pc = 0x1aaba8u;
}
