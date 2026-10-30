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

// Function: sub_0024EEF0
// Address: 0x24eef0 - 0x24f290
void sub_0024EEF0_0x24eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EEF0_0x24eef0");
#endif

    switch (ctx->pc) {
        case 0x24ef1cu: goto label_24ef1c;
        case 0x24efd0u: goto label_24efd0;
        case 0x24f150u: goto label_24f150;
        default: break;
    }

    ctx->pc = 0x24eef0u;

    // 0x24eef0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24eef4: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x24eef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eef8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x24eef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eefc: 0x0  nop
    ctx->pc = 0x24eefcu;
    // NOP
    // 0x24ef00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24EF00u;
    {
        const bool branch_taken_0x24ef00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF00u;
        // 0x24ef04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef00) {
            ctx->pc = 0x24EF1Cu;
            goto label_24ef1c;
        }
    }
    ctx->pc = 0x24EF08u;
    // 0x24ef08: 0xc4840014  lwc1        $f4, 0x14($a0)
    ctx->pc = 0x24ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ef0c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x24ef0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef10: 0x0  nop
    ctx->pc = 0x24ef10u;
    // NOP
    // 0x24ef14: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x24EF14u;
    {
        const bool branch_taken_0x24ef14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ef14) {
            ctx->pc = 0x24EF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF14u;
            // 0x24ef18: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF24u;
            goto label_24ef24;
        }
    }
    ctx->pc = 0x24EF1Cu;
label_24ef1c:
    // 0x24ef1c: 0x3e00008  jr          $ra
    ctx->pc = 0x24EF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF1Cu;
        // 0x24ef20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EF24u;
label_24ef24:
    // 0x24ef24: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x24ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ef28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef2c: 0x0  nop
    ctx->pc = 0x24ef2cu;
    // NOP
    // 0x24ef30: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x24EF30u;
    {
        const bool branch_taken_0x24ef30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF30u;
        // 0x24ef34: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef30) {
            ctx->pc = 0x24EF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ef1c;
        }
    }
    ctx->pc = 0x24EF38u;
    // 0x24ef38: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x24ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ef3c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x24ef3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef40: 0x0  nop
    ctx->pc = 0x24ef40u;
    // NOP
    // 0x24ef44: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
    ctx->pc = 0x24EF44u;
    {
        const bool branch_taken_0x24ef44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ef44) {
            ctx->pc = 0x24EF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ef1c;
        }
    }
    ctx->pc = 0x24EF4Cu;
    // 0x24ef4c: 0x108000ce  beqz        $a0, . + 4 + (0xCE << 2)
    ctx->pc = 0x24EF4Cu;
    {
        const bool branch_taken_0x24ef4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF4Cu;
        // 0x24ef50: 0x9102a  slt         $v0, $zero, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef4c) {
            ctx->pc = 0x24F288u;
            goto label_24f288;
        }
    }
    ctx->pc = 0x24EF54u;
    // 0x24ef54: 0x84820028  lh          $v0, 0x28($a0)
    ctx->pc = 0x24ef54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x24ef58: 0x4400070  bltz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x24EF58u;
    {
        const bool branch_taken_0x24ef58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF58u;
        // 0x24ef5c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef58) {
            ctx->pc = 0x24F11Cu;
            goto label_24f11c;
        }
    }
    ctx->pc = 0x24EF60u;
    // 0x24ef60: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x24ef60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x24ef64: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x24ef64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x24ef68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ef68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ef6c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x24ef6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x24ef70: 0x8c4aa220  lw          $t2, -0x5DE0($v0)
    ctx->pc = 0x24ef70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943264)));
    // 0x24ef74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ef74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ef78: 0x0  nop
    ctx->pc = 0x24ef78u;
    // NOP
    // 0x24ef7c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24ef7cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x24ef80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ef80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ef84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24ef84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24ef88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24ef8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x24ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24ef90: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x24ef90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24ef94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24ef98: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x24ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x24ef9c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x24ef9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24efa0: 0x44000b8  bltz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x24EFA0u;
    {
        const bool branch_taken_0x24efa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFA0u;
        // 0x24efa4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efa0) {
            ctx->pc = 0x24F284u;
            goto label_24f284;
        }
    }
    ctx->pc = 0x24EFA8u;
    // 0x24efa8: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x24efa8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24efac: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x24efacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24efb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efb4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x24efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x24efb8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24efbc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x24efbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24efc0: 0x46003986  mov.s       $f6, $f7
    ctx->pc = 0x24efc0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[7]);
    // 0x24efc4: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x24efc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x24efc8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x24efc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24efcc: 0x0  nop
    ctx->pc = 0x24efccu;
    // NOP
