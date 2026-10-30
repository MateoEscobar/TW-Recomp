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

// Function: sub_00474170
// Address: 0x474170 - 0x474878
void sub_00474170_0x474170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474170_0x474170");
#endif

    switch (ctx->pc) {
        case 0x474218u: goto label_474218;
        case 0x474264u: goto label_474264;
        case 0x474278u: goto label_474278;
        case 0x474418u: goto label_474418;
        case 0x4744f0u: goto label_4744f0;
        case 0x474638u: goto label_474638;
        case 0x474728u: goto label_474728;
        default: break;
    }

    ctx->pc = 0x474170u;

    // 0x474170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x474170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x474174: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x474174u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474178: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x474178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x47417c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x474180: 0x8dc300bc  lw          $v1, 0xBC($t6)
    ctx->pc = 0x474180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 188)));
    // 0x474184: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x474184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x474188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x474188u;
    {
        const bool branch_taken_0x474188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474188u;
        // 0x47418c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474188) {
            ctx->pc = 0x47419Cu;
            goto label_47419c;
        }
    }
    ctx->pc = 0x474190u;
    // 0x474190: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x474190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x474194: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x474194u;
    {
        const bool branch_taken_0x474194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474194u;
        // 0x474198: 0x3062000c  andi        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474194) {
            ctx->pc = 0x4741BCu;
            goto label_4741bc;
        }
    }
    ctx->pc = 0x47419Cu;
label_47419c:
    // 0x47419c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x47419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4741a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4741a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4741a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4741a8: 0xa1c20214  sb          $v0, 0x214($t6)
    ctx->pc = 0x4741a8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 532), (uint8_t)GPR_U32(ctx, 2));
    // 0x4741ac: 0xa1c300c4  sb          $v1, 0xC4($t6)
    ctx->pc = 0x4741acu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 196), (uint8_t)GPR_U32(ctx, 3));
    // 0x4741b0: 0xa1c400c5  sb          $a0, 0xC5($t6)
    ctx->pc = 0x4741b0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 197), (uint8_t)GPR_U32(ctx, 4));
    // 0x4741b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4741B4u;
    {
        const bool branch_taken_0x4741b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4741B4u;
        // 0x4741b8: 0xa1c00215  sb          $zero, 0x215($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 533), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741b4) {
            ctx->pc = 0x4741E8u;
            goto label_4741e8;
        }
    }
    ctx->pc = 0x4741BCu;
label_4741bc:
    // 0x4741bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4741BCu;
    {
        const bool branch_taken_0x4741bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4741BCu;
        // 0x4741c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741bc) {
            ctx->pc = 0x4741D8u;
            goto label_4741d8;
        }
    }
    ctx->pc = 0x4741C4u;
    // 0x4741c4: 0xa1d100c5  sb          $s1, 0xC5($t6)
    ctx->pc = 0x4741c4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 197), (uint8_t)GPR_U32(ctx, 17));
    // 0x4741c8: 0xa1c200c4  sb          $v0, 0xC4($t6)
    ctx->pc = 0x4741c8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 196), (uint8_t)GPR_U32(ctx, 2));
    // 0x4741cc: 0xa1c20214  sb          $v0, 0x214($t6)
    ctx->pc = 0x4741ccu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 532), (uint8_t)GPR_U32(ctx, 2));
    // 0x4741d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4741D0u;
    {
        const bool branch_taken_0x4741d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4741D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4741D0u;
        // 0x4741d4: 0xa1c00215  sb          $zero, 0x215($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 533), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4741d0) {
            ctx->pc = 0x4741E8u;
            goto label_4741e8;
        }
    }
    ctx->pc = 0x4741D8u;
