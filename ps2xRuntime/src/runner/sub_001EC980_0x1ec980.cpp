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

// Function: sub_001EC980
// Address: 0x1ec980 - 0x1ecae0
void sub_001EC980_0x1ec980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC980_0x1ec980");
#endif

    switch (ctx->pc) {
        case 0x1ec980u: goto label_1ec980;
        case 0x1ec984u: goto label_1ec984;
        case 0x1ec988u: goto label_1ec988;
        case 0x1ec98cu: goto label_1ec98c;
        case 0x1ec990u: goto label_1ec990;
        case 0x1ec994u: goto label_1ec994;
        case 0x1ec998u: goto label_1ec998;
        case 0x1ec99cu: goto label_1ec99c;
        case 0x1ec9a0u: goto label_1ec9a0;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1ec9a8u: goto label_1ec9a8;
        case 0x1ec9acu: goto label_1ec9ac;
        case 0x1ec9b0u: goto label_1ec9b0;
        case 0x1ec9b4u: goto label_1ec9b4;
        case 0x1ec9b8u: goto label_1ec9b8;
        case 0x1ec9bcu: goto label_1ec9bc;
        case 0x1ec9c0u: goto label_1ec9c0;
        case 0x1ec9c4u: goto label_1ec9c4;
        case 0x1ec9c8u: goto label_1ec9c8;
        case 0x1ec9ccu: goto label_1ec9cc;
        case 0x1ec9d0u: goto label_1ec9d0;
        case 0x1ec9d4u: goto label_1ec9d4;
        case 0x1ec9d8u: goto label_1ec9d8;
        case 0x1ec9dcu: goto label_1ec9dc;
        case 0x1ec9e0u: goto label_1ec9e0;
        case 0x1ec9e4u: goto label_1ec9e4;
        case 0x1ec9e8u: goto label_1ec9e8;
        case 0x1ec9ecu: goto label_1ec9ec;
        case 0x1ec9f0u: goto label_1ec9f0;
        case 0x1ec9f4u: goto label_1ec9f4;
        case 0x1ec9f8u: goto label_1ec9f8;
        case 0x1ec9fcu: goto label_1ec9fc;
        case 0x1eca00u: goto label_1eca00;
        case 0x1eca04u: goto label_1eca04;
        case 0x1eca08u: goto label_1eca08;
        case 0x1eca0cu: goto label_1eca0c;
        case 0x1eca10u: goto label_1eca10;
        case 0x1eca14u: goto label_1eca14;
        case 0x1eca18u: goto label_1eca18;
        case 0x1eca1cu: goto label_1eca1c;
        case 0x1eca20u: goto label_1eca20;
        case 0x1eca24u: goto label_1eca24;
        case 0x1eca28u: goto label_1eca28;
        case 0x1eca2cu: goto label_1eca2c;
        case 0x1eca30u: goto label_1eca30;
        case 0x1eca34u: goto label_1eca34;
        case 0x1eca38u: goto label_1eca38;
        case 0x1eca3cu: goto label_1eca3c;
        case 0x1eca40u: goto label_1eca40;
        case 0x1eca44u: goto label_1eca44;
        case 0x1eca48u: goto label_1eca48;
        case 0x1eca4cu: goto label_1eca4c;
        case 0x1eca50u: goto label_1eca50;
        case 0x1eca54u: goto label_1eca54;
        case 0x1eca58u: goto label_1eca58;
        case 0x1eca5cu: goto label_1eca5c;
        case 0x1eca60u: goto label_1eca60;
        case 0x1eca64u: goto label_1eca64;
        case 0x1eca68u: goto label_1eca68;
        case 0x1eca6cu: goto label_1eca6c;
        case 0x1eca70u: goto label_1eca70;
        case 0x1eca74u: goto label_1eca74;
        case 0x1eca78u: goto label_1eca78;
        case 0x1eca7cu: goto label_1eca7c;
        case 0x1eca80u: goto label_1eca80;
        case 0x1eca84u: goto label_1eca84;
        case 0x1eca88u: goto label_1eca88;
        case 0x1eca8cu: goto label_1eca8c;
        case 0x1eca90u: goto label_1eca90;
        case 0x1eca94u: goto label_1eca94;
        case 0x1eca98u: goto label_1eca98;
        case 0x1eca9cu: goto label_1eca9c;
        case 0x1ecaa0u: goto label_1ecaa0;
        case 0x1ecaa4u: goto label_1ecaa4;
        case 0x1ecaa8u: goto label_1ecaa8;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecab0u: goto label_1ecab0;
        case 0x1ecab4u: goto label_1ecab4;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecac0u: goto label_1ecac0;
        case 0x1ecac4u: goto label_1ecac4;
        case 0x1ecac8u: goto label_1ecac8;
        case 0x1ecaccu: goto label_1ecacc;
        case 0x1ecad0u: goto label_1ecad0;
        case 0x1ecad4u: goto label_1ecad4;
        case 0x1ecad8u: goto label_1ecad8;
        case 0x1ecadcu: goto label_1ecadc;
        default: break;
    }

    ctx->pc = 0x1ec980u;

