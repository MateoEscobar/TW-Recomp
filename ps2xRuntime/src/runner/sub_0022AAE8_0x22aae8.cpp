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

// Function: sub_0022AAE8
// Address: 0x22aae8 - 0x22ae30
void sub_0022AAE8_0x22aae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AAE8_0x22aae8");
#endif

    switch (ctx->pc) {
        case 0x22ab78u: goto label_22ab78;
        case 0x22ab88u: goto label_22ab88;
        case 0x22ab94u: goto label_22ab94;
        case 0x22aba8u: goto label_22aba8;
        case 0x22abd0u: goto label_22abd0;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac90u: goto label_22ac90;
        case 0x22acf0u: goto label_22acf0;
        case 0x22ad08u: goto label_22ad08;
        case 0x22ad18u: goto label_22ad18;
        default: break;
    }

    ctx->pc = 0x22aae8u;

    // 0x22aae8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x22aae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x22aaec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x22aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x22aaf0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x22aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x22aaf4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x22aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x22aaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22aaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aafc: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x22aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x22ab00: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x22ab00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab04: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x22ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x22ab08: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22ab08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab0c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x22ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x22ab10: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x22ab10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab14: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x22ab18: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x22ab18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab1c: 0xe7ba0140  swc1        $f26, 0x140($sp)
    ctx->pc = 0x22ab1cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x22ab20: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x22ab20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab24: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x22ab24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x22ab28: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x22ab28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x22ab2c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x22ab2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x22ab30: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x22ab30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x22ab34: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x22ab34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x22ab38: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x22ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x22ab3c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x22ab3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x22ab40: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x22ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x22ab44: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x22ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x22ab48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22ab4c: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x22ab4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x22ab50: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x22ab50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x22ab54: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x22ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x22ab58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22ab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ab5c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x22ab5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ab60: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x22ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x22ab64: 0xe68c0000  swc1        $f12, 0x0($s4)
    ctx->pc = 0x22ab64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x22ab68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22ab68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22ab6c: 0xc46002cc  lwc1        $f0, 0x2CC($v1)
    ctx->pc = 0x22ab6cu;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ab70: 0xc08ab8c  jal         func_22AE30
    ctx->pc = 0x22AB70u;
    SET_GPR_U32(ctx, 31, 0x22AB78u);
    ctx->pc = 0x22AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB70u;
    // 0x22ab74: 0x46010682  mul.s       $f26, $f0, $f1 (Delay Slot)
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE30u, 0x22AB70u, 0x22AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB78u;
label_22ab78:
    // 0x22ab78: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x22ab78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x22ab7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab80: 0xc08abac  jal         func_22AEB0
    ctx->pc = 0x22AB80u;
    SET_GPR_U32(ctx, 31, 0x22AB88u);
    ctx->pc = 0x22AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB80u;
    // 0x22ab84: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x22AB80u, 0x22AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB88u;
label_22ab88:
    // 0x22ab88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ab88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab8c: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x22AB8Cu;
    SET_GPR_U32(ctx, 31, 0x22AB94u);
    ctx->pc = 0x22AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB8Cu;
    // 0x22ab90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x22AB8Cu, 0x22AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB94u;
label_22ab94:
    // 0x22ab94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab98: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x22ab98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x22ab9c: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x22AB9Cu;
    {
        const bool branch_taken_0x22ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB9Cu;
        // 0x22aba0: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab9c) {
            ctx->pc = 0x22ADE0u;
            goto label_22ade0;
        }
    }
    ctx->pc = 0x22ABA4u;
    // 0x22aba4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x22aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_22aba8:
    // 0x22aba8: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x22aba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22abac: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x22abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22abb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22abb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abb4: 0x7862fff0  lq          $v0, -0x10($v1)
    ctx->pc = 0x22abb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x22abb8: 0x12a00085  beqz        $s5, . + 4 + (0x85 << 2)
    ctx->pc = 0x22ABB8u;
    {
        const bool branch_taken_0x22abb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABB8u;
        // 0x22abbc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abb8) {
            ctx->pc = 0x22ADD0u;
            goto label_22add0;
        }
    }
    ctx->pc = 0x22ABC0u;
    // 0x22abc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22abc4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x22abc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x22abc8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x22abc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abcc: 0x0  nop
    ctx->pc = 0x22abccu;
    // NOP
