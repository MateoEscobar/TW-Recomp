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

// Function: sub_00250100
// Address: 0x250100 - 0x250398
void sub_00250100_0x250100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250100_0x250100");
#endif

    switch (ctx->pc) {
        case 0x250138u: goto label_250138;
        case 0x250150u: goto label_250150;
        case 0x250230u: goto label_250230;
        case 0x250240u: goto label_250240;
        case 0x250270u: goto label_250270;
        default: break;
    }

    ctx->pc = 0x250100u;

    // 0x250100: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x250100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x250104: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x250104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x250108: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x250108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x25010c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25010cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250110: 0x8c450588  lw          $a1, 0x588($v0)
    ctx->pc = 0x250110u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x510588u));
    // 0x250114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x250114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250118: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x250118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x25011c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x25011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x250120: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x250120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x250124: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x250124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x250128: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x250128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x25012c: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x25012Cu;
    {
        const bool branch_taken_0x25012c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25012Cu;
        // 0x250130: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25012c) {
            ctx->pc = 0x2501E4u;
            goto label_2501e4;
        }
    }
    ctx->pc = 0x250134u;
    // 0x250134: 0x0  nop
    ctx->pc = 0x250134u;
    // NOP
label_250138:
    // 0x250138: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x250138u;
    {
        const bool branch_taken_0x250138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250138u;
        // 0x25013c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250138) {
            ctx->pc = 0x2501D8u;
            goto label_2501d8;
        }
    }
    ctx->pc = 0x250140u;
    // 0x250140: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x250140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x250144: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x250144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x250148: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x250148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25014c: 0x0  nop
    ctx->pc = 0x25014cu;
    // NOP
label_250150:
    // 0x250150: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x250150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x250154: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x250154u;
    {
        const bool branch_taken_0x250154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250154) {
            ctx->pc = 0x250158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250154u;
            // 0x250158: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x25015Cu;
    // 0x25015c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x25015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250160: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x250160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250164: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250168: 0x0  nop
    ctx->pc = 0x250168u;
    // NOP
    // 0x25016c: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x25016Cu;
    {
        const bool branch_taken_0x25016c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25016c) {
            ctx->pc = 0x250170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25016Cu;
            // 0x250170: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x250174u;
    // 0x250174: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x250174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250178: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x250178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25017c: 0x0  nop
    ctx->pc = 0x25017cu;
    // NOP
    // 0x250180: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x250180u;
    {
        const bool branch_taken_0x250180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250180) {
            ctx->pc = 0x250184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250180u;
            // 0x250184: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x250188u;
    // 0x250188: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x250188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25018c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x25018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250190: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250194: 0x0  nop
    ctx->pc = 0x250194u;
    // NOP
    // 0x250198: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x250198u;
    {
        const bool branch_taken_0x250198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250198) {
            ctx->pc = 0x25019Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250198u;
            // 0x25019c: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x2501A0u;
    // 0x2501a0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2501a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2501a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2501a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2501a8: 0x0  nop
    ctx->pc = 0x2501a8u;
    // NOP
    // 0x2501ac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2501ACu;
    {
        const bool branch_taken_0x2501ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2501ac) {
            ctx->pc = 0x2501B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2501ACu;
            // 0x2501b0: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x2501B4u;
    // 0x2501b4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2501b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2501b8: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2501B8u;
    {
        const bool branch_taken_0x2501b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2501b8) {
            ctx->pc = 0x2501BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2501B8u;
            // 0x2501bc: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2501D0u;
            goto label_2501d0;
        }
    }
    ctx->pc = 0x2501C0u;
    // 0x2501c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2501c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2501c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2501c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2501c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2501c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2501cc: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x2501ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2501d0:
    // 0x2501d0: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2501D0u;
    {
        const bool branch_taken_0x2501d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2501d0) {
            ctx->pc = 0x2501D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2501D0u;
            // 0x2501d4: 0x94620048  lhu         $v0, 0x48($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250150;
        }
    }
    ctx->pc = 0x2501D8u;
label_2501d8:
    // 0x2501d8: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2501dc: 0x14a0ffd6  bnez        $a1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2501DCu;
    {
        const bool branch_taken_0x2501dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2501dc) {
            ctx->pc = 0x250138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250138;
        }
    }
    ctx->pc = 0x2501E4u;
label_2501e4:
    // 0x2501e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2501e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2501e8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2501E8u;
    {
        const bool branch_taken_0x2501e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2501ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E8u;
        // 0x2501ec: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501e8) {
            ctx->pc = 0x2501F8u;
            goto label_2501f8;
        }
    }
    ctx->pc = 0x2501F0u;
    // 0x2501f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2501F0u;
    {
        const bool branch_taken_0x2501f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F0u;
        // 0x2501f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501f0) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2501F8u;
    {
        const bool branch_taken_0x2501f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2501FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F8u;
        // 0x2501fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501f8) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x250200u;
    // 0x250200: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x250200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250204: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x250208: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x250208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
    // 0x25020c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25020cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x250210: 0x1a20004f  blez        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x250210u;
    {
        const bool branch_taken_0x250210 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x250214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250210u;
        // 0x250214: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250210) {
            ctx->pc = 0x250350u;
            goto label_250350;
        }
    }
    ctx->pc = 0x250218u;
    // 0x250218: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x250218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25021c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250220: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x250220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x250224: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x250224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x250228: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x250228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x25022c: 0x0  nop
    ctx->pc = 0x25022cu;
    // NOP
label_250230:
    // 0x250230: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x250230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x250234: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x250234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250238: 0xc093bbc  jal         func_24EEF0
    ctx->pc = 0x250238u;
    SET_GPR_U32(ctx, 31, 0x250240u);
    ctx->pc = 0x25023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250238u;
    // 0x25023c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EEF0u, 0x250238u, 0x250240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250240u;
label_250240:
    // 0x250240: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x250240u;
    {
        const bool branch_taken_0x250240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250240) {
            ctx->pc = 0x250348u;
            goto label_250348;
        }
    }
    ctx->pc = 0x250248u;
    // 0x250248: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x250248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25024c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x250250: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x250250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x250254: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x250254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250258: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25025c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x25025Cu;
    {
        const bool branch_taken_0x25025c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x250260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25025Cu;
        // 0x250260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25025c) {
            ctx->pc = 0x2502B8u;
            goto label_2502b8;
        }
    }
    ctx->pc = 0x250264u;
    // 0x250264: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x250264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250268: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x250268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25026c: 0x0  nop
    ctx->pc = 0x25026cu;
    // NOP
