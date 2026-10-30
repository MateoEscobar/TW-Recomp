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

// Function: sub_0044B8B8
// Address: 0x44b8b8 - 0x44ba58
void sub_0044B8B8_0x44b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B8B8_0x44b8b8");
#endif

    switch (ctx->pc) {
        case 0x44b8f0u: goto label_44b8f0;
        case 0x44b8f8u: goto label_44b8f8;
        case 0x44b900u: goto label_44b900;
        case 0x44b90cu: goto label_44b90c;
        case 0x44b928u: goto label_44b928;
        case 0x44b94cu: goto label_44b94c;
        case 0x44b95cu: goto label_44b95c;
        case 0x44b968u: goto label_44b968;
        case 0x44b978u: goto label_44b978;
        case 0x44b988u: goto label_44b988;
        case 0x44b994u: goto label_44b994;
        case 0x44b9a0u: goto label_44b9a0;
        case 0x44b9a8u: goto label_44b9a8;
        case 0x44b9b4u: goto label_44b9b4;
        case 0x44b9c4u: goto label_44b9c4;
        case 0x44b9e4u: goto label_44b9e4;
        default: break;
    }

    ctx->pc = 0x44b8b8u;

    // 0x44b8b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44b8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44b8c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44b8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44b8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44b8cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x44b8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44b8d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x44b8d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44b8dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x44b8e0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x44b8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8e4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x44b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x44b8e8: 0xc113272  jal         func_44C9C8
    ctx->pc = 0x44B8E8u;
    SET_GPR_U32(ctx, 31, 0x44B8F0u);
    ctx->pc = 0x44B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B8E8u;
    // 0x44b8ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C8u, 0x44B8E8u, 0x44B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B8F0u;
label_44b8f0:
    // 0x44b8f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44B8F0u;
    {
        const bool branch_taken_0x44b8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B8F0u;
        // 0x44b8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b8f0) {
            ctx->pc = 0x44B904u;
            goto label_44b904;
        }
    }
    ctx->pc = 0x44B8F8u;
label_44b8f8:
    // 0x44b8f8: 0xc113218  jal         func_44C860
    ctx->pc = 0x44B8F8u;
    SET_GPR_U32(ctx, 31, 0x44B900u);
    ctx->pc = 0x44B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B8F8u;
    // 0x44b8fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44B8F8u, 0x44B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B900u;
label_44b900:
    // 0x44b900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b904:
    // 0x44b904: 0xc112974  jal         func_44A5D0
    ctx->pc = 0x44B904u;
    SET_GPR_U32(ctx, 31, 0x44B90Cu);
    ctx->pc = 0x44B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B904u;
    // 0x44b908: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44B904u, 0x44B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B90Cu;
label_44b90c:
    // 0x44b90c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x44B90Cu;
    {
        const bool branch_taken_0x44b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x44B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B90Cu;
        // 0x44b910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b90c) {
            ctx->pc = 0x44B920u;
            goto label_44b920;
        }
    }
    ctx->pc = 0x44B914u;
    // 0x44b914: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44b918: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x44B918u;
    {
        const bool branch_taken_0x44b918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b918) {
            ctx->pc = 0x44B8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b8f8;
        }
    }
    ctx->pc = 0x44B920u;
label_44b920:
    // 0x44b920: 0xc112974  jal         func_44A5D0
    ctx->pc = 0x44B920u;
    SET_GPR_U32(ctx, 31, 0x44B928u);
    ctx->pc = 0x44B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B920u;
    // 0x44b924: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44B920u, 0x44B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B928u;
label_44b928:
    // 0x44b928: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44b928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b92c: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x44b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x44b930: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x44b930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x44b934: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44B934u;
    {
        const bool branch_taken_0x44b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B934u;
        // 0x44b938: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b934) {
            ctx->pc = 0x44B954u;
            goto label_44b954;
        }
    }
    ctx->pc = 0x44B93Cu;
    // 0x44b93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b940: 0x24a5e318  addiu       $a1, $a1, -0x1CE8
    ctx->pc = 0x44b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959896));
    // 0x44b944: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x44B944u;
    SET_GPR_U32(ctx, 31, 0x44B94Cu);
    ctx->pc = 0x44B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B944u;
    // 0x44b948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x44B944u, 0x44B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B94Cu;
label_44b94c:
    // 0x44b94c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x44B94Cu;
    {
        const bool branch_taken_0x44b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B94Cu;
        // 0x44b950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b94c) {
            ctx->pc = 0x44BA38u;
            goto label_44ba38;
        }
    }
    ctx->pc = 0x44B954u;
label_44b954:
    // 0x44b954: 0xc113270  jal         func_44C9C0
    ctx->pc = 0x44B954u;
    SET_GPR_U32(ctx, 31, 0x44B95Cu);
    ctx->pc = 0x44B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B954u;
    // 0x44b958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C0u, 0x44B954u, 0x44B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B95Cu;