label_1ec980:
    // 0x1ec980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ec984:
    // 0x1ec984: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ec984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1ec988:
    // 0x1ec988: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ec988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ec98c:
    // 0x1ec98c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec990:
    // 0x1ec990: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ec990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1ec994:
    // 0x1ec994: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ec994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec998:
    // 0x1ec998: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ec998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1ec99c:
    // 0x1ec99c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ec99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ec9a0:
    // 0x1ec9a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ec9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1ec9a4:
    // 0x1ec9a4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ec9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1ec9a8:
    // 0x1ec9a8: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
label_1ec9ac:
    if (ctx->pc == 0x1EC9ACu) {
        ctx->pc = 0x1EC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9A8u;
        // 0x1ec9ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC9B0u;
        goto label_1ec9b0;
    }
    ctx->pc = 0x1EC9A8u;
    {
        const bool branch_taken_0x1ec9a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1EC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9A8u;
        // 0x1ec9ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9a8) {
            ctx->pc = 0x1EC9CCu;
            goto label_1ec9cc;
        }
    }
    ctx->pc = 0x1EC9B0u;
label_1ec9b0:
    // 0x1ec9b0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1ec9b4:
    // 0x1ec9b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ec9b8:
    // 0x1ec9b8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1ec9bc:
    // 0x1ec9bc: 0xc10904c  jal         func_424130
label_1ec9c0:
    if (ctx->pc == 0x1EC9C0u) {
        ctx->pc = 0x1EC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9BCu;
        // 0x1ec9c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC9C4u;
        goto label_1ec9c4;
    }
    ctx->pc = 0x1EC9BCu;
    SET_GPR_U32(ctx, 31, 0x1EC9C4u);
    ctx->pc = 0x1EC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC9BCu;
    // 0x1ec9c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC9BCu, 0x1EC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9C4u;
label_1ec9c4:
    // 0x1ec9c4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1ec9c8:
    if (ctx->pc == 0x1EC9C8u) {
        ctx->pc = 0x1EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9C4u;
        // 0x1ec9c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC9CCu;
        goto label_1ec9cc;
    }
    ctx->pc = 0x1EC9C4u;
    {
        const bool branch_taken_0x1ec9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9C4u;
        // 0x1ec9c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9c4) {
            ctx->pc = 0x1ECAC0u;
            goto label_1ecac0;
        }
    }
    ctx->pc = 0x1EC9CCu;
label_1ec9cc:
    // 0x1ec9cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ec9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ec9d0:
    // 0x1ec9d0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ec9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1ec9d4:
    // 0x1ec9d4: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x1ec9d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ec9d8:
    // 0x1ec9d8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1ec9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ec9dc:
    // 0x1ec9dc: 0x8c62ee4c  lw          $v0, -0x11B4($v1)
    ctx->pc = 0x1ec9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962764)));