label_24efd0:
    // 0x24efd0: 0x510c0001  beql        $t0, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EFD0u;
    {
        const bool branch_taken_0x24efd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x24efd0) {
            ctx->pc = 0x24EFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EFD0u;
            // 0x24efd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EFD8u;
            goto label_24efd8;
        }
    }
    ctx->pc = 0x24EFD8u;
label_24efd8:
    // 0x24efd8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x24efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x24efdc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x24efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x24efe0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x24efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24efe4: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x24efe4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24efe8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x24efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24efec: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x24efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x24eff0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x24eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24eff4: 0x1810  mfhi        $v1
    ctx->pc = 0x24eff4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24eff8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24effc: 0x1631021  addu        $v0, $t3, $v1
    ctx->pc = 0x24effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x24f000: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f004: 0x46012141  sub.s       $f5, $f4, $f1
    ctx->pc = 0x24f004u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x24f008: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x24f008u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x24f00c: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x24f00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f010: 0x0  nop
    ctx->pc = 0x24f010u;
    // NOP
    // 0x24f014: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
    ctx->pc = 0x24F014u;
    {
        const bool branch_taken_0x24f014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f014) {
            ctx->pc = 0x24F018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F014u;
            // 0x24f018: 0xea1021  addu        $v0, $a3, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F108u;
            goto label_24f108;
        }
    }
    ctx->pc = 0x24F01Cu;
    // 0x24f01c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f020: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x24f020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f024: 0x0  nop
    ctx->pc = 0x24f024u;
    // NOP
    // 0x24f028: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F028u;
    {
        const bool branch_taken_0x24f028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f028) {
            ctx->pc = 0x24F040u;
            goto label_24f040;
        }
    }
    ctx->pc = 0x24F030u;
    // 0x24f030: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x24f030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f034: 0x0  nop
    ctx->pc = 0x24f034u;
    // NOP
    // 0x24f038: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
    ctx->pc = 0x24F038u;
    {
        const bool branch_taken_0x24f038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f038) {
            ctx->pc = 0x24F03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F038u;
            // 0x24f03c: 0xea1021  addu        $v0, $a3, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F108u;
            goto label_24f108;
        }
    }
    ctx->pc = 0x24F040u;
