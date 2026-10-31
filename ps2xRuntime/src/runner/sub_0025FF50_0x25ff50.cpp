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

// Function: sub_0025FF50
// Address: 0x25ff50 - 0x2600f0
void sub_0025FF50_0x25ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF50_0x25ff50");
#endif

    switch (ctx->pc) {
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        default: break;
    }

    ctx->pc = 0x25ff50u;

label_25ff50:
    // 0x25ff50: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x25ff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
label_25ff54:
    // 0x25ff54: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x25ff54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_25ff58:
    // 0x25ff58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ff58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ff5c:
    // 0x25ff5c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ff5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25ff60:
    // 0x25ff60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25ff64:
    // 0x25ff64: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25ff64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ff68:
    // 0x25ff68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25ff6c:
    // 0x25ff6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25ff70:
    // 0x25ff70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ff74:
    // 0x25ff74: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_25ff78:
    if (ctx->pc == 0x25FF78u) {
        ctx->pc = 0x25FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF74u;
        // 0x25ff78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF7Cu;
        goto label_25ff7c;
    }
    ctx->pc = 0x25FF74u;
    {
        const bool branch_taken_0x25ff74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF74u;
        // 0x25ff78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff74) {
            ctx->pc = 0x25FFB0u;
            goto label_25ffb0;
        }
    }
    ctx->pc = 0x25FF7Cu;
label_25ff7c:
    // 0x25ff7c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_25ff80:
    if (ctx->pc == 0x25FF80u) {
        ctx->pc = 0x25FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF7Cu;
        // 0x25ff80: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF84u;
        goto label_25ff84;
    }
    ctx->pc = 0x25FF7Cu;
    {
        const bool branch_taken_0x25ff7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF7Cu;
        // 0x25ff80: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff7c) {
            ctx->pc = 0x2600B0u;
            goto label_2600b0;
        }
    }
    ctx->pc = 0x25FF84u;
label_25ff84:
    // 0x25ff84: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ff88:
    // 0x25ff88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25ff8c:
    // 0x25ff8c: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25ff8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25ff90:
    // 0x25ff90: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25ff90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25ff94:
    // 0x25ff94: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25ff98:
    // 0x25ff98: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25ff9c:
    // 0x25ff9c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25ff9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25ffa0:
    // 0x25ffa0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25ffa4:
    // 0x25ffa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25ffa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ffa8:
    // 0x25ffa8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_25ffac:
    if (ctx->pc == 0x25FFACu) {
        ctx->pc = 0x25FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFA8u;
        // 0x25ffac: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFB0u;
        goto label_25ffb0;
    }
    ctx->pc = 0x25FFA8u;
    {
        const bool branch_taken_0x25ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFA8u;
        // 0x25ffac: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffa8) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x25FFB0u;
label_25ffb0:
    // 0x25ffb0: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
label_25ffb4:
    // 0x25ffb4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x25ffb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_25ffb8:
    // 0x25ffb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ffb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ffbc:
    // 0x25ffbc: 0x0  nop
    ctx->pc = 0x25ffbcu;
    // NOP
label_25ffc0:
    // 0x25ffc0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25ffc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ffc4:
    // 0x25ffc4: 0x0  nop
    ctx->pc = 0x25ffc4u;
    // NOP
label_25ffc8:
    // 0x25ffc8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_25ffcc:
    if (ctx->pc == 0x25FFCCu) {
        ctx->pc = 0x25FFD0u;
        goto label_25ffd0;
    }
    ctx->pc = 0x25FFC8u;
    {
        const bool branch_taken_0x25ffc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ffc8) {
            ctx->pc = 0x26000Cu;
            goto label_26000c;
        }
    }
    ctx->pc = 0x25FFD0u;
label_25ffd0:
    // 0x25ffd0: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_25ffd4:
    if (ctx->pc == 0x25FFD4u) {
        ctx->pc = 0x25FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFD0u;
        // 0x25ffd4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFD8u;
        goto label_25ffd8;
    }
    ctx->pc = 0x25FFD0u;
    {
        const bool branch_taken_0x25ffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFD0u;
        // 0x25ffd4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffd0) {
            ctx->pc = 0x2600B0u;
            goto label_2600b0;
        }
    }
    ctx->pc = 0x25FFD8u;
label_25ffd8:
    // 0x25ffd8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ffdc:
    // 0x25ffdc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25ffe0:
    // 0x25ffe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ffe4:
    // 0x25ffe4: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25ffe8:
    // 0x25ffe8: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25ffe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25ffec:
    // 0x25ffec: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25fff0:
    // 0x25fff0: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25fff4:
    // 0x25fff4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25fff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25fff8:
    // 0x25fff8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25fff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25fffc:
    // 0x25fffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25fffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_260000:
    // 0x260000: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260004:
    // 0x260004: 0x10000026  b           . + 4 + (0x26 << 2)
label_260008:
    if (ctx->pc == 0x260008u) {
        ctx->pc = 0x260008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260004u;
        // 0x260008: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26000Cu;
        goto label_26000c;
    }
    ctx->pc = 0x260004u;
    {
        const bool branch_taken_0x260004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260004u;
        // 0x260008: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260004) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x26000Cu;
label_26000c:
    // 0x26000c: 0x3c01403f  lui         $at, 0x403F
    ctx->pc = 0x26000cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16447 << 16));