label_4741d8:
    // 0x4741d8: 0xa1c00215  sb          $zero, 0x215($t6)
    ctx->pc = 0x4741d8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 533), (uint8_t)GPR_U32(ctx, 0));
    // 0x4741dc: 0xa1c200c4  sb          $v0, 0xC4($t6)
    ctx->pc = 0x4741dcu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 196), (uint8_t)GPR_U32(ctx, 2));
    // 0x4741e0: 0xa1c20214  sb          $v0, 0x214($t6)
    ctx->pc = 0x4741e0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 532), (uint8_t)GPR_U32(ctx, 2));
    // 0x4741e4: 0xa1c000c5  sb          $zero, 0xC5($t6)
    ctx->pc = 0x4741e4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 197), (uint8_t)GPR_U32(ctx, 0));
label_4741e8:
    // 0x4741e8: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x4741e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x4741ec: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x4741ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x4741f0: 0x34422001  ori         $v0, $v0, 0x2001
    ctx->pc = 0x4741f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x4741f4: 0x34632001  ori         $v1, $v1, 0x2001
    ctx->pc = 0x4741f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8193);
    // 0x4741f8: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x4741f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x4741fc: 0xadc20078  sw          $v0, 0x78($t6)
    ctx->pc = 0x4741fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 120), GPR_U32(ctx, 2));
    // 0x474200: 0xadc30080  sw          $v1, 0x80($t6)
    ctx->pc = 0x474200u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 128), GPR_U32(ctx, 3));
    // 0x474204: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x474204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474208: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x474208u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47420c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x47420cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474210: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x474210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474214: 0x0  nop
    ctx->pc = 0x474214u;
    // NOP
label_474218:
    // 0x474218: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x474218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47421c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x47421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x474220: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x474220u;
    {
        const bool branch_taken_0x474220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474220u;
        // 0x474224: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474220) {
            ctx->pc = 0x47423Cu;
            goto label_47423c;
        }
    }
    ctx->pc = 0x474228u;
    // 0x474228: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x474228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x47422c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47422Cu;
    {
        const bool branch_taken_0x47422c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47422Cu;
        // 0x474230: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47422c) {
            ctx->pc = 0x474248u;
            goto label_474248;
        }
    }
    ctx->pc = 0x474234u;
    // 0x474234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x474234u;
    {
        const bool branch_taken_0x474234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474234u;
        // 0x474238: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474234) {
            ctx->pc = 0x474248u;
            goto label_474248;
        }
    }
    ctx->pc = 0x47423Cu;
label_47423c:
    // 0x47423c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x47423cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x474240: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x474240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x474244: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x474244u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474248:
    // 0x474248: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x474248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x47424c: 0x2d42000b  sltiu       $v0, $t2, 0xB
    ctx->pc = 0x47424cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x474250: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x474250u;
    {
        const bool branch_taken_0x474250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474250u;
        // 0x474254: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474250) {
            ctx->pc = 0x474218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474218;
        }
    }
    ctx->pc = 0x474258u;
    // 0x474258: 0x91c200c2  lbu         $v0, 0xC2($t6)
    ctx->pc = 0x474258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 194)));
    // 0x47425c: 0x11e20003  beq         $t7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47425Cu;
    {
        const bool branch_taken_0x47425c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x474260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47425Cu;
        // 0x474260: 0xa1d100c0  sb          $s1, 0xC0($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 192), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47425c) {
            ctx->pc = 0x47426Cu;
            goto label_47426c;
        }
    }
    ctx->pc = 0x474264u;
label_474264:
    // 0x474264: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x474264u;
    {
        const bool branch_taken_0x474264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474264u;
        // 0x474268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474264) {
            ctx->pc = 0x474868u;
            goto label_474868;
        }
    }
    ctx->pc = 0x47426Cu;
label_47426c:
    // 0x47426c: 0x25c90214  addiu       $t1, $t6, 0x214
    ctx->pc = 0x47426cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 532));
    // 0x474270: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x474270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474274: 0x0  nop
    ctx->pc = 0x474274u;
    // NOP
