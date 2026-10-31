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

// Function: sub_002EF188
// Address: 0x2ef188 - 0x2ef2c0
void sub_002EF188_0x2ef188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF188_0x2ef188");
#endif

    switch (ctx->pc) {
        case 0x2ef188u: goto label_2ef188;
        case 0x2ef18cu: goto label_2ef18c;
        case 0x2ef190u: goto label_2ef190;
        case 0x2ef194u: goto label_2ef194;
        case 0x2ef198u: goto label_2ef198;
        case 0x2ef19cu: goto label_2ef19c;
        case 0x2ef1a0u: goto label_2ef1a0;
        case 0x2ef1a4u: goto label_2ef1a4;
        case 0x2ef1a8u: goto label_2ef1a8;
        case 0x2ef1acu: goto label_2ef1ac;
        case 0x2ef1b0u: goto label_2ef1b0;
        case 0x2ef1b4u: goto label_2ef1b4;
        case 0x2ef1b8u: goto label_2ef1b8;
        case 0x2ef1bcu: goto label_2ef1bc;
        case 0x2ef1c0u: goto label_2ef1c0;
        case 0x2ef1c4u: goto label_2ef1c4;
        case 0x2ef1c8u: goto label_2ef1c8;
        case 0x2ef1ccu: goto label_2ef1cc;
        case 0x2ef1d0u: goto label_2ef1d0;
        case 0x2ef1d4u: goto label_2ef1d4;
        case 0x2ef1d8u: goto label_2ef1d8;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1e0u: goto label_2ef1e0;
        case 0x2ef1e4u: goto label_2ef1e4;
        case 0x2ef1e8u: goto label_2ef1e8;
        case 0x2ef1ecu: goto label_2ef1ec;
        case 0x2ef1f0u: goto label_2ef1f0;
        case 0x2ef1f4u: goto label_2ef1f4;
        case 0x2ef1f8u: goto label_2ef1f8;
        case 0x2ef1fcu: goto label_2ef1fc;
        case 0x2ef200u: goto label_2ef200;
        case 0x2ef204u: goto label_2ef204;
        case 0x2ef208u: goto label_2ef208;
        case 0x2ef20cu: goto label_2ef20c;
        case 0x2ef210u: goto label_2ef210;
        case 0x2ef214u: goto label_2ef214;
        case 0x2ef218u: goto label_2ef218;
        case 0x2ef21cu: goto label_2ef21c;
        case 0x2ef220u: goto label_2ef220;
        case 0x2ef224u: goto label_2ef224;
        case 0x2ef228u: goto label_2ef228;
        case 0x2ef22cu: goto label_2ef22c;
        case 0x2ef230u: goto label_2ef230;
        case 0x2ef234u: goto label_2ef234;
        case 0x2ef238u: goto label_2ef238;
        case 0x2ef23cu: goto label_2ef23c;
        case 0x2ef240u: goto label_2ef240;
        case 0x2ef244u: goto label_2ef244;
        case 0x2ef248u: goto label_2ef248;
        case 0x2ef24cu: goto label_2ef24c;
        case 0x2ef250u: goto label_2ef250;
        case 0x2ef254u: goto label_2ef254;
        case 0x2ef258u: goto label_2ef258;
        case 0x2ef25cu: goto label_2ef25c;
        case 0x2ef260u: goto label_2ef260;
        case 0x2ef264u: goto label_2ef264;
        case 0x2ef268u: goto label_2ef268;
        case 0x2ef26cu: goto label_2ef26c;
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef274u: goto label_2ef274;
        case 0x2ef278u: goto label_2ef278;
        case 0x2ef27cu: goto label_2ef27c;
        case 0x2ef280u: goto label_2ef280;
        case 0x2ef284u: goto label_2ef284;
        case 0x2ef288u: goto label_2ef288;
        case 0x2ef28cu: goto label_2ef28c;
        case 0x2ef290u: goto label_2ef290;
        case 0x2ef294u: goto label_2ef294;
        case 0x2ef298u: goto label_2ef298;
        case 0x2ef29cu: goto label_2ef29c;
        case 0x2ef2a0u: goto label_2ef2a0;
        case 0x2ef2a4u: goto label_2ef2a4;
        case 0x2ef2a8u: goto label_2ef2a8;
        case 0x2ef2acu: goto label_2ef2ac;
        case 0x2ef2b0u: goto label_2ef2b0;
        case 0x2ef2b4u: goto label_2ef2b4;
        case 0x2ef2b8u: goto label_2ef2b8;
        case 0x2ef2bcu: goto label_2ef2bc;
        default: break;
    }

    ctx->pc = 0x2ef188u;

