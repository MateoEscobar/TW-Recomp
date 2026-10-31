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

// Function: sub_00487320
// Address: 0x487320 - 0x487528
void sub_00487320_0x487320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487320_0x487320");
#endif

    switch (ctx->pc) {
        case 0x487378u: goto label_487378;
        case 0x487398u: goto label_487398;
        case 0x48741cu: goto label_48741c;
        case 0x48742cu: goto label_48742c;
        case 0x487448u: goto label_487448;
        case 0x487460u: goto label_487460;
        case 0x48747cu: goto label_48747c;
        case 0x487488u: goto label_487488;
        case 0x48749cu: goto label_48749c;
        case 0x4874b0u: goto label_4874b0;
        case 0x4874ccu: goto label_4874cc;
        case 0x4874e0u: goto label_4874e0;
        case 0x4874f8u: goto label_4874f8;
        default: break;
    }

    ctx->pc = 0x487320u;

    // 0x487320: 0x27bdbf60  addiu       $sp, $sp, -0x40A0
    ctx->pc = 0x487320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294950752));
    // 0x487324: 0x7fb14080  sq          $s1, 0x4080($sp)
    ctx->pc = 0x487324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16512), GPR_VEC(ctx, 17));
    // 0x487328: 0x7fb44050  sq          $s4, 0x4050($sp)
    ctx->pc = 0x487328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16464), GPR_VEC(ctx, 20));
    // 0x48732c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x48732cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487330: 0x7fb54040  sq          $s5, 0x4040($sp)
    ctx->pc = 0x487330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16448), GPR_VEC(ctx, 21));
    // 0x487334: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x487334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487338: 0x7fb64030  sq          $s6, 0x4030($sp)
    ctx->pc = 0x487338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16432), GPR_VEC(ctx, 22));
    // 0x48733c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x48733cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487340: 0x7fb74020  sq          $s7, 0x4020($sp)
    ctx->pc = 0x487340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16416), GPR_VEC(ctx, 23));
    // 0x487344: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x487344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487348: 0x7fb04090  sq          $s0, 0x4090($sp)
    ctx->pc = 0x487348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16528), GPR_VEC(ctx, 16));
    // 0x48734c: 0x7fb24070  sq          $s2, 0x4070($sp)
    ctx->pc = 0x48734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16496), GPR_VEC(ctx, 18));
    // 0x487350: 0x7fb34060  sq          $s3, 0x4060($sp)
    ctx->pc = 0x487350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16480), GPR_VEC(ctx, 19));
    // 0x487354: 0xffbf4010  sd          $ra, 0x4010($sp)
    ctx->pc = 0x487354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16400), GPR_U64(ctx, 31));
    // 0x487358: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x487358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48735c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x48735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x487360: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x487360u;
    {
        const bool branch_taken_0x487360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487360u;
        // 0x487364: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487360) {
            ctx->pc = 0x487424u;
            goto label_487424;
        }
    }
    ctx->pc = 0x487368u;
    // 0x487368: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x487368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48736c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x48736Cu;
    {
        const bool branch_taken_0x48736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48736Cu;
        // 0x487370: 0x2b24804  sllv        $t1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 21) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48736c) {
            ctx->pc = 0x4873C4u;
            goto label_4873c4;
        }
    }
    ctx->pc = 0x487374u;
    // 0x487374: 0x0  nop
    ctx->pc = 0x487374u;
    // NOP
label_487378:
    // 0x487378: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x487378u;
    {
        const bool branch_taken_0x487378 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x48737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487378u;
        // 0x48737c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487378) {
            ctx->pc = 0x4873C0u;
            goto label_4873c0;
        }
    }
    ctx->pc = 0x487380u;
    // 0x487380: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x487380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x487384: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x487384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x487388: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x487388u;
    {
        const bool branch_taken_0x487388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x487388) {
            ctx->pc = 0x48738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487388u;
            // 0x48738c: 0x24120040  addiu       $s2, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4873C0u;
            goto label_4873c0;
        }
    }
    ctx->pc = 0x487390u;
    // 0x487390: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x487390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x487394: 0x0  nop
    ctx->pc = 0x487394u;
    // NOP