label_1ec9e0:
    // 0x1ec9e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ec9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ec9e4:
    // 0x1ec9e4: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1ec9e8:
    // 0x1ec9e8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ec9ec:
    // 0x1ec9ec: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x1ec9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec9f0:
    // 0x1ec9f0: 0x24a56f08  addiu       $a1, $a1, 0x6F08
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28424));
label_1ec9f4:
    // 0x1ec9f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ec9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ec9f8:
    // 0x1ec9f8: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1ec9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1ec9fc:
    // 0x1ec9fc: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x1ec9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_1eca00:
    // 0x1eca00: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1eca04:
    // 0x1eca04: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1eca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1eca08:
    // 0x1eca08: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x1eca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_1eca0c:
    // 0x1eca0c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1eca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1eca10:
    // 0x1eca10: 0x39083  sra         $s2, $v1, 2
    ctx->pc = 0x1eca10u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
label_1eca14:
    // 0x1eca14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eca18:
    // 0x1eca18: 0x240900af  addiu       $t1, $zero, 0xAF
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_1eca1c:
    // 0x1eca1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eca1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eca20:
    // 0x1eca20: 0x40f809  jalr        $v0
label_1eca24:
    if (ctx->pc == 0x1ECA24u) {
        ctx->pc = 0x1ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA20u;
        // 0x1eca24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA28u;
        goto label_1eca28;
    }
    ctx->pc = 0x1ECA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECA28u);
        ctx->pc = 0x1ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA20u;
        // 0x1eca24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECA20u, 0x1ECA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECA28u;
label_1eca28:
    // 0x1eca28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eca28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eca2c:
    // 0x1eca2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1eca30:
    if (ctx->pc == 0x1ECA30u) {
        ctx->pc = 0x1ECA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA2Cu;
        // 0x1eca30: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA34u;
        goto label_1eca34;
    }
    ctx->pc = 0x1ECA2Cu;
    {
        const bool branch_taken_0x1eca2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA2Cu;
        // 0x1eca30: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca2c) {
            ctx->pc = 0x1ECA50u;
            goto label_1eca50;
        }
    }
    ctx->pc = 0x1ECA34u;
label_1eca34:
    // 0x1eca34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eca38:
    // 0x1eca38: 0xc07f7f8  jal         func_1FDFE0
label_1eca3c:
    if (ctx->pc == 0x1ECA3Cu) {
        ctx->pc = 0x1ECA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA38u;
        // 0x1eca3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA40u;
        goto label_1eca40;
    }
    ctx->pc = 0x1ECA38u;
    SET_GPR_U32(ctx, 31, 0x1ECA40u);
    ctx->pc = 0x1ECA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA38u;
    // 0x1eca3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFE0u, 0x1ECA38u, 0x1ECA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA40u;
label_1eca40:
    // 0x1eca40: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1eca40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1eca44:
    // 0x1eca44: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1eca44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1eca48:
    // 0x1eca48: 0xae120050  sw          $s2, 0x50($s0)
    ctx->pc = 0x1eca48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 18));
label_1eca4c:
    // 0x1eca4c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1eca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1eca50:
    // 0x1eca50: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1eca50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eca54:
    // 0x1eca54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eca54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eca58:
    // 0x1eca58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1eca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eca5c:
    // 0x1eca5c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1eca5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1eca60:
    // 0x1eca60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eca60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eca64:
    // 0x1eca64: 0xc07b124  jal         func_1EC490
label_1eca68:
    if (ctx->pc == 0x1ECA68u) {
        ctx->pc = 0x1ECA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA64u;
        // 0x1eca68: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA6Cu;
        goto label_1eca6c;
    }
    ctx->pc = 0x1ECA64u;
    SET_GPR_U32(ctx, 31, 0x1ECA6Cu);
    ctx->pc = 0x1ECA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA64u;
    // 0x1eca68: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC490u, 0x1ECA64u, 0x1ECA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA6Cu;
