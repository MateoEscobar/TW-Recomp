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

// Function: sub_003440D0
// Address: 0x3440d0 - 0x344300
void sub_003440D0_0x3440d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003440D0_0x3440d0");
#endif

    switch (ctx->pc) {
        case 0x34413cu: goto label_34413c;
        case 0x344178u: goto label_344178;
        case 0x3441c8u: goto label_3441c8;
        default: break;
    }

    ctx->pc = 0x3440d0u;

    // 0x3440d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3440d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3440d4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3440d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3440d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3440d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3440dc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3440dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3440e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3440e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440e4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3440e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3440e8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3440e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3440ec: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3440ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3440f0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3440f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440f4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3440f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3440f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3440f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440fc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3440fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x344100: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x344100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344108: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x344108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34410c: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x34410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344110: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x344110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344114: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x344114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x344118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x344118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34411c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x34411cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x344120: 0x7a670050  lq          $a3, 0x50($s3)
    ctx->pc = 0x344120u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x344124: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x344124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x344128: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34412c: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x34412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x344130: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x344130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344134: 0xc0d249a  jal         func_349268
    ctx->pc = 0x344134u;
    SET_GPR_U32(ctx, 31, 0x34413Cu);
    ctx->pc = 0x344138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344134u;
    // 0x344138: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349268u, 0x344134u, 0x34413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34413Cu;
label_34413c:
    // 0x34413c: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x34413Cu;
    {
        const bool branch_taken_0x34413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34413Cu;
        // 0x344140: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34413c) {
            ctx->pc = 0x3442DCu;
            goto label_3442dc;
        }
    }
    ctx->pc = 0x344144u;
    // 0x344144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x344144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x344148: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x344148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34414c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x344150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x344154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x344158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34415c: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x34415Cu;
    {
        const bool branch_taken_0x34415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x344160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34415Cu;
        // 0x344160: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34415c) {
            ctx->pc = 0x34420Cu;
            goto label_34420c;
        }
    }
    ctx->pc = 0x344164u;
    // 0x344164: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x344164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x344168: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x344168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x34416c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x34416cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344170: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x344170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x344174: 0x0  nop
    ctx->pc = 0x344174u;
    // NOP
label_344178:
    // 0x344178: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x344178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34417c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x34417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x344180: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x344180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344184: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x344184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344188: 0x0  nop
    ctx->pc = 0x344188u;
    // NOP
    // 0x34418c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34418Cu;
    {
        const bool branch_taken_0x34418c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x344190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34418Cu;
        // 0x344190: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34418c) {
            ctx->pc = 0x3441A8u;
            goto label_3441a8;
        }
    }
    ctx->pc = 0x344194u;
    // 0x344194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x344194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344198: 0x0  nop
    ctx->pc = 0x344198u;
    // NOP
    // 0x34419c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x34419Cu;
    {
        const bool branch_taken_0x34419c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3441A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34419Cu;
        // 0x3441a0: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34419c) {
            ctx->pc = 0x344200u;
            goto label_344200;
        }
    }
    ctx->pc = 0x3441A4u;
    // 0x3441a4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3441a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3441a8:
    // 0x3441a8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x3441a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3441ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3441acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3441b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3441B0u;
    {
        const bool branch_taken_0x3441b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3441B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441B0u;
        // 0x3441b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441b0) {
            ctx->pc = 0x3441F4u;
            goto label_3441f4;
        }
    }
    ctx->pc = 0x3441B8u;
    // 0x3441b8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3441b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3441bc: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3441bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3441c0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3441c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3441c4: 0x0  nop
    ctx->pc = 0x3441c4u;
    // NOP
label_3441c8:
    // 0x3441c8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3441c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3441cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3441ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3441d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3441d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3441d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3441d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3441d8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x3441d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3441dc: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x3441dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x3441e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3441e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3441e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3441e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3441e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3441e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3441ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3441ECu;
    {
        const bool branch_taken_0x3441ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3441F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441ECu;
        // 0x3441f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441ec) {
            ctx->pc = 0x3441C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3441c8;
        }
    }
    ctx->pc = 0x3441F4u;
label_3441f4:
    // 0x3441f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3441f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3441f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3441f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3441fc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3441fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_344200:
    // 0x344200: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x344200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344204: 0x1467ffdc  bne         $v1, $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x344204u;
    {
        const bool branch_taken_0x344204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x344208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344204u;
        // 0x344208: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344204) {
            ctx->pc = 0x344178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344178;
        }
    }
    ctx->pc = 0x34420Cu;
label_34420c:
    // 0x34420c: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x34420Cu;
    {
        const bool branch_taken_0x34420c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x344210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34420Cu;
        // 0x344210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34420c) {
            ctx->pc = 0x3442DCu;
            goto label_3442dc;
        }
    }
    ctx->pc = 0x344214u;
    // 0x344214: 0x7a480050  lq          $t0, 0x50($s2)
    ctx->pc = 0x344214u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x344218: 0x7a650050  lq          $a1, 0x50($s3)
    ctx->pc = 0x344218u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x34421c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x34421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x344220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344224: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x344224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x344228: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x344228u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34422c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34422cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344230: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344230u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344234: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x344234u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x344238: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x344238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34423c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34423cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x344240: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344244: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344248: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34424c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34424cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x344250: 0x4a0003bf  vwaitq
    ctx->pc = 0x344250u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x344254: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344258: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x344258u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34425c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34425cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x344260: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x344260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x344264: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344264u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x344268: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34426c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x34426cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344270: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x344270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
    // 0x344274: 0x7e070050  sq          $a3, 0x50($s0)
    ctx->pc = 0x344274u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 7));
    // 0x344278: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x344278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x34427c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x34427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x344280: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x344280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x344284: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x344284u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x344288: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34428c: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34428cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x344290: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344294: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x344294u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344298: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x344298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x34429c: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x34429cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x3442a0: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x3442a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x3442a4: 0x7a630050  lq          $v1, 0x50($s3)
    ctx->pc = 0x3442a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3442a8: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x3442a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x3442ac: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3442acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3442b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3442b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3442b4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3442b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3442b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3442b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3442bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3442bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3442c0: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x3442c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
    // 0x3442c4: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x3442c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x3442c8: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x3442c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x3442cc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3442ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3442d0: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3442d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3442d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3442D4u;
    {
        const bool branch_taken_0x3442d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442D4u;
        // 0x3442d8: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442d4) {
            ctx->pc = 0x3442E0u;
            goto label_3442e0;
        }
    }
    ctx->pc = 0x3442DCu;
label_3442dc:
    // 0x3442dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3442dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3442e0:
    // 0x3442e0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3442e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3442e4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3442e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3442e8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3442e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3442ec: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3442ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3442f0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3442f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3442f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3442f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3442f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3442F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3442FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442F8u;
        // 0x3442fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3442F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344300u;
}
