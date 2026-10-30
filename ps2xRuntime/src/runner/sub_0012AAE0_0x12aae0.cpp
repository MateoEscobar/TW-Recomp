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

// Function: sub_0012AAE0
// Address: 0x12aae0 - 0x12ac58
void sub_0012AAE0_0x12aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AAE0_0x12aae0");
#endif

    switch (ctx->pc) {
        case 0x12abd8u: goto label_12abd8;
        case 0x12ac14u: goto label_12ac14;
        case 0x12ac24u: goto label_12ac24;
        default: break;
    }

    ctx->pc = 0x12aae0u;

    // 0x12aae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12aae4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12aae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12aae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12aaec: 0xc484034c  lwc1        $f4, 0x34C($a0)
    ctx->pc = 0x12aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12aaf0: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x12aaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12aaf4: 0x0  nop
    ctx->pc = 0x12aaf4u;
    // NOP
    // 0x12aaf8: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x12AAF8u;
    {
        const bool branch_taken_0x12aaf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAF8u;
        // 0x12aafc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaf8) {
            ctx->pc = 0x12AC4Cu;
            goto label_12ac4c;
        }
    }
    ctx->pc = 0x12AB00u;
    // 0x12ab00: 0xc486032c  lwc1        $f6, 0x32C($a0)
    ctx->pc = 0x12ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12ab04: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x12ab08: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12ab08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x12ab0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ab10: 0x46062081  sub.s       $f2, $f4, $f6
    ctx->pc = 0x12ab10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x12ab14: 0x460010c5  abs.s       $f3, $f2
    ctx->pc = 0x12ab14u;
    ctx->f[3] = FPU_ABS_S(ctx->f[2]);
    // 0x12ab18: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x12ab18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ab1c: 0x0  nop
    ctx->pc = 0x12ab1cu;
    // NOP
    // 0x12ab20: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x12AB20u;
    {
        const bool branch_taken_0x12ab20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ab20) {
            ctx->pc = 0x12AB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AB20u;
            // 0x12ab24: 0xe484032c  swc1        $f4, 0x32C($a0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 812), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC2Cu;
            goto label_12ac2c;
        }
    }
    ctx->pc = 0x12AB28u;
    // 0x12ab28: 0x8c820448  lw          $v0, 0x448($a0)
    ctx->pc = 0x12ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1096)));
    // 0x12ab2c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x12ab30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ab34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AB34u;
    {
        const bool branch_taken_0x12ab34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB34u;
        // 0x12ab38: 0xc481040c  lwc1        $f1, 0x40C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab34) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AB3Cu;
    // 0x12ab3c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x12ab3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x12ab40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ab44:
    // 0x12ab44: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x12ab44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ab48: 0x0  nop
    ctx->pc = 0x12ab48u;
    // NOP
    // 0x12ab4c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x12AB4Cu;
    {
        const bool branch_taken_0x12ab4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ab4c) {
            ctx->pc = 0x12AB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AB4Cu;
            // 0x12ab50: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AB6Cu;
            goto label_12ab6c;
        }
    }
    ctx->pc = 0x12AB54u;
    // 0x12ab54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12ab58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ab5c: 0x0  nop
    ctx->pc = 0x12ab5cu;
    // NOP
    // 0x12ab60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12ab60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12ab64: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x12ab64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x12ab68: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12ab68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_12ab6c:
    // 0x12ab6c: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x12ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ab70: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x12ab70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ab74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12ab74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12ab78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12AB78u;
    {
        const bool branch_taken_0x12ab78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB78u;
        // 0x12ab7c: 0x460030c0  add.s       $f3, $f6, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab78) {
            ctx->pc = 0x12AB8Cu;
            goto label_12ab8c;
        }
    }
    ctx->pc = 0x12AB80u;
    // 0x12ab80: 0x460418e8  max.s       $f3, $f3, $f4
    ctx->pc = 0x12ab80u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[4]);
    // 0x12ab84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12AB84u;
    {
        const bool branch_taken_0x12ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB84u;
        // 0x12ab88: 0xc4840300  lwc1        $f4, 0x300($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab84) {
            ctx->pc = 0x12AB94u;
            goto label_12ab94;
        }
    }
    ctx->pc = 0x12AB8Cu;
