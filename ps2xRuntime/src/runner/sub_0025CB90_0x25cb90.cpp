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

// Function: sub_0025CB90
// Address: 0x25cb90 - 0x25cd58
void sub_0025CB90_0x25cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB90_0x25cb90");
#endif

    switch (ctx->pc) {
        case 0x25cb90u: goto label_25cb90;
        case 0x25cb94u: goto label_25cb94;
        case 0x25cb98u: goto label_25cb98;
        case 0x25cb9cu: goto label_25cb9c;
        case 0x25cba0u: goto label_25cba0;
        case 0x25cba4u: goto label_25cba4;
        case 0x25cba8u: goto label_25cba8;
        case 0x25cbacu: goto label_25cbac;
        case 0x25cbb0u: goto label_25cbb0;
        case 0x25cbb4u: goto label_25cbb4;
        case 0x25cbb8u: goto label_25cbb8;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc0u: goto label_25cbc0;
        case 0x25cbc4u: goto label_25cbc4;
        case 0x25cbc8u: goto label_25cbc8;
        case 0x25cbccu: goto label_25cbcc;
        case 0x25cbd0u: goto label_25cbd0;
        case 0x25cbd4u: goto label_25cbd4;
        case 0x25cbd8u: goto label_25cbd8;
        case 0x25cbdcu: goto label_25cbdc;
        case 0x25cbe0u: goto label_25cbe0;
        case 0x25cbe4u: goto label_25cbe4;
        case 0x25cbe8u: goto label_25cbe8;
        case 0x25cbecu: goto label_25cbec;
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        case 0x25cc68u: goto label_25cc68;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc70u: goto label_25cc70;
        case 0x25cc74u: goto label_25cc74;
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc7cu: goto label_25cc7c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc88u: goto label_25cc88;
        case 0x25cc8cu: goto label_25cc8c;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cc94u: goto label_25cc94;
        case 0x25cc98u: goto label_25cc98;
        case 0x25cc9cu: goto label_25cc9c;
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca4u: goto label_25cca4;
        case 0x25cca8u: goto label_25cca8;
        case 0x25ccacu: goto label_25ccac;
        case 0x25ccb0u: goto label_25ccb0;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccbcu: goto label_25ccbc;
        case 0x25ccc0u: goto label_25ccc0;
        case 0x25ccc4u: goto label_25ccc4;
        case 0x25ccc8u: goto label_25ccc8;
        case 0x25ccccu: goto label_25cccc;
        case 0x25ccd0u: goto label_25ccd0;
        case 0x25ccd4u: goto label_25ccd4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce0u: goto label_25cce0;
        case 0x25cce4u: goto label_25cce4;
        case 0x25cce8u: goto label_25cce8;
        case 0x25ccecu: goto label_25ccec;
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25ccf4u: goto label_25ccf4;
        case 0x25ccf8u: goto label_25ccf8;
        case 0x25ccfcu: goto label_25ccfc;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd04u: goto label_25cd04;
        case 0x25cd08u: goto label_25cd08;
        case 0x25cd0cu: goto label_25cd0c;
        case 0x25cd10u: goto label_25cd10;
        case 0x25cd14u: goto label_25cd14;
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd1cu: goto label_25cd1c;
        case 0x25cd20u: goto label_25cd20;
        case 0x25cd24u: goto label_25cd24;
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd2cu: goto label_25cd2c;
        case 0x25cd30u: goto label_25cd30;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd3cu: goto label_25cd3c;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd44u: goto label_25cd44;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd4cu: goto label_25cd4c;
        case 0x25cd50u: goto label_25cd50;
        case 0x25cd54u: goto label_25cd54;
        default: break;
    }

    ctx->pc = 0x25cb90u;

label_25cb90:
    // 0x25cb90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25cb94:
    // 0x25cb94: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25cb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25cb98:
    // 0x25cb98: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25cb9c:
    // 0x25cb9c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25cb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25cba0:
    // 0x25cba0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25cba4:
    // 0x25cba4: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25cba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25cba8:
    // 0x25cba8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25cbac:
    // 0x25cbac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cbb0:
    // 0x25cbb0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25cbb4:
    // 0x25cbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cbb8:
    // 0x25cbb8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25cbbc:
    // 0x25cbbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25cbbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25cbc0:
    // 0x25cbc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cbc4:
    // 0x25cbc4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25cbc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25cbc8:
    // 0x25cbc8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25cbcc:
    // 0x25cbcc: 0xc041532  jal         func_1054C8
label_25cbd0:
    if (ctx->pc == 0x25CBD0u) {
        ctx->pc = 0x25CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBCCu;
        // 0x25cbd0: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBD4u;
        goto label_25cbd4;
    }
    ctx->pc = 0x25CBCCu;
    SET_GPR_U32(ctx, 31, 0x25CBD4u);
    ctx->pc = 0x25CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBCCu;
    // 0x25cbd0: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CBCCu, 0x25CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBD4u;