label_24f040:
    // 0x24f040: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x24f040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f044: 0x0  nop
    ctx->pc = 0x24f044u;
    // NOP
    // 0x24f048: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24F048u;
    {
        const bool branch_taken_0x24f048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f048) {
            ctx->pc = 0x24F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F048u;
            // 0x24f04c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F064u;
            goto label_24f064;
        }
    }
    ctx->pc = 0x24F050u;
    // 0x24f050: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x24f050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f054: 0x0  nop
    ctx->pc = 0x24f054u;
    // NOP
    // 0x24f058: 0x4503002b  bc1tl       . + 4 + (0x2B << 2)
    ctx->pc = 0x24F058u;
    {
        const bool branch_taken_0x24f058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f058) {
            ctx->pc = 0x24F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F058u;
            // 0x24f05c: 0xea1021  addu        $v0, $a3, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F108u;
            goto label_24f108;
        }
    }
    ctx->pc = 0x24F060u;
    // 0x24f060: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f064:
    // 0x24f064: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x24f064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f068: 0x0  nop
    ctx->pc = 0x24f068u;
    // NOP
    // 0x24f06c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F06Cu;
    {
        const bool branch_taken_0x24f06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F06Cu;
        // 0x24f070: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f06c) {
            ctx->pc = 0x24F084u;
            goto label_24f084;
        }
    }
    ctx->pc = 0x24F074u;
    // 0x24f074: 0x46071034  c.lt.s      $f2, $f7
    ctx->pc = 0x24f074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f078: 0x0  nop
    ctx->pc = 0x24f078u;
    // NOP
    // 0x24f07c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x24F07Cu;
    {
        const bool branch_taken_0x24f07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f07c) {
            ctx->pc = 0x24F0D4u;
            goto label_24f0d4;
        }
    }
    ctx->pc = 0x24F084u;
label_24f084:
    // 0x24f084: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x24f084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f088: 0x0  nop
    ctx->pc = 0x24f088u;
    // NOP
    // 0x24f08c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F08Cu;
    {
        const bool branch_taken_0x24f08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f08c) {
            ctx->pc = 0x24F0A4u;
            goto label_24f0a4;
        }
    }
    ctx->pc = 0x24F094u;
    // 0x24f094: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x24f094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f098: 0x0  nop
    ctx->pc = 0x24f098u;
    // NOP
    // 0x24f09c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x24F09Cu;
    {
        const bool branch_taken_0x24f09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f09c) {
            ctx->pc = 0x24F0D4u;
            goto label_24f0d4;
        }
    }
    ctx->pc = 0x24F0A4u;
label_24f0a4:
    // 0x24f0a4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x24f0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f0a8: 0x0  nop
    ctx->pc = 0x24f0a8u;
    // NOP
    // 0x24f0ac: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x24F0ACu;
    {
        const bool branch_taken_0x24f0ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f0ac) {
            ctx->pc = 0x24F0D4u;
            goto label_24f0d4;
        }
    }
    ctx->pc = 0x24F0B4u;
    // 0x24f0b4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x24f0b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24f0b8: 0x0  nop
    ctx->pc = 0x24f0b8u;
    // NOP
    // 0x24f0bc: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x24f0bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x24f0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24f0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24f0c4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x24f0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24f0c8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x24f0c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24f0cc: 0x0  nop
    ctx->pc = 0x24f0ccu;
    // NOP
    // 0x24f0d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24f0d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_24f0d4:
    // 0x24f0d4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x24f0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f0d8: 0x0  nop
    ctx->pc = 0x24f0d8u;
    // NOP
    // 0x24f0dc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x24F0DCu;
    {
        const bool branch_taken_0x24f0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f0dc) {
            ctx->pc = 0x24F0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F0DCu;
            // 0x24f0e0: 0xea1021  addu        $v0, $a3, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F108u;
            goto label_24f108;
        }
    }
    ctx->pc = 0x24F0E4u;
    // 0x24f0e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f0e8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x24f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f0ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f0ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f0f0: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x24f0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f0f4: 0x0  nop
    ctx->pc = 0x24f0f4u;
    // NOP
    // 0x24f0f8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24F0F8u;
    {
        const bool branch_taken_0x24f0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f0f8) {
            ctx->pc = 0x24F0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F0F8u;
            // 0x24f0fc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F104u;
            goto label_24f104;
        }
    }
    ctx->pc = 0x24F100u;
    // 0x24f100: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x24f100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_24f104:
    // 0x24f104: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x24f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_24f108:
    // 0x24f108: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f10c: 0x463ffb0  bgezl       $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x24F10Cu;
    {
        const bool branch_taken_0x24f10c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x24f10c) {
            ctx->pc = 0x24F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F10Cu;
            // 0x24f110: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24efd0;
        }
    }
    ctx->pc = 0x24F114u;
    // 0x24f114: 0x3e00008  jr          $ra
    ctx->pc = 0x24F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F114u;
        // 0x24f118: 0x9102a  slt         $v0, $zero, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F11Cu;