label_22abd0:
    // 0x22abd0: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x22abd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22abd4: 0x0  nop
    ctx->pc = 0x22abd4u;
    // NOP
    // 0x22abd8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22ABD8u;
    {
        const bool branch_taken_0x22abd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABD8u;
        // 0x22abdc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abd8) {
            ctx->pc = 0x22AC00u;
            goto label_22ac00;
        }
    }
    ctx->pc = 0x22ABE0u;
    // 0x22abe0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x22abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x22abe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22abe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abe8: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x22abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22abec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abf0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x22abf0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x22abf4: 0x4617ad68  max.s       $f21, $f21, $f23
    ctx->pc = 0x22abf4u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[23]);
    // 0x22abf8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22ABF8u;
    {
        const bool branch_taken_0x22abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abf8) {
            ctx->pc = 0x22AC6Cu;
            goto label_22ac6c;
        }
    }
    ctx->pc = 0x22AC00u;
label_22ac00:
    // 0x22ac00: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x22ac00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ac04: 0x0  nop
    ctx->pc = 0x22ac04u;
    // NOP
    // 0x22ac08: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x22AC08u;
    {
        const bool branch_taken_0x22ac08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ac08) {
            ctx->pc = 0x22AC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AC08u;
            // 0x22ac0c: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AC98u;
            goto label_22ac98;
        }
    }
    ctx->pc = 0x22AC10u;
    // 0x22ac10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ac10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ac14: 0x0  nop
    ctx->pc = 0x22ac14u;
    // NOP
    // 0x22ac18: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x22ac18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ac1c: 0x0  nop
    ctx->pc = 0x22ac1cu;
    // NOP
    // 0x22ac20: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x22AC20u;
    {
        const bool branch_taken_0x22ac20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ac20) {
            ctx->pc = 0x22AC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AC20u;
            // 0x22ac24: 0x461aad40  add.s       $f21, $f21, $f26 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AC40u;
            goto label_22ac40;
        }
    }
    ctx->pc = 0x22AC28u;
    // 0x22ac28: 0x4619bd69  min.s       $f21, $f23, $f25
    ctx->pc = 0x22ac28u;
    ctx->f[21] = std::min(ctx->f[23], ctx->f[25]);
    // 0x22ac2c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x22ac30: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x22ac30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x22ac34: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x22ac34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x22ac38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22AC38u;
    {
        const bool branch_taken_0x22ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac38) {
            ctx->pc = 0x22AC6Cu;
            goto label_22ac6c;
        }
    }
    ctx->pc = 0x22AC40u;
label_22ac40:
    // 0x22ac40: 0x4615b801  sub.s       $f0, $f23, $f21
    ctx->pc = 0x22ac40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x22ac44: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x22ac44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ac48: 0x0  nop
    ctx->pc = 0x22ac48u;
    // NOP
    // 0x22ac4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22AC4Cu;
    {
        const bool branch_taken_0x22ac4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC4Cu;
        // 0x22ac50: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac4c) {
            ctx->pc = 0x22AC68u;
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22AC54u;
    // 0x22ac54: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x22ac58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22ac58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ac5c: 0xc46002cc  lwc1        $f0, 0x2CC($v1)
    ctx->pc = 0x22ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac64: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x22ac64u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_22ac68:
    // 0x22ac68: 0x4617ad69  min.s       $f21, $f21, $f23
    ctx->pc = 0x22ac68u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[23]);
label_22ac6c:
    // 0x22ac6c: 0xc08ab8c  jal         func_22AE30
    ctx->pc = 0x22AC6Cu;
    SET_GPR_U32(ctx, 31, 0x22AC74u);
    ctx->pc = 0x22AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC6Cu;
    // 0x22ac70: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE30u, 0x22AC6Cu, 0x22AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC74u;
label_22ac74:
    // 0x22ac74: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x22ac74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x22ac78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac7c: 0xc08abac  jal         func_22AEB0
    ctx->pc = 0x22AC7Cu;
    SET_GPR_U32(ctx, 31, 0x22AC84u);
    ctx->pc = 0x22AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC7Cu;
    // 0x22ac80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x22AC7Cu, 0x22AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC84u;
label_22ac84:
    // 0x22ac84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac88: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x22AC88u;
    SET_GPR_U32(ctx, 31, 0x22AC90u);
    ctx->pc = 0x22AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC88u;
    // 0x22ac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x22AC88u, 0x22AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC90u;