label_474278:
    // 0x474278: 0x5220003a  beql        $s1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x474278u;
    {
        const bool branch_taken_0x474278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x474278) {
            ctx->pc = 0x47427Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474278u;
            // 0x47427c: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x474364u;
            goto label_474364;
        }
    }
    ctx->pc = 0x474280u;
    // 0x474280: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x474280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x474284: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x474284u;
    {
        const bool branch_taken_0x474284 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x474284) {
            ctx->pc = 0x474288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474284u;
            // 0x474288: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x47428Cu;
            goto label_47428c;
        }
    }
    ctx->pc = 0x47428Cu;
label_47428c:
    // 0x47428c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x47428cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x474290: 0xef001b  divu        $zero, $a3, $t7
    ctx->pc = 0x474290u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x474294: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x474294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474298: 0x1012  mflo        $v0
    ctx->pc = 0x474298u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x47429c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x47429cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4742a0: 0x1012  mflo        $v0
    ctx->pc = 0x4742a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4742a4: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x4742a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4742a8: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x4742a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4742ac: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4742ACu;
    {
        const bool branch_taken_0x4742ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4742B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4742ACu;
        // 0x4742b0: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4742ac) {
            ctx->pc = 0x474264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474264;
        }
    }
    ctx->pc = 0x4742B4u;
    // 0x4742b4: 0x25e80002  addiu       $t0, $t7, 0x2
    ctx->pc = 0x4742b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x4742b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4742b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4742bc: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x4742bcu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4742c0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4742c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4742c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4742c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4742c8: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x4742c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x4742cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4742ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4742d0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4742d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4742d4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x4742d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x4742d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4742dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4742dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4742e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4742e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x4742e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4742e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4742e8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x4742e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4742ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4742ECu;
    {
        const bool branch_taken_0x4742ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4742ec) {
            ctx->pc = 0x4742F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4742ECu;
            // 0x4742f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4742F4u;
            goto label_4742f4;
        }
    }
    ctx->pc = 0x4742F4u;
label_4742f4:
    // 0x4742f4: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4742f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4742f8: 0x3012  mflo        $a2
    ctx->pc = 0x4742f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4742fc: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x4742fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x474300: 0x1812  mflo        $v1
    ctx->pc = 0x474300u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x474304: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x474304u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x474308: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x474308u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x47430c: 0x3012  mflo        $a2
    ctx->pc = 0x47430cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x474310: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x474310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x474314: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x474314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x474318: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x474318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x47431c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x47431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x474320: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x474320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x474324: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x474324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x474328: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x474328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x47432c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x47432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x474330: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x474330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x474334: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x474334u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x474338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x474338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47433c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x47433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x474340: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x474340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474344: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x474344u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x474348: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x474348u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x47434c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x47434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x474350: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x474350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474354: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x474354u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x474358: 0x3812  mflo        $a3
    ctx->pc = 0x474358u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x47435c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x47435Cu;
    {
        const bool branch_taken_0x47435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47435Cu;
        // 0x474360: 0xad270014  sw          $a3, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47435c) {
            ctx->pc = 0x4743F8u;
            goto label_4743f8;
        }
    }
    ctx->pc = 0x474364u;
label_474364:
    // 0x474364: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x474364u;
    {
        const bool branch_taken_0x474364 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x474364) {
            ctx->pc = 0x474368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474364u;
            // 0x474368: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x47436Cu;
            goto label_47436c;
        }
    }
    ctx->pc = 0x47436Cu;
label_47436c:
    // 0x47436c: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x47436cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x474370: 0x10f001b  divu        $zero, $t0, $t7
    ctx->pc = 0x474370u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x474374: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x474374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x474378: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x474378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47437c: 0x1012  mflo        $v0
    ctx->pc = 0x47437cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x474380: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x474380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x474384: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x474384u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x474388: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x474388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x47438c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x47438cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474390: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x474390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474398: 0x3012  mflo        $a2
    ctx->pc = 0x474398u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x47439c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x47439cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4743a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4743a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4743a4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x4743a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4743a8: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x4743A8u;
    {
        const bool branch_taken_0x4743a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4743ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4743A8u;
        // 0x4743ac: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4743a8) {
            ctx->pc = 0x474264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474264;
        }
    }
    ctx->pc = 0x4743B0u;
    // 0x4743b0: 0x25e20002  addiu       $v0, $t7, 0x2
    ctx->pc = 0x4743b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x4743b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4743b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4743b8: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x4743b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x4743bc: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x4743bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x4743c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4743C0u;
    {
        const bool branch_taken_0x4743c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4743c0) {
            ctx->pc = 0x4743C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4743C0u;
            // 0x4743c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4743C8u;
            goto label_4743c8;
        }
    }
    ctx->pc = 0x4743C8u;
