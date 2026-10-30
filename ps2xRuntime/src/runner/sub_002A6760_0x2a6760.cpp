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

// Function: sub_002A6760
// Address: 0x2a6760 - 0x2a68b0
void sub_002A6760_0x2a6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6760_0x2a6760");
#endif

    switch (ctx->pc) {
        case 0x2a6760u: goto label_2a6760;
        case 0x2a6764u: goto label_2a6764;
        case 0x2a6768u: goto label_2a6768;
        case 0x2a676cu: goto label_2a676c;
        case 0x2a6770u: goto label_2a6770;
        case 0x2a6774u: goto label_2a6774;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a677cu: goto label_2a677c;
        case 0x2a6780u: goto label_2a6780;
        case 0x2a6784u: goto label_2a6784;
        case 0x2a6788u: goto label_2a6788;
        case 0x2a678cu: goto label_2a678c;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a6794u: goto label_2a6794;
        case 0x2a6798u: goto label_2a6798;
        case 0x2a679cu: goto label_2a679c;
        case 0x2a67a0u: goto label_2a67a0;
        case 0x2a67a4u: goto label_2a67a4;
        case 0x2a67a8u: goto label_2a67a8;
        case 0x2a67acu: goto label_2a67ac;
        case 0x2a67b0u: goto label_2a67b0;
        case 0x2a67b4u: goto label_2a67b4;
        case 0x2a67b8u: goto label_2a67b8;
        case 0x2a67bcu: goto label_2a67bc;
        case 0x2a67c0u: goto label_2a67c0;
        case 0x2a67c4u: goto label_2a67c4;
        case 0x2a67c8u: goto label_2a67c8;
        case 0x2a67ccu: goto label_2a67cc;
        case 0x2a67d0u: goto label_2a67d0;
        case 0x2a67d4u: goto label_2a67d4;
        case 0x2a67d8u: goto label_2a67d8;
        case 0x2a67dcu: goto label_2a67dc;
        case 0x2a67e0u: goto label_2a67e0;
        case 0x2a67e4u: goto label_2a67e4;
        case 0x2a67e8u: goto label_2a67e8;
        case 0x2a67ecu: goto label_2a67ec;
        case 0x2a67f0u: goto label_2a67f0;
        case 0x2a67f4u: goto label_2a67f4;
        case 0x2a67f8u: goto label_2a67f8;
        case 0x2a67fcu: goto label_2a67fc;
        case 0x2a6800u: goto label_2a6800;
        case 0x2a6804u: goto label_2a6804;
        case 0x2a6808u: goto label_2a6808;
        case 0x2a680cu: goto label_2a680c;
        case 0x2a6810u: goto label_2a6810;
        case 0x2a6814u: goto label_2a6814;
        case 0x2a6818u: goto label_2a6818;
        case 0x2a681cu: goto label_2a681c;
        case 0x2a6820u: goto label_2a6820;
        case 0x2a6824u: goto label_2a6824;
        case 0x2a6828u: goto label_2a6828;
        case 0x2a682cu: goto label_2a682c;
        case 0x2a6830u: goto label_2a6830;
        case 0x2a6834u: goto label_2a6834;
        case 0x2a6838u: goto label_2a6838;
        case 0x2a683cu: goto label_2a683c;
        case 0x2a6840u: goto label_2a6840;
        case 0x2a6844u: goto label_2a6844;
        case 0x2a6848u: goto label_2a6848;
        case 0x2a684cu: goto label_2a684c;
        case 0x2a6850u: goto label_2a6850;
        case 0x2a6854u: goto label_2a6854;
        case 0x2a6858u: goto label_2a6858;
        case 0x2a685cu: goto label_2a685c;
        case 0x2a6860u: goto label_2a6860;
        case 0x2a6864u: goto label_2a6864;
        case 0x2a6868u: goto label_2a6868;
        case 0x2a686cu: goto label_2a686c;
        case 0x2a6870u: goto label_2a6870;
        case 0x2a6874u: goto label_2a6874;
        case 0x2a6878u: goto label_2a6878;
        case 0x2a687cu: goto label_2a687c;
        case 0x2a6880u: goto label_2a6880;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a6888u: goto label_2a6888;
        case 0x2a688cu: goto label_2a688c;
        case 0x2a6890u: goto label_2a6890;
        case 0x2a6894u: goto label_2a6894;
        case 0x2a6898u: goto label_2a6898;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68a0u: goto label_2a68a0;
        case 0x2a68a4u: goto label_2a68a4;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68acu: goto label_2a68ac;
        default: break;
    }

    ctx->pc = 0x2a6760u;

label_2a6760:
    // 0x2a6760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a6764:
    // 0x2a6764: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a6764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a6768:
    // 0x2a6768: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a676c:
    // 0x2a676c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a6770:
    // 0x2a6770: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a6774:
    // 0x2a6774: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a6774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a6778:
    // 0x2a6778: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2a677c:
    // 0x2a677c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a677cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6780:
    // 0x2a6780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a6784:
    // 0x2a6784: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2a6784u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_2a6788:
    // 0x2a6788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a6788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a678c:
    // 0x2a678c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2a678cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a6790:
    // 0x2a6790: 0x2463f910  addiu       $v1, $v1, -0x6F0
    ctx->pc = 0x2a6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
