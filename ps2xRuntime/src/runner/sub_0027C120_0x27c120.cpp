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

// Function: sub_0027C120
// Address: 0x27c120 - 0x27cd50
void sub_0027C120_0x27c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C120_0x27c120");
#endif

    switch (ctx->pc) {
        case 0x27c140u: goto label_27c140;
        case 0x27c150u: goto label_27c150;
        case 0x27c160u: goto label_27c160;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c204u: goto label_27c204;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c318u: goto label_27c318;
        case 0x27c330u: goto label_27c330;
        case 0x27c384u: goto label_27c384;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c408u: goto label_27c408;
        case 0x27c418u: goto label_27c418;
        case 0x27c428u: goto label_27c428;
        case 0x27c438u: goto label_27c438;
        case 0x27c448u: goto label_27c448;
        case 0x27c468u: goto label_27c468;
        case 0x27c478u: goto label_27c478;
        case 0x27c488u: goto label_27c488;
        case 0x27c494u: goto label_27c494;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c504u: goto label_27c504;
        case 0x27c514u: goto label_27c514;
        case 0x27c524u: goto label_27c524;
        case 0x27c534u: goto label_27c534;
        case 0x27c544u: goto label_27c544;
        case 0x27c554u: goto label_27c554;
        case 0x27c564u: goto label_27c564;
        case 0x27c574u: goto label_27c574;
        case 0x27c584u: goto label_27c584;
        case 0x27c594u: goto label_27c594;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c608u: goto label_27c608;
        case 0x27c618u: goto label_27c618;
        case 0x27c620u: goto label_27c620;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c654u: goto label_27c654;
        case 0x27c664u: goto label_27c664;
        case 0x27c674u: goto label_27c674;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c704u: goto label_27c704;
        case 0x27c714u: goto label_27c714;
        case 0x27c724u: goto label_27c724;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c838u: goto label_27c838;
        case 0x27c860u: goto label_27c860;
        case 0x27c878u: goto label_27c878;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8ecu: goto label_27c8ec;
        case 0x27c904u: goto label_27c904;
        case 0x27c958u: goto label_27c958;
        case 0x27c970u: goto label_27c970;
        case 0x27c980u: goto label_27c980;
        case 0x27c998u: goto label_27c998;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9f4u: goto label_27c9f4;
        case 0x27ca04u: goto label_27ca04;
        case 0x27ca18u: goto label_27ca18;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca48u: goto label_27ca48;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca98u: goto label_27ca98;
        case 0x27caa8u: goto label_27caa8;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cac8u: goto label_27cac8;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cca4u: goto label_27cca4;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd30u: goto label_27cd30;
        default: break;
    }

    ctx->pc = 0x27c120u;

    // 0x27c120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27c124: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x27c128: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27c12c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27c130: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x27c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x27c134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c138: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27C138u;
    SET_GPR_U32(ctx, 31, 0x27C140u);
    ctx->pc = 0x27C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C138u;
    // 0x27c13c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27C138u, 0x27C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C140u;
label_27c140:
    // 0x27c140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27c140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c148: 0xc051fe6  jal         func_147F98
    ctx->pc = 0x27C148u;
    SET_GPR_U32(ctx, 31, 0x27C150u);
    ctx->pc = 0x27C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C148u;
    // 0x27c14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x27C148u, 0x27C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C150u;
label_27c150:
    // 0x27c150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c154: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27c154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c158: 0xc051fe6  jal         func_147F98
    ctx->pc = 0x27C158u;
    SET_GPR_U32(ctx, 31, 0x27C160u);
    ctx->pc = 0x27C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C158u;
    // 0x27c15c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x27C158u, 0x27C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C160u;
label_27c160:
    // 0x27c160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27c164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27c168: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x27c168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x27c16c: 0x90620410  lbu         $v0, 0x410($v1)
    ctx->pc = 0x27c16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x27c170: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27C170u;
    {
        const bool branch_taken_0x27c170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C170u;
        // 0x27c174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c170) {
            ctx->pc = 0x27C1BCu;
            goto label_27c1bc;
        }
    }
    ctx->pc = 0x27C178u;
    // 0x27c178: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27c17c: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x27c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510174u));
    // 0x27c180: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x27C180u;
    {
        const bool branch_taken_0x27c180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c180) {
            ctx->pc = 0x27C184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C180u;
            // 0x27c184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C1C0u;
            goto label_27c1c0;
        }
    }
    ctx->pc = 0x27C188u;
    // 0x27c188: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x27c18c: 0x8c42deb8  lw          $v0, -0x2148($v0)
    ctx->pc = 0x27c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x27c190: 0x8c4301d4  lw          $v1, 0x1D4($v0)
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x27c194: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27C194u;
    {
        const bool branch_taken_0x27c194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c194) {
            ctx->pc = 0x27C198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C194u;
            // 0x27c198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C1C0u;
            goto label_27c1c0;
        }
    }
    ctx->pc = 0x27C19Cu;
    // 0x27c19c: 0xc44101d8  lwc1        $f1, 0x1D8($v0)
    ctx->pc = 0x27c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27c1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c1a8: 0x0  nop
    ctx->pc = 0x27c1a8u;
    // NOP
    // 0x27c1ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27c1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c1b0: 0x0  nop
    ctx->pc = 0x27c1b0u;
    // NOP
    // 0x27c1b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C1B4u;
    {
        const bool branch_taken_0x27c1b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c1b4) {
            ctx->pc = 0x27C1C0u;
            goto label_27c1c0;
        }
    }
    ctx->pc = 0x27C1BCu;
label_27c1bc:
    // 0x27c1bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c1c0:
    // 0x27c1c0: 0x148002dc  bnez        $a0, . + 4 + (0x2DC << 2)
    ctx->pc = 0x27C1C0u;
    {
        const bool branch_taken_0x27c1c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1C0u;
        // 0x27c1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1c0) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C1C8u;
    // 0x27c1c8: 0xc089fd0  jal         func_227F40
    ctx->pc = 0x27C1C8u;
    SET_GPR_U32(ctx, 31, 0x27C1D0u);
    ctx->pc = 0x27C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C1C8u;
    // 0x27c1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x27C1C8u, 0x27C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1D0u;
label_27c1d0:
    // 0x27c1d0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x27C1D0u;
    {
        const bool branch_taken_0x27c1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1d0) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C1D8u;
    // 0x27c1d8: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27C1D8u;
    SET_GPR_U32(ctx, 31, 0x27C1E0u);
    ctx->pc = 0x27C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C1D8u;
    // 0x27c1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27C1D8u, 0x27C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1E0u;
label_27c1e0:
    // 0x27c1e0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x27C1E0u;
    {
        const bool branch_taken_0x27c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1e0) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C1E8u;
    // 0x27c1e8: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27c1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27c1ec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27c1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27c1f0: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27c1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27c1f4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27c1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27c1f8: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27c1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27c1fc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27C1FCu;
    SET_GPR_U32(ctx, 31, 0x27C204u);
    ctx->pc = 0x27C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C1FCu;
    // 0x27c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27C1FCu, 0x27C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C204u;
label_27c204:
    // 0x27c204: 0x144002cb  bnez        $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x27C204u;
    {
        const bool branch_taken_0x27c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C204u;
        // 0x27c208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c204) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C20Cu;
    // 0x27c20c: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27c210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c214: 0xc089998  jal         func_226660
    ctx->pc = 0x27C214u;
    SET_GPR_U32(ctx, 31, 0x27C21Cu);
    ctx->pc = 0x27C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C214u;
    // 0x27c218: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C214u, 0x27C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C21Cu;
label_27c21c:
    // 0x27c21c: 0x144002c5  bnez        $v0, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x27C21Cu;
    {
        const bool branch_taken_0x27c21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C21Cu;
        // 0x27c220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c21c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C224u;
    // 0x27c224: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x27c228: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27c228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27c22c: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27c230: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27c230u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E882u));
    // 0x27c234: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27C234u;
    {
        const bool branch_taken_0x27c234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C234u;
        // 0x27c238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c234) {
            ctx->pc = 0x27C26Cu;
            goto label_27c26c;
        }
    }
    ctx->pc = 0x27C23Cu;
    // 0x27c23c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c240: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C240u;
    {
        const bool branch_taken_0x27c240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C240u;
        // 0x27c244: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c240) {
            ctx->pc = 0x27C258u;
            goto label_27c258;
        }
    }
    ctx->pc = 0x27C248u;
    // 0x27c248: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27c248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27c24c: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27c250: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C250u;
    {
        const bool branch_taken_0x27c250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C250u;
        // 0x27c254: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c250) {
            ctx->pc = 0x27C268u;
            goto label_27c268;
        }
    }
    ctx->pc = 0x27C258u;
label_27c258:
    // 0x27c258: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27c25c: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27c260: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C260u;
    {
        const bool branch_taken_0x27c260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c260) {
            ctx->pc = 0x27C26Cu;
            goto label_27c26c;
        }
    }
    ctx->pc = 0x27C268u;
label_27c268:
    // 0x27c268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c26c:
    // 0x27c26c: 0x14a002b1  bnez        $a1, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x27C26Cu;
    {
        const bool branch_taken_0x27c26c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C26Cu;
        // 0x27c270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c26c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C274u;
    // 0x27c274: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27C274u;
    SET_GPR_U32(ctx, 31, 0x27C27Cu);
    ctx->pc = 0x27C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C274u;
    // 0x27c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27C274u, 0x27C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C27Cu;
label_27c27c:
    // 0x27c27c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27c27cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27c280: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x27C280u;
    {
        const bool branch_taken_0x27c280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c280) {
            ctx->pc = 0x27C3D0u;
            goto label_27c3d0;
        }
    }
    ctx->pc = 0x27C288u;
    // 0x27c288: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27c288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27c28c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27c28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27c290: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27c294: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27c294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27c298: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27c298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27c29c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27C29Cu;
    SET_GPR_U32(ctx, 31, 0x27C2A4u);
    ctx->pc = 0x27C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C29Cu;
    // 0x27c2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27C29Cu, 0x27C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2A4u;
label_27c2a4:
    // 0x27c2a4: 0x144002a3  bnez        $v0, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x27C2A4u;
    {
        const bool branch_taken_0x27c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2A4u;
        // 0x27c2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2a4) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C2ACu;
    // 0x27c2ac: 0x3c0505cf  lui         $a1, 0x5CF
    ctx->pc = 0x27c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1487 << 16));
    // 0x27c2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c2b4: 0xc089998  jal         func_226660
    ctx->pc = 0x27C2B4u;
    SET_GPR_U32(ctx, 31, 0x27C2BCu);
    ctx->pc = 0x27C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C2B4u;
    // 0x27c2b8: 0x34a5eafb  ori         $a1, $a1, 0xEAFB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60155);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C2B4u, 0x27C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2BCu;