label_25cbd4:
    // 0x25cbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cbd8:
    // 0x25cbd8: 0xc041532  jal         func_1054C8
label_25cbdc:
    if (ctx->pc == 0x25CBDCu) {
        ctx->pc = 0x25CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBD8u;
        // 0x25cbdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBE0u;
        goto label_25cbe0;
    }
    ctx->pc = 0x25CBD8u;
    SET_GPR_U32(ctx, 31, 0x25CBE0u);
    ctx->pc = 0x25CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBD8u;
    // 0x25cbdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CBD8u, 0x25CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBE0u;
label_25cbe0:
    // 0x25cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cbe4:
    // 0x25cbe4: 0xc041532  jal         func_1054C8
label_25cbe8:
    if (ctx->pc == 0x25CBE8u) {
        ctx->pc = 0x25CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBE4u;
        // 0x25cbe8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBECu;
        goto label_25cbec;
    }
    ctx->pc = 0x25CBE4u;
    SET_GPR_U32(ctx, 31, 0x25CBECu);
    ctx->pc = 0x25CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBE4u;
    // 0x25cbe8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CBE4u, 0x25CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBECu;
label_25cbec:
    // 0x25cbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cbf0:
    // 0x25cbf0: 0xc08a0d0  jal         func_228340
label_25cbf4:
    if (ctx->pc == 0x25CBF4u) {
        ctx->pc = 0x25CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBF0u;
        // 0x25cbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBF8u;
        goto label_25cbf8;
    }
    ctx->pc = 0x25CBF0u;
    SET_GPR_U32(ctx, 31, 0x25CBF8u);
    ctx->pc = 0x25CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBF0u;
    // 0x25cbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25CBF0u, 0x25CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBF8u;
label_25cbf8:
    // 0x25cbf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25cbfc:
    if (ctx->pc == 0x25CBFCu) {
        ctx->pc = 0x25CC00u;
        goto label_25cc00;
    }
    ctx->pc = 0x25CBF8u;
    {
        const bool branch_taken_0x25cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbf8) {
            ctx->pc = 0x25CC38u;
            goto label_25cc38;
        }
    }
    ctx->pc = 0x25CC00u;
label_25cc00:
    // 0x25cc00: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_25cc04:
    if (ctx->pc == 0x25CC04u) {
        ctx->pc = 0x25CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC00u;
        // 0x25cc04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC08u;
        goto label_25cc08;
    }
    ctx->pc = 0x25CC00u;
    {
        const bool branch_taken_0x25cc00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC00u;
        // 0x25cc04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc00) {
            ctx->pc = 0x25CC28u;
            goto label_25cc28;
        }
    }
    ctx->pc = 0x25CC08u;
label_25cc08:
    // 0x25cc08: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25cc0c:
    // 0x25cc0c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25cc10:
    // 0x25cc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cc14:
    // 0x25cc14: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25cc18:
    // 0x25cc18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cc18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cc1c:
    // 0x25cc1c: 0xc04159e  jal         func_105678
label_25cc20:
    if (ctx->pc == 0x25CC20u) {
        ctx->pc = 0x25CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC1Cu;
        // 0x25cc20: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC24u;
        goto label_25cc24;
    }
    ctx->pc = 0x25CC1Cu;
    SET_GPR_U32(ctx, 31, 0x25CC24u);
    ctx->pc = 0x25CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC1Cu;
    // 0x25cc20: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25CC1Cu, 0x25CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC24u;
label_25cc24:
    // 0x25cc24: 0x0  nop
    ctx->pc = 0x25cc24u;
    // NOP
label_25cc28:
    // 0x25cc28: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25cc2c:
    // 0x25cc2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25cc30:
    // 0x25cc30: 0x1000000c  b           . + 4 + (0xC << 2)
label_25cc34:
    if (ctx->pc == 0x25CC34u) {
        ctx->pc = 0x25CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC30u;
        // 0x25cc34: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC38u;
        goto label_25cc38;
    }
    ctx->pc = 0x25CC30u;
    {
        const bool branch_taken_0x25cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC30u;
        // 0x25cc34: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc30) {
            ctx->pc = 0x25CC64u;
            goto label_25cc64;
        }
    }
    ctx->pc = 0x25CC38u;
label_25cc38:
    // 0x25cc38: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25cc3c:
    if (ctx->pc == 0x25CC3Cu) {
        ctx->pc = 0x25CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC38u;
        // 0x25cc3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC40u;
        goto label_25cc40;
    }
    ctx->pc = 0x25CC38u;
    {
        const bool branch_taken_0x25cc38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC38u;
        // 0x25cc3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc38) {
            ctx->pc = 0x25CC5Cu;
            goto label_25cc5c;
        }
    }
    ctx->pc = 0x25CC40u;