label_2a6794:
    // 0x2a6794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a6798:
    // 0x2a6798: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a6798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a679c:
    // 0x2a679c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a679cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a67a0:
    // 0x2a67a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a67a4:
    // 0x2a67a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2a67a8:
    // 0x2a67a8: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2a67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
label_2a67ac:
    // 0x2a67ac: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2a67acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_2a67b0:
    // 0x2a67b0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2a67b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a67b4:
    // 0x2a67b4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2a67b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a67b8:
    // 0x2a67b8: 0xa6070020  sh          $a3, 0x20($s0)
    ctx->pc = 0x2a67b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 7));
label_2a67bc:
    // 0x2a67bc: 0x10a40019  beq         $a1, $a0, . + 4 + (0x19 << 2)
label_2a67c0:
    if (ctx->pc == 0x2A67C0u) {
        ctx->pc = 0x2A67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67BCu;
        // 0x2a67c0: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67C4u;
        goto label_2a67c4;
    }
    ctx->pc = 0x2A67BCu;
    {
        const bool branch_taken_0x2a67bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67BCu;
        // 0x2a67c0: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67bc) {
            ctx->pc = 0x2A6824u;
            goto label_2a6824;
        }
    }
    ctx->pc = 0x2A67C4u;
label_2a67c4:
    // 0x2a67c4: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2a67c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_2a67c8:
    // 0x2a67c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a67cc:
    if (ctx->pc == 0x2A67CCu) {
        ctx->pc = 0x2A67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67C8u;
        // 0x2a67cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67D0u;
        goto label_2a67d0;
    }
    ctx->pc = 0x2A67C8u;
    {
        const bool branch_taken_0x2a67c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67C8u;
        // 0x2a67cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67c8) {
            ctx->pc = 0x2A67E0u;
            goto label_2a67e0;
        }
    }
    ctx->pc = 0x2A67D0u;
label_2a67d0:
    // 0x2a67d0: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_2a67d4:
    if (ctx->pc == 0x2A67D4u) {
        ctx->pc = 0x2A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D0u;
        // 0x2a67d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67D8u;
        goto label_2a67d8;
    }
    ctx->pc = 0x2A67D0u;
    {
        const bool branch_taken_0x2a67d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D0u;
        // 0x2a67d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d0) {
            ctx->pc = 0x2A67F4u;
            goto label_2a67f4;
        }
    }
    ctx->pc = 0x2A67D8u;
label_2a67d8:
    // 0x2a67d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2a67dc:
    if (ctx->pc == 0x2A67DCu) {
        ctx->pc = 0x2A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D8u;
        // 0x2a67dc: 0xa600002a  sh          $zero, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67E0u;
        goto label_2a67e0;
    }
    ctx->pc = 0x2A67D8u;
    {
        const bool branch_taken_0x2a67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D8u;
        // 0x2a67dc: 0xa600002a  sh          $zero, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d8) {
            ctx->pc = 0x2A6830u;
            goto label_2a6830;
        }
    }
    ctx->pc = 0x2A67E0u;
label_2a67e0:
    // 0x2a67e0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a67e4:
    // 0x2a67e4: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
label_2a67e8:
    if (ctx->pc == 0x2A67E8u) {
        ctx->pc = 0x2A67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67E4u;
        // 0x2a67e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67ECu;
        goto label_2a67ec;
    }
    ctx->pc = 0x2A67E4u;
    {
        const bool branch_taken_0x2a67e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67E4u;
        // 0x2a67e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67e4) {
            ctx->pc = 0x2A6828u;
            goto label_2a6828;
        }
    }
    ctx->pc = 0x2A67ECu;
label_2a67ec:
    // 0x2a67ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a67f0:
    if (ctx->pc == 0x2A67F0u) {
        ctx->pc = 0x2A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67ECu;
        // 0x2a67f0: 0xa600002a  sh          $zero, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A67F4u;
        goto label_2a67f4;
    }
    ctx->pc = 0x2A67ECu;
    {
        const bool branch_taken_0x2a67ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67ECu;
        // 0x2a67f0: 0xa600002a  sh          $zero, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67ec) {
            ctx->pc = 0x2A6830u;
            goto label_2a6830;
        }
    }
    ctx->pc = 0x2A67F4u;
label_2a67f4:
    // 0x2a67f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a67f8:
    // 0x2a67f8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a67fc:
    // 0x2a67fc: 0xc0cd4e4  jal         func_335390
label_2a6800:
    if (ctx->pc == 0x2A6800u) {
        ctx->pc = 0x2A6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67FCu;
        // 0x2a6800: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6804u;
        goto label_2a6804;
    }
    ctx->pc = 0x2A67FCu;
    SET_GPR_U32(ctx, 31, 0x2A6804u);
    ctx->pc = 0x2A6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A67FCu;
    // 0x2a6800: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A67FCu, 0x2A6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6804u;