label_27c2bc:
    // 0x27c2bc: 0x1440029d  bnez        $v0, . + 4 + (0x29D << 2)
    ctx->pc = 0x27C2BCu;
    {
        const bool branch_taken_0x27c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2BCu;
        // 0x27c2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2bc) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C2C4u;
    // 0x27c2c4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27c2c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27c2c8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27c2cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c2d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27c2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27c2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27c2d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27c2d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27c2dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27C2DCu;
    {
        const bool branch_taken_0x27c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c2dc) {
            ctx->pc = 0x27C320u;
            goto label_27c320;
        }
    }
    ctx->pc = 0x27C2E4u;
    // 0x27c2e4: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27c2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27c2e8: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x27c2ec: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27c2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27c2f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c2f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c2f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27c2fc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c304: 0x0  nop
    ctx->pc = 0x27c304u;
    // NOP
    // 0x27c308: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27C308u;
    {
        const bool branch_taken_0x27c308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c308) {
            ctx->pc = 0x27C320u;
            goto label_27c320;
        }
    }
    ctx->pc = 0x27C310u;
    // 0x27c310: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x27C310u;
    SET_GPR_U32(ctx, 31, 0x27C318u);
    ctx->pc = 0x27C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C310u;
    // 0x27c314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826F0u, 0x27C310u, 0x27C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C318u;
label_27c318:
    // 0x27c318: 0x14400170  bnez        $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x27C318u;
    {
        const bool branch_taken_0x27c318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c318) {
            ctx->pc = 0x27C8DCu;
            goto label_27c8dc;
        }
    }
    ctx->pc = 0x27C320u;
label_27c320:
    // 0x27c320: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C320u;
    {
        const bool branch_taken_0x27c320 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c320) {
            ctx->pc = 0x27C324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C320u;
            // 0x27c324: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C33Cu;
            goto label_27c33c;
        }
    }
    ctx->pc = 0x27C328u;
    // 0x27c328: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27C328u;
    SET_GPR_U32(ctx, 31, 0x27C330u);
    ctx->pc = 0x27C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C328u;
    // 0x27c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27C328u, 0x27C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C330u;
label_27c330:
    // 0x27c330: 0x14400280  bnez        $v0, . + 4 + (0x280 << 2)
    ctx->pc = 0x27C330u;
    {
        const bool branch_taken_0x27c330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C330u;
        // 0x27c334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c330) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C338u;
    // 0x27c338: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27c338u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_27c33c:
    // 0x27c33c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27c340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c344: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27c344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27c348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27c34c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27c34cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27c350: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27C350u;
    {
        const bool branch_taken_0x27c350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C350u;
        // 0x27c354: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c350) {
            ctx->pc = 0x27C3A4u;
            goto label_27c3a4;
        }
    }
    ctx->pc = 0x27C358u;
    // 0x27c358: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27c358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27c35c: 0xc46102e8  lwc1        $f1, 0x2E8($v1)
    ctx->pc = 0x27c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c364: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27c368: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c36c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c370: 0x0  nop
    ctx->pc = 0x27c370u;
    // NOP
    // 0x27c374: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27C374u;
    {
        const bool branch_taken_0x27c374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C374u;
        // 0x27c378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c374) {
            ctx->pc = 0x27C3A4u;
            goto label_27c3a4;
        }
    }
    ctx->pc = 0x27C37Cu;
    // 0x27c37c: 0xc0a0a7a  jal         func_2829E8
    ctx->pc = 0x27C37Cu;
    SET_GPR_U32(ctx, 31, 0x27C384u);
    ctx->pc = 0x27C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C37Cu;
    // 0x27c380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2829E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2829E8u, 0x27C37Cu, 0x27C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C384u;
label_27c384:
    // 0x27c384: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C384u;
    {
        const bool branch_taken_0x27c384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c384) {
            ctx->pc = 0x27C3A4u;
            goto label_27c3a4;
        }
    }
    ctx->pc = 0x27C38Cu;
label_27c38c:
    // 0x27c38c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27c38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27c390: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x27c390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x27c394: 0xc089988  jal         func_226620
    ctx->pc = 0x27C394u;
    SET_GPR_U32(ctx, 31, 0x27C39Cu);
    ctx->pc = 0x27C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C394u;
    // 0x27c398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27C394u, 0x27C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C39Cu;
