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

// Function: sub_00256F28
// Address: 0x256f28 - 0x2570e8
void sub_00256F28_0x256f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256F28_0x256f28");
#endif

    switch (ctx->pc) {
        case 0x256f68u: goto label_256f68;
        case 0x256f78u: goto label_256f78;
        case 0x256f88u: goto label_256f88;
        case 0x256f98u: goto label_256f98;
        case 0x256fecu: goto label_256fec;
        case 0x25703cu: goto label_25703c;
        case 0x257098u: goto label_257098;
        case 0x2570c0u: goto label_2570c0;
        case 0x2570d0u: goto label_2570d0;
        default: break;
    }

    ctx->pc = 0x256f28u;

    // 0x256f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x256f2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x256f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x256f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256f3c: 0x8e1100d4  lw          $s1, 0xD4($s0)
    ctx->pc = 0x256f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x256f40: 0x86220144  lh          $v0, 0x144($s1)
    ctx->pc = 0x256f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x256f44: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x256F44u;
    {
        const bool branch_taken_0x256f44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F44u;
        // 0x256f48: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f44) {
            ctx->pc = 0x2570A0u;
            goto label_2570a0;
        }
    }
    ctx->pc = 0x256F4Cu;
    // 0x256f4c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x256f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x256f50: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x256f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x256f54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256f58: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x256F58u;
    {
        const bool branch_taken_0x256f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f58) {
            ctx->pc = 0x256F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F58u;
            // 0x256f5c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FC4u;
            goto label_256fc4;
        }
    }
    ctx->pc = 0x256F60u;
    // 0x256f60: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x256F60u;
    SET_GPR_U32(ctx, 31, 0x256F68u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x256F60u, 0x256F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F68u;
label_256f68:
    // 0x256f68: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x256F68u;
    {
        const bool branch_taken_0x256f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f68) {
            ctx->pc = 0x256F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F68u;
            // 0x256f6c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FC4u;
            goto label_256fc4;
        }
    }
    ctx->pc = 0x256F70u;
    // 0x256f70: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x256F70u;
    SET_GPR_U32(ctx, 31, 0x256F78u);
    ctx->pc = 0x256F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F70u;
    // 0x256f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x256F70u, 0x256F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F78u;
label_256f78:
    // 0x256f78: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x256F78u;
    {
        const bool branch_taken_0x256f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f78) {
            ctx->pc = 0x256F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F78u;
            // 0x256f7c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FC4u;
            goto label_256fc4;
        }
    }
    ctx->pc = 0x256F80u;
    // 0x256f80: 0xc089f86  jal         func_227E18
    ctx->pc = 0x256F80u;
    SET_GPR_U32(ctx, 31, 0x256F88u);
    ctx->pc = 0x256F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F80u;
    // 0x256f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x256F80u, 0x256F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F88u;
label_256f88:
    // 0x256f88: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x256F88u;
    {
        const bool branch_taken_0x256f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f88) {
            ctx->pc = 0x256F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F88u;
            // 0x256f8c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FC4u;
            goto label_256fc4;
        }
    }
    ctx->pc = 0x256F90u;
    // 0x256f90: 0xc089f66  jal         func_227D98
    ctx->pc = 0x256F90u;
    SET_GPR_U32(ctx, 31, 0x256F98u);
    ctx->pc = 0x256F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F90u;
    // 0x256f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x256F90u, 0x256F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F98u;
label_256f98:
    // 0x256f98: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x256F98u;
    {
        const bool branch_taken_0x256f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f98) {
            ctx->pc = 0x256F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F98u;
            // 0x256f9c: 0x96220144  lhu         $v0, 0x144($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FB8u;
            goto label_256fb8;
        }
    }
    ctx->pc = 0x256FA0u;
    // 0x256fa0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x256fa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x256fa4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x256fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x256fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256fac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256FACu;
    {
        const bool branch_taken_0x256fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256fac) {
            ctx->pc = 0x256FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256FACu;
            // 0x256fb0: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FC4u;
            goto label_256fc4;
        }
    }
    ctx->pc = 0x256FB4u;
    // 0x256fb4: 0x96220144  lhu         $v0, 0x144($s1)
    ctx->pc = 0x256fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
label_256fb8:
    // 0x256fb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256fbc: 0xa6220144  sh          $v0, 0x144($s1)
    ctx->pc = 0x256fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x256fc0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x256fc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_256fc4:
    // 0x256fc4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x256fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x256fc8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x256fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x256fcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256fd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256fd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256fd8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256fd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256fdc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x256FDCu;
    {
        const bool branch_taken_0x256fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fdc) {
            ctx->pc = 0x257034u;
            goto label_257034;
        }
    }
    ctx->pc = 0x256FE4u;
    // 0x256fe4: 0xc088b98  jal         func_222E60
    ctx->pc = 0x256FE4u;
    SET_GPR_U32(ctx, 31, 0x256FECu);
    ctx->pc = 0x256FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FE4u;
    // 0x256fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x256FE4u, 0x256FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FECu;