label_2a6804:
    // 0x2a6804: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a6804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a6808:
    // 0x2a6808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a680c:
    // 0x2a680c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2a680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2a6810:
    // 0x2a6810: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x2a6810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_2a6814:
    // 0x2a6814: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a6814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a6818:
    // 0x2a6818: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_2a681c:
    // 0x2a681c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a6820:
    if (ctx->pc == 0x2A6820u) {
        ctx->pc = 0x2A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A681Cu;
        // 0x2a6820: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6824u;
        goto label_2a6824;
    }
    ctx->pc = 0x2A681Cu;
    {
        const bool branch_taken_0x2a681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A681Cu;
        // 0x2a6820: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a681c) {
            ctx->pc = 0x2A682Cu;
            goto label_2a682c;
        }
    }
    ctx->pc = 0x2A6824u;
label_2a6824:
    // 0x2a6824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6828:
    // 0x2a6828: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2a6828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2a682c:
    // 0x2a682c: 0xa600002a  sh          $zero, 0x2A($s0)
    ctx->pc = 0x2a682cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
label_2a6830:
    // 0x2a6830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a6834:
    // 0x2a6834: 0xc0a9826  jal         func_2A6098
label_2a6838:
    if (ctx->pc == 0x2A6838u) {
        ctx->pc = 0x2A6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6834u;
        // 0x2a6838: 0xa600002c  sh          $zero, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A683Cu;
        goto label_2a683c;
    }
    ctx->pc = 0x2A6834u;
    SET_GPR_U32(ctx, 31, 0x2A683Cu);
    ctx->pc = 0x2A6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6834u;
    // 0x2a6838: 0xa600002c  sh          $zero, 0x2C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6098u, 0x2A6834u, 0x2A683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A683Cu;
label_2a683c:
    // 0x2a683c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2a683cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2a6840:
    // 0x2a6840: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x2a6840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
label_2a6844:
    // 0x2a6844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6848:
    // 0x2a6848: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a684c:
    // 0x2a684c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6850:
    // 0x2a6850: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6854:
    // 0x2a6854: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6858:
    // 0x2a6858: 0x40f809  jalr        $v0
label_2a685c:
    if (ctx->pc == 0x2A685Cu) {
        ctx->pc = 0x2A685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6858u;
        // 0x2a685c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6860u;
        goto label_2a6860;
    }
    ctx->pc = 0x2A6858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6860u);
        ctx->pc = 0x2A685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6858u;
        // 0x2a685c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6858u, 0x2A6860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6860u;
label_2a6860:
    // 0x2a6860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6864:
    // 0x2a6864: 0xc0a49d6  jal         func_292758
label_2a6868:
    if (ctx->pc == 0x2A6868u) {
        ctx->pc = 0x2A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6864u;
        // 0x2a6868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A686Cu;
        goto label_2a686c;
    }
    ctx->pc = 0x2A6864u;
    SET_GPR_U32(ctx, 31, 0x2A686Cu);
    ctx->pc = 0x2A6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6864u;
    // 0x2a6868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A6864u, 0x2A686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A686Cu;
label_2a686c:
    // 0x2a686c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6870:
    // 0x2a6870: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6874:
    // 0x2a6874: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6878:
    // 0x2a6878: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a687c:
    // 0x2a687c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6880:
    // 0x2a6880: 0x40f809  jalr        $v0
label_2a6884:
    if (ctx->pc == 0x2A6884u) {
        ctx->pc = 0x2A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6880u;
        // 0x2a6884: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6888u;
        goto label_2a6888;
    }
    ctx->pc = 0x2A6880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6888u);
        ctx->pc = 0x2A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6880u;
        // 0x2a6884: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6880u, 0x2A6888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6888u;
label_2a6888:
    // 0x2a6888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a688c:
    // 0x2a688c: 0xc0a49c2  jal         func_292708
label_2a6890:
    if (ctx->pc == 0x2A6890u) {
        ctx->pc = 0x2A6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A688Cu;
        // 0x2a6890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6894u;
        goto label_2a6894;
    }
    ctx->pc = 0x2A688Cu;
    SET_GPR_U32(ctx, 31, 0x2A6894u);
    ctx->pc = 0x2A6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A688Cu;
    // 0x2a6890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A688Cu, 0x2A6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6894u;
label_2a6894:
    // 0x2a6894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a6894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6898:
    // 0x2a6898: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a6898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a689c:
    // 0x2a689c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a68a0:
    // 0x2a68a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a68a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a68a4:
    // 0x2a68a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a68a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a68a8:
    // 0x2a68a8: 0x3e00008  jr          $ra
label_2a68ac:
    if (ctx->pc == 0x2A68ACu) {
        ctx->pc = 0x2A68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68A8u;
        // 0x2a68ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A68B0u;
        goto label_fallthrough_0x2a68a8;
    }
    ctx->pc = 0x2A68A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68A8u;
        // 0x2a68ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A68A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a68a8:
    ctx->pc = 0x2A68B0u;
}