label_27c39c:
    // 0x27c39c: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x27C39Cu;
    {
        const bool branch_taken_0x27c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C39Cu;
        // 0x27c3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c39c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C3A4u;
label_27c3a4:
    // 0x27c3a4: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x27C3A4u;
    {
        const bool branch_taken_0x27c3a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c3a4) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C3ACu;
    // 0x27c3ac: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x27C3ACu;
    SET_GPR_U32(ctx, 31, 0x27C3B4u);
    ctx->pc = 0x27C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3ACu;
    // 0x27c3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x27C3ACu, 0x27C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3B4u;
label_27c3b4:
    // 0x27c3b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27C3B4u;
    {
        const bool branch_taken_0x27c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3B4u;
        // 0x27c3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3b4) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C3BCu;
    // 0x27c3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c3c0: 0xc095fce  jal         func_257F38
    ctx->pc = 0x27C3C0u;
    SET_GPR_U32(ctx, 31, 0x27C3C8u);
    ctx->pc = 0x27C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3C0u;
    // 0x27c3c4: 0xa20205b8  sb          $v0, 0x5B8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x27C3C0u, 0x27C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3C8u;
label_27c3c8:
    // 0x27c3c8: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x27C3C8u;
    {
        const bool branch_taken_0x27c3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3C8u;
        // 0x27c3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3c8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C3D0u;
label_27c3d0:
    // 0x27c3d0: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27C3D0u;
    SET_GPR_U32(ctx, 31, 0x27C3D8u);
    ctx->pc = 0x27C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3D0u;
    // 0x27c3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27C3D0u, 0x27C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3D8u;
label_27c3d8:
    // 0x27c3d8: 0x14400256  bnez        $v0, . + 4 + (0x256 << 2)
    ctx->pc = 0x27C3D8u;
    {
        const bool branch_taken_0x27c3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3D8u;
        // 0x27c3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3d8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C3E0u;
label_27c3e0:
    // 0x27c3e0: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x27C3E0u;
    SET_GPR_U32(ctx, 31, 0x27C3E8u);
    ctx->pc = 0x27C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3E0u;
    // 0x27c3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x27C3E0u, 0x27C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3E8u;
label_27c3e8:
    // 0x27c3e8: 0x14400252  bnez        $v0, . + 4 + (0x252 << 2)
    ctx->pc = 0x27C3E8u;
    {
        const bool branch_taken_0x27c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3E8u;
        // 0x27c3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3e8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C3F0u;
    // 0x27c3f0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x27C3F0u;
    SET_GPR_U32(ctx, 31, 0x27C3F8u);
    ctx->pc = 0x27C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3F0u;
    // 0x27c3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x27C3F0u, 0x27C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3F8u;
label_27c3f8:
    // 0x27c3f8: 0x1440024e  bnez        $v0, . + 4 + (0x24E << 2)
    ctx->pc = 0x27C3F8u;
    {
        const bool branch_taken_0x27c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3F8u;
        // 0x27c3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3f8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C400u;
    // 0x27c400: 0xc089f66  jal         func_227D98
    ctx->pc = 0x27C400u;
    SET_GPR_U32(ctx, 31, 0x27C408u);
    ctx->pc = 0x27C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C400u;
    // 0x27c404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x27C400u, 0x27C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C408u;
label_27c408:
    // 0x27c408: 0x1440024a  bnez        $v0, . + 4 + (0x24A << 2)
    ctx->pc = 0x27C408u;
    {
        const bool branch_taken_0x27c408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C408u;
        // 0x27c40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c408) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C410u;
    // 0x27c410: 0xc088edc  jal         func_223B70
    ctx->pc = 0x27C410u;
    SET_GPR_U32(ctx, 31, 0x27C418u);
    ctx->pc = 0x27C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C410u;
    // 0x27c414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x27C410u, 0x27C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0x14400246  bnez        $v0, . + 4 + (0x246 << 2)
    ctx->pc = 0x27C418u;
    {
        const bool branch_taken_0x27c418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C418u;
        // 0x27c41c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c418) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C420u;
    // 0x27c420: 0xc08a01c  jal         func_228070
    ctx->pc = 0x27C420u;
    SET_GPR_U32(ctx, 31, 0x27C428u);
    ctx->pc = 0x27C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C420u;
    // 0x27c424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x27C420u, 0x27C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C428u;
label_27c428:
    // 0x27c428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C428u;
    {
        const bool branch_taken_0x27c428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c428) {
            ctx->pc = 0x27C440u;
            goto label_27c440;
        }
    }
    ctx->pc = 0x27C430u;
    // 0x27c430: 0xc0a15ae  jal         func_2856B8
    ctx->pc = 0x27C430u;
    SET_GPR_U32(ctx, 31, 0x27C438u);
    ctx->pc = 0x27C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C430u;
    // 0x27c434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2856B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856B8u, 0x27C430u, 0x27C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C438u;
label_27c438:
    // 0x27c438: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x27C438u;
    {
        const bool branch_taken_0x27c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C438u;
        // 0x27c43c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c438) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C440u;
label_27c440:
    // 0x27c440: 0xc08a024  jal         func_228090
    ctx->pc = 0x27C440u;
    SET_GPR_U32(ctx, 31, 0x27C448u);
    ctx->pc = 0x27C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C440u;
    // 0x27c444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x27C440u, 0x27C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C448u;
label_27c448:
    // 0x27c448: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27C448u;
    {
        const bool branch_taken_0x27c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c448) {
            ctx->pc = 0x27C49Cu;
            goto label_27c49c;
        }
    }
    ctx->pc = 0x27C450u;
    // 0x27c450: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27c450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27c454: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27c454u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27c458: 0x10400236  beqz        $v0, . + 4 + (0x236 << 2)
    ctx->pc = 0x27C458u;
    {
        const bool branch_taken_0x27c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C458u;
        // 0x27c45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c458) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C460u;
    // 0x27c460: 0xc0a1954  jal         func_286550
    ctx->pc = 0x27C460u;
    SET_GPR_U32(ctx, 31, 0x27C468u);
    ctx->pc = 0x27C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C460u;
    // 0x27c464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286550u, 0x27C460u, 0x27C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C468u;
label_27c468:
    // 0x27c468: 0x14400232  bnez        $v0, . + 4 + (0x232 << 2)
    ctx->pc = 0x27C468u;
    {
        const bool branch_taken_0x27c468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C468u;
        // 0x27c46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c468) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C470u;
    // 0x27c470: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27C470u;
    SET_GPR_U32(ctx, 31, 0x27C478u);
    ctx->pc = 0x27C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C470u;
    // 0x27c474: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27C470u, 0x27C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C478u;
label_27c478:
    // 0x27c478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c480: 0xc08b3ae  jal         func_22CEB8
    ctx->pc = 0x27C480u;
    SET_GPR_U32(ctx, 31, 0x27C488u);
    ctx->pc = 0x27C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C480u;
    // 0x27c484: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x27C480u, 0x27C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C488u;
label_27c488:
    // 0x27c488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c48c: 0xc09b306  jal         func_26CC18
    ctx->pc = 0x27C48Cu;
    SET_GPR_U32(ctx, 31, 0x27C494u);
    ctx->pc = 0x27C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C48Cu;
    // 0x27c490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CC18u, 0x27C48Cu, 0x27C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C494u;
label_27c494:
    // 0x27c494: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x27C494u;
    {
        const bool branch_taken_0x27c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C494u;
        // 0x27c498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c494) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C49Cu;
label_27c49c:
    // 0x27c49c: 0xc08a02c  jal         func_2280B0
    ctx->pc = 0x27C49Cu;
    SET_GPR_U32(ctx, 31, 0x27C4A4u);
    ctx->pc = 0x27C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C49Cu;
    // 0x27c4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x27C49Cu, 0x27C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4A4u;
label_27c4a4:
    // 0x27c4a4: 0x14400223  bnez        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x27C4A4u;
    {
        const bool branch_taken_0x27c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4A4u;
        // 0x27c4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4a4) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C4ACu;
    // 0x27c4ac: 0xc08a014  jal         func_228050
    ctx->pc = 0x27C4ACu;
    SET_GPR_U32(ctx, 31, 0x27C4B4u);
    ctx->pc = 0x27C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4ACu;
    // 0x27c4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x27C4ACu, 0x27C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4B4u;
label_27c4b4:
    // 0x27c4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C4B4u;
    {
        const bool branch_taken_0x27c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4b4) {
            ctx->pc = 0x27C4CCu;
            goto label_27c4cc;
        }
    }
    ctx->pc = 0x27C4BCu;
    // 0x27c4bc: 0xc09f9b6  jal         func_27E6D8
    ctx->pc = 0x27C4BCu;
    SET_GPR_U32(ctx, 31, 0x27C4C4u);
    ctx->pc = 0x27C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4BCu;
    // 0x27c4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E6D8u, 0x27C4BCu, 0x27C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4C4u;
label_27c4c4:
    // 0x27c4c4: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x27C4C4u;
    {
        const bool branch_taken_0x27c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4C4u;
        // 0x27c4c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4c4) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C4CCu;
label_27c4cc:
    // 0x27c4cc: 0xc08a034  jal         func_2280D0
    ctx->pc = 0x27C4CCu;
    SET_GPR_U32(ctx, 31, 0x27C4D4u);
    ctx->pc = 0x27C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4CCu;
    // 0x27c4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x27C4CCu, 0x27C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4D4u;
label_27c4d4:
    // 0x27c4d4: 0x14400217  bnez        $v0, . + 4 + (0x217 << 2)
    ctx->pc = 0x27C4D4u;
    {
        const bool branch_taken_0x27c4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4D4u;
        // 0x27c4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4d4) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C4DCu;
    // 0x27c4dc: 0xc088e40  jal         func_223900
    ctx->pc = 0x27C4DCu;
    SET_GPR_U32(ctx, 31, 0x27C4E4u);
    ctx->pc = 0x27C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4DCu;
    // 0x27c4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x27C4DCu, 0x27C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4E4u;
label_27c4e4:
    // 0x27c4e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C4E4u;
    {
        const bool branch_taken_0x27c4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4e4) {
            ctx->pc = 0x27C4FCu;
            goto label_27c4fc;
        }
    }
    ctx->pc = 0x27C4ECu;
    // 0x27c4ec: 0xc09fb08  jal         func_27EC20
    ctx->pc = 0x27C4ECu;
    SET_GPR_U32(ctx, 31, 0x27C4F4u);
    ctx->pc = 0x27C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4ECu;
    // 0x27c4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EC20u, 0x27C4ECu, 0x27C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4F4u;
label_27c4f4:
    // 0x27c4f4: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x27C4F4u;
    {
        const bool branch_taken_0x27c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4F4u;
        // 0x27c4f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4f4) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C4FCu;
label_27c4fc:
    // 0x27c4fc: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x27C4FCu;
    SET_GPR_U32(ctx, 31, 0x27C504u);
    ctx->pc = 0x27C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4FCu;
    // 0x27c500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x27C4FCu, 0x27C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C504u;
label_27c504:
    // 0x27c504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C504u;
    {
        const bool branch_taken_0x27c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c504) {
            ctx->pc = 0x27C51Cu;
            goto label_27c51c;
        }
    }
    ctx->pc = 0x27C50Cu;
    // 0x27c50c: 0xc09fc68  jal         func_27F1A0
    ctx->pc = 0x27C50Cu;
    SET_GPR_U32(ctx, 31, 0x27C514u);
    ctx->pc = 0x27C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C50Cu;
    // 0x27c510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1A0u, 0x27C50Cu, 0x27C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C514u;
label_27c514:
    // 0x27c514: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x27C514u;
    {
        const bool branch_taken_0x27c514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C514u;
        // 0x27c518: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c514) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C51Cu;
label_27c51c:
    // 0x27c51c: 0xc08a03c  jal         func_2280F0
    ctx->pc = 0x27C51Cu;
    SET_GPR_U32(ctx, 31, 0x27C524u);
    ctx->pc = 0x27C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C51Cu;
    // 0x27c520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280F0u, 0x27C51Cu, 0x27C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C524u;
label_27c524:
    // 0x27c524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C524u;
    {
        const bool branch_taken_0x27c524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c524) {
            ctx->pc = 0x27C53Cu;
            goto label_27c53c;
        }
    }
    ctx->pc = 0x27C52Cu;
    // 0x27c52c: 0xc0a1050  jal         func_284140
    ctx->pc = 0x27C52Cu;
    SET_GPR_U32(ctx, 31, 0x27C534u);
    ctx->pc = 0x27C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C52Cu;
    // 0x27c530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284140u, 0x27C52Cu, 0x27C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C534u;
label_27c534:
    // 0x27c534: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x27C534u;
    {
        const bool branch_taken_0x27c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C534u;
        // 0x27c538: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c534) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C53Cu;
label_27c53c:
    // 0x27c53c: 0xc088e60  jal         func_223980
    ctx->pc = 0x27C53Cu;
    SET_GPR_U32(ctx, 31, 0x27C544u);
    ctx->pc = 0x27C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C53Cu;
    // 0x27c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x27C53Cu, 0x27C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C544u;
label_27c544:
    // 0x27c544: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C544u;
    {
        const bool branch_taken_0x27c544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c544) {
            ctx->pc = 0x27C55Cu;
            goto label_27c55c;
        }
    }
    ctx->pc = 0x27C54Cu;
    // 0x27c54c: 0xc09fcec  jal         func_27F3B0
    ctx->pc = 0x27C54Cu;
    SET_GPR_U32(ctx, 31, 0x27C554u);
    ctx->pc = 0x27C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C54Cu;
    // 0x27c550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3B0u, 0x27C54Cu, 0x27C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C554u;
label_27c554:
    // 0x27c554: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x27C554u;
    {
        const bool branch_taken_0x27c554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C554u;
        // 0x27c558: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c554) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C55Cu;
label_27c55c:
    // 0x27c55c: 0xc088e48  jal         func_223920
    ctx->pc = 0x27C55Cu;
    SET_GPR_U32(ctx, 31, 0x27C564u);
    ctx->pc = 0x27C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C55Cu;
    // 0x27c560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x27C55Cu, 0x27C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C564u;
label_27c564:
    // 0x27c564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C564u;
    {
        const bool branch_taken_0x27c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c564) {
            ctx->pc = 0x27C57Cu;
            goto label_27c57c;
        }
    }
    ctx->pc = 0x27C56Cu;
    // 0x27c56c: 0xc09ff5a  jal         func_27FD68
    ctx->pc = 0x27C56Cu;
    SET_GPR_U32(ctx, 31, 0x27C574u);
    ctx->pc = 0x27C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C56Cu;
    // 0x27c570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FD68u, 0x27C56Cu, 0x27C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C574u;
label_27c574:
    // 0x27c574: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x27C574u;
    {
        const bool branch_taken_0x27c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C574u;
        // 0x27c578: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c574) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C57Cu;
label_27c57c:
    // 0x27c57c: 0xc088e78  jal         func_2239E0
    ctx->pc = 0x27C57Cu;
    SET_GPR_U32(ctx, 31, 0x27C584u);
    ctx->pc = 0x27C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C57Cu;
    // 0x27c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x27C57Cu, 0x27C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C584u;
label_27c584:
    // 0x27c584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C584u;
    {
        const bool branch_taken_0x27c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c584) {
            ctx->pc = 0x27C59Cu;
            goto label_27c59c;
        }
    }
    ctx->pc = 0x27C58Cu;
    // 0x27c58c: 0xc09f7ce  jal         func_27DF38
    ctx->pc = 0x27C58Cu;
    SET_GPR_U32(ctx, 31, 0x27C594u);
    ctx->pc = 0x27C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C58Cu;
    // 0x27c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DF38u, 0x27C58Cu, 0x27C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C594u;
label_27c594:
    // 0x27c594: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x27C594u;
    {
        const bool branch_taken_0x27c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C594u;
        // 0x27c598: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c594) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C59Cu;
label_27c59c:
    // 0x27c59c: 0xc088e80  jal         func_223A00
    ctx->pc = 0x27C59Cu;
    SET_GPR_U32(ctx, 31, 0x27C5A4u);
    ctx->pc = 0x27C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C59Cu;
    // 0x27c5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x27C59Cu, 0x27C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5A4u;
label_27c5a4:
    // 0x27c5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C5A4u;
    {
        const bool branch_taken_0x27c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5a4) {
            ctx->pc = 0x27C5BCu;
            goto label_27c5bc;
        }
    }
    ctx->pc = 0x27C5ACu;
    // 0x27c5ac: 0xc09f806  jal         func_27E018
    ctx->pc = 0x27C5ACu;
    SET_GPR_U32(ctx, 31, 0x27C5B4u);
    ctx->pc = 0x27C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5ACu;
    // 0x27c5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E018u, 0x27C5ACu, 0x27C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5B4u;
label_27c5b4:
    // 0x27c5b4: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x27C5B4u;
    {
        const bool branch_taken_0x27c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5B4u;
        // 0x27c5b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5b4) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C5BCu;
label_27c5bc:
    // 0x27c5bc: 0xc08a05a  jal         func_228168
    ctx->pc = 0x27C5BCu;
    SET_GPR_U32(ctx, 31, 0x27C5C4u);
    ctx->pc = 0x27C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5BCu;
    // 0x27c5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27C5BCu, 0x27C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5C4u;
label_27c5c4:
    // 0x27c5c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C5C4u;
    {
        const bool branch_taken_0x27c5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5c4) {
            ctx->pc = 0x27C5DCu;
            goto label_27c5dc;
        }
    }
    ctx->pc = 0x27C5CCu;
    // 0x27c5cc: 0xc09f810  jal         func_27E040
    ctx->pc = 0x27C5CCu;
    SET_GPR_U32(ctx, 31, 0x27C5D4u);
    ctx->pc = 0x27C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5CCu;
    // 0x27c5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E040u, 0x27C5CCu, 0x27C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5D4u;
label_27c5d4:
    // 0x27c5d4: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x27C5D4u;
    {
        const bool branch_taken_0x27c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5D4u;
        // 0x27c5d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5d4) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27C5DCu;
label_27c5dc:
    // 0x27c5dc: 0xc09ee58  jal         func_27B960
    ctx->pc = 0x27C5DCu;
    SET_GPR_U32(ctx, 31, 0x27C5E4u);
    ctx->pc = 0x27C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5DCu;
    // 0x27c5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B960u, 0x27C5DCu, 0x27C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5E4u;
label_27c5e4:
    // 0x27c5e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27C5E4u;
    {
        const bool branch_taken_0x27c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E4u;
        // 0x27c5e8: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e4) {
            ctx->pc = 0x27C634u;
            goto label_27c634;
        }
    }
    ctx->pc = 0x27C5ECu;
    // 0x27c5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5f0: 0xc089998  jal         func_226660
    ctx->pc = 0x27C5F0u;
    SET_GPR_U32(ctx, 31, 0x27C5F8u);
    ctx->pc = 0x27C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5F0u;
    // 0x27c5f4: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C5F0u, 0x27C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5F8u;
label_27c5f8:
    // 0x27c5f8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27C5F8u;
    {
        const bool branch_taken_0x27c5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5f8) {
            ctx->pc = 0x27C634u;
            goto label_27c634;
        }
    }
    ctx->pc = 0x27C600u;
    // 0x27c600: 0xc088f9e  jal         func_223E78
    ctx->pc = 0x27C600u;
    SET_GPR_U32(ctx, 31, 0x27C608u);
    ctx->pc = 0x27C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C600u;
    // 0x27c604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E78u, 0x27C600u, 0x27C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C608u;
label_27c608:
    // 0x27c608: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27C608u;
    {
        const bool branch_taken_0x27c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c608) {
            ctx->pc = 0x27C634u;
            goto label_27c634;
        }
    }
    ctx->pc = 0x27C610u;
    // 0x27c610: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x27C610u;
    SET_GPR_U32(ctx, 31, 0x27C618u);
    ctx->pc = 0x27C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C610u;
    // 0x27c614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x27C610u, 0x27C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C618u;
label_27c618:
    // 0x27c618: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x27C618u;
    SET_GPR_U32(ctx, 31, 0x27C620u);
    ctx->pc = 0x27C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C618u;
    // 0x27c61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x27C618u, 0x27C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C620u;
label_27c620:
    // 0x27c620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c624: 0xc0eb180  jal         func_3AC600
    ctx->pc = 0x27C624u;
    SET_GPR_U32(ctx, 31, 0x27C62Cu);
    ctx->pc = 0x27C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C624u;
    // 0x27c628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC600u, 0x27C624u, 0x27C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C62Cu;
label_27c62c:
    // 0x27c62c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x27C62Cu;
    {
        const bool branch_taken_0x27c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C62Cu;
        // 0x27c630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c62c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C634u;
label_27c634:
    // 0x27c634: 0xc0893ca  jal         func_224F28
    ctx->pc = 0x27C634u;
    SET_GPR_U32(ctx, 31, 0x27C63Cu);
    ctx->pc = 0x27C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C634u;
    // 0x27c638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F28u, 0x27C634u, 0x27C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C63Cu;
label_27c63c:
    // 0x27c63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C63Cu;
    {
        const bool branch_taken_0x27c63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c63c) {
            ctx->pc = 0x27C64Cu;
            goto label_27c64c;
        }
    }
    ctx->pc = 0x27C644u;
    // 0x27c644: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C644u;
        // 0x27c648: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C6B0u;
            goto label_27c6b0;
        }
    }
    ctx->pc = 0x27C64Cu;
label_27c64c:
    // 0x27c64c: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x27C64Cu;
    SET_GPR_U32(ctx, 31, 0x27C654u);
    ctx->pc = 0x27C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C64Cu;
    // 0x27c650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x27C64Cu, 0x27C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C654u;
label_27c654:
    // 0x27c654: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27C654u;
    {
        const bool branch_taken_0x27c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C654u;
        // 0x27c658: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c654) {
            ctx->pc = 0x27C6F8u;
            goto label_27c6f8;
        }
    }
    ctx->pc = 0x27C65Cu;
    // 0x27c65c: 0xc09f02a  jal         func_27C0A8
    ctx->pc = 0x27C65Cu;
    SET_GPR_U32(ctx, 31, 0x27C664u);
    ctx->pc = 0x27C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C65Cu;
    // 0x27c660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0A8u, 0x27C65Cu, 0x27C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C664u;
label_27c664:
    // 0x27c664: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27C664u;
    {
        const bool branch_taken_0x27c664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C664u;
        // 0x27c668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c664) {
            ctx->pc = 0x27C69Cu;
            goto label_27c69c;
        }
    }
    ctx->pc = 0x27C66Cu;
    // 0x27c66c: 0xc088c98  jal         func_223260
    ctx->pc = 0x27C66Cu;
    SET_GPR_U32(ctx, 31, 0x27C674u);
    ctx->pc = 0x27C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C66Cu;
    // 0x27c670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x27C66Cu, 0x27C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C674u;
label_27c674:
    // 0x27c674: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x27c678: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x27c678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c67c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C67Cu;
    {
        const bool branch_taken_0x27c67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C67Cu;
        // 0x27c680: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c67c) {
            ctx->pc = 0x27C694u;
            goto label_27c694;
        }
    }
    ctx->pc = 0x27C684u;
    // 0x27c684: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27c688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c68c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c690: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x27c690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_27c694:
    // 0x27c694: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C694u;
    {
        const bool branch_taken_0x27c694 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C694u;
        // 0x27c698: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c694) {
            ctx->pc = 0x27C6B0u;
            goto label_27c6b0;
        }
    }
    ctx->pc = 0x27C69Cu;
label_27c69c:
    // 0x27c69c: 0xc09ee42  jal         func_27B908
    ctx->pc = 0x27C69Cu;
    SET_GPR_U32(ctx, 31, 0x27C6A4u);
    ctx->pc = 0x27C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C69Cu;
    // 0x27c6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B908u, 0x27C69Cu, 0x27C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6A4u;
label_27c6a4:
    // 0x27c6a4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x27C6A4u;
    {
        const bool branch_taken_0x27c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6a4) {
            ctx->pc = 0x27C6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C6A4u;
            // 0x27c6a8: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C6F8u;
            goto label_27c6f8;
        }
    }
    ctx->pc = 0x27C6ACu;
    // 0x27c6ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x27c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_27c6b0:
    // 0x27c6b0: 0xc089988  jal         func_226620
    ctx->pc = 0x27C6B0u;
    SET_GPR_U32(ctx, 31, 0x27C6B8u);
    ctx->pc = 0x27C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6B0u;
    // 0x27c6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27C6B0u, 0x27C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6B8u;
label_27c6b8:
    // 0x27c6b8: 0xc0a007a  jal         func_2801E8
    ctx->pc = 0x27C6B8u;
    SET_GPR_U32(ctx, 31, 0x27C6C0u);
    ctx->pc = 0x27C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6B8u;
    // 0x27c6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x27C6B8u, 0x27C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6C0u;
label_27c6c0:
    // 0x27c6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6c4: 0xc089974  jal         func_2265D0
    ctx->pc = 0x27C6C4u;
    SET_GPR_U32(ctx, 31, 0x27C6CCu);
    ctx->pc = 0x27C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6C4u;
    // 0x27c6c8: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27C6C4u, 0x27C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6CCu;
label_27c6cc:
    // 0x27c6cc: 0xc09f02a  jal         func_27C0A8
    ctx->pc = 0x27C6CCu;
    SET_GPR_U32(ctx, 31, 0x27C6D4u);
    ctx->pc = 0x27C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6CCu;
    // 0x27c6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0A8u, 0x27C6CCu, 0x27C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6D4u;
label_27c6d4:
    // 0x27c6d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C6D4u;
    {
        const bool branch_taken_0x27c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6d4) {
            ctx->pc = 0x27C6E4u;
            goto label_27c6e4;
        }
    }
    ctx->pc = 0x27C6DCu;
    // 0x27c6dc: 0xc09ffe8  jal         func_27FFA0
    ctx->pc = 0x27C6DCu;
    SET_GPR_U32(ctx, 31, 0x27C6E4u);
    ctx->pc = 0x27C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6DCu;
    // 0x27c6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FFA0u, 0x27C6DCu, 0x27C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6E4u;
label_27c6e4:
    // 0x27c6e4: 0xc09ee58  jal         func_27B960
    ctx->pc = 0x27C6E4u;
    SET_GPR_U32(ctx, 31, 0x27C6ECu);
    ctx->pc = 0x27C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6E4u;
    // 0x27c6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B960u, 0x27C6E4u, 0x27C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6ECu;
label_27c6ec:
    // 0x27c6ec: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x27C6ECu;
    {
        const bool branch_taken_0x27c6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6ECu;
        // 0x27c6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6ec) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C6F4u;
    // 0x27c6f4: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
label_27c6f8:
    // 0x27c6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6fc: 0xc089998  jal         func_226660
    ctx->pc = 0x27C6FCu;
    SET_GPR_U32(ctx, 31, 0x27C704u);
    ctx->pc = 0x27C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6FCu;
    // 0x27c700: 0x34a5fee0  ori         $a1, $a1, 0xFEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C6FCu, 0x27C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C704u;
label_27c704:
    // 0x27c704: 0x1440018b  bnez        $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x27C704u;
    {
        const bool branch_taken_0x27c704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C704u;
        // 0x27c708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c704) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C70Cu;
    // 0x27c70c: 0xc0a018c  jal         func_280630
    ctx->pc = 0x27C70Cu;
    SET_GPR_U32(ctx, 31, 0x27C714u);
    ctx->pc = 0x27C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C70Cu;
    // 0x27c710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280630u, 0x27C70Cu, 0x27C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C714u;
label_27c714:
    // 0x27c714: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x27C714u;
    {
        const bool branch_taken_0x27c714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C714u;
        // 0x27c718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c714) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C71Cu;
    // 0x27c71c: 0xc09f568  jal         func_27D5A0
    ctx->pc = 0x27C71Cu;
    SET_GPR_U32(ctx, 31, 0x27C724u);
    ctx->pc = 0x27C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C71Cu;
    // 0x27c720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D5A0u, 0x27C71Cu, 0x27C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C724u;
label_27c724:
    // 0x27c724: 0xc08a096  jal         func_228258
    ctx->pc = 0x27C724u;
    SET_GPR_U32(ctx, 31, 0x27C72Cu);
    ctx->pc = 0x27C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C724u;
    // 0x27c728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x27C724u, 0x27C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C72Cu;
label_27c72c:
    // 0x27c72c: 0x1440017e  bnez        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x27C72Cu;
    {
        const bool branch_taken_0x27c72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C72Cu;
        // 0x27c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c72c) {
            ctx->pc = 0x27CD28u;
            goto label_27cd28;
        }
    }
    ctx->pc = 0x27C734u;
    // 0x27c734: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27C734u;
    SET_GPR_U32(ctx, 31, 0x27C73Cu);
    ctx->pc = 0x27C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C734u;
    // 0x27c738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27C734u, 0x27C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C73Cu;
label_27c73c:
    // 0x27c73c: 0x1040017a  beqz        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x27C73Cu;
    {
        const bool branch_taken_0x27c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C73Cu;
        // 0x27c740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c73c) {
            ctx->pc = 0x27CD28u;
            goto label_27cd28;
        }
    }
    ctx->pc = 0x27C744u;
    // 0x27c744: 0xc09eede  jal         func_27BB78
    ctx->pc = 0x27C744u;
    SET_GPR_U32(ctx, 31, 0x27C74Cu);
    ctx->pc = 0x27C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C744u;
    // 0x27c748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB78u, 0x27C744u, 0x27C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C74Cu;
label_27c74c:
    // 0x27c74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C74Cu;
    {
        const bool branch_taken_0x27c74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c74c) {
            ctx->pc = 0x27C764u;
            goto label_27c764;
        }
    }
    ctx->pc = 0x27C754u;
    // 0x27c754: 0xc09f79e  jal         func_27DE78
    ctx->pc = 0x27C754u;
    SET_GPR_U32(ctx, 31, 0x27C75Cu);
    ctx->pc = 0x27C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C754u;
    // 0x27c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DE78u, 0x27C754u, 0x27C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C75Cu;
label_27c75c:
    // 0x27c75c: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x27C75Cu;
    {
        const bool branch_taken_0x27c75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C75Cu;
        // 0x27c760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c75c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C764u;
label_27c764:
    // 0x27c764: 0xc09eeca  jal         func_27BB28
    ctx->pc = 0x27C764u;
    SET_GPR_U32(ctx, 31, 0x27C76Cu);
    ctx->pc = 0x27C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C764u;
    // 0x27c768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB28u, 0x27C764u, 0x27C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C76Cu;
label_27c76c:
    // 0x27c76c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C76Cu;
    {
        const bool branch_taken_0x27c76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c76c) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C774u;
    // 0x27c774: 0xc09eed4  jal         func_27BB50
    ctx->pc = 0x27C774u;
    SET_GPR_U32(ctx, 31, 0x27C77Cu);
    ctx->pc = 0x27C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C774u;
    // 0x27c778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB50u, 0x27C774u, 0x27C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C77Cu;
label_27c77c:
    // 0x27c77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C77Cu;
    {
        const bool branch_taken_0x27c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c77c) {
            ctx->pc = 0x27C794u;
            goto label_27c794;
        }
    }
    ctx->pc = 0x27C784u;
label_27c784:
    // 0x27c784: 0xc0a1ff8  jal         func_287FE0
    ctx->pc = 0x27C784u;
    SET_GPR_U32(ctx, 31, 0x27C78Cu);
    ctx->pc = 0x27C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C784u;
    // 0x27c788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FE0u, 0x27C784u, 0x27C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C78Cu;
label_27c78c:
    // 0x27c78c: 0x1440010d  bnez        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x27C78Cu;
    {
        const bool branch_taken_0x27c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C78Cu;
        // 0x27c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c78c) {
            ctx->pc = 0x27CBC4u;
            goto label_27cbc4;
        }
    }
    ctx->pc = 0x27C794u;