label_1eca6c:
    // 0x1eca6c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1eca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1eca70:
    // 0x1eca70: 0x2e240009  sltiu       $a0, $s1, 0x9
    ctx->pc = 0x1eca70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1eca74:
    // 0x1eca74: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1eca78:
    // 0x1eca78: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eca78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eca7c:
    // 0x1eca7c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1eca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1eca80:
    // 0x1eca80: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_1eca84:
    if (ctx->pc == 0x1ECA84u) {
        ctx->pc = 0x1ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA80u;
        // 0x1eca84: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA88u;
        goto label_1eca88;
    }
    ctx->pc = 0x1ECA80u;
    {
        const bool branch_taken_0x1eca80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA80u;
        // 0x1eca84: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca80) {
            ctx->pc = 0x1ECA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca58;
        }
    }
    ctx->pc = 0x1ECA88u;
label_1eca88:
    // 0x1eca88: 0x8ea4ee4c  lw          $a0, -0x11B4($s5)
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962764)));
label_1eca8c:
    // 0x1eca8c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1eca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1eca90:
    // 0x1eca90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1eca94:
    // 0x1eca94: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_1eca98:
    if (ctx->pc == 0x1ECA98u) {
        ctx->pc = 0x1ECA9Cu;
        goto label_1eca9c;
    }
    ctx->pc = 0x1ECA94u;
    {
        const bool branch_taken_0x1eca94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eca94) {
            ctx->pc = 0x1ECAB4u;
            goto label_1ecab4;
        }
    }
    ctx->pc = 0x1ECA9Cu;
label_1eca9c:
    // 0x1eca9c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
label_1ecaa0:
    if (ctx->pc == 0x1ECAA0u) {
        ctx->pc = 0x1ECAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA9Cu;
        // 0x1ecaa0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAA4u;
        goto label_1ecaa4;
    }
    ctx->pc = 0x1ECA9Cu;
    {
        const bool branch_taken_0x1eca9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca9c) {
            ctx->pc = 0x1ECAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA9Cu;
            // 0x1ecaa0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECAA4u;
            goto label_1ecaa4;
        }
    }
    ctx->pc = 0x1ECAA4u;
label_1ecaa4:
    // 0x1ecaa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ecaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ecaa8:
    // 0x1ecaa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ecaac:
    // 0x1ecaac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ecab0:
    if (ctx->pc == 0x1ECAB0u) {
        ctx->pc = 0x1ECAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAACu;
        // 0x1ecab0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAB4u;
        goto label_1ecab4;
    }
    ctx->pc = 0x1ECAACu;
    {
        const bool branch_taken_0x1ecaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAACu;
        // 0x1ecab0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaac) {
            ctx->pc = 0x1ECABCu;
            goto label_1ecabc;
        }
    }
    ctx->pc = 0x1ECAB4u;
label_1ecab4:
    // 0x1ecab4: 0xc13a6b0  jal         func_4E9AC0
label_1ecab8:
    if (ctx->pc == 0x1ECAB8u) {
        ctx->pc = 0x1ECAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAB4u;
        // 0x1ecab8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECABCu;
        goto label_1ecabc;
    }
    ctx->pc = 0x1ECAB4u;
    SET_GPR_U32(ctx, 31, 0x1ECABCu);
    ctx->pc = 0x1ECAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAB4u;
    // 0x1ecab8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9AC0u, 0x1ECAB4u, 0x1ECABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECABCu;
label_1ecabc:
    // 0x1ecabc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ecabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ecac0:
    // 0x1ecac0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ecac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ecac4:
    // 0x1ecac4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ecac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ecac8:
    // 0x1ecac8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ecac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ecacc:
    // 0x1ecacc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ecaccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ecad0:
    // 0x1ecad0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ecad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecad4:
    // 0x1ecad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecad8:
    // 0x1ecad8: 0x3e00008  jr          $ra
label_1ecadc:
    if (ctx->pc == 0x1ECADCu) {
        ctx->pc = 0x1ECADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAD8u;
        // 0x1ecadc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAE0u;
        goto label_fallthrough_0x1ecad8;
    }
    ctx->pc = 0x1ECAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAD8u;
        // 0x1ecadc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ecad8:
    ctx->pc = 0x1ECAE0u;
}