label_256fec:
    // 0x256fec: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x256fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x256ff0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256FF0u;
    {
        const bool branch_taken_0x256ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ff0) {
            ctx->pc = 0x256FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256FF0u;
            // 0x256ff4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FF8u;
            goto label_256ff8;
        }
    }
    ctx->pc = 0x256FF8u;
label_256ff8:
    // 0x256ff8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x256ffc: 0x84a30144  lh          $v1, 0x144($a1)
    ctx->pc = 0x256ffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x257000: 0xc481024c  lwc1        $f1, 0x24C($a0)
    ctx->pc = 0x257000u;
    { uint32_t bits = FAST_READ32(0x51024Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257004: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x257004u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x257008: 0x1812  mflo        $v1
    ctx->pc = 0x257008u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25700c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25700cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257010: 0x0  nop
    ctx->pc = 0x257010u;
    // NOP
    // 0x257014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x257018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25701c: 0x0  nop
    ctx->pc = 0x25701cu;
    // NOP
    // 0x257020: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x257020u;
    {
        const bool branch_taken_0x257020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257020u;
        // 0x257024: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257020) {
            ctx->pc = 0x257034u;
            goto label_257034;
        }
    }
    ctx->pc = 0x257028u;
    // 0x257028: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x257028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x25702c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x257030: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x257030u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_257034:
    // 0x257034: 0xc088edc  jal         func_223B70
    ctx->pc = 0x257034u;
    SET_GPR_U32(ctx, 31, 0x25703Cu);
    ctx->pc = 0x257038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257034u;
    // 0x257038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x257034u, 0x25703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25703Cu;
label_25703c:
    // 0x25703c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25703Cu;
    {
        const bool branch_taken_0x25703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25703c) {
            ctx->pc = 0x257040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25703Cu;
            // 0x257040: 0x86220144  lh          $v0, 0x144($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25706Cu;
            goto label_25706c;
        }
    }
    ctx->pc = 0x257044u;
    // 0x257044: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x257044u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x257048: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x257048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x25704c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257050u;
    {
        const bool branch_taken_0x257050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257050u;
        // 0x257054: 0x86220144  lh          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257050) {
            ctx->pc = 0x25706Cu;
            goto label_25706c;
        }
    }
    ctx->pc = 0x257058u;
    // 0x257058: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x257058u;
    {
        const bool branch_taken_0x257058 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257058u;
        // 0x25705c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257058) {
            ctx->pc = 0x2570A0u;
            goto label_2570a0;
        }
    }
    ctx->pc = 0x257060u;
    // 0x257060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257064: 0xa6220144  sh          $v0, 0x144($s1)
    ctx->pc = 0x257064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x257068: 0x86220144  lh          $v0, 0x144($s1)
    ctx->pc = 0x257068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 324)));
label_25706c:
    // 0x25706c: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25706Cu;
    {
        const bool branch_taken_0x25706c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x257070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25706Cu;
        // 0x257070: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25706c) {
            ctx->pc = 0x2570A0u;
            goto label_2570a0;
        }
    }
    ctx->pc = 0x257074u;
    // 0x257074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25707c: 0xa6220144  sh          $v0, 0x144($s1)
    ctx->pc = 0x25707cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x257080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25708c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25708cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257090: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x257090u;
    SET_GPR_U32(ctx, 31, 0x257098u);
    ctx->pc = 0x257094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257090u;
    // 0x257094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x257090u, 0x257098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257098u;
label_257098:
    // 0x257098: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257098u;
    {
        const bool branch_taken_0x257098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257098u;
        // 0x25709c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257098) {
            ctx->pc = 0x2570D4u;
            goto label_2570d4;
        }
    }
    ctx->pc = 0x2570A0u;
label_2570a0:
    // 0x2570a0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2570a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x2570a4: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2570a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2570a8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2570a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2570ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2570acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2570b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2570B0u;
    {
        const bool branch_taken_0x2570b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2570b0) {
            ctx->pc = 0x2570C8u;
            goto label_2570c8;
        }
    }
    ctx->pc = 0x2570B8u;
    // 0x2570b8: 0xc09f568  jal         func_27D5A0
    ctx->pc = 0x2570B8u;
    SET_GPR_U32(ctx, 31, 0x2570C0u);
    ctx->pc = 0x2570BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570B8u;
    // 0x2570bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D5A0u, 0x2570B8u, 0x2570C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570C0u;
label_2570c0:
    // 0x2570c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2570C0u;
    {
        const bool branch_taken_0x2570c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570C0u;
        // 0x2570c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570c0) {
            ctx->pc = 0x2570D4u;
            goto label_2570d4;
        }
    }
    ctx->pc = 0x2570C8u;
label_2570c8:
    // 0x2570c8: 0xc08bf84  jal         func_22FE10
    ctx->pc = 0x2570C8u;
    SET_GPR_U32(ctx, 31, 0x2570D0u);
    ctx->pc = 0x2570CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570C8u;
    // 0x2570cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE10u, 0x2570C8u, 0x2570D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570D0u;
label_2570d0:
    // 0x2570d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2570d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2570d4:
    // 0x2570d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2570d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2570d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2570d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2570dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2570dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2570e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2570E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2570E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570E0u;
        // 0x2570e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2570E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2570E8u;
}