label_250270:
    // 0x250270: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x250270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x250274: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x250274u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x250278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25027c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x250280: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x250280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x250284: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x250284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250288: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x250288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x25028c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25028cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250290: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x250290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250294: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250294u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250298: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x250298u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25029c: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x25029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x2502a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2502a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2502a4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2502a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2502a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2502a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2502ac: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2502ACu;
    {
        const bool branch_taken_0x2502ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2502ac) {
            ctx->pc = 0x2502B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2502ACu;
            // 0x2502b0: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250270;
        }
    }
    ctx->pc = 0x2502B4u;
    // 0x2502b4: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x2502b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_2502b8:
    // 0x2502b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2502b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2502bc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2502bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2502c0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x2502c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2502c4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2502c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2502c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2502c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2502cc: 0x0  nop
    ctx->pc = 0x2502ccu;
    // NOP
    // 0x2502d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2502d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2502d4: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2502d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x2502d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2502d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2502dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2502dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2502e0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2502e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2502e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2502e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2502e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2502e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2502ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2502ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2502f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2502f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2502f4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2502f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2502f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2502f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2502fc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2502fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250300: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x250300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x250304: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x250304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250308: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x250308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25030c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x25030cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250310: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x250310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250314: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x250314u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x250318: 0x4a0003bf  vwaitq
    ctx->pc = 0x250318u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25031c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x25031cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250320: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x250320u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x250324: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x250324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x250328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x250328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25032c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x25032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x250330: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x250330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250334: 0x0  nop
    ctx->pc = 0x250334u;
    // NOP
    // 0x250338: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x250338u;
    {
        const bool branch_taken_0x250338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250338u;
        // 0x25033c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250338) {
            ctx->pc = 0x250348u;
            goto label_250348;
        }
    }
    ctx->pc = 0x250340u;
    // 0x250340: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x250340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x250344: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x250344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250348:
    // 0x250348: 0x1e20ffb9  bgtz        $s1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x250348u;
    {
        const bool branch_taken_0x250348 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x25034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250348u;
        // 0x25034c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250348) {
            ctx->pc = 0x250230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250230;
        }
    }
    ctx->pc = 0x250350u;
label_250350:
    // 0x250350: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x250350u;
    {
        const bool branch_taken_0x250350 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x250354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250350u;
        // 0x250354: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250350) {
            ctx->pc = 0x250364u;
            goto label_250364;
        }
    }
    ctx->pc = 0x250358u;
    // 0x250358: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x250358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x25035c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25035Cu;
    {
        const bool branch_taken_0x25035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25035Cu;
        // 0x250360: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25035c) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x250364u;
label_250364:
    // 0x250364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250368:
    // 0x250368: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x250368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25036c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x25036cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250370: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x250370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x250374: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x250374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x250378: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x250378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25037c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x25037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x250380: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x250380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250384: 0x3e00008  jr          $ra
    ctx->pc = 0x250384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250384u;
        // 0x250388: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25038Cu;
    // 0x25038c: 0x0  nop
    ctx->pc = 0x25038cu;
    // NOP
    // 0x250390: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x250390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x250394: 0x0  nop
    ctx->pc = 0x250394u;
    // NOP
    ctx->pc = 0x250398u;
}