label_487398:
    // 0x487398: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x487398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x48739c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48739Cu;
    {
        const bool branch_taken_0x48739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4873A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48739Cu;
        // 0x4873a0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48739c) {
            ctx->pc = 0x4873C0u;
            goto label_4873c0;
        }
    }
    ctx->pc = 0x4873A4u;
    // 0x4873a4: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x4873a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4873a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4873ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4873acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4873b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4873b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4873b4: 0x5083fff8  beql        $a0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4873B4u;
    {
        const bool branch_taken_0x4873b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4873b4) {
            ctx->pc = 0x4873B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4873B4u;
            // 0x4873b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487398;
        }
    }
    ctx->pc = 0x4873BCu;
    // 0x4873bc: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x4873bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4873c0:
    // 0x4873c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4873c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4873c4:
    // 0x4873c4: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x4873c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4873c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4873C8u;
    {
        const bool branch_taken_0x4873c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4873C8u;
        // 0x4873cc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4873c8) {
            ctx->pc = 0x4873F4u;
            goto label_4873f4;
        }
    }
    ctx->pc = 0x4873D0u;
    // 0x4873d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4873d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4873d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4873d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4873d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4873d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4873dc: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x4873dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4873e0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4873E0u;
    {
        const bool branch_taken_0x4873e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4873E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4873E0u;
        // 0x4873e4: 0x8c670018  lw          $a3, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4873e0) {
            ctx->pc = 0x4873F0u;
            goto label_4873f0;
        }
    }
    ctx->pc = 0x4873E8u;
    // 0x4873e8: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4873E8u;
    {
        const bool branch_taken_0x4873e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4873e8) {
            ctx->pc = 0x487378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487378;
        }
    }
    ctx->pc = 0x4873F0u;
label_4873f0:
    // 0x4873f0: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x4873f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4873f4:
    // 0x4873f4: 0x1654000b  bne         $s2, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x4873F4u;
    {
        const bool branch_taken_0x4873f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x4873F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4873F4u;
        // 0x4873f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4873f4) {
            ctx->pc = 0x487424u;
            goto label_487424;
        }
    }
    ctx->pc = 0x4873FCu;
    // 0x4873fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4873fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x487400: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x487400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487404: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x487404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x487408: 0x663014  dsllv       $a2, $a2, $v1
    ctx->pc = 0x487408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x48740c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x48740cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x487410: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x487410u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x487414: 0xc10c190  jal         func_430640
    ctx->pc = 0x487414u;
    SET_GPR_U32(ctx, 31, 0x48741Cu);
    ctx->pc = 0x487418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487414u;
    // 0x487418: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x487414u, 0x48741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48741Cu;
label_48741c:
    // 0x48741c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x48741Cu;
    {
        const bool branch_taken_0x48741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48741Cu;
        // 0x487420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48741c) {
            ctx->pc = 0x4874FCu;
            goto label_4874fc;
        }
    }
    ctx->pc = 0x487424u;
label_487424:
    // 0x487424: 0xc122c80  jal         func_48B200
    ctx->pc = 0x487424u;
    SET_GPR_U32(ctx, 31, 0x48742Cu);
    ctx->pc = 0x487428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487424u;
    // 0x487428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B200u, 0x487424u, 0x48742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48742Cu;
label_48742c:
    // 0x48742c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x48742Cu;
    {
        const bool branch_taken_0x48742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48742Cu;
        // 0x487430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48742c) {
            ctx->pc = 0x4874FCu;
            goto label_4874fc;
        }
    }
    ctx->pc = 0x487434u;
    // 0x487434: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x487434u;
    {
        const bool branch_taken_0x487434 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x487438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487434u;
        // 0x487438: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487434) {
            ctx->pc = 0x487468u;
            goto label_487468;
        }
    }
    ctx->pc = 0x48743Cu;
    // 0x48743c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x48743cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487440: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x487440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x487444: 0x0  nop
    ctx->pc = 0x487444u;
    // NOP
label_487448:
    // 0x487448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x487448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48744c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x487450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x487450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x487454: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x487454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x487458: 0xc122612  jal         func_489848
    ctx->pc = 0x487458u;
    SET_GPR_U32(ctx, 31, 0x487460u);
    ctx->pc = 0x48745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487458u;
    // 0x48745c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489848u, 0x487458u, 0x487460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487460u;
label_487460:
    // 0x487460: 0x5640fff9  bnel        $s2, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x487460u;
    {
        const bool branch_taken_0x487460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x487460) {
            ctx->pc = 0x487464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x487460u;
            // 0x487464: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487448;
        }
    }
    ctx->pc = 0x487468u;
label_487468:
    // 0x487468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x487468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48746c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x48746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487470: 0x2a52804  sllv        $a1, $a1, $s5
    ctx->pc = 0x487470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 21) & 0x1F));
    // 0x487474: 0xc1229ba  jal         func_48A6E8
    ctx->pc = 0x487474u;
    SET_GPR_U32(ctx, 31, 0x48747Cu);
    ctx->pc = 0x487478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487474u;
    // 0x487478: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E8u, 0x487474u, 0x48747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48747Cu;
