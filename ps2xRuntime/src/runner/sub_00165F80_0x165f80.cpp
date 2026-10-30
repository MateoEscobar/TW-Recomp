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

// Function: sub_00165F80
// Address: 0x165f80 - 0x1660e0
void sub_00165F80_0x165f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F80_0x165f80");
#endif

    switch (ctx->pc) {
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff8u: goto label_165ff8;
        case 0x166000u: goto label_166000;
        case 0x166014u: goto label_166014;
        case 0x16602cu: goto label_16602c;
        case 0x166048u: goto label_166048;
        case 0x166050u: goto label_166050;
        case 0x166064u: goto label_166064;
        case 0x166070u: goto label_166070;
        default: break;
    }

    ctx->pc = 0x165f80u;

    // 0x165f80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x165f84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x165f88: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x165f88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x165f8c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x165f8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x165f90: 0x460c6582  mul.s       $f22, $f12, $f12
    ctx->pc = 0x165f90u;
    ctx->f[22] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x165f94: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x165f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x165f98: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x165f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x165f9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fa0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x165fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x165fa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fa8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x165fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x165fac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x165facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fb0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x165fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x165fb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x165fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fb8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x165fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x165fbc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x165fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fc0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x165fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x165fc4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x165fc8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x165fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x165fcc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x165fccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fd0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x165fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x165fd4: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x165fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165fdc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x165fdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x165fe0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x165fe4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x165fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x165fe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x165fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x165fec: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x165fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_165ff0:
    // 0x165ff0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165FF0u;
    SET_GPR_U32(ctx, 31, 0x165FF8u);
    ctx->pc = 0x165FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FF0u;
    // 0x165ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165FF0u, 0x165FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FF8u;
label_165ff8:
    // 0x165ff8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165FF8u;
    SET_GPR_U32(ctx, 31, 0x166000u);
    ctx->pc = 0x165FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FF8u;
    // 0x165ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165FF8u, 0x166000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166000u;
label_166000:
    // 0x166000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166004: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x166004u;
    {
        const bool branch_taken_0x166004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166004) {
            ctx->pc = 0x166008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166004u;
            // 0x166008: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166094u;
            goto label_166094;
        }
    }
    ctx->pc = 0x16600Cu;
    // 0x16600c: 0xc08a096  jal         func_228258
    ctx->pc = 0x16600Cu;
    SET_GPR_U32(ctx, 31, 0x166014u);
    ctx->pc = 0x166010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16600Cu;
    // 0x166010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x16600Cu, 0x166014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166014u;
label_166014:
    // 0x166014: 0x1057001e  beq         $v0, $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x166014u;
    {
        const bool branch_taken_0x166014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x166018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166014u;
        // 0x166018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166014) {
            ctx->pc = 0x166090u;
            goto label_166090;
        }
    }
    ctx->pc = 0x16601Cu;
    // 0x16601c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x166020: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x166024: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x166024u;
    SET_GPR_U32(ctx, 31, 0x16602Cu);
    ctx->pc = 0x166028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166024u;
    // 0x166028: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x166024u, 0x16602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16602Cu;
label_16602c:
    // 0x16602c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16602cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x166030: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x166030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166034: 0x0  nop
    ctx->pc = 0x166034u;
    // NOP
    // 0x166038: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x166038u;
    {
        const bool branch_taken_0x166038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166038) {
            ctx->pc = 0x16603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166038u;
            // 0x16603c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166094u;
            goto label_166094;
        }
    }
    ctx->pc = 0x166040u;
    // 0x166040: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x166040u;
    SET_GPR_U32(ctx, 31, 0x166048u);
    ctx->pc = 0x166044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166040u;
    // 0x166044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x166040u, 0x166048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166048u;
label_166048:
    // 0x166048: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x166048u;
    SET_GPR_U32(ctx, 31, 0x166050u);
    ctx->pc = 0x16604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166048u;
    // 0x16604c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x166048u, 0x166050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166050u;
label_166050:
    // 0x166050: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166050u;
    {
        const bool branch_taken_0x166050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166050) {
            ctx->pc = 0x166078u;
            goto label_166078;
        }
    }
    ctx->pc = 0x166058u;
    // 0x166058: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x166058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    // 0x16605c: 0xc0e4546  jal         func_391518
    ctx->pc = 0x16605Cu;
    SET_GPR_U32(ctx, 31, 0x166064u);
    ctx->pc = 0x166060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16605Cu;
    // 0x166060: 0x8ec42c04  lw          $a0, 0x2C04($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x16605Cu, 0x166064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166064u;
label_166064:
    // 0x166064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166068: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x166068u;
    SET_GPR_U32(ctx, 31, 0x166070u);
    ctx->pc = 0x16606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166068u;
    // 0x16606c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x166068u, 0x166070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166070u;
label_166070:
    // 0x166070: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x166070u;
    {
        const bool branch_taken_0x166070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166070) {
            ctx->pc = 0x166074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166070u;
            // 0x166074: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166094u;
            goto label_166094;
        }
    }
    ctx->pc = 0x166078u;
label_166078:
    // 0x166078: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x166078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16607c: 0x0  nop
    ctx->pc = 0x16607cu;
    // NOP
    // 0x166080: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x166080u;
    {
        const bool branch_taken_0x166080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166080) {
            ctx->pc = 0x166084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166080u;
            // 0x166084: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166094u;
            goto label_166094;
        }
    }
    ctx->pc = 0x166088u;
    // 0x166088: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x166088u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x16608c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x16608cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166090:
    // 0x166090: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166094:
    // 0x166094: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x166094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166098: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x166098u;
    {
        const bool branch_taken_0x166098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166098u;
        // 0x16609c: 0x26a40048  addiu       $a0, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166098) {
            ctx->pc = 0x165FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ff0;
        }
    }
    ctx->pc = 0x1660A0u;
    // 0x1660a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1660a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1660a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1660a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1660a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1660ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1660acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1660b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1660b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1660b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1660b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1660b8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1660b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1660bc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1660bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1660c0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1660c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1660c4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1660c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1660c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1660c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1660cc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1660ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1660d0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1660d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1660d4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1660d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1660d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1660D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1660DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660D8u;
        // 0x1660dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1660E0u;
}