label_4743c8:
    // 0x4743c8: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x4743c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x4743cc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4743ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4743d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4743d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4743d4: 0x1812  mflo        $v1
    ctx->pc = 0x4743d4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4743d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4743d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4743dc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x4743dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4743e0: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x4743e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x4743e4: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x4743e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x4743e8: 0x3012  mflo        $a2
    ctx->pc = 0x4743e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4743ec: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4743ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4743f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4743f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4743f4: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x4743f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_4743f8:
    // 0x4743f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4743f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4743fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474400: 0x25500001  addiu       $s0, $t2, 0x1
    ctx->pc = 0x474400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x474404: 0x91c500c1  lbu         $a1, 0xC1($t6)
    ctx->pc = 0x474404u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 193)));
    // 0x474408: 0x51400b  movn        $t0, $v0, $s1
    ctx->pc = 0x474408u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x47440c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x47440cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474410: 0x25d900c4  addiu       $t9, $t6, 0xC4
    ctx->pc = 0x474410u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), 196));
    // 0x474414: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x474414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_474418:
    // 0x474418: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x474418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x47441c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x474420: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x474420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x474424: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x474424u;
    {
        const bool branch_taken_0x474424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474424u;
        // 0x474428: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474424) {
            ctx->pc = 0x4744C4u;
            goto label_4744c4;
        }
    }
    ctx->pc = 0x47442Cu;
    // 0x47442c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x47442Cu;
    {
        const bool branch_taken_0x47442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47442Cu;
        // 0x474430: 0x2d420006  sltiu       $v0, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47442c) {
            ctx->pc = 0x4744C0u;
            goto label_4744c0;
        }
    }
    ctx->pc = 0x474434u;
    // 0x474434: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x474434u;
    {
        const bool branch_taken_0x474434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474434u;
        // 0x474438: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474434) {
            ctx->pc = 0x4744B8u;
            goto label_4744b8;
        }
    }
    ctx->pc = 0x47443Cu;
    // 0x47443c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x47443cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x474440: 0x2442e980  addiu       $v0, $v0, -0x1680
    ctx->pc = 0x474440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x474444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x474448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47444c: 0x800008  jr          $a0
    ctx->pc = 0x47444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x474454u: goto label_474454;
            case 0x47446Cu: goto label_47446c;
            case 0x474474u: goto label_474474;
            case 0x474488u: goto label_474488;
            case 0x474490u: goto label_474490;
            case 0x4744A0u: goto label_4744a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47444Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x474454u;
label_474454:
    // 0x474454: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x474454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x474458: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x474458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47445c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x474460: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474464: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x474464u;
    {
        const bool branch_taken_0x474464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474464u;
        // 0x474468: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474464) {
            ctx->pc = 0x4744B4u;
            goto label_4744b4;
        }
    }
    ctx->pc = 0x47446Cu;
label_47446c:
    // 0x47446c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x47446Cu;
    {
        const bool branch_taken_0x47446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47446Cu;
        // 0x474470: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47446c) {
            ctx->pc = 0x4744B4u;
            goto label_4744b4;
        }
    }
    ctx->pc = 0x474474u;
label_474474:
    // 0x474474: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x474474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x474478: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x474478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47447c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x47447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474480: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x474480u;
    {
        const bool branch_taken_0x474480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474480u;
        // 0x474484: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474480) {
            ctx->pc = 0x4744B4u;
            goto label_4744b4;
        }
    }
    ctx->pc = 0x474488u;