label_27c794:
    // 0x27c794: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27C794u;
    SET_GPR_U32(ctx, 31, 0x27C79Cu);
    ctx->pc = 0x27C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C794u;
    // 0x27c798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27C794u, 0x27C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C79Cu;
label_27c79c:
    // 0x27c79c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x27C79Cu;
    {
        const bool branch_taken_0x27c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c79c) {
            ctx->pc = 0x27C9A0u;
            goto label_27c9a0;
        }
    }
    ctx->pc = 0x27C7A4u;
    // 0x27c7a4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27c7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27c7a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27c7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27c7ac: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27c7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27c7b0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27c7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27c7b4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27c7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27c7b8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27C7B8u;
    SET_GPR_U32(ctx, 31, 0x27C7C0u);
    ctx->pc = 0x27C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7B8u;
    // 0x27c7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27C7B8u, 0x27C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7C0u;
label_27c7c0:
    // 0x27c7c0: 0x1440015c  bnez        $v0, . + 4 + (0x15C << 2)
    ctx->pc = 0x27C7C0u;
    {
        const bool branch_taken_0x27c7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7C0u;
        // 0x27c7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7c0) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C7C8u;
    // 0x27c7c8: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27c7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d0: 0xc089998  jal         func_226660
    ctx->pc = 0x27C7D0u;
    SET_GPR_U32(ctx, 31, 0x27C7D8u);
    ctx->pc = 0x27C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7D0u;
    // 0x27c7d4: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C7D0u, 0x27C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7D8u;
label_27c7d8:
    // 0x27c7d8: 0x14400156  bnez        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x27C7D8u;
    {
        const bool branch_taken_0x27c7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7D8u;
        // 0x27c7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7d8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C7E0u;
    // 0x27c7e0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x27c7e4: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27c7e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27c7e8: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27c7ec: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E882u));
    // 0x27c7f0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27C7F0u;
    {
        const bool branch_taken_0x27c7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7F0u;
        // 0x27c7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7f0) {
            ctx->pc = 0x27C828u;
            goto label_27c828;
        }
    }
    ctx->pc = 0x27C7F8u;
    // 0x27c7f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c7fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C7FCu;
    {
        const bool branch_taken_0x27c7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7FCu;
        // 0x27c800: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7fc) {
            ctx->pc = 0x27C814u;
            goto label_27c814;
        }
    }
    ctx->pc = 0x27C804u;
    // 0x27c804: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27c804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27c808: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27c808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27c80c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C80Cu;
    {
        const bool branch_taken_0x27c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C80Cu;
        // 0x27c810: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c80c) {
            ctx->pc = 0x27C824u;
            goto label_27c824;
        }
    }
    ctx->pc = 0x27C814u;