label_2ef188:
    // 0x2ef188: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ef188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ef18c:
    // 0x2ef18c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2ef18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2ef190:
    // 0x2ef190: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ef190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ef194:
    // 0x2ef194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ef194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef198:
    // 0x2ef198: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2ef198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2ef19c:
    // 0x2ef19c: 0x26540024  addiu       $s4, $s2, 0x24
    ctx->pc = 0x2ef19cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_2ef1a0:
    // 0x2ef1a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2ef1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2ef1a4:
    // 0x2ef1a4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ef1a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef1a8:
    // 0x2ef1a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2ef1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2ef1ac:
    // 0x2ef1ac: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2ef1acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1b0:
    // 0x2ef1b0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2ef1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2ef1b4:
    // 0x2ef1b4: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ef1b8:
    // 0x2ef1b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2ef1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2ef1bc:
    // 0x2ef1bc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x2ef1bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_2ef1c0:
    // 0x2ef1c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ef1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2ef1c4:
    // 0x2ef1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef1c8:
    // 0x2ef1c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2ef1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2ef1cc:
    // 0x2ef1cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ef1d0:
    if (ctx->pc == 0x2EF1D0u) {
        ctx->pc = 0x2EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1CCu;
        // 0x2ef1d0: 0x92510036  lbu         $s1, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1D4u;
        goto label_2ef1d4;
    }
    ctx->pc = 0x2EF1CCu;
    {
        const bool branch_taken_0x2ef1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1CCu;
        // 0x2ef1d0: 0x92510036  lbu         $s1, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1cc) {
            ctx->pc = 0x2EF1E0u;
            goto label_2ef1e0;
        }
    }
    ctx->pc = 0x2EF1D4u;
label_2ef1d4:
    // 0x2ef1d4: 0x0  nop
    ctx->pc = 0x2ef1d4u;
    // NOP
label_2ef1d8:
    // 0x2ef1d8: 0x56750023  bnel        $s3, $s5, . + 4 + (0x23 << 2)
label_2ef1dc:
    if (ctx->pc == 0x2EF1DCu) {
        ctx->pc = 0x2EF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1D8u;
        // 0x2ef1dc: 0xa2510036  sb          $s1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1E0u;
        goto label_2ef1e0;
    }
    ctx->pc = 0x2EF1D8u;
    {
        const bool branch_taken_0x2ef1d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ef1d8) {
            ctx->pc = 0x2EF1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF1D8u;
            // 0x2ef1dc: 0xa2510036  sb          $s1, 0x36($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF268u;
            goto label_2ef268;
        }
    }
    ctx->pc = 0x2EF1E0u;
label_2ef1e0:
    // 0x2ef1e0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ef1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef1e4:
    // 0x2ef1e4: 0x30710007  andi        $s1, $v1, 0x7
    ctx->pc = 0x2ef1e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2ef1e8:
    // 0x2ef1e8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2ef1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2ef1ec:
    // 0x2ef1ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ef1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2ef1f0:
    // 0x2ef1f0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef1f4:
    // 0x2ef1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ef1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ef1f8:
    // 0x2ef1f8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_2ef1fc:
    if (ctx->pc == 0x2EF1FCu) {
        ctx->pc = 0x2EF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F8u;
        // 0x2ef1fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF200u;
        goto label_2ef200;
    }
    ctx->pc = 0x2EF1F8u;
    {
        const bool branch_taken_0x2ef1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F8u;
        // 0x2ef1fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1f8) {
            ctx->pc = 0x2EF258u;
            goto label_2ef258;
        }
    }
    ctx->pc = 0x2EF200u;
label_2ef200:
    // 0x2ef200: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x2ef200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_2ef204:
    // 0x2ef204: 0xc0e44cc  jal         func_391330
label_2ef208:
    if (ctx->pc == 0x2EF208u) {
        ctx->pc = 0x2EF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF204u;
        // 0x2ef208: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF20Cu;
        goto label_2ef20c;
    }
    ctx->pc = 0x2EF204u;
    SET_GPR_U32(ctx, 31, 0x2EF20Cu);
    ctx->pc = 0x2EF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF204u;
    // 0x2ef208: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2EF204u, 0x2EF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF20Cu;
label_2ef20c:
    // 0x2ef20c: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x2ef20cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2ef210:
    // 0x2ef210: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2ef210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ef214:
    // 0x2ef214: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_2ef218:
    if (ctx->pc == 0x2EF218u) {
        ctx->pc = 0x2EF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF214u;
        // 0x2ef218: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF21Cu;
        goto label_2ef21c;
    }
    ctx->pc = 0x2EF214u;
    {
        const bool branch_taken_0x2ef214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef214) {
            ctx->pc = 0x2EF218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF214u;
            // 0x2ef218: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF25Cu;
            goto label_2ef25c;
        }
    }
    ctx->pc = 0x2EF21Cu;
label_2ef21c:
    // 0x2ef21c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ef21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef220:
    // 0x2ef220: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ef224:
    // 0x2ef224: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2ef224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2ef228:
    // 0x2ef228: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2ef22c:
    if (ctx->pc == 0x2EF22Cu) {
        ctx->pc = 0x2EF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF228u;
        // 0x2ef22c: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF230u;
        goto label_2ef230;
    }
    ctx->pc = 0x2EF228u;
    {
        const bool branch_taken_0x2ef228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef228) {
            ctx->pc = 0x2EF22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF228u;
            // 0x2ef22c: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF25Cu;
            goto label_2ef25c;
        }
    }
    ctx->pc = 0x2EF230u;
