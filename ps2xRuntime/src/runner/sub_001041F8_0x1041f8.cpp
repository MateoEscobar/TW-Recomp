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

// Function: sub_001041F8
// Address: 0x1041f8 - 0x104410
void sub_001041F8_0x1041f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001041F8_0x1041f8");
#endif

    switch (ctx->pc) {
        case 0x1042b0u: goto label_1042b0;
        case 0x1042f0u: goto label_1042f0;
        case 0x104310u: goto label_104310;
        case 0x104370u: goto label_104370;
        case 0x104398u: goto label_104398;
        case 0x1043b0u: goto label_1043b0;
        case 0x1043d8u: goto label_1043d8;
        default: break;
    }

    ctx->pc = 0x1041f8u;

    // 0x1041f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1041f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1041fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1041fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x104200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x104204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10420c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x104210: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x104210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104214: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x104214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x104218: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10421c: 0xa60000d8  sh          $zero, 0xD8($s0)
    ctx->pc = 0x10421cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 0));
    // 0x104220: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x104220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x104224: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x104224u;
    {
        const bool branch_taken_0x104224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104224u;
        // 0x104228: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104224) {
            ctx->pc = 0x104244u;
            goto label_104244;
        }
    }
    ctx->pc = 0x10422Cu;
    // 0x10422c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x10422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x104230: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x104230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104234: 0xa20200b4  sb          $v0, 0xB4($s0)
    ctx->pc = 0x104234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x104238: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x104238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10423c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10423Cu;
    {
        const bool branch_taken_0x10423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10423Cu;
        // 0x104240: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10423c) {
            ctx->pc = 0x10424Cu;
            goto label_10424c;
        }
    }
    ctx->pc = 0x104244u;
label_104244:
    // 0x104244: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x104244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x104248: 0xa20000b4  sb          $zero, 0xB4($s0)
    ctx->pc = 0x104248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 180), (uint8_t)GPR_U32(ctx, 0));
label_10424c:
    // 0x10424c: 0xa60000da  sh          $zero, 0xDA($s0)
    ctx->pc = 0x10424cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 218), (uint16_t)GPR_U32(ctx, 0));
    // 0x104250: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x104250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104254: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x104254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x104258: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x104258u;
    {
        const bool branch_taken_0x104258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104258) {
            ctx->pc = 0x10425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104258u;
            // 0x10425c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104278u;
            goto label_104278;
        }
    }
    ctx->pc = 0x104260u;
    // 0x104260: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x104260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x104264: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x104264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104268: 0xa20200b5  sb          $v0, 0xB5($s0)
    ctx->pc = 0x104268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 2));
    // 0x10426c: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x10426cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x104270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104270u;
    {
        const bool branch_taken_0x104270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104270u;
        // 0x104274: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104270) {
            ctx->pc = 0x10427Cu;
            goto label_10427c;
        }
    }
    ctx->pc = 0x104278u;
label_104278:
    // 0x104278: 0xa20000b5  sb          $zero, 0xB5($s0)
    ctx->pc = 0x104278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 0));
label_10427c:
    // 0x10427c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104280: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x104280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x104284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104288: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104288u;
    {
        const bool branch_taken_0x104288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104288u;
        // 0x10428c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104288) {
            ctx->pc = 0x1042D0u;
            goto label_1042d0;
        }
    }
    ctx->pc = 0x104290u;
    // 0x104290: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x104290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x104294: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x104294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x104298: 0x260700de  addiu       $a3, $s0, 0xDE
    ctx->pc = 0x104298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 222));
    // 0x10429c: 0x260800b7  addiu       $t0, $s0, 0xB7
    ctx->pc = 0x10429cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 183));
    // 0x1042a0: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1042a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1042a4: 0xa60000dc  sh          $zero, 0xDC($s0)
    ctx->pc = 0x1042a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x1042a8: 0xa20200b6  sb          $v0, 0xB6($s0)
    ctx->pc = 0x1042a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x1042ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1042acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1042b0:
    // 0x1042b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1042b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1042b4: 0x0  nop
    ctx->pc = 0x1042b4u;
    // NOP
    // 0x1042b8: 0x0  nop
    ctx->pc = 0x1042b8u;
    // NOP
    // 0x1042bc: 0x0  nop
    ctx->pc = 0x1042bcu;
    // NOP
    // 0x1042c0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1042C0u;
    {
        const bool branch_taken_0x1042c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1042c0) {
            ctx->pc = 0x1042C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1042C0u;
            // 0x1042c4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1042B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1042b0;
        }
    }
    ctx->pc = 0x1042C8u;
    // 0x1042c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1042C8u;
    {
        const bool branch_taken_0x1042c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042C8u;
        // 0x1042cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042c8) {
            ctx->pc = 0x1042E4u;
            goto label_1042e4;
        }
    }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1042d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1042d4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1042d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1042d8: 0xa20000b6  sb          $zero, 0xB6($s0)
    ctx->pc = 0x1042d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x1042dc: 0x260700de  addiu       $a3, $s0, 0xDE
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 222));
    // 0x1042e0: 0x260800b7  addiu       $t0, $s0, 0xB7
    ctx->pc = 0x1042e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 183));
label_1042e4:
    // 0x1042e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1042E4u;
    {
        const bool branch_taken_0x1042e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042E4u;
        // 0x1042e8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042e4) {
            ctx->pc = 0x104338u;
            goto label_104338;
        }
    }
    ctx->pc = 0x1042ECu;
    // 0x1042ec: 0x0  nop
    ctx->pc = 0x1042ecu;
    // NOP