label_474488:
    // 0x474488: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x474488u;
    {
        const bool branch_taken_0x474488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474488u;
        // 0x47448c: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474488) {
            ctx->pc = 0x4744B4u;
            goto label_4744b4;
        }
    }
    ctx->pc = 0x474490u;
label_474490:
    // 0x474490: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x474490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x474494: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x474498u;
    {
        const bool branch_taken_0x474498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474498u;
        // 0x47449c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474498) {
            ctx->pc = 0x4744B4u;
            goto label_4744b4;
        }
    }
    ctx->pc = 0x4744A0u;
label_4744a0:
    // 0x4744a0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x4744a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4744a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4744a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4744a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4744a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4744ac: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4744acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4744b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4744b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_4744b4:
    // 0x4744b4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4744b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4744b8:
    // 0x4744b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4744B8u;
    {
        const bool branch_taken_0x4744b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4744BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4744B8u;
        // 0x4744bc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4744b8) {
            ctx->pc = 0x4744C4u;
            goto label_4744c4;
        }
    }
    ctx->pc = 0x4744C0u;
label_4744c0:
    // 0x4744c0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4744c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_4744c4:
    // 0x4744c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4744c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4744c8: 0x2d42000b  sltiu       $v0, $t2, 0xB
    ctx->pc = 0x4744c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x4744cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4744CCu;
    {
        const bool branch_taken_0x4744cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4744D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4744CCu;
        // 0x4744d0: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4744cc) {
            ctx->pc = 0x474418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474418;
        }
    }
    ctx->pc = 0x4744D4u;
    // 0x4744d4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4744d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4744d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4744d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4744dc: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x4744dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4744e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4744e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4744e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4744e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4744e8: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x4744e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x4744ec: 0x0  nop
    ctx->pc = 0x4744ecu;
    // NOP
label_4744f0:
    // 0x4744f0: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x4744f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4744f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4744f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4744f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4744f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4744fc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4744FCu;
    {
        const bool branch_taken_0x4744fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4744FCu;
        // 0x474500: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4744fc) {
            ctx->pc = 0x4745D4u;
            goto label_4745d4;
        }
    }
    ctx->pc = 0x474504u;
    // 0x474504: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x474504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x474508: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x474508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x47450c: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x47450cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x474510: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x474510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x474514: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x474514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x474518: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x474518u;
    {
        const bool branch_taken_0x474518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474518u;
        // 0x47451c: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474518) {
            ctx->pc = 0x4745B0u;
            goto label_4745b0;
        }
    }
    ctx->pc = 0x474520u;
    // 0x474520: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x474520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x474524: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x474524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474528: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x474528u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x47452c: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x47452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x474530: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x474530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474534: 0xac4d0020  sw          $t5, 0x20($v0)
    ctx->pc = 0x474534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 13));
    // 0x474538: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x474538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x47453c: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x47453cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x474540: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x474540u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x474544: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x474544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x474548: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x474548u;
    {
        const bool branch_taken_0x474548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474548u;
        // 0x47454c: 0xa4e80028  sh          $t0, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474548) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x474550u;
    // 0x474550: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x474550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x474554: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x474554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x474558: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x474558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x47455c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x474560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x474564: 0x800008  jr          $a0
    ctx->pc = 0x474564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x47456Cu: goto label_47456c;
            case 0x474578u: goto label_474578;
            case 0x474588u: goto label_474588;
            case 0x474590u: goto label_474590;
            case 0x47459Cu: goto label_47459c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474564u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x47456Cu;
label_47456c:
    // 0x47456c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x47456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x474570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x474570u;
    {
        const bool branch_taken_0x474570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474570u;
        // 0x474574: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474570) {
            ctx->pc = 0x47457Cu;
            goto label_47457c;
        }
    }
    ctx->pc = 0x474578u;