label_25cc40:
    // 0x25cc40: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25cc44:
    // 0x25cc44: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25cc44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25cc48:
    // 0x25cc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cc4c:
    // 0x25cc4c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25cc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25cc50:
    // 0x25cc50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cc50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cc54:
    // 0x25cc54: 0xc04159e  jal         func_105678
label_25cc58:
    if (ctx->pc == 0x25CC58u) {
        ctx->pc = 0x25CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC54u;
        // 0x25cc58: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC5Cu;
        goto label_25cc5c;
    }
    ctx->pc = 0x25CC54u;
    SET_GPR_U32(ctx, 31, 0x25CC5Cu);
    ctx->pc = 0x25CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC54u;
    // 0x25cc58: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25CC54u, 0x25CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC5Cu;
label_25cc5c:
    // 0x25cc5c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25cc60:
    // 0x25cc60: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x25cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_25cc64:
    // 0x25cc64: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_25cc68:
    if (ctx->pc == 0x25CC68u) {
        ctx->pc = 0x25CC6Cu;
        goto label_25cc6c;
    }
    ctx->pc = 0x25CC64u;
    {
        const bool branch_taken_0x25cc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc64) {
            ctx->pc = 0x25CCB0u;
            goto label_25ccb0;
        }
    }
    ctx->pc = 0x25CC6Cu;
label_25cc6c:
    // 0x25cc6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25cc70:
    // 0x25cc70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25cc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25cc74:
    // 0x25cc74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25cc78:
    // 0x25cc78: 0x40f809  jalr        $v0
label_25cc7c:
    if (ctx->pc == 0x25CC7Cu) {
        ctx->pc = 0x25CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC78u;
        // 0x25cc7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC80u;
        goto label_25cc80;
    }
    ctx->pc = 0x25CC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25CC80u);
        ctx->pc = 0x25CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC78u;
        // 0x25cc7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC78u, 0x25CC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CC80u;
label_25cc80:
    // 0x25cc80: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25cc80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25cc84:
    // 0x25cc84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25cc88:
    // 0x25cc88: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25cc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25cc8c:
    // 0x25cc8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25cc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25cc90:
    // 0x25cc90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25cc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25cc94:
    // 0x25cc94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25cc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cc98:
    // 0x25cc98: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25cc98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cc9c:
    // 0x25cc9c: 0x254ac5b0  addiu       $t2, $t2, -0x3A50
    ctx->pc = 0x25cc9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952368));
label_25cca0:
    // 0x25cca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cca4:
    // 0x25cca4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25cca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25cca8:
    // 0x25cca8: 0xc041664  jal         func_105990
label_25ccac:
    if (ctx->pc == 0x25CCACu) {
        ctx->pc = 0x25CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCA8u;
        // 0x25ccac: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCB0u;
        goto label_25ccb0;
    }
    ctx->pc = 0x25CCA8u;
    SET_GPR_U32(ctx, 31, 0x25CCB0u);
    ctx->pc = 0x25CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCA8u;
    // 0x25ccac: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25CCA8u, 0x25CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCB0u;
label_25ccb0:
    // 0x25ccb0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_25ccb4:
    if (ctx->pc == 0x25CCB4u) {
        ctx->pc = 0x25CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB0u;
        // 0x25ccb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCB8u;
        goto label_25ccb8;
    }
    ctx->pc = 0x25CCB0u;
    {
        const bool branch_taken_0x25ccb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB0u;
        // 0x25ccb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccb0) {
            ctx->pc = 0x25CCD8u;
            goto label_25ccd8;
        }
    }
    ctx->pc = 0x25CCB8u;
label_25ccb8:
    // 0x25ccb8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25ccbc:
    // 0x25ccbc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ccc0:
    // 0x25ccc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ccc4:
    // 0x25ccc4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25ccc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25ccc8:
    // 0x25ccc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25ccc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25cccc:
    // 0x25cccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ccccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ccd0:
    // 0x25ccd0: 0xc041b20  jal         func_106C80
label_25ccd4:
    if (ctx->pc == 0x25CCD4u) {
        ctx->pc = 0x25CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCD0u;
        // 0x25ccd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCD8u;
        goto label_25ccd8;
    }
    ctx->pc = 0x25CCD0u;
    SET_GPR_U32(ctx, 31, 0x25CCD8u);
    ctx->pc = 0x25CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCD0u;
    // 0x25ccd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25CCD0u, 0x25CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCD8u;
label_25ccd8:
    // 0x25ccd8: 0xc05d484  jal         func_175210
