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

// Function: sub_003579A0
// Address: 0x3579a0 - 0x357a68
void sub_003579A0_0x3579a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003579A0_0x3579a0");
#endif

    switch (ctx->pc) {
        case 0x3579a0u: goto label_3579a0;
        case 0x3579a4u: goto label_3579a4;
        case 0x3579a8u: goto label_3579a8;
        case 0x3579acu: goto label_3579ac;
        case 0x3579b0u: goto label_3579b0;
        case 0x3579b4u: goto label_3579b4;
        case 0x3579b8u: goto label_3579b8;
        case 0x3579bcu: goto label_3579bc;
        case 0x3579c0u: goto label_3579c0;
        case 0x3579c4u: goto label_3579c4;
        case 0x3579c8u: goto label_3579c8;
        case 0x3579ccu: goto label_3579cc;
        case 0x3579d0u: goto label_3579d0;
        case 0x3579d4u: goto label_3579d4;
        case 0x3579d8u: goto label_3579d8;
        case 0x3579dcu: goto label_3579dc;
        case 0x3579e0u: goto label_3579e0;
        case 0x3579e4u: goto label_3579e4;
        case 0x3579e8u: goto label_3579e8;
        case 0x3579ecu: goto label_3579ec;
        case 0x3579f0u: goto label_3579f0;
        case 0x3579f4u: goto label_3579f4;
        case 0x3579f8u: goto label_3579f8;
        case 0x3579fcu: goto label_3579fc;
        case 0x357a00u: goto label_357a00;
        case 0x357a04u: goto label_357a04;
        case 0x357a08u: goto label_357a08;
        case 0x357a0cu: goto label_357a0c;
        case 0x357a10u: goto label_357a10;
        case 0x357a14u: goto label_357a14;
        case 0x357a18u: goto label_357a18;
        case 0x357a1cu: goto label_357a1c;
        case 0x357a20u: goto label_357a20;
        case 0x357a24u: goto label_357a24;
        case 0x357a28u: goto label_357a28;
        case 0x357a2cu: goto label_357a2c;
        case 0x357a30u: goto label_357a30;
        case 0x357a34u: goto label_357a34;
        case 0x357a38u: goto label_357a38;
        case 0x357a3cu: goto label_357a3c;
        case 0x357a40u: goto label_357a40;
        case 0x357a44u: goto label_357a44;
        case 0x357a48u: goto label_357a48;
        case 0x357a4cu: goto label_357a4c;
        case 0x357a50u: goto label_357a50;
        case 0x357a54u: goto label_357a54;
        case 0x357a58u: goto label_357a58;
        case 0x357a5cu: goto label_357a5c;
        case 0x357a60u: goto label_357a60;
        case 0x357a64u: goto label_357a64;
        default: break;
    }

    ctx->pc = 0x3579a0u;

label_3579a0:
    // 0x3579a0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3579a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_3579a4:
    // 0x3579a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3579a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3579a8:
    // 0x3579a8: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x3579a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_3579ac:
    // 0x3579ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3579acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3579b0:
    // 0x3579b0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x3579b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_3579b4:
    // 0x3579b4: 0xc051630  jal         func_1458C0
label_3579b8:
    if (ctx->pc == 0x3579B8u) {
        ctx->pc = 0x3579B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579B4u;
        // 0x3579b8: 0x8c44b788  lw          $a0, -0x4878($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3579BCu;
        goto label_3579bc;
    }
    ctx->pc = 0x3579B4u;
    SET_GPR_U32(ctx, 31, 0x3579BCu);
    ctx->pc = 0x3579B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579B4u;
    // 0x3579b8: 0x8c44b788  lw          $a0, -0x4878($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C0u, 0x3579B4u, 0x3579BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579BCu;
label_3579bc:
    // 0x3579bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3579c0:
    if (ctx->pc == 0x3579C0u) {
        ctx->pc = 0x3579C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579BCu;
        // 0x3579c0: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3579C4u;
        goto label_3579c4;
    }
    ctx->pc = 0x3579BCu;
    {
        const bool branch_taken_0x3579bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579BCu;
        // 0x3579c0: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579bc) {
            ctx->pc = 0x3579CCu;
            goto label_3579cc;
        }
    }
    ctx->pc = 0x3579C4u;
label_3579c4:
    // 0x3579c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3579c8:
    if (ctx->pc == 0x3579C8u) {
        ctx->pc = 0x3579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579C4u;
        // 0x3579c8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3579CCu;
        goto label_3579cc;
    }
    ctx->pc = 0x3579C4u;
    {
        const bool branch_taken_0x3579c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579C4u;
        // 0x3579c8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579c4) {
            ctx->pc = 0x3579F0u;
            goto label_3579f0;
        }
    }
    ctx->pc = 0x3579CCu;