label_24f11c:
    // 0x24f11c: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x24f11cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f120: 0x18e00058  blez        $a3, . + 4 + (0x58 << 2)
    ctx->pc = 0x24F120u;
    {
        const bool branch_taken_0x24f120 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x24F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F120u;
        // 0x24f124: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f120) {
            ctx->pc = 0x24F284u;
            goto label_24f284;
        }
    }
    ctx->pc = 0x24F128u;
    // 0x24f128: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x24f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24f12c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x24f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x24f130: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24f130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24f134: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x24f134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24f138: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x24f138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f13c: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x24f13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24f140: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x24f140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24f144: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f148: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x24f148u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x24f14c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24f14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_24f150:
    // 0x24f150: 0x510a0001  beql        $t0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F150u;
    {
        const bool branch_taken_0x24f150 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x24f150) {
            ctx->pc = 0x24F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F150u;
            // 0x24f154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F158u;
            goto label_24f158;
        }
    }
    ctx->pc = 0x24F158u;
label_24f158:
    // 0x24f158: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x24f158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24f15c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x24f160: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x24f160u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f164: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x24f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24f168: 0x1010  mfhi        $v0
    ctx->pc = 0x24f168u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24f16c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24f170: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24f174: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f178: 0x46012981  sub.s       $f6, $f5, $f1
    ctx->pc = 0x24f178u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x24f17c: 0x46003005  abs.s       $f0, $f6
    ctx->pc = 0x24f17cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[6]);
    // 0x24f180: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x24f180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f184: 0x0  nop
    ctx->pc = 0x24f184u;
    // NOP
    // 0x24f188: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x24F188u;
    {
        const bool branch_taken_0x24f188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f188) {
            ctx->pc = 0x24F27Cu;
            goto label_24f27c;
        }
    }
    ctx->pc = 0x24F190u;
    // 0x24f190: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x24f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f194: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x24f194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f198: 0x0  nop
    ctx->pc = 0x24f198u;
    // NOP
    // 0x24f19c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F19Cu;
    {
        const bool branch_taken_0x24f19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f19c) {
            ctx->pc = 0x24F1B4u;
            goto label_24f1b4;
        }
    }
    ctx->pc = 0x24F1A4u;
    // 0x24f1a4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x24f1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1a8: 0x0  nop
    ctx->pc = 0x24f1a8u;
    // NOP
    // 0x24f1ac: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x24F1ACu;
    {
        const bool branch_taken_0x24f1ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f1ac) {
            ctx->pc = 0x24F27Cu;
            goto label_24f27c;
        }
    }
    ctx->pc = 0x24F1B4u;
label_24f1b4:
    // 0x24f1b4: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x24f1b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1b8: 0x0  nop
    ctx->pc = 0x24f1b8u;
    // NOP
    // 0x24f1bc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24F1BCu;
    {
        const bool branch_taken_0x24f1bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f1bc) {
            ctx->pc = 0x24F1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F1BCu;
            // 0x24f1c0: 0xc4c30000  lwc1        $f3, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F1D8u;
            goto label_24f1d8;
        }
    }
    ctx->pc = 0x24F1C4u;
    // 0x24f1c4: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x24f1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1c8: 0x0  nop
    ctx->pc = 0x24f1c8u;
    // NOP
    // 0x24f1cc: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x24F1CCu;
    {
        const bool branch_taken_0x24f1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f1cc) {
            ctx->pc = 0x24F27Cu;
            goto label_24f27c;
        }
    }
    ctx->pc = 0x24F1D4u;
    // 0x24f1d4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24f1d8:
    // 0x24f1d8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f1dc: 0x46081834  c.lt.s      $f3, $f8
    ctx->pc = 0x24f1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1e0: 0x0  nop
    ctx->pc = 0x24f1e0u;
    // NOP
    // 0x24f1e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F1E4u;
    {
        const bool branch_taken_0x24f1e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1E4u;
        // 0x24f1e8: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1e4) {
            ctx->pc = 0x24F1FCu;
            goto label_24f1fc;
        }
    }
    ctx->pc = 0x24F1ECu;
    // 0x24f1ec: 0x46071034  c.lt.s      $f2, $f7
    ctx->pc = 0x24f1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1f0: 0x0  nop
    ctx->pc = 0x24f1f0u;
    // NOP
    // 0x24f1f4: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x24F1F4u;
    {
        const bool branch_taken_0x24f1f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f1f4) {
            ctx->pc = 0x24F24Cu;
            goto label_24f24c;
        }
    }
    ctx->pc = 0x24F1FCu;