label_474578:
    // 0x474578: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x474578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_47457c:
    // 0x47457c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x47457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474580: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x474580u;
    {
        const bool branch_taken_0x474580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474580u;
        // 0x474584: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474580) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x474588u;
label_474588:
    // 0x474588: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x474588u;
    {
        const bool branch_taken_0x474588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474588u;
        // 0x47458c: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474588) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x474590u;
label_474590:
    // 0x474590: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x474590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x474594: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x474594u;
    {
        const bool branch_taken_0x474594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474594u;
        // 0x474598: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474594) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x47459Cu;
label_47459c:
    // 0x47459c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x47459cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4745a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4745a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4745a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4745a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4745A8u;
    {
        const bool branch_taken_0x4745a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4745ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4745A8u;
        // 0x4745ac: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4745a8) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x4745B0u;
label_4745b0:
    // 0x4745b0: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x4745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4745b4: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x4745b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4745b8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4745b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4745bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4745bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745c0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x4745c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x4745c4: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x4745c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4745c8: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x4745c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x4745cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4745CCu;
    {
        const bool branch_taken_0x4745cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4745D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4745CCu;
        // 0x4745d0: 0xa4e00028  sh          $zero, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4745cc) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x4745D4u;
label_4745d4:
    // 0x4745d4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x4745d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x4745d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4745D8u;
    {
        const bool branch_taken_0x4745d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4745DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4745D8u;
        // 0x4745dc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4745d8) {
            ctx->pc = 0x47460Cu;
            goto label_47460c;
        }
    }
    ctx->pc = 0x4745E0u;
    // 0x4745e0: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x4745e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4745e4: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x4745e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4745e8: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x4745e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4745ec: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x4745ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x4745f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4745f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745f4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4745f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4745f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4745f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4745fc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4745fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x474600: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x474600u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x474604: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x474604u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x474608: 0xa4600028  sh          $zero, 0x28($v1)
    ctx->pc = 0x474608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 0));
label_47460c:
    // 0x47460c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x47460cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x474610: 0x2d42000b  sltiu       $v0, $t2, 0xB
    ctx->pc = 0x474610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x474614: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x474614u;
    {
        const bool branch_taken_0x474614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474614u;
        // 0x474618: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474614) {
            ctx->pc = 0x4744F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4744f0;
        }
    }
    ctx->pc = 0x47461Cu;
    // 0x47461c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x47461cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x474620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474624: 0x91c500c1  lbu         $a1, 0xC1($t6)
    ctx->pc = 0x474624u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 193)));
    // 0x474628: 0x51400b  movn        $t0, $v0, $s1
    ctx->pc = 0x474628u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x47462c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x47462cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474630: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x474630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x474634: 0x0  nop
    ctx->pc = 0x474634u;
    // NOP
label_474638:
    // 0x474638: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x474638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x47463c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x474640: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x474640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x474644: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x474644u;
    {
        const bool branch_taken_0x474644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474644u;
        // 0x474648: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474644) {
            ctx->pc = 0x4746FCu;
            goto label_4746fc;
        }
    }
    ctx->pc = 0x47464Cu;
    // 0x47464c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x47464Cu;
    {
        const bool branch_taken_0x47464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47464Cu;
        // 0x474650: 0x2d42000d  sltiu       $v0, $t2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47464c) {
            ctx->pc = 0x4746F8u;
            goto label_4746f8;
        }
    }
    ctx->pc = 0x474654u;
    // 0x474654: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x474654u;
    {
        const bool branch_taken_0x474654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474654u;
        // 0x474658: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474654) {
            ctx->pc = 0x4746F0u;
            goto label_4746f0;
        }
    }
    ctx->pc = 0x47465Cu;
    // 0x47465c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x47465cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x474660: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x474660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x474664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474668: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x474668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47466c: 0x800008  jr          $a0
    ctx->pc = 0x47466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x474674u: goto label_474674;
            case 0x47468Cu: goto label_47468c;
            case 0x474694u: goto label_474694;
            case 0x4746A8u: goto label_4746a8;
            case 0x4746B0u: goto label_4746b0;
            case 0x4746C0u: goto label_4746c0;
            case 0x4746D8u: goto label_4746d8;
            case 0x4746F0u: goto label_4746f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47466Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x474674u;