label_25ccdc:
    if (ctx->pc == 0x25CCDCu) {
        ctx->pc = 0x25CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCD8u;
        // 0x25ccdc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCE0u;
        goto label_25cce0;
    }
    ctx->pc = 0x25CCD8u;
    SET_GPR_U32(ctx, 31, 0x25CCE0u);
    ctx->pc = 0x25CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCD8u;
    // 0x25ccdc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25CCD8u, 0x25CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCE0u;
label_25cce0:
    // 0x25cce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cce4:
    // 0x25cce4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25cce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25cce8:
    // 0x25cce8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25ccec:
    // 0x25ccec: 0xa0f809  jalr        $a1
label_25ccf0:
    if (ctx->pc == 0x25CCF0u) {
        ctx->pc = 0x25CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCECu;
        // 0x25ccf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCF4u;
        goto label_25ccf4;
    }
    ctx->pc = 0x25CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25CCF4u);
        ctx->pc = 0x25CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCECu;
        // 0x25ccf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCECu, 0x25CCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CCF4u;
label_25ccf4:
    // 0x25ccf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ccf8:
    // 0x25ccf8: 0xc087016  jal         func_21C058
label_25ccfc:
    if (ctx->pc == 0x25CCFCu) {
        ctx->pc = 0x25CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCF8u;
        // 0x25ccfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD00u;
        goto label_25cd00;
    }
    ctx->pc = 0x25CCF8u;
    SET_GPR_U32(ctx, 31, 0x25CD00u);
    ctx->pc = 0x25CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCF8u;
    // 0x25ccfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25CCF8u, 0x25CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD00u;
label_25cd00:
    // 0x25cd00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25cd04:
    // 0x25cd04: 0xc089990  jal         func_226640
label_25cd08:
    if (ctx->pc == 0x25CD08u) {
        ctx->pc = 0x25CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD04u;
        // 0x25cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD0Cu;
        goto label_25cd0c;
    }
    ctx->pc = 0x25CD04u;
    SET_GPR_U32(ctx, 31, 0x25CD0Cu);
    ctx->pc = 0x25CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD04u;
    // 0x25cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25CD04u, 0x25CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD0Cu;
label_25cd0c:
    // 0x25cd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25cd10:
    // 0x25cd10: 0xc0899aa  jal         func_2266A8
label_25cd14:
    if (ctx->pc == 0x25CD14u) {
        ctx->pc = 0x25CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD10u;
        // 0x25cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD18u;
        goto label_25cd18;
    }
    ctx->pc = 0x25CD10u;
    SET_GPR_U32(ctx, 31, 0x25CD18u);
    ctx->pc = 0x25CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD10u;
    // 0x25cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25CD10u, 0x25CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD18u;
label_25cd18:
    // 0x25cd18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25cd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25cd1c:
    // 0x25cd1c: 0xc05d4f6  jal         func_1753D8
label_25cd20:
    if (ctx->pc == 0x25CD20u) {
        ctx->pc = 0x25CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD1Cu;
        // 0x25cd20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD24u;
        goto label_25cd24;
    }
    ctx->pc = 0x25CD1Cu;
    SET_GPR_U32(ctx, 31, 0x25CD24u);
    ctx->pc = 0x25CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD1Cu;
    // 0x25cd20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25CD1Cu, 0x25CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD24u;
label_25cd24:
    // 0x25cd24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25cd28:
    // 0x25cd28: 0xc05d53a  jal         func_1754E8
label_25cd2c:
    if (ctx->pc == 0x25CD2Cu) {
        ctx->pc = 0x25CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD28u;
        // 0x25cd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD30u;
        goto label_25cd30;
    }
    ctx->pc = 0x25CD28u;
    SET_GPR_U32(ctx, 31, 0x25CD30u);
    ctx->pc = 0x25CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD28u;
    // 0x25cd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25CD28u, 0x25CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD30u;
label_25cd30:
    // 0x25cd30: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25cd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25cd34:
    // 0x25cd34: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25cd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25cd38:
    // 0x25cd38: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25cd38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25cd3c:
    // 0x25cd3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25cd3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25cd40:
    // 0x25cd40: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25cd40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25cd44:
    // 0x25cd44: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25cd44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25cd48:
    // 0x25cd48: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25cd48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25cd4c:
    // 0x25cd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cd50:
    // 0x25cd50: 0x3e00008  jr          $ra
label_25cd54:
    if (ctx->pc == 0x25CD54u) {
        ctx->pc = 0x25CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD50u;
        // 0x25cd54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD58u;
        goto label_fallthrough_0x25cd50;
    }
    ctx->pc = 0x25CD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD50u;
        // 0x25cd54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25cd50:
    ctx->pc = 0x25CD58u;
}