label_260010:
    // 0x260010: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x260010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_260014:
    // 0x260014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260018:
    // 0x260018: 0x0  nop
    ctx->pc = 0x260018u;
    // NOP
label_26001c:
    // 0x26001c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x26001cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260020:
    // 0x260020: 0x0  nop
    ctx->pc = 0x260020u;
    // NOP
label_260024:
    // 0x260024: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_260028:
    if (ctx->pc == 0x260028u) {
        ctx->pc = 0x26002Cu;
        goto label_26002c;
    }
    ctx->pc = 0x260024u;
    {
        const bool branch_taken_0x260024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260024) {
            ctx->pc = 0x260068u;
            goto label_260068;
        }
    }
    ctx->pc = 0x26002Cu;
label_26002c:
    // 0x26002c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_260030:
    if (ctx->pc == 0x260030u) {
        ctx->pc = 0x260030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26002Cu;
        // 0x260030: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260034u;
        goto label_260034;
    }
    ctx->pc = 0x26002Cu;
    {
        const bool branch_taken_0x26002c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26002Cu;
        // 0x260030: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26002c) {
            ctx->pc = 0x2600B0u;
            goto label_2600b0;
        }
    }
    ctx->pc = 0x260034u;
label_260034:
    // 0x260034: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_260038:
    // 0x260038: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x260038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26003c:
    // 0x26003c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260040:
    // 0x260040: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_260044:
    // 0x260044: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_260048:
    // 0x260048: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26004c:
    // 0x26004c: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_260050:
    // 0x260050: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x260050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_260054:
    // 0x260054: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_260058:
    // 0x260058: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x260058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26005c:
    // 0x26005c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26005cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260060:
    // 0x260060: 0x1000000f  b           . + 4 + (0xF << 2)
label_260064:
    if (ctx->pc == 0x260064u) {
        ctx->pc = 0x260064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260060u;
        // 0x260064: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260068u;
        goto label_260068;
    }
    ctx->pc = 0x260060u;
    {
        const bool branch_taken_0x260060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260060u;
        // 0x260064: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260060) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x260068u;
label_260068:
    // 0x260068: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_26006c:
    if (ctx->pc == 0x26006Cu) {
        ctx->pc = 0x26006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260068u;
        // 0x26006c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260070u;
        goto label_260070;
    }
    ctx->pc = 0x260068u;
    {
        const bool branch_taken_0x260068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260068u;
        // 0x26006c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260068) {
            ctx->pc = 0x2600B0u;
            goto label_2600b0;
        }
    }
    ctx->pc = 0x260070u;
label_260070:
    // 0x260070: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x260070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_260074:
    // 0x260074: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x260074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_260078:
    // 0x260078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26007c:
    // 0x26007c: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_260080:
    // 0x260080: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_260084:
    // 0x260084: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x260084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_260088:
    // 0x260088: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x260088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_26008c:
    // 0x26008c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x26008cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_260090:
    // 0x260090: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x260090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_260094:
    // 0x260094: 0x8c480040  lw          $t0, 0x40($v0)
    ctx->pc = 0x260094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_260098:
    // 0x260098: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x260098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_26009c:
    // 0x26009c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26009cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2600a0:
    // 0x2600a0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2600a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2600a4:
    // 0x2600a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2600a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2600a8:
    // 0x2600a8: 0xc0428c4  jal         func_10A310
label_2600ac:
    if (ctx->pc == 0x2600ACu) {
        ctx->pc = 0x2600B0u;
        goto label_2600b0;
    }
    ctx->pc = 0x2600A8u;
    SET_GPR_U32(ctx, 31, 0x2600B0u);
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x2600A8u, 0x2600B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600B0u;
label_2600b0:
    // 0x2600b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2600b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2600b4:
    // 0x2600b4: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x2600b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_2600b8:
    // 0x2600b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2600b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_2600bc:
    // 0x2600bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x2600bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2600c0:
    // 0x2600c0: 0x60f809  jalr        $v1
label_2600c4:
    if (ctx->pc == 0x2600C4u) {
        ctx->pc = 0x2600C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C0u;
        // 0x2600c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600C8u;
        goto label_2600c8;
    }
    ctx->pc = 0x2600C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2600C8u);
        ctx->pc = 0x2600C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C0u;
        // 0x2600c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600C0u, 0x2600C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2600C8u;
label_2600c8:
    // 0x2600c8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x2600c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2600cc:
    // 0x2600cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2600d0:
    // 0x2600d0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2600d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_2600d4:
    // 0x2600d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2600d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2600d8:
    // 0x2600d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2600d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2600dc:
    // 0x2600dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2600dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2600e0:
    // 0x2600e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2600e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2600e4:
    // 0x2600e4: 0x3e00008  jr          $ra
label_2600e8:
    if (ctx->pc == 0x2600E8u) {
        ctx->pc = 0x2600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600E4u;
        // 0x2600e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600ECu;
        goto label_2600ec;
    }
    ctx->pc = 0x2600E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600E4u;
        // 0x2600e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2600ECu;
label_2600ec:
    // 0x2600ec: 0x0  nop
    ctx->pc = 0x2600ecu;
    // NOP
    ctx->pc = 0x2600f0u;
}