label_474674:
    // 0x474674: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x474674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x474678: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x474678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47467c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x474680: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474684: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x474684u;
    {
        const bool branch_taken_0x474684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474684u;
        // 0x474688: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474684) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x47468Cu;
label_47468c:
    // 0x47468c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x47468Cu;
    {
        const bool branch_taken_0x47468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47468Cu;
        // 0x474690: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47468c) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x474694u;
label_474694:
    // 0x474694: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x474694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x474698: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x474698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47469c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x47469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4746a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4746A0u;
    {
        const bool branch_taken_0x4746a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4746A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4746A0u;
        // 0x4746a4: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4746a0) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x4746A8u;
label_4746a8:
    // 0x4746a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4746A8u;
    {
        const bool branch_taken_0x4746a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4746ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4746A8u;
        // 0x4746ac: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4746a8) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x4746B0u;
label_4746b0:
    // 0x4746b0: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4746b4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4746b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4746B8u;
    {
        const bool branch_taken_0x4746b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4746B8u;
        // 0x4746bc: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4746b8) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x4746C0u;
label_4746c0:
    // 0x4746c0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4746c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4746c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4746c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4746cc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4746ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4746d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4746D0u;
    {
        const bool branch_taken_0x4746d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4746D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4746D0u;
        // 0x4746d4: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4746d0) {
            ctx->pc = 0x4746ECu;
            goto label_4746ec;
        }
    }
    ctx->pc = 0x4746D8u;
label_4746d8:
    // 0x4746d8: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4746d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4746dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4746dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4746e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4746e4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4746e8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4746e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_4746ec:
    // 0x4746ec: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4746ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4746f0:
    // 0x4746f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4746F0u;
    {
        const bool branch_taken_0x4746f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4746F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4746F0u;
        // 0x4746f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4746f0) {
            ctx->pc = 0x4746FCu;
            goto label_4746fc;
        }
    }
    ctx->pc = 0x4746F8u;
label_4746f8:
    // 0x4746f8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4746f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_4746fc:
    // 0x4746fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4746fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x474700: 0x2d42000d  sltiu       $v0, $t2, 0xD
    ctx->pc = 0x474700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x474704: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x474704u;
    {
        const bool branch_taken_0x474704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474704u;
        // 0x474708: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474704) {
            ctx->pc = 0x474638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474638;
        }
    }
    ctx->pc = 0x47470Cu;
    // 0x47470c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x47470cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x474710: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x474710u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474714: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x474714u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x474718: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x474718u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47471c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x47471cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474720: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x474720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x474724: 0x0  nop
    ctx->pc = 0x474724u;
    // NOP
label_474728:
    // 0x474728: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x474728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x47472c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x47472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x474730: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x474730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x474734: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x474734u;
    {
        const bool branch_taken_0x474734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474734u;
        // 0x474738: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474734) {
            ctx->pc = 0x47480Cu;
            goto label_47480c;
        }
    }
    ctx->pc = 0x47473Cu;
    // 0x47473c: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x47473cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x474740: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x474740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x474744: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x474744u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x474748: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x474748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47474c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x47474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x474750: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x474750u;
    {
        const bool branch_taken_0x474750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474750u;
        // 0x474754: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474750) {
            ctx->pc = 0x4747E8u;
            goto label_4747e8;
        }
    }
    ctx->pc = 0x474758u;
    // 0x474758: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x474758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x47475c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x47475cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474760: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x474760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x474764: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x474764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x474768: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x474768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47476c: 0xac4d0024  sw          $t5, 0x24($v0)
    ctx->pc = 0x47476cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 13));
    // 0x474770: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x474770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x474774: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x474774u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x474778: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x474778u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x47477c: 0x2d42000d  sltiu       $v0, $t2, 0xD
    ctx->pc = 0x47477cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x474780: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x474780u;
    {
        const bool branch_taken_0x474780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474780u;
        // 0x474784: 0xa4e8002a  sh          $t0, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474780) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x474788u;
    // 0x474788: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x474788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x47478c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x47478cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x474790: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x474790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x474794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x474798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47479c: 0x800008  jr          $a0
    ctx->pc = 0x47479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4747A4u: goto label_4747a4;
            case 0x4747ACu: goto label_4747ac;
            case 0x4747B4u: goto label_4747b4;
            case 0x4747C0u: goto label_4747c0;
            case 0x4747D4u: goto label_4747d4;
            case 0x474844u: goto label_474844;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47479Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4747A4u;
label_4747a4:
    // 0x4747a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4747A4u;
    {
        const bool branch_taken_0x4747a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4747A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4747A4u;
        // 0x4747a8: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4747a4) {
            ctx->pc = 0x4747C8u;
            goto label_4747c8;
        }
    }
    ctx->pc = 0x4747ACu;