label_24f1fc:
    // 0x24f1fc: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x24f1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f200: 0x0  nop
    ctx->pc = 0x24f200u;
    // NOP
    // 0x24f204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F204u;
    {
        const bool branch_taken_0x24f204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f204) {
            ctx->pc = 0x24F21Cu;
            goto label_24f21c;
        }
    }
    ctx->pc = 0x24F20Cu;
    // 0x24f20c: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x24f20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f210: 0x0  nop
    ctx->pc = 0x24f210u;
    // NOP
    // 0x24f214: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x24F214u;
    {
        const bool branch_taken_0x24f214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f214) {
            ctx->pc = 0x24F24Cu;
            goto label_24f24c;
        }
    }
    ctx->pc = 0x24F21Cu;
label_24f21c:
    // 0x24f21c: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x24f21cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f220: 0x0  nop
    ctx->pc = 0x24f220u;
    // NOP
    // 0x24f224: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x24F224u;
    {
        const bool branch_taken_0x24f224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f224) {
            ctx->pc = 0x24F24Cu;
            goto label_24f24c;
        }
    }
    ctx->pc = 0x24F22Cu;
    // 0x24f22c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x24f22cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x24f230: 0x0  nop
    ctx->pc = 0x24f230u;
    // NOP
    // 0x24f234: 0x46013043  div.s       $f1, $f6, $f1
    ctx->pc = 0x24f234u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x24f238: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x24f238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24f23c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x24f23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x24f240: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x24f240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24f244: 0x0  nop
    ctx->pc = 0x24f244u;
    // NOP
    // 0x24f248: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24f248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_24f24c:
    // 0x24f24c: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x24f24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f250: 0x0  nop
    ctx->pc = 0x24f250u;
    // NOP
    // 0x24f254: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24F254u;
    {
        const bool branch_taken_0x24f254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f254) {
            ctx->pc = 0x24F27Cu;
            goto label_24f27c;
        }
    }
    ctx->pc = 0x24F25Cu;
    // 0x24f25c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24f25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f260: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f264: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f268: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x24f268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f26c: 0x0  nop
    ctx->pc = 0x24f26cu;
    // NOP
    // 0x24f270: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24F270u;
    {
        const bool branch_taken_0x24f270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f270) {
            ctx->pc = 0x24F274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F270u;
            // 0x24f274: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F27Cu;
            goto label_24f27c;
        }
    }
    ctx->pc = 0x24F278u;
    // 0x24f278: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x24f278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_24f27c:
    // 0x24f27c: 0x1ce0ffb4  bgtz        $a3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x24F27Cu;
    {
        const bool branch_taken_0x24f27c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x24F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F27Cu;
        // 0x24f280: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f27c) {
            ctx->pc = 0x24F150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f150;
        }
    }
    ctx->pc = 0x24F284u;
label_24f284:
    // 0x24f284: 0x9102a  slt         $v0, $zero, $t1
    ctx->pc = 0x24f284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_24f288:
    // 0x24f288: 0x3e00008  jr          $ra
    ctx->pc = 0x24F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F290u;
}