label_12ab8c:
    // 0x12ab8c: 0x460418e9  min.s       $f3, $f3, $f4
    ctx->pc = 0x12ab8cu;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[4]);
    // 0x12ab90: 0xc4840300  lwc1        $f4, 0x300($a0)
    ctx->pc = 0x12ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12ab94:
    // 0x12ab94: 0xc48c0308  lwc1        $f12, 0x308($a0)
    ctx->pc = 0x12ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ab98: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12ab98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x12ab9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ab9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aba4: 0x46046041  sub.s       $f1, $f12, $f4
    ctx->pc = 0x12aba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x12aba8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12abac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12abacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12abb0: 0xe483032c  swc1        $f3, 0x32C($a0)
    ctx->pc = 0x12abb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 812), bits); }
    // 0x12abb4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x12abb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x12abb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12abb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12abbc: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x12abbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x12abc0: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x12abc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12abc4: 0x0  nop
    ctx->pc = 0x12abc4u;
    // NOP
    // 0x12abc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12ABC8u;
    {
        const bool branch_taken_0x12abc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABC8u;
        // 0x12abcc: 0xe4800330  swc1        $f0, 0x330($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abc8) {
            ctx->pc = 0x12ABE0u;
            goto label_12abe0;
        }
    }
    ctx->pc = 0x12ABD0u;
    // 0x12abd0: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x12ABD0u;
    SET_GPR_U32(ctx, 31, 0x12ABD8u);
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12ABD0u, 0x12ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABD8u;
label_12abd8:
    // 0x12abd8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12ABD8u;
    {
        const bool branch_taken_0x12abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD8u;
        // 0x12abdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abd8) {
            ctx->pc = 0x12AC4Cu;
            goto label_12ac4c;
        }
    }
    ctx->pc = 0x12ABE0u;
label_12abe0:
    // 0x12abe0: 0xc4820304  lwc1        $f2, 0x304($a0)
    ctx->pc = 0x12abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12abe4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x12abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x12abe8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12abe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12abec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12abecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12abf0: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x12abf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x12abf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12abf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12abf8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x12abf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x12abfc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x12abfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ac00: 0x0  nop
    ctx->pc = 0x12ac00u;
    // NOP
    // 0x12ac04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12AC04u;
    {
        const bool branch_taken_0x12ac04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ac04) {
            ctx->pc = 0x12AC1Cu;
            goto label_12ac1c;
        }
    }
    ctx->pc = 0x12AC0Cu;
    // 0x12ac0c: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x12AC0Cu;
    SET_GPR_U32(ctx, 31, 0x12AC14u);
    ctx->pc = 0x12AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC0Cu;
    // 0x12ac10: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12AC0Cu, 0x12AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC14u;
label_12ac14:
    // 0x12ac14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12AC14u;
    {
        const bool branch_taken_0x12ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC14u;
        // 0x12ac18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac14) {
            ctx->pc = 0x12AC4Cu;
            goto label_12ac4c;
        }
    }
    ctx->pc = 0x12AC1Cu;
label_12ac1c:
    // 0x12ac1c: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x12AC1Cu;
    SET_GPR_U32(ctx, 31, 0x12AC24u);
    ctx->pc = 0x12AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC1Cu;
    // 0x12ac20: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12AC1Cu, 0x12AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC24u;
label_12ac24:
    // 0x12ac24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12AC24u;
    {
        const bool branch_taken_0x12ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC24u;
        // 0x12ac28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac24) {
            ctx->pc = 0x12AC4Cu;
            goto label_12ac4c;
        }
    }
    ctx->pc = 0x12AC2Cu;
label_12ac2c:
    // 0x12ac2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12ac2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12ac30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ac30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ac34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12ac38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ac38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ac3c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x12ac3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x12ac40: 0xe481034c  swc1        $f1, 0x34C($a0)
    ctx->pc = 0x12ac40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 844), bits); }
    // 0x12ac44: 0xe4800330  swc1        $f0, 0x330($a0)
    ctx->pc = 0x12ac44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
    // 0x12ac48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ac4c:
    // 0x12ac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC4Cu;
        // 0x12ac50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC54u;
    // 0x12ac54: 0x0  nop
    ctx->pc = 0x12ac54u;
    // NOP
    ctx->pc = 0x12ac58u;
}