label_4747ac:
    // 0x4747ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4747ACu;
    {
        const bool branch_taken_0x4747ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4747B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4747ACu;
        // 0x4747b0: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4747ac) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x4747B4u;
label_4747b4:
    // 0x4747b4: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x4747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x4747b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4747B8u;
    {
        const bool branch_taken_0x4747b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4747BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4747B8u;
        // 0x4747bc: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4747b8) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x4747C0u;
label_4747c0:
    // 0x4747c0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4747c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4747c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4747c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4747c8:
    // 0x4747c8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4747c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4747cc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4747CCu;
    {
        const bool branch_taken_0x4747cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4747D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4747CCu;
        // 0x4747d0: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4747cc) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x4747D4u;
label_4747d4:
    // 0x4747d4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4747d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4747dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4747dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4747e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4747E0u;
    {
        const bool branch_taken_0x4747e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4747E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4747E0u;
        // 0x4747e4: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4747e0) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x4747E8u;
label_4747e8:
    // 0x4747e8: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x4747e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4747ec: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x4747ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4747f0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4747f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x4747f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4747f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4747f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x4747f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x4747fc: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x4747fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x474800: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x474800u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x474804: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x474804u;
    {
        const bool branch_taken_0x474804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474804u;
        // 0x474808: 0xa4e0002a  sh          $zero, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474804) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x47480Cu;
label_47480c:
    // 0x47480c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x47480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x474810: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x474810u;
    {
        const bool branch_taken_0x474810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474810u;
        // 0x474814: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474810) {
            ctx->pc = 0x474844u;
            goto label_474844;
        }
    }
    ctx->pc = 0x474818u;
    // 0x474818: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x474818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x47481c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x47481cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474820: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x474820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x474824: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x474824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x474828: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x474828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47482c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x47482cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x474830: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x474830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474834: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x474834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x474838: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x474838u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x47483c: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x47483cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x474840: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x474840u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
label_474844:
    // 0x474844: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x474844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x474848: 0x2d42000d  sltiu       $v0, $t2, 0xD
    ctx->pc = 0x474848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x47484c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x47484Cu;
    {
        const bool branch_taken_0x47484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47484Cu;
        // 0x474850: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47484c) {
            ctx->pc = 0x474728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474728;
        }
    }
    ctx->pc = 0x474854u;
    // 0x474854: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x474854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474858: 0x2d420003  sltiu       $v0, $t2, 0x3
    ctx->pc = 0x474858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x47485c: 0x1440fe86  bnez        $v0, . + 4 + (-0x17A << 2)
    ctx->pc = 0x47485Cu;
    {
        const bool branch_taken_0x47485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47485Cu;
        // 0x474860: 0x320482d  daddu       $t1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47485c) {
            ctx->pc = 0x474278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474278;
        }
    }
    ctx->pc = 0x474864u;
    // 0x474864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474868:
    // 0x474868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x474868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47486c: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x47486cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474870: 0x3e00008  jr          $ra
    ctx->pc = 0x474870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474870u;
        // 0x474874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474878u;
}