label_22ac90:
    // 0x22ac90: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x22ac90u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x22ac94: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x22ac94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_22ac98:
    // 0x22ac98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22ac9c: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x22ac9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22aca0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x22aca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22aca4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22aca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x22aca8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x22aca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22acac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x22acacu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22acb0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x22acb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22acb4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x22acb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22acb8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x22acb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22acbc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x22acbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22acc0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x22acc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22acc4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x22acc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x22acc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x22acc8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x22accc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x22acccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22acd0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x22acd0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22acd4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x22acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x22acd8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x22acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x22acdc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x22acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x22ace0: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x22ace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x22ace4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x22ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x22ace8: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x22ACE8u;
    SET_GPR_U32(ctx, 31, 0x22ACF0u);
    ctx->pc = 0x22ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACE8u;
    // 0x22acec: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x22ACE8u, 0x22ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF0u;
label_22acf0:
    // 0x22acf0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22acf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22acf4: 0xc68d0000  lwc1        $f13, 0x0($s4)
    ctx->pc = 0x22acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22acf8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x22acf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22acfc: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x22acfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x22ad00: 0xc0cdcee  jal         func_3373B8
    ctx->pc = 0x22AD00u;
    SET_GPR_U32(ctx, 31, 0x22AD08u);
    ctx->pc = 0x22AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD00u;
    // 0x22ad04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373B8u, 0x22AD00u, 0x22AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD08u;
label_22ad08:
    // 0x22ad08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ad0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22ad0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22ad10: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x22AD10u;
    SET_GPR_U32(ctx, 31, 0x22AD18u);
    ctx->pc = 0x22AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD10u;
    // 0x22ad14: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x22AD10u, 0x22AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD18u;
label_22ad18:
    // 0x22ad18: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x22ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad1c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x22ad1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ad20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22ad24: 0x4404b000  mfc1        $a0, $f22
    ctx->pc = 0x22ad24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x22ad28: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x22ad28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad2c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22ad2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x22ad30: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x22ad30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x22ad34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x22ad34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22ad38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x22ad38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22ad3c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x22ad3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x22ad40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22ad40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22ad44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22ad44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ad48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x22ad48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22ad4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22ad4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x22ad50: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x22ad50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22ad54: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x22ad54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22ad58: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x22ad58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22ad5c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x22ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x22ad60: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x22ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x22ad64: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x22ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x22ad68: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x22ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad6c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x22ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x22ad70: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x22ad70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x22ad74: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x22ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x22ad78: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22ad78u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22ad7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22ad7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad80: 0x0  nop
    ctx->pc = 0x22ad80u;
    // NOP
    // 0x22ad84: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x22AD84u;
    {
        const bool branch_taken_0x22ad84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD84u;
        // 0x22ad88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad84) {
            ctx->pc = 0x22ADE4u;
            goto label_22ade4;
        }
    }
    ctx->pc = 0x22AD8Cu;
    // 0x22ad8c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x22ad8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ad90: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x22ad90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x22ad94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22ad94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x22ad98: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x22ad98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22ad9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x22ad9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22ada0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x22ada0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22ada4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x22ada4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x22ada8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ada8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22adac: 0x0  nop
    ctx->pc = 0x22adacu;
    // NOP
    // 0x22adb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22adb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22adb4: 0x0  nop
    ctx->pc = 0x22adb4u;
    // NOP
    // 0x22adb8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22ADB8u;
    {
        const bool branch_taken_0x22adb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADB8u;
        // 0x22adbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adb8) {
            ctx->pc = 0x22ADE4u;
            goto label_22ade4;
        }
    }
    ctx->pc = 0x22ADC0u;
    // 0x22adc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22adc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22adc4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x22adc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x22adc8: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x22ADC8u;
    {
        const bool branch_taken_0x22adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22adc8) {
            ctx->pc = 0x22ABD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22abd0;
        }
    }
    ctx->pc = 0x22ADD0u;
label_22add0:
    // 0x22add0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x22add0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22add4: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x22add4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x22add8: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x22ADD8u;
    {
        const bool branch_taken_0x22add8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADD8u;
        // 0x22addc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22add8) {
            ctx->pc = 0x22ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22aba8;
        }
    }
    ctx->pc = 0x22ADE0u;
label_22ade0:
    // 0x22ade0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x22ade0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22ade4:
    // 0x22ade4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x22ade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22ade8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x22ade8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22adec: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x22adecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22adf0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x22adf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22adf4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x22adf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22adf8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x22adf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22adfc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x22adfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ae00: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x22ae00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ae04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x22ae04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ae08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22ae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ae0c: 0xc7ba0140  lwc1        $f26, 0x140($sp)
    ctx->pc = 0x22ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22ae10: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x22ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22ae14: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x22ae14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22ae18: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x22ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22ae1c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x22ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22ae20: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x22ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ae24: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x22ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE28u;
        // 0x22ae2c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AE30u;
}