label_3579cc:
    // 0x3579cc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3579ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3579d0:
    // 0x3579d0: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x3579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3579d4:
    // 0x3579d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3579d8:
    if (ctx->pc == 0x3579D8u) {
        ctx->pc = 0x3579D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579D4u;
        // 0x3579d8: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3579DCu;
        goto label_3579dc;
    }
    ctx->pc = 0x3579D4u;
    {
        const bool branch_taken_0x3579d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3579D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579D4u;
        // 0x3579d8: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579d4) {
            ctx->pc = 0x3579E8u;
            goto label_3579e8;
        }
    }
    ctx->pc = 0x3579DCu;
label_3579dc:
    // 0x3579dc: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3579dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3579e0:
    // 0x3579e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3579e4:
    if (ctx->pc == 0x3579E4u) {
        ctx->pc = 0x3579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579E0u;
        // 0x3579e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3579E8u;
        goto label_3579e8;
    }
    ctx->pc = 0x3579E0u;
    {
        const bool branch_taken_0x3579e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579E0u;
        // 0x3579e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579e0) {
            ctx->pc = 0x357A08u;
            goto label_357a08;
        }
    }
    ctx->pc = 0x3579E8u;
label_3579e8:
    // 0x3579e8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x3579e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_3579ec:
    // 0x3579ec: 0x26070002  addiu       $a3, $s0, 0x2
    ctx->pc = 0x3579ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3579f0:
    // 0x3579f0: 0x24c69058  addiu       $a2, $a2, -0x6FA8
    ctx->pc = 0x3579f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938712));
label_3579f4:
    // 0x3579f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3579f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3579f8:
    // 0x3579f8: 0xc10ca04  jal         func_432810
label_3579fc:
    if (ctx->pc == 0x3579FCu) {
        ctx->pc = 0x3579FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579F8u;
        // 0x3579fc: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A00u;
        goto label_357a00;
    }
    ctx->pc = 0x3579F8u;
    SET_GPR_U32(ctx, 31, 0x357A00u);
    ctx->pc = 0x3579FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579F8u;
    // 0x3579fc: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x3579F8u, 0x357A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A00u;
label_357a00:
    // 0x357a00: 0x1000000e  b           . + 4 + (0xE << 2)
label_357a04:
    if (ctx->pc == 0x357A04u) {
        ctx->pc = 0x357A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A00u;
        // 0x357a04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A08u;
        goto label_357a08;
    }
    ctx->pc = 0x357A00u;
    {
        const bool branch_taken_0x357a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A00u;
        // 0x357a04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a00) {
            ctx->pc = 0x357A3Cu;
            goto label_357a3c;
        }
    }
    ctx->pc = 0x357A08u;
label_357a08:
    // 0x357a08: 0x24090084  addiu       $t1, $zero, 0x84
    ctx->pc = 0x357a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_357a0c:
    // 0x357a0c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x357a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_357a10:
    // 0x357a10: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x357a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_357a14:
    // 0x357a14: 0x24c69078  addiu       $a2, $a2, -0x6F88
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938744));
label_357a18:
    // 0x357a18: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x357a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357a1c:
    // 0x357a1c: 0x946756dc  lhu         $a3, 0x56DC($v1)
    ctx->pc = 0x357a1cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_357a20:
    // 0x357a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x357a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357a24:
    // 0x357a24: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x357a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_357a28:
    // 0x357a28: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x357a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_357a2c:
    // 0x357a2c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357a30:
    // 0x357a30: 0xc10ca04  jal         func_432810
label_357a34:
    if (ctx->pc == 0x357A34u) {
        ctx->pc = 0x357A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A30u;
        // 0x357a34: 0x24e714e8  addiu       $a3, $a3, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A38u;
        goto label_357a38;
    }
    ctx->pc = 0x357A30u;
    SET_GPR_U32(ctx, 31, 0x357A38u);
    ctx->pc = 0x357A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A30u;
    // 0x357a34: 0x24e714e8  addiu       $a3, $a3, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x357A30u, 0x357A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A38u;
label_357a38:
    // 0x357a38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x357a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_357a3c:
    // 0x357a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357a40:
    // 0x357a40: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x357a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_357a44:
    // 0x357a44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x357a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_357a48:
    // 0x357a48: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x357a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_357a4c:
    // 0x357a4c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x357a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_357a50:
    // 0x357a50: 0x40f809  jalr        $v0
label_357a54:
    if (ctx->pc == 0x357A54u) {
        ctx->pc = 0x357A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A50u;
        // 0x357a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A58u;
        goto label_357a58;
    }
    ctx->pc = 0x357A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357A58u);
        ctx->pc = 0x357A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A50u;
        // 0x357a54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A50u, 0x357A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357A58u;
label_357a58:
    // 0x357a58: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x357a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_357a5c:
    // 0x357a5c: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x357a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_357a60:
    // 0x357a60: 0x3e00008  jr          $ra
label_357a64:
    if (ctx->pc == 0x357A64u) {
        ctx->pc = 0x357A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A60u;
        // 0x357a64: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A68u;
        goto label_fallthrough_0x357a60;
    }
    ctx->pc = 0x357A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A60u;
        // 0x357a64: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357a60:
    ctx->pc = 0x357A68u;
}