label_27c814:
    // 0x27c814: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27c814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27c818: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27c81c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C81Cu;
    {
        const bool branch_taken_0x27c81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c81c) {
            ctx->pc = 0x27C828u;
            goto label_27c828;
        }
    }
    ctx->pc = 0x27C824u;
label_27c824:
    // 0x27c824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c828:
    // 0x27c828: 0x14a00142  bnez        $a1, . + 4 + (0x142 << 2)
    ctx->pc = 0x27C828u;
    {
        const bool branch_taken_0x27c828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C828u;
        // 0x27c82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c828) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C830u;
    // 0x27c830: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27C830u;
    SET_GPR_U32(ctx, 31, 0x27C838u);
    ctx->pc = 0x27C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C830u;
    // 0x27c834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27C830u, 0x27C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C838u;
label_27c838:
    // 0x27c838: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27c838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27c83c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x27C83Cu;
    {
        const bool branch_taken_0x27c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c83c) {
            ctx->pc = 0x27C990u;
            goto label_27c990;
        }
    }
    ctx->pc = 0x27C844u;
    // 0x27c844: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27c844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27c848: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27c848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27c84c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27c84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27c850: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27c850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27c854: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27c854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27c858: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27C858u;
    SET_GPR_U32(ctx, 31, 0x27C860u);
    ctx->pc = 0x27C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C858u;
    // 0x27c85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27C858u, 0x27C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C860u;
label_27c860:
    // 0x27c860: 0x14400134  bnez        $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x27C860u;
    {
        const bool branch_taken_0x27c860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C860u;
        // 0x27c864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c860) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C868u;
    // 0x27c868: 0x3c0505cf  lui         $a1, 0x5CF
    ctx->pc = 0x27c868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1487 << 16));
    // 0x27c86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c870: 0xc089998  jal         func_226660
    ctx->pc = 0x27C870u;
    SET_GPR_U32(ctx, 31, 0x27C878u);
    ctx->pc = 0x27C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C870u;
    // 0x27c874: 0x34a5eafb  ori         $a1, $a1, 0xEAFB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60155);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27C870u, 0x27C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C878u;
label_27c878:
    // 0x27c878: 0x1440012e  bnez        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x27C878u;
    {
        const bool branch_taken_0x27c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C878u;
        // 0x27c87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c878) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C880u;
    // 0x27c880: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27c880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27c884: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27c888: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c88c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27c88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27c890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27c894: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27c894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27c898: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27C898u;
    {
        const bool branch_taken_0x27c898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c898) {
            ctx->pc = 0x27C8F4u;
            goto label_27c8f4;
        }
    }
    ctx->pc = 0x27C8A0u;
    // 0x27c8a0: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27c8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27c8a4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x27c8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x27c8a8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27c8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27c8ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c8b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c8b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27c8b8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c8bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c8c0: 0x0  nop
    ctx->pc = 0x27c8c0u;
    // NOP
    // 0x27c8c4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27C8C4u;
    {
        const bool branch_taken_0x27c8c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c8c4) {
            ctx->pc = 0x27C8F4u;
            goto label_27c8f4;
        }
    }
    ctx->pc = 0x27C8CCu;
    // 0x27c8cc: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x27C8CCu;
    SET_GPR_U32(ctx, 31, 0x27C8D4u);
    ctx->pc = 0x27C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8CCu;
    // 0x27c8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826F0u, 0x27C8CCu, 0x27C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8D4u;
label_27c8d4:
    // 0x27c8d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C8D4u;
    {
        const bool branch_taken_0x27c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8d4) {
            ctx->pc = 0x27C8F4u;
            goto label_27c8f4;
        }
    }
    ctx->pc = 0x27C8DCu;
label_27c8dc:
    // 0x27c8dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27c8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27c8e0: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x27c8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x27c8e4: 0xc089988  jal         func_226620
    ctx->pc = 0x27C8E4u;
    SET_GPR_U32(ctx, 31, 0x27C8ECu);
    ctx->pc = 0x27C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8E4u;
    // 0x27c8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27C8E4u, 0x27C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8ECu;
