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

// Function: sub_00252108
// Address: 0x252108 - 0x252410
void sub_00252108_0x252108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252108_0x252108");
#endif

    switch (ctx->pc) {
        case 0x252158u: goto label_252158;
        case 0x2521f0u: goto label_2521f0;
        case 0x252228u: goto label_252228;
        case 0x2523bcu: goto label_2523bc;
        case 0x2523ccu: goto label_2523cc;
        default: break;
    }

    ctx->pc = 0x252108u;

    // 0x252108: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25210c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x252110: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x252110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x252114: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x252114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x252118: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x252118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x25211c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25211cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252120: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x252120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x252124: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x252124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252128: 0x8c510588  lw          $s1, 0x588($v0)
    ctx->pc = 0x252128u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x510588u));
    // 0x25212c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x252130: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x252130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x252134: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x252134u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x252138: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x252138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x25213c: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x25213cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
    // 0x252140: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x252140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x252144: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x252144u;
    {
        const bool branch_taken_0x252144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252144u;
        // 0x252148: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252144) {
            ctx->pc = 0x252270u;
            goto label_252270;
        }
    }
    ctx->pc = 0x25214Cu;
    // 0x25214c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x25214cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x252150: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252154: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x252154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252158:
    // 0x252158: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x252158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25215c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x25215cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x252160: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252164: 0x0  nop
    ctx->pc = 0x252164u;
    // NOP
    // 0x252168: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x252168u;
    {
        const bool branch_taken_0x252168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252168) {
            ctx->pc = 0x25216Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252168u;
            // 0x25216c: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x252170u;
    // 0x252170: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x252170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252174: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252178: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25217c: 0x0  nop
    ctx->pc = 0x25217cu;
    // NOP
    // 0x252180: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
    ctx->pc = 0x252180u;
    {
        const bool branch_taken_0x252180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252180) {
            ctx->pc = 0x252184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252180u;
            // 0x252184: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x252188u;
    // 0x252188: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x252188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25218c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x25218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252190: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x252190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x252194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252198: 0x0  nop
    ctx->pc = 0x252198u;
    // NOP
    // 0x25219c: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x25219Cu;
    {
        const bool branch_taken_0x25219c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25219c) {
            ctx->pc = 0x2521A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25219Cu;
            // 0x2521a0: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x2521A4u;
    // 0x2521a4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2521a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521a8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2521a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2521ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2521acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2521b0: 0x0  nop
    ctx->pc = 0x2521b0u;
    // NOP
    // 0x2521b4: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2521B4u;
    {
        const bool branch_taken_0x2521b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2521b4) {
            ctx->pc = 0x2521B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521B4u;
            // 0x2521b8: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x2521BCu;
    // 0x2521bc: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2521bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2521c0: 0x58a00029  blezl       $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2521C0u;
    {
        const bool branch_taken_0x2521c0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2521c0) {
            ctx->pc = 0x2521C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521C0u;
            // 0x2521c4: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x2521C8u;
    // 0x2521c8: 0x96220048  lhu         $v0, 0x48($s1)
    ctx->pc = 0x2521c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2521cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2521ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2521d0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2521D0u;
    {
        const bool branch_taken_0x2521d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2521d0) {
            ctx->pc = 0x2521D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521D0u;
            // 0x2521d4: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252268u;
            goto label_252268;
        }
    }
    ctx->pc = 0x2521D8u;
    // 0x2521d8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2521d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2521dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2521dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2521e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2521e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2521e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2521e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2521e8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2521e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2521ec: 0x0  nop
    ctx->pc = 0x2521ecu;
    // NOP
label_2521f0:
    // 0x2521f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2521f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2521f4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2521f8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2521f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2521fc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2521fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x252200: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x252200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x252204: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252204u;
    {
        const bool branch_taken_0x252204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252204) {
            ctx->pc = 0x252208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252204u;
            // 0x252208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25220Cu;
            goto label_25220c;
        }
    }
    ctx->pc = 0x25220Cu;
label_25220c:
    // 0x25220c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x25220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x252210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252214: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x252214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252218: 0x3010  mfhi        $a2
    ctx->pc = 0x252218u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x25221c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x25221cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x252220: 0xc0940e6  jal         func_250398
    ctx->pc = 0x252220u;
    SET_GPR_U32(ctx, 31, 0x252228u);
    ctx->pc = 0x252224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252220u;
    // 0x252224: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250398u, 0x252220u, 0x252228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252228u;
label_252228:
    // 0x252228: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x252228u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x25222c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x25222cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252230: 0x0  nop
    ctx->pc = 0x252230u;
    // NOP
    // 0x252234: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x252234u;
    {
        const bool branch_taken_0x252234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252234u;
        // 0x252238: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252234) {
            ctx->pc = 0x25225Cu;
            goto label_25225c;
        }
    }
    ctx->pc = 0x25223Cu;
    // 0x25223c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x25223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252240: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x252240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x252244: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252248: 0x0  nop
    ctx->pc = 0x252248u;
    // NOP
    // 0x25224c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25224Cu;
    {
        const bool branch_taken_0x25224c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25224Cu;
        // 0x252250: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25224c) {
            ctx->pc = 0x25225Cu;
            goto label_25225c;
        }
    }
    ctx->pc = 0x252254u;
    // 0x252254: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x252254u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x252258: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x252258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_25225c:
    // 0x25225c: 0x5e00ffe4  bgtzl       $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25225Cu;
    {
        const bool branch_taken_0x25225c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25225c) {
            ctx->pc = 0x252260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25225Cu;
            // 0x252260: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2521F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2521f0;
        }
    }
    ctx->pc = 0x252264u;
    // 0x252264: 0x8e310024  lw          $s1, 0x24($s1)
    ctx->pc = 0x252264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_252268:
    // 0x252268: 0x5620ffbb  bnel        $s1, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x252268u;
    {
        const bool branch_taken_0x252268 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x252268) {
            ctx->pc = 0x25226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252268u;
            // 0x25226c: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252158;
        }
    }
    ctx->pc = 0x252270u;