label_44b95c:
    // 0x44b95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b960: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44B960u;
    SET_GPR_U32(ctx, 31, 0x44B968u);
    ctx->pc = 0x44B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B960u;
    // 0x44b964: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44B960u, 0x44B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B968u;
label_44b968:
    // 0x44b968: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x44b968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x44b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b970: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44B970u;
    SET_GPR_U32(ctx, 31, 0x44B978u);
    ctx->pc = 0x44B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B970u;
    // 0x44b974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44B970u, 0x44B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B978u;
label_44b978:
    // 0x44b978: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x44B978u;
    {
        const bool branch_taken_0x44b978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B978u;
        // 0x44b97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b978) {
            ctx->pc = 0x44B9BCu;
            goto label_44b9bc;
        }
    }
    ctx->pc = 0x44B980u;
    // 0x44b980: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44B980u;
    SET_GPR_U32(ctx, 31, 0x44B988u);
    ctx->pc = 0x44B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B980u;
    // 0x44b984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44B980u, 0x44B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B988u;
label_44b988:
    // 0x44b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b98c: 0xc113218  jal         func_44C860
    ctx->pc = 0x44B98Cu;
    SET_GPR_U32(ctx, 31, 0x44B994u);
    ctx->pc = 0x44B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B98Cu;
    // 0x44b990: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44B98Cu, 0x44B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B994u;
label_44b994:
    // 0x44b994: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x44B994u;
    {
        const bool branch_taken_0x44b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B994u;
        // 0x44b998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b994) {
            ctx->pc = 0x44B9ACu;
            goto label_44b9ac;
        }
    }
    ctx->pc = 0x44B99Cu;
    // 0x44b99c: 0x0  nop
    ctx->pc = 0x44b99cu;
    // NOP
label_44b9a0:
    // 0x44b9a0: 0xc113218  jal         func_44C860
    ctx->pc = 0x44B9A0u;
    SET_GPR_U32(ctx, 31, 0x44B9A8u);
    ctx->pc = 0x44B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B9A0u;
    // 0x44b9a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44B9A0u, 0x44B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B9A8u;
label_44b9a8:
    // 0x44b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b9ac:
    // 0x44b9ac: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44B9ACu;
    SET_GPR_U32(ctx, 31, 0x44B9B4u);
    ctx->pc = 0x44B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B9ACu;
    // 0x44b9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44B9ACu, 0x44B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B9B4u;
label_44b9b4:
    // 0x44b9b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B9B4u;
    {
        const bool branch_taken_0x44b9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9B4u;
        // 0x44b9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9b4) {
            ctx->pc = 0x44B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b9a0;
        }
    }
    ctx->pc = 0x44B9BCu;
label_44b9bc:
    // 0x44b9bc: 0xc112822  jal         func_44A088
    ctx->pc = 0x44B9BCu;
    SET_GPR_U32(ctx, 31, 0x44B9C4u);
    ctx->pc = 0x44B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B9BCu;
    // 0x44b9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A088u, 0x44B9BCu, 0x44B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B9C4u;
label_44b9c4:
    // 0x44b9c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44b9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b9c8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x44b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x44b9cc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x44b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x44b9d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44B9D0u;
    {
        const bool branch_taken_0x44b9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9D0u;
        // 0x44b9d4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9d0) {
            ctx->pc = 0x44B9ECu;
            goto label_44b9ec;
        }
    }
    ctx->pc = 0x44B9D8u;
    // 0x44b9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b9dc: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x44B9DCu;
    SET_GPR_U32(ctx, 31, 0x44B9E4u);
    ctx->pc = 0x44B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B9DCu;
    // 0x44b9e0: 0x24a5e340  addiu       $a1, $a1, -0x1CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x44B9DCu, 0x44B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B9E4u;
label_44b9e4:
    // 0x44b9e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x44B9E4u;
    {
        const bool branch_taken_0x44b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B9E4u;
        // 0x44b9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b9e4) {
            ctx->pc = 0x44BA38u;
            goto label_44ba38;
        }
    }
    ctx->pc = 0x44B9ECu;
label_44b9ec:
    // 0x44b9ec: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x44b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x44b9f0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x44b9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x44b9f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x44b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x44b9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b9fc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x44b9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x44ba00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44ba00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ba04: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x44ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44ba08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x44ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x44ba0c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x44ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x44ba10: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x44ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x44ba14: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x44ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x44ba18: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x44ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x44ba1c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x44ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x44ba20: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x44ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x44ba24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x44ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x44ba28: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x44ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x44ba2c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x44ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x44ba30: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x44ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x44ba34: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x44ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_44ba38:
    // 0x44ba38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44ba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44ba3c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44ba3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44ba40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44ba40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44ba44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44ba44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44ba48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44ba48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ba4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ba4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ba50: 0x3e00008  jr          $ra
    ctx->pc = 0x44BA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BA50u;
        // 0x44ba54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44BA58u;
}