label_27c8ec:
    // 0x27c8ec: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x27C8ECu;
    {
        const bool branch_taken_0x27c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8ECu;
        // 0x27c8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8ec) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C8F4u;
label_27c8f4:
    // 0x27c8f4: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C8F4u;
    {
        const bool branch_taken_0x27c8f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c8f4) {
            ctx->pc = 0x27C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C8F4u;
            // 0x27c8f8: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C910u;
            goto label_27c910;
        }
    }
    ctx->pc = 0x27C8FCu;
    // 0x27c8fc: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27C8FCu;
    SET_GPR_U32(ctx, 31, 0x27C904u);
    ctx->pc = 0x27C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8FCu;
    // 0x27c900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27C8FCu, 0x27C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C904u;
label_27c904:
    // 0x27c904: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x27C904u;
    {
        const bool branch_taken_0x27c904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C904u;
        // 0x27c908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c904) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C90Cu;
    // 0x27c90c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27c90cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_27c910:
    // 0x27c910: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27c910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27c914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27c918: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27c918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27c91c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27c920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27c920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27c924: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27C924u;
    {
        const bool branch_taken_0x27c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C924u;
        // 0x27c928: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c924) {
            ctx->pc = 0x27C960u;
            goto label_27c960;
        }
    }
    ctx->pc = 0x27C92Cu;
    // 0x27c92c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27c92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27c930: 0xc46102e8  lwc1        $f1, 0x2E8($v1)
    ctx->pc = 0x27c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c938: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27c93c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c944: 0x0  nop
    ctx->pc = 0x27c944u;
    // NOP
    // 0x27c948: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27C948u;
    {
        const bool branch_taken_0x27c948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C948u;
        // 0x27c94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c948) {
            ctx->pc = 0x27C960u;
            goto label_27c960;
        }
    }
    ctx->pc = 0x27C950u;
    // 0x27c950: 0xc0a0a7a  jal         func_2829E8
    ctx->pc = 0x27C950u;
    SET_GPR_U32(ctx, 31, 0x27C958u);
    ctx->pc = 0x27C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C950u;
    // 0x27c954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2829E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2829E8u, 0x27C950u, 0x27C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C958u;
label_27c958:
    // 0x27c958: 0x1440fe8c  bnez        $v0, . + 4 + (-0x174 << 2)
    ctx->pc = 0x27C958u;
    {
        const bool branch_taken_0x27c958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c958) {
            ctx->pc = 0x27C38Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c38c;
        }
    }
    ctx->pc = 0x27C960u;
label_27c960:
    // 0x27c960: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x27C960u;
    {
        const bool branch_taken_0x27c960 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c960) {
            ctx->pc = 0x27C9A0u;
            goto label_27c9a0;
        }
    }
    ctx->pc = 0x27C968u;
    // 0x27c968: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x27C968u;
    SET_GPR_U32(ctx, 31, 0x27C970u);
    ctx->pc = 0x27C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C968u;
    // 0x27c96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x27C968u, 0x27C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C970u;
label_27c970:
    // 0x27c970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27C970u;
    {
        const bool branch_taken_0x27c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c970) {
            ctx->pc = 0x27C9A0u;
            goto label_27c9a0;
        }
    }
    ctx->pc = 0x27C978u;
    // 0x27c978: 0xc095fce  jal         func_257F38
    ctx->pc = 0x27C978u;
    SET_GPR_U32(ctx, 31, 0x27C980u);
    ctx->pc = 0x27C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C978u;
    // 0x27c97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x27C978u, 0x27C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C980u;
label_27c980:
    // 0x27c980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c988: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x27C988u;
    {
        const bool branch_taken_0x27c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C988u;
        // 0x27c98c: 0xa20305b8  sb          $v1, 0x5B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c988) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C990u;
label_27c990:
    // 0x27c990: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27C990u;
    SET_GPR_U32(ctx, 31, 0x27C998u);
    ctx->pc = 0x27C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C990u;
    // 0x27c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27C990u, 0x27C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C998u;
label_27c998:
    // 0x27c998: 0x144000e6  bnez        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x27C998u;
    {
        const bool branch_taken_0x27c998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C998u;
        // 0x27c99c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c998) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C9A0u;
label_27c9a0:
    // 0x27c9a0: 0xc09ee8e  jal         func_27BA38
    ctx->pc = 0x27C9A0u;
    SET_GPR_U32(ctx, 31, 0x27C9A8u);
    ctx->pc = 0x27C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9A0u;
    // 0x27c9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA38u, 0x27C9A0u, 0x27C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9A8u;
label_27c9a8:
    // 0x27c9a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C9A8u;
    {
        const bool branch_taken_0x27c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9a8) {
            ctx->pc = 0x27C9CCu;
            goto label_27c9cc;
        }
    }
    ctx->pc = 0x27C9B0u;
    // 0x27c9b0: 0x920205b8  lbu         $v0, 0x5B8($s0)
    ctx->pc = 0x27c9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x27c9b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C9B4u;
    {
        const bool branch_taken_0x27c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9b4) {
            ctx->pc = 0x27C9CCu;
            goto label_27c9cc;
        }
    }
    ctx->pc = 0x27C9BCu;
    // 0x27c9bc: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27C9BCu;
    SET_GPR_U32(ctx, 31, 0x27C9C4u);
    ctx->pc = 0x27C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9BCu;
    // 0x27c9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27C9BCu, 0x27C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9C4u;
label_27c9c4:
    // 0x27c9c4: 0x1440fe80  bnez        $v0, . + 4 + (-0x180 << 2)
    ctx->pc = 0x27C9C4u;
    {
        const bool branch_taken_0x27c9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9C4u;
        // 0x27c9c8: 0xa20005b8  sb          $zero, 0x5B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9c4) {
            ctx->pc = 0x27C3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c3c8;
        }
    }
    ctx->pc = 0x27C9CCu;
label_27c9cc:
    // 0x27c9cc: 0xc09eee8  jal         func_27BBA0
    ctx->pc = 0x27C9CCu;
    SET_GPR_U32(ctx, 31, 0x27C9D4u);
    ctx->pc = 0x27C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9CCu;
    // 0x27c9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BBA0u, 0x27C9CCu, 0x27C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9D4u;
label_27c9d4:
    // 0x27c9d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C9D4u;
    {
        const bool branch_taken_0x27c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9d4) {
            ctx->pc = 0x27C9ECu;
            goto label_27c9ec;
        }
    }
    ctx->pc = 0x27C9DCu;
    // 0x27c9dc: 0xc0a0462  jal         func_281188
    ctx->pc = 0x27C9DCu;
    SET_GPR_U32(ctx, 31, 0x27C9E4u);
    ctx->pc = 0x27C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9DCu;
    // 0x27c9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281188u, 0x27C9DCu, 0x27C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9E4u;
label_27c9e4:
    // 0x27c9e4: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x27C9E4u;
    {
        const bool branch_taken_0x27c9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9E4u;
        // 0x27c9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9e4) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27C9ECu;
label_27c9ec:
    // 0x27c9ec: 0xc09ef08  jal         func_27BC20
    ctx->pc = 0x27C9ECu;
    SET_GPR_U32(ctx, 31, 0x27C9F4u);
    ctx->pc = 0x27C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9ECu;
    // 0x27c9f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BC20u, 0x27C9ECu, 0x27C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9F4u;
label_27c9f4:
    // 0x27c9f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C9F4u;
    {
        const bool branch_taken_0x27c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9F4u;
        // 0x27c9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9f4) {
            ctx->pc = 0x27CA10u;
            goto label_27ca10;
        }
    }
    ctx->pc = 0x27C9FCu;
    // 0x27c9fc: 0xc0a0cb2  jal         func_2832C8
    ctx->pc = 0x27C9FCu;
    SET_GPR_U32(ctx, 31, 0x27CA04u);
    ctx->pc = 0x27CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9FCu;
    // 0x27ca00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832C8u, 0x27C9FCu, 0x27CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA04u;
label_27ca04:
    // 0x27ca04: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x27CA04u;
    {
        const bool branch_taken_0x27ca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA04u;
        // 0x27ca08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca04) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CA0Cu;
    // 0x27ca0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ca10:
    // 0x27ca10: 0xc088fa8  jal         func_223EA0
    ctx->pc = 0x27CA10u;
    SET_GPR_U32(ctx, 31, 0x27CA18u);
    ctx->pc = 0x27CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA10u;
    // 0x27ca14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x27CA10u, 0x27CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA18u;
label_27ca18:
    // 0x27ca18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27CA18u;
    {
        const bool branch_taken_0x27ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca18) {
            ctx->pc = 0x27CA60u;
            goto label_27ca60;
        }
    }
    ctx->pc = 0x27CA20u;
    // 0x27ca20: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27ca20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27ca24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27ca24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27ca28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CA28u;
    {
        const bool branch_taken_0x27ca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca28) {
            ctx->pc = 0x27CA40u;
            goto label_27ca40;
        }
    }
    ctx->pc = 0x27CA30u;
    // 0x27ca30: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27CA30u;
    SET_GPR_U32(ctx, 31, 0x27CA38u);
    ctx->pc = 0x27CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA30u;
    // 0x27ca34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27CA30u, 0x27CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA38u;
label_27ca38:
    // 0x27ca38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CA38u;
    {
        const bool branch_taken_0x27ca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca38) {
            ctx->pc = 0x27CA50u;
            goto label_27ca50;
        }
    }
    ctx->pc = 0x27CA40u;
label_27ca40:
    // 0x27ca40: 0xc09ee2e  jal         func_27B8B8
    ctx->pc = 0x27CA40u;
    SET_GPR_U32(ctx, 31, 0x27CA48u);
    ctx->pc = 0x27CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA40u;
    // 0x27ca44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8B8u, 0x27CA40u, 0x27CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA48u;
label_27ca48:
    // 0x27ca48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CA48u;
    {
        const bool branch_taken_0x27ca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca48) {
            ctx->pc = 0x27CA60u;
            goto label_27ca60;
        }
    }
    ctx->pc = 0x27CA50u;
label_27ca50:
    // 0x27ca50: 0xc0a220e  jal         func_288838
    ctx->pc = 0x27CA50u;
    SET_GPR_U32(ctx, 31, 0x27CA58u);
    ctx->pc = 0x27CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA50u;
    // 0x27ca54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288838u, 0x27CA50u, 0x27CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA58u;
label_27ca58:
    // 0x27ca58: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x27CA58u;
    {
        const bool branch_taken_0x27ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA58u;
        // 0x27ca5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca58) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CA60u;
label_27ca60:
    // 0x27ca60: 0xc09edfc  jal         func_27B7F0
    ctx->pc = 0x27CA60u;
    SET_GPR_U32(ctx, 31, 0x27CA68u);
    ctx->pc = 0x27CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA60u;
    // 0x27ca64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7F0u, 0x27CA60u, 0x27CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA68u;
label_27ca68:
    // 0x27ca68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27CA68u;
    {
        const bool branch_taken_0x27ca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca68) {
            ctx->pc = 0x27CAB0u;
            goto label_27cab0;
        }
    }
    ctx->pc = 0x27CA70u;
    // 0x27ca70: 0xc09ee06  jal         func_27B818
    ctx->pc = 0x27CA70u;
    SET_GPR_U32(ctx, 31, 0x27CA78u);
    ctx->pc = 0x27CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA70u;
    // 0x27ca74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B818u, 0x27CA70u, 0x27CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA78u;