label_2ef230:
    // 0x2ef230: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2ef230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ef234:
    // 0x2ef234: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ef234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ef238:
    // 0x2ef238: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ef238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ef23c:
    // 0x2ef23c: 0x40f809  jalr        $v0
label_2ef240:
    if (ctx->pc == 0x2EF240u) {
        ctx->pc = 0x2EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF23Cu;
        // 0x2ef240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF244u;
        goto label_2ef244;
    }
    ctx->pc = 0x2EF23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF244u);
        ctx->pc = 0x2EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF23Cu;
        // 0x2ef240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF23Cu, 0x2EF244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF244u;
label_2ef244:
    // 0x2ef244: 0x54570005  bnel        $v0, $s7, . + 4 + (0x5 << 2)
label_2ef248:
    if (ctx->pc == 0x2EF248u) {
        ctx->pc = 0x2EF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF244u;
        // 0x2ef248: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF24Cu;
        goto label_2ef24c;
    }
    ctx->pc = 0x2EF244u;
    {
        const bool branch_taken_0x2ef244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2ef244) {
            ctx->pc = 0x2EF248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF244u;
            // 0x2ef248: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF25Cu;
            goto label_2ef25c;
        }
    }
    ctx->pc = 0x2EF24Cu;
label_2ef24c:
    // 0x2ef24c: 0xc0c29a0  jal         func_30A680
label_2ef250:
    if (ctx->pc == 0x2EF250u) {
        ctx->pc = 0x2EF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF24Cu;
        // 0x2ef250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF254u;
        goto label_2ef254;
    }
    ctx->pc = 0x2EF24Cu;
    SET_GPR_U32(ctx, 31, 0x2EF254u);
    ctx->pc = 0x2EF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF24Cu;
    // 0x2ef250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A680u, 0x2EF24Cu, 0x2EF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF254u;
label_2ef254:
    // 0x2ef254: 0x2a2980a  movz        $s3, $s5, $v0
    ctx->pc = 0x2ef254u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
label_2ef258:
    // 0x2ef258: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x2ef258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2ef25c:
    // 0x2ef25c: 0x1622ffde  bne         $s1, $v0, . + 4 + (-0x22 << 2)
label_2ef260:
    if (ctx->pc == 0x2EF260u) {
        ctx->pc = 0x2EF264u;
        goto label_2ef264;
    }
    ctx->pc = 0x2EF25Cu;
    {
        const bool branch_taken_0x2ef25c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef25c) {
            ctx->pc = 0x2EF1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef1d8;
        }
    }
    ctx->pc = 0x2EF264u;
label_2ef264:
    // 0x2ef264: 0xa2510036  sb          $s1, 0x36($s2)
    ctx->pc = 0x2ef264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 17));
label_2ef268:
    // 0x2ef268: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ef268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ef26c:
    // 0x2ef26c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2ef26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2ef270:
    // 0x2ef270: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2ef274:
    // 0x2ef274: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2ef274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2ef278:
    // 0x2ef278: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ef278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef27c:
    // 0x2ef27c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_2ef280:
    if (ctx->pc == 0x2EF280u) {
        ctx->pc = 0x2EF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF27Cu;
        // 0x2ef280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF284u;
        goto label_2ef284;
    }
    ctx->pc = 0x2EF27Cu;
    {
        const bool branch_taken_0x2ef27c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF27Cu;
        // 0x2ef280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef27c) {
            ctx->pc = 0x2EF290u;
            goto label_2ef290;
        }
    }
    ctx->pc = 0x2EF284u;
label_2ef284:
    // 0x2ef284: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ef284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ef288:
    // 0x2ef288: 0xc0e4546  jal         func_391518
label_2ef28c:
    if (ctx->pc == 0x2EF28Cu) {
        ctx->pc = 0x2EF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF288u;
        // 0x2ef28c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF290u;
        goto label_2ef290;
    }
    ctx->pc = 0x2EF288u;
    SET_GPR_U32(ctx, 31, 0x2EF290u);
    ctx->pc = 0x2EF28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF288u;
    // 0x2ef28c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x2EF288u, 0x2EF290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF290u;
label_2ef290:
    // 0x2ef290: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2ef290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef294:
    // 0x2ef294: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2ef294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef298:
    // 0x2ef298: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2ef298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ef29c:
    // 0x2ef29c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ef29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef2a0:
    // 0x2ef2a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ef2a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef2a4:
    // 0x2ef2a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2ef2a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef2a8:
    // 0x2ef2a8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2ef2a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef2ac:
    // 0x2ef2ac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2ef2acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef2b0:
    // 0x2ef2b0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2ef2b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef2b4:
    // 0x2ef2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef2b8:
    // 0x2ef2b8: 0x3e00008  jr          $ra
label_2ef2bc:
    if (ctx->pc == 0x2EF2BCu) {
        ctx->pc = 0x2EF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2B8u;
        // 0x2ef2bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2C0u;
        goto label_fallthrough_0x2ef2b8;
    }
    ctx->pc = 0x2EF2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2B8u;
        // 0x2ef2bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef2b8:
    ctx->pc = 0x2EF2C0u;
}