label_48747c:
    // 0x48747c: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x48747Cu;
    {
        const bool branch_taken_0x48747c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x487480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48747Cu;
        // 0x487480: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48747c) {
            ctx->pc = 0x4874F0u;
            goto label_4874f0;
        }
    }
    ctx->pc = 0x487484u;
    // 0x487484: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x487484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487488:
    // 0x487488: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x487488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48748c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x48748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487490: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x487490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x487494: 0xc121622  jal         func_485888
    ctx->pc = 0x487494u;
    SET_GPR_U32(ctx, 31, 0x48749Cu);
    ctx->pc = 0x487498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487494u;
    // 0x487498: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x487494u, 0x48749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48749Cu;
label_48749c:
    // 0x48749c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48749cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4874a0: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4874A0u;
    {
        const bool branch_taken_0x4874a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4874A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4874A0u;
        // 0x4874a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4874a0) {
            ctx->pc = 0x4874FCu;
            goto label_4874fc;
        }
    }
    ctx->pc = 0x4874A8u;
    // 0x4874a8: 0xc121666  jal         func_485998
    ctx->pc = 0x4874A8u;
    SET_GPR_U32(ctx, 31, 0x4874B0u);
    ctx->pc = 0x4874ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4874A8u;
    // 0x4874ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x4874A8u, 0x4874B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874B0u;
label_4874b0:
    // 0x4874b0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4874b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4874b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4874b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4874b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4874b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4874bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4874bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4874c0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4874c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4874c4: 0xc122ae8  jal         func_48ABA0
    ctx->pc = 0x4874C4u;
    SET_GPR_U32(ctx, 31, 0x4874CCu);
    ctx->pc = 0x4874C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4874C4u;
    // 0x4874c8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ABA0u, 0x4874C4u, 0x4874CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874CCu;
label_4874cc:
    // 0x4874cc: 0xae160018  sw          $s6, 0x18($s0)
    ctx->pc = 0x4874ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
    // 0x4874d0: 0x12370003  beq         $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x4874D0u;
    {
        const bool branch_taken_0x4874d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x4874D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4874D0u;
        // 0x4874d4: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4874d0) {
            ctx->pc = 0x4874E0u;
            goto label_4874e0;
        }
    }
    ctx->pc = 0x4874D8u;
    // 0x4874d8: 0xc12164a  jal         func_485928
    ctx->pc = 0x4874D8u;
    SET_GPR_U32(ctx, 31, 0x4874E0u);
    ctx->pc = 0x4874DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4874D8u;
    // 0x4874dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4874D8u, 0x4874E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874E0u;
label_4874e0:
    // 0x4874e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4874e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4874e4: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x4874e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4874e8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4874E8u;
    {
        const bool branch_taken_0x4874e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4874ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4874E8u;
        // 0x4874ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4874e8) {
            ctx->pc = 0x487488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487488;
        }
    }
    ctx->pc = 0x4874F0u;
label_4874f0:
    // 0x4874f0: 0xc122cc2  jal         func_48B308
    ctx->pc = 0x4874F0u;
    SET_GPR_U32(ctx, 31, 0x4874F8u);
    ctx->pc = 0x4874F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4874F0u;
    // 0x4874f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B308u, 0x4874F0u, 0x4874F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874F8u;
label_4874f8:
    // 0x4874f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4874f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4874fc:
    // 0x4874fc: 0x7bb04090  lq          $s0, 0x4090($sp)
    ctx->pc = 0x4874fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16528)));
    // 0x487500: 0x7bb14080  lq          $s1, 0x4080($sp)
    ctx->pc = 0x487500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16512)));
    // 0x487504: 0x7bb24070  lq          $s2, 0x4070($sp)
    ctx->pc = 0x487504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16496)));
    // 0x487508: 0x7bb34060  lq          $s3, 0x4060($sp)
    ctx->pc = 0x487508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16480)));
    // 0x48750c: 0x7bb44050  lq          $s4, 0x4050($sp)
    ctx->pc = 0x48750cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16464)));
    // 0x487510: 0x7bb54040  lq          $s5, 0x4040($sp)
    ctx->pc = 0x487510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16448)));
    // 0x487514: 0x7bb64030  lq          $s6, 0x4030($sp)
    ctx->pc = 0x487514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16432)));
    // 0x487518: 0x7bb74020  lq          $s7, 0x4020($sp)
    ctx->pc = 0x487518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16416)));
    // 0x48751c: 0xdfbf4010  ld          $ra, 0x4010($sp)
    ctx->pc = 0x48751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16400)));
    // 0x487520: 0x3e00008  jr          $ra
    ctx->pc = 0x487520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487520u;
        // 0x487524: 0x27bd40a0  addiu       $sp, $sp, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487528u;
}