label_27ca78:
    // 0x27ca78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27CA78u;
    {
        const bool branch_taken_0x27ca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca78) {
            ctx->pc = 0x27CAB0u;
            goto label_27cab0;
        }
    }
    ctx->pc = 0x27CA80u;
    // 0x27ca80: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27CA80u;
    SET_GPR_U32(ctx, 31, 0x27CA88u);
    ctx->pc = 0x27CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA80u;
    // 0x27ca84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27CA80u, 0x27CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA88u;
label_27ca88:
    // 0x27ca88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CA88u;
    {
        const bool branch_taken_0x27ca88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca88) {
            ctx->pc = 0x27CAB0u;
            goto label_27cab0;
        }
    }
    ctx->pc = 0x27CA90u;
    // 0x27ca90: 0xc09ee1a  jal         func_27B868
    ctx->pc = 0x27CA90u;
    SET_GPR_U32(ctx, 31, 0x27CA98u);
    ctx->pc = 0x27CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA90u;
    // 0x27ca94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B868u, 0x27CA90u, 0x27CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA98u;
label_27ca98:
    // 0x27ca98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CA98u;
    {
        const bool branch_taken_0x27ca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca98) {
            ctx->pc = 0x27CAB0u;
            goto label_27cab0;
        }
    }
    ctx->pc = 0x27CAA0u;
    // 0x27caa0: 0xc09ee24  jal         func_27B890
    ctx->pc = 0x27CAA0u;
    SET_GPR_U32(ctx, 31, 0x27CAA8u);
    ctx->pc = 0x27CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAA0u;
    // 0x27caa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B890u, 0x27CAA0u, 0x27CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAA8u;
label_27caa8:
    // 0x27caa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CAA8u;
    {
        const bool branch_taken_0x27caa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27caa8) {
            ctx->pc = 0x27CAC0u;
            goto label_27cac0;
        }
    }
    ctx->pc = 0x27CAB0u;
label_27cab0:
    // 0x27cab0: 0xc0a1dcc  jal         func_287730
    ctx->pc = 0x27CAB0u;
    SET_GPR_U32(ctx, 31, 0x27CAB8u);
    ctx->pc = 0x27CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAB0u;
    // 0x27cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287730u, 0x27CAB0u, 0x27CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAB8u;
label_27cab8:
    // 0x27cab8: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x27CAB8u;
    {
        const bool branch_taken_0x27cab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAB8u;
        // 0x27cabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cab8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CAC0u;
label_27cac0:
    // 0x27cac0: 0xc09ed8c  jal         func_27B630
    ctx->pc = 0x27CAC0u;
    SET_GPR_U32(ctx, 31, 0x27CAC8u);
    ctx->pc = 0x27CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAC0u;
    // 0x27cac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B630u, 0x27CAC0u, 0x27CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAC8u;
label_27cac8:
    // 0x27cac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CAC8u;
    {
        const bool branch_taken_0x27cac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cac8) {
            ctx->pc = 0x27CAE0u;
            goto label_27cae0;
        }
    }
    ctx->pc = 0x27CAD0u;
    // 0x27cad0: 0xc09f600  jal         func_27D800
    ctx->pc = 0x27CAD0u;
    SET_GPR_U32(ctx, 31, 0x27CAD8u);
    ctx->pc = 0x27CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAD0u;
    // 0x27cad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D800u, 0x27CAD0u, 0x27CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAD8u;
label_27cad8:
    // 0x27cad8: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x27CAD8u;
    {
        const bool branch_taken_0x27cad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAD8u;
        // 0x27cadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cad8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CAE0u;
label_27cae0:
    // 0x27cae0: 0xc09ed96  jal         func_27B658
    ctx->pc = 0x27CAE0u;
    SET_GPR_U32(ctx, 31, 0x27CAE8u);
    ctx->pc = 0x27CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAE0u;
    // 0x27cae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B658u, 0x27CAE0u, 0x27CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAE8u;
label_27cae8:
    // 0x27cae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CAE8u;
    {
        const bool branch_taken_0x27cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cae8) {
            ctx->pc = 0x27CB00u;
            goto label_27cb00;
        }
    }
    ctx->pc = 0x27CAF0u;
    // 0x27caf0: 0xc09f640  jal         func_27D900
    ctx->pc = 0x27CAF0u;
    SET_GPR_U32(ctx, 31, 0x27CAF8u);
    ctx->pc = 0x27CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAF0u;
    // 0x27caf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D900u, 0x27CAF0u, 0x27CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAF8u;
label_27caf8:
    // 0x27caf8: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x27CAF8u;
    {
        const bool branch_taken_0x27caf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAF8u;
        // 0x27cafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caf8) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CB00u;
label_27cb00:
    // 0x27cb00: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27CB00u;
    SET_GPR_U32(ctx, 31, 0x27CB08u);
    ctx->pc = 0x27CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB00u;
    // 0x27cb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27CB00u, 0x27CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB08u;
label_27cb08:
    // 0x27cb08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CB08u;
    {
        const bool branch_taken_0x27cb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb08) {
            ctx->pc = 0x27CB20u;
            goto label_27cb20;
        }
    }
    ctx->pc = 0x27CB10u;
    // 0x27cb10: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27CB10u;
    SET_GPR_U32(ctx, 31, 0x27CB18u);
    ctx->pc = 0x27CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB10u;
    // 0x27cb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27CB10u, 0x27CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB18u;
label_27cb18:
    // 0x27cb18: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27CB18u;
    {
        const bool branch_taken_0x27cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb18) {
            ctx->pc = 0x27CBD4u;
            goto label_27cbd4;
        }
    }
    ctx->pc = 0x27CB20u;
label_27cb20:
    // 0x27cb20: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27CB20u;
    SET_GPR_U32(ctx, 31, 0x27CB28u);
    ctx->pc = 0x27CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB20u;
    // 0x27cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27CB20u, 0x27CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB28u;
label_27cb28:
    // 0x27cb28: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CB28u;
    {
        const bool branch_taken_0x27cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb28) {
            ctx->pc = 0x27CB84u;
            goto label_27cb84;
        }
    }
    ctx->pc = 0x27CB30u;
    // 0x27cb30: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27CB30u;
    SET_GPR_U32(ctx, 31, 0x27CB38u);
    ctx->pc = 0x27CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB30u;
    // 0x27cb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27CB30u, 0x27CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB38u;
label_27cb38:
    // 0x27cb38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27cb3c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27CB3Cu;
    {
        const bool branch_taken_0x27cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27cb3c) {
            ctx->pc = 0x27CB6Cu;
            goto label_27cb6c;
        }
    }
    ctx->pc = 0x27CB44u;
    // 0x27cb44: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27CB44u;
    SET_GPR_U32(ctx, 31, 0x27CB4Cu);
    ctx->pc = 0x27CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB44u;
    // 0x27cb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27CB44u, 0x27CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB4Cu;
label_27cb4c:
    // 0x27cb4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27cb50: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CB50u;
    {
        const bool branch_taken_0x27cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27cb50) {
            ctx->pc = 0x27CB6Cu;
            goto label_27cb6c;
        }
    }
    ctx->pc = 0x27CB58u;
    // 0x27cb58: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27CB58u;
    SET_GPR_U32(ctx, 31, 0x27CB60u);
    ctx->pc = 0x27CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB58u;
    // 0x27cb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27CB58u, 0x27CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB60u;
label_27cb60:
    // 0x27cb60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27cb64: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27CB64u;
    {
        const bool branch_taken_0x27cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cb64) {
            ctx->pc = 0x27CB84u;
            goto label_27cb84;
        }
    }
    ctx->pc = 0x27CB6Cu;
label_27cb6c:
    // 0x27cb6c: 0xc0a2036  jal         func_2880D8
    ctx->pc = 0x27CB6Cu;
    SET_GPR_U32(ctx, 31, 0x27CB74u);
    ctx->pc = 0x27CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB6Cu;
    // 0x27cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880D8u, 0x27CB6Cu, 0x27CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB74u;
label_27cb74:
    // 0x27cb74: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27CB74u;
    {
        const bool branch_taken_0x27cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB74u;
        // 0x27cb78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb74) {
            ctx->pc = 0x27CBD4u;
            goto label_27cbd4;
        }
    }
    ctx->pc = 0x27CB7Cu;
    // 0x27cb7c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x27CB7Cu;
    {
        const bool branch_taken_0x27cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB7Cu;
        // 0x27cb80: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb7c) {
            ctx->pc = 0x27CD38u;
            goto label_27cd38;
        }
    }
    ctx->pc = 0x27CB84u;
label_27cb84:
    // 0x27cb84: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27CB84u;
    SET_GPR_U32(ctx, 31, 0x27CB8Cu);
    ctx->pc = 0x27CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB84u;
    // 0x27cb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27CB84u, 0x27CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB8Cu;
label_27cb8c:
    // 0x27cb8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CB8Cu;
    {
        const bool branch_taken_0x27cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb8c) {
            ctx->pc = 0x27CBA4u;
            goto label_27cba4;
        }
    }
    ctx->pc = 0x27CB94u;
    // 0x27cb94: 0xc0a1e86  jal         func_287A18
    ctx->pc = 0x27CB94u;
    SET_GPR_U32(ctx, 31, 0x27CB9Cu);
    ctx->pc = 0x27CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB94u;
    // 0x27cb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287A18u, 0x27CB94u, 0x27CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB9Cu;
label_27cb9c:
    // 0x27cb9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CB9Cu;
    {
        const bool branch_taken_0x27cb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB9Cu;
        // 0x27cba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb9c) {
            ctx->pc = 0x27CBC4u;
            goto label_27cbc4;
        }
    }
    ctx->pc = 0x27CBA4u;
label_27cba4:
    // 0x27cba4: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27CBA4u;
    SET_GPR_U32(ctx, 31, 0x27CBACu);
    ctx->pc = 0x27CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBA4u;
    // 0x27cba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27CBA4u, 0x27CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBACu;
label_27cbac:
    // 0x27cbac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CBACu;
    {
        const bool branch_taken_0x27cbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbac) {
            ctx->pc = 0x27CBD4u;
            goto label_27cbd4;
        }
    }
    ctx->pc = 0x27CBB4u;
    // 0x27cbb4: 0xc0a1b32  jal         func_286CC8
    ctx->pc = 0x27CBB4u;
    SET_GPR_U32(ctx, 31, 0x27CBBCu);
    ctx->pc = 0x27CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBB4u;
    // 0x27cbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CC8u, 0x27CBB4u, 0x27CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CBBCu;
    {
        const bool branch_taken_0x27cbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBBCu;
        // 0x27cbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbbc) {
            ctx->pc = 0x27CBD4u;
            goto label_27cbd4;
        }
    }
    ctx->pc = 0x27CBC4u;