label_252270:
    // 0x252270: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x252270u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252274: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x252274u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252278: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x252278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x25227c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x25227cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x252280: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252284: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x252284u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252288: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x252288u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25228c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x252290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252294: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x252294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x252298: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x252298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x25229c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x25229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2522a0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2522a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2522a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2522a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2522a8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2522a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2522ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2522acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2522b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2522b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2522b4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2522b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2522b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2522b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2522bc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2522bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2522c0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2522c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2522c4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2522c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2522c8: 0x0  nop
    ctx->pc = 0x2522c8u;
    // NOP
    // 0x2522cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2522ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2522d0: 0x0  nop
    ctx->pc = 0x2522d0u;
    // NOP
    // 0x2522d4: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x2522D4u;
    {
        const bool branch_taken_0x2522d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2522D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522D4u;
        // 0x2522d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522d4) {
            ctx->pc = 0x2523E4u;
            goto label_2523e4;
        }
    }
    ctx->pc = 0x2522DCu;
    // 0x2522dc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2522dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2522e0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2522e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2522e4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2522e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2522e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2522e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2522ec: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2522ecu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2522f0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2522f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2522f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2522f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2522f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2522f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2522fc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2522fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x252300: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x252300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252304: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x252304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x252308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25230c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x25230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252310: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x252310u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252314: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252318: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x252318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25231c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x25231cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252320: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x252320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252324: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x252324u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x252328: 0x4a0003bf  vwaitq
    ctx->pc = 0x252328u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25232c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x25232cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252330: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x252330u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x252334: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x252338: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x252338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25233c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25233cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252340: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252344: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x252344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252348: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x252348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25234c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25234cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252350: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x252350u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x252354: 0x4a0003bf  vwaitq
    ctx->pc = 0x252354u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x252358: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x252358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25235c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x25235cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252360: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x252360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x252364: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x252364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x252368: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x252368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25236c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x25236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x252370: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x252374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252378: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x252378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x25237c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x25237cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x252380: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252384: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x252384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x252388: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x252388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25238c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x25238cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252390: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x252390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x252394: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x252394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252398: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25239c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25239cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2523a0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2523a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2523a4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2523a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2523a8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2523a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x2523ac: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2523acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2523b0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2523b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2523b4: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x2523B4u;
    SET_GPR_U32(ctx, 31, 0x2523BCu);
    ctx->pc = 0x2523B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2523B4u;
    // 0x2523b8: 0x7fa50060  sq          $a1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x2523B4u, 0x2523BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523BCu;
label_2523bc:
    // 0x2523bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2523BCu;
    {
        const bool branch_taken_0x2523bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523BCu;
        // 0x2523c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523bc) {
            ctx->pc = 0x2523E4u;
            goto label_2523e4;
        }
    }
    ctx->pc = 0x2523C4u;
    // 0x2523c4: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2523C4u;
    SET_GPR_U32(ctx, 31, 0x2523CCu);
    ctx->pc = 0x2523C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2523C4u;
    // 0x2523c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2523C4u, 0x2523CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523CCu;
label_2523cc:
    // 0x2523cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2523CCu;
    {
        const bool branch_taken_0x2523cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523CCu;
        // 0x2523d0: 0x7ba30050  lq          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523cc) {
            ctx->pc = 0x2523E0u;
            goto label_2523e0;
        }
    }
    ctx->pc = 0x2523D4u;
    // 0x2523d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2523d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2523d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2523D8u;
    {
        const bool branch_taken_0x2523d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523D8u;
        // 0x2523dc: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523d8) {
            ctx->pc = 0x2523E4u;
            goto label_2523e4;
        }
    }
    ctx->pc = 0x2523E0u;
label_2523e0:
    // 0x2523e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2523e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2523e4:
    // 0x2523e4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2523e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2523e8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2523e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2523ec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2523ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2523f0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2523f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2523f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2523f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2523f8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2523f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2523fc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2523fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x252400: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x252400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x252404: 0x3e00008  jr          $ra
    ctx->pc = 0x252404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252404u;
        // 0x252408: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25240Cu;
    // 0x25240c: 0x0  nop
    ctx->pc = 0x25240cu;
    // NOP
    ctx->pc = 0x252410u;
}