label_1042f0:
    // 0x1042f0: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x1042f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1042f4: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x1042f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1042f8: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x1042f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1042fc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x104300: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x104300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x104304: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x104304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104308: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x104308u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10430c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_104310:
    // 0x104310: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x104310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104314: 0x0  nop
    ctx->pc = 0x104314u;
    // NOP
    // 0x104318: 0x0  nop
    ctx->pc = 0x104318u;
    // NOP
    // 0x10431c: 0x0  nop
    ctx->pc = 0x10431cu;
    // NOP
    // 0x104320: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104320u;
    {
        const bool branch_taken_0x104320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104320) {
            ctx->pc = 0x104324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104320u;
            // 0x104324: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104310;
        }
    }
    ctx->pc = 0x104328u;
    // 0x104328: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x104328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10432c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x10432cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104330: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x104330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104334: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x104334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_104338:
    // 0x104338: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x104338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x10433c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x10433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104340: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x104340u;
    {
        const bool branch_taken_0x104340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104340) {
            ctx->pc = 0x104344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104340u;
            // 0x104344: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1042F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1042f0;
        }
    }
    ctx->pc = 0x104348u;
    // 0x104348: 0x14c00025  bnez        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x104348u;
    {
        const bool branch_taken_0x104348 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x104348) {
            ctx->pc = 0x1043E0u;
            goto label_1043e0;
        }
    }
    ctx->pc = 0x104350u;
    // 0x104350: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x104350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x104354: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x104354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x104358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104358) {
            ctx->pc = 0x104368u;
            goto label_104368;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104360u;
    {
        const bool branch_taken_0x104360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104360u;
        // 0x104364: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104360) {
            ctx->pc = 0x104374u;
            goto label_104374;
        }
    }
    ctx->pc = 0x104368u;
label_104368:
    // 0x104368: 0xc040494  jal         func_101250
    ctx->pc = 0x104368u;
    SET_GPR_U32(ctx, 31, 0x104370u);
    ctx->pc = 0x10436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104368u;
    // 0x10436c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x104368u, 0x104370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104370u;
label_104370:
    // 0x104370: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x104370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_104374:
    // 0x104374: 0xa6000124  sh          $zero, 0x124($s0)
    ctx->pc = 0x104374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x104378: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10437c: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x10437cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x104380: 0x9444001a  lhu         $a0, 0x1A($v0)
    ctx->pc = 0x104380u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x104384: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x104384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x104388: 0xa6000128  sh          $zero, 0x128($s0)
    ctx->pc = 0x104388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x10438c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10438Cu;
    {
        const bool branch_taken_0x10438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10438Cu;
        // 0x104390: 0xa6040126  sh          $a0, 0x126($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10438c) {
            ctx->pc = 0x1043C0u;
            goto label_1043c0;
        }
    }
    ctx->pc = 0x104394u;
    // 0x104394: 0x0  nop
    ctx->pc = 0x104394u;
    // NOP
label_104398:
    // 0x104398: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x10439c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x10439cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1043a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1043a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1043a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1043a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a8: 0xc041044  jal         func_104110
    ctx->pc = 0x1043A8u;
    SET_GPR_U32(ctx, 31, 0x1043B0u);
    ctx->pc = 0x1043ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043A8u;
    // 0x1043ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104110u, 0x1043A8u, 0x1043B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043B0u;
label_1043b0:
    // 0x1043b0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1043b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1043b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1043b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1043b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1043B8u;
    {
        const bool branch_taken_0x1043b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043b8) {
            ctx->pc = 0x104398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104398;
        }
    }
    ctx->pc = 0x1043C0u;
label_1043c0:
    // 0x1043c0: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x1043c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1043c4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1043c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1043c8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1043C8u;
    {
        const bool branch_taken_0x1043c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043c8) {
            ctx->pc = 0x1043CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043C8u;
            // 0x1043cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1043FCu;
            goto label_1043fc;
        }
    }
    ctx->pc = 0x1043D0u;
    // 0x1043d0: 0xc040494  jal         func_101250
    ctx->pc = 0x1043D0u;
    SET_GPR_U32(ctx, 31, 0x1043D8u);
    ctx->pc = 0x1043D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043D0u;
    // 0x1043d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x1043D0u, 0x1043D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043D8u;
label_1043d8:
    // 0x1043d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1043D8u;
    {
        const bool branch_taken_0x1043d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043D8u;
        // 0x1043dc: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043d8) {
            ctx->pc = 0x1043F8u;
            goto label_1043f8;
        }
    }
    ctx->pc = 0x1043E0u;
label_1043e0:
    // 0x1043e0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1043e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1043e4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1043e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1043e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1043ec: 0xb2020127  sdl         $v0, 0x127($s0)
    ctx->pc = 0x1043ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1043f0: 0xb6020120  sdr         $v0, 0x120($s0)
    ctx->pc = 0x1043f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1043f4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x1043f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_1043f8:
    // 0x1043f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1043f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1043fc:
    // 0x1043fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1043fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104404: 0x3e00008  jr          $ra
    ctx->pc = 0x104404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104404u;
        // 0x104408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10440Cu;
    // 0x10440c: 0x0  nop
    ctx->pc = 0x10440cu;
    // NOP
    ctx->pc = 0x104410u;
}