label_27cbc4:
    // 0x27cbc4: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27CBC4u;
    SET_GPR_U32(ctx, 31, 0x27CBCCu);
    ctx->pc = 0x27CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBC4u;
    // 0x27cbc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27CBC4u, 0x27CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBCCu;
label_27cbcc:
    // 0x27cbcc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x27CBCCu;
    {
        const bool branch_taken_0x27cbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBCCu;
        // 0x27cbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbcc) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CBD4u;
label_27cbd4:
    // 0x27cbd4: 0xc09edf2  jal         func_27B7C8
    ctx->pc = 0x27CBD4u;
    SET_GPR_U32(ctx, 31, 0x27CBDCu);
    ctx->pc = 0x27CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBD4u;
    // 0x27cbd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7C8u, 0x27CBD4u, 0x27CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBDCu;
label_27cbdc:
    // 0x27cbdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CBDCu;
    {
        const bool branch_taken_0x27cbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cbdc) {
            ctx->pc = 0x27CBF4u;
            goto label_27cbf4;
        }
    }
    ctx->pc = 0x27CBE4u;
    // 0x27cbe4: 0xc09ede8  jal         func_27B7A0
    ctx->pc = 0x27CBE4u;
    SET_GPR_U32(ctx, 31, 0x27CBECu);
    ctx->pc = 0x27CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBE4u;
    // 0x27cbe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7A0u, 0x27CBE4u, 0x27CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBECu;
label_27cbec:
    // 0x27cbec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CBECu;
    {
        const bool branch_taken_0x27cbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbec) {
            ctx->pc = 0x27CC04u;
            goto label_27cc04;
        }
    }
    ctx->pc = 0x27CBF4u;
label_27cbf4:
    // 0x27cbf4: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27CBF4u;
    SET_GPR_U32(ctx, 31, 0x27CBFCu);
    ctx->pc = 0x27CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBF4u;
    // 0x27cbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27CBF4u, 0x27CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBFCu;
label_27cbfc:
    // 0x27cbfc: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x27CBFCu;
    {
        const bool branch_taken_0x27cbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBFCu;
        // 0x27cc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbfc) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CC04u;
label_27cc04:
    // 0x27cc04: 0xc09eefe  jal         func_27BBF8
    ctx->pc = 0x27CC04u;
    SET_GPR_U32(ctx, 31, 0x27CC0Cu);
    ctx->pc = 0x27CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC04u;
    // 0x27cc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BBF8u, 0x27CC04u, 0x27CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC0Cu;
label_27cc0c:
    // 0x27cc0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC0Cu;
    {
        const bool branch_taken_0x27cc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc0c) {
            ctx->pc = 0x27CC24u;
            goto label_27cc24;
        }
    }
    ctx->pc = 0x27CC14u;
    // 0x27cc14: 0xc0a1aea  jal         func_286BA8
    ctx->pc = 0x27CC14u;
    SET_GPR_U32(ctx, 31, 0x27CC1Cu);
    ctx->pc = 0x27CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC14u;
    // 0x27cc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286BA8u, 0x27CC14u, 0x27CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC1Cu;
label_27cc1c:
    // 0x27cc1c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x27CC1Cu;
    {
        const bool branch_taken_0x27cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC1Cu;
        // 0x27cc20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc1c) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CC24u;
label_27cc24:
    // 0x27cc24: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27CC24u;
    SET_GPR_U32(ctx, 31, 0x27CC2Cu);
    ctx->pc = 0x27CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC24u;
    // 0x27cc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27CC24u, 0x27CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC2Cu;
label_27cc2c:
    // 0x27cc2c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27cc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27cc30: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CC30u;
    {
        const bool branch_taken_0x27cc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc30) {
            ctx->pc = 0x27CC58u;
            goto label_27cc58;
        }
    }
    ctx->pc = 0x27CC38u;
    // 0x27cc38: 0xc09edd4  jal         func_27B750
    ctx->pc = 0x27CC38u;
    SET_GPR_U32(ctx, 31, 0x27CC40u);
    ctx->pc = 0x27CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC38u;
    // 0x27cc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B750u, 0x27CC38u, 0x27CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC40u;
label_27cc40:
    // 0x27cc40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC40u;
    {
        const bool branch_taken_0x27cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc40) {
            ctx->pc = 0x27CC58u;
            goto label_27cc58;
        }
    }
    ctx->pc = 0x27CC48u;
    // 0x27cc48: 0xc09f5b8  jal         func_27D6E0
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x27CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC48u;
    // 0x27cc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6E0u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27CC50u;
    {
        const bool branch_taken_0x27cc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC50u;
        // 0x27cc54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc50) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CC58u;
label_27cc58:
    // 0x27cc58: 0xc09ee4c  jal         func_27B930
    ctx->pc = 0x27CC58u;
    SET_GPR_U32(ctx, 31, 0x27CC60u);
    ctx->pc = 0x27CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC58u;
    // 0x27cc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B930u, 0x27CC58u, 0x27CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC60u;
label_27cc60:
    // 0x27cc60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC60u;
    {
        const bool branch_taken_0x27cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc60) {
            ctx->pc = 0x27CC78u;
            goto label_27cc78;
        }
    }
    ctx->pc = 0x27CC68u;
    // 0x27cc68: 0xc09f684  jal         func_27DA10
    ctx->pc = 0x27CC68u;
    SET_GPR_U32(ctx, 31, 0x27CC70u);
    ctx->pc = 0x27CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC68u;
    // 0x27cc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DA10u, 0x27CC68u, 0x27CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC70u;
label_27cc70:
    // 0x27cc70: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27CC70u;
    {
        const bool branch_taken_0x27cc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC70u;
        // 0x27cc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc70) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CC78u;
label_27cc78:
    // 0x27cc78: 0xc09ee38  jal         func_27B8E0
    ctx->pc = 0x27CC78u;
    SET_GPR_U32(ctx, 31, 0x27CC80u);
    ctx->pc = 0x27CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC78u;
    // 0x27cc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E0u, 0x27CC78u, 0x27CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC80u;
label_27cc80:
    // 0x27cc80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CC80u;
    {
        const bool branch_taken_0x27cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc80) {
            ctx->pc = 0x27CCACu;
            goto label_27ccac;
        }
    }
    ctx->pc = 0x27CC88u;
    // 0x27cc88: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27CC88u;
    SET_GPR_U32(ctx, 31, 0x27CC90u);
    ctx->pc = 0x27CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC88u;
    // 0x27cc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27CC88u, 0x27CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC90u;
label_27cc90:
    // 0x27cc90: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x27cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x27cc94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC94u;
    {
        const bool branch_taken_0x27cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc94) {
            ctx->pc = 0x27CCACu;
            goto label_27ccac;
        }
    }
    ctx->pc = 0x27CC9Cu;
    // 0x27cc9c: 0xc09f700  jal         func_27DC00
    ctx->pc = 0x27CC9Cu;
    SET_GPR_U32(ctx, 31, 0x27CCA4u);
    ctx->pc = 0x27CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC9Cu;
    // 0x27cca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC00u, 0x27CC9Cu, 0x27CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCA4u;
label_27cca4:
    // 0x27cca4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27CCA4u;
    {
        const bool branch_taken_0x27cca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCA4u;
        // 0x27cca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cca4) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CCACu;
label_27ccac:
    // 0x27ccac: 0xc09ee42  jal         func_27B908
    ctx->pc = 0x27CCACu;
    SET_GPR_U32(ctx, 31, 0x27CCB4u);
    ctx->pc = 0x27CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCACu;
    // 0x27ccb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B908u, 0x27CCACu, 0x27CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCB4u;
label_27ccb4:
    // 0x27ccb4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27CCB4u;
    {
        const bool branch_taken_0x27ccb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCB4u;
        // 0x27ccb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccb4) {
            ctx->pc = 0x27CD30u;
            goto label_27cd30;
        }
    }
    ctx->pc = 0x27CCBCu;
    // 0x27ccbc: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27ccbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27ccc0: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27ccc4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27ccc8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27CCC8u;
    {
        const bool branch_taken_0x27ccc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCC8u;
        // 0x27cccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccc8) {
            ctx->pc = 0x27CD00u;
            goto label_27cd00;
        }
    }
    ctx->pc = 0x27CCD0u;
    // 0x27ccd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ccd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CCD4u;
    {
        const bool branch_taken_0x27ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCD4u;
        // 0x27ccd8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccd4) {
            ctx->pc = 0x27CCECu;
            goto label_27ccec;
        }
    }
    ctx->pc = 0x27CCDCu;
    // 0x27ccdc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27ccdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27cce0: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27cce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27cce4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CCE4u;
    {
        const bool branch_taken_0x27cce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCE4u;
        // 0x27cce8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cce4) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CCECu;
label_27ccec:
    // 0x27ccec: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27ccf0: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27ccf4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CCF4u;
    {
        const bool branch_taken_0x27ccf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ccf4) {
            ctx->pc = 0x27CD00u;
            goto label_27cd00;
        }
    }
    ctx->pc = 0x27CCFCu;
label_27ccfc:
    // 0x27ccfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd00:
    // 0x27cd00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CD00u;
    {
        const bool branch_taken_0x27cd00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd00) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CD08u;
    // 0x27cd08: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x27CD08u;
    SET_GPR_U32(ctx, 31, 0x27CD10u);
    ctx->pc = 0x27CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD08u;
    // 0x27cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x27CD08u, 0x27CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD10u;
label_27cd10:
    // 0x27cd10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CD10u;
    {
        const bool branch_taken_0x27cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD10u;
        // 0x27cd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd10) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CD18u;
label_27cd18:
    // 0x27cd18: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x27CD18u;
    SET_GPR_U32(ctx, 31, 0x27CD20u);
    ctx->pc = 0x27CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD18u;
    // 0x27cd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x27CD18u, 0x27CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD20u;
label_27cd20:
    // 0x27cd20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27CD20u;
    {
        const bool branch_taken_0x27cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD20u;
        // 0x27cd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd20) {
            ctx->pc = 0x27CD34u;
            goto label_27cd34;
        }
    }
    ctx->pc = 0x27CD28u;
label_27cd28:
    // 0x27cd28: 0xc089988  jal         func_226620
    ctx->pc = 0x27CD28u;
    SET_GPR_U32(ctx, 31, 0x27CD30u);
    ctx->pc = 0x27CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD28u;
    // 0x27cd2c: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27CD28u, 0x27CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD30u;
label_27cd30:
    // 0x27cd30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27cd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd34:
    // 0x27cd34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27cd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27cd38:
    // 0x27cd38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27cd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27cd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cd40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27cd40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x27CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD48u;
        // 0x27cd4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CD50u;
}
