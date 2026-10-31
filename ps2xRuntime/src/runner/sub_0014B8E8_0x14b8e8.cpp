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

// Function: sub_0014B8E8
// Address: 0x14b8e8 - 0x14b9d0
void sub_0014B8E8_0x14b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B8E8_0x14b8e8");
#endif

    switch (ctx->pc) {
        case 0x14b910u: goto label_14b910;
        case 0x14b91cu: goto label_14b91c;
        case 0x14b968u: goto label_14b968;
        case 0x14b974u: goto label_14b974;
        case 0x14b9a4u: goto label_14b9a4;
        case 0x14b9b0u: goto label_14b9b0;
        default: break;
    }

    ctx->pc = 0x14b8e8u;

    // 0x14b8e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b8ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b8f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b8f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b8fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14b908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b90c: 0x0  nop
    ctx->pc = 0x14b90cu;
    // NOP
label_14b910:
    // 0x14b910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14b910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b914: 0xc111482  jal         func_445208
    ctx->pc = 0x14B914u;
    SET_GPR_U32(ctx, 31, 0x14B91Cu);
    ctx->pc = 0x14B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B914u;
    // 0x14b918: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445208u, 0x14B914u, 0x14B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B91Cu;
label_14b91c:
    // 0x14b91c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b920: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b924: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B924u;
    {
        const bool branch_taken_0x14b924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B924u;
        // 0x14b928: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b924) {
            ctx->pc = 0x14B938u;
            goto label_14b938;
        }
    }
    ctx->pc = 0x14B92Cu;
    // 0x14b92c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b930: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14B930u;
    {
        const bool branch_taken_0x14b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b930) {
            ctx->pc = 0x14B934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B930u;
            // 0x14b934: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B938u;
label_14b938:
    // 0x14b938: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b93c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14B93Cu;
    {
        const bool branch_taken_0x14b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B93Cu;
        // 0x14b940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b93c) {
            ctx->pc = 0x14B9B4u;
            goto label_14b9b4;
        }
    }
    ctx->pc = 0x14B944u;
    // 0x14b944: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14B944u;
    {
        const bool branch_taken_0x14b944 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B944u;
        // 0x14b948: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b944) {
            ctx->pc = 0x14B97Cu;
            goto label_14b97c;
        }
    }
    ctx->pc = 0x14B94Cu;
    // 0x14b94c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b950: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b954: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b958: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b95c: 0x24c6b078  addiu       $a2, $a2, -0x4F88
    ctx->pc = 0x14b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946936));
    // 0x14b960: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B960u;
    SET_GPR_U32(ctx, 31, 0x14B968u);
    ctx->pc = 0x14B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B960u;
    // 0x14b964: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B960u, 0x14B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B968u;
label_14b968:
    // 0x14b968: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b96c: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B96Cu;
    SET_GPR_U32(ctx, 31, 0x14B974u);
    ctx->pc = 0x14B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B96Cu;
    // 0x14b970: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B96Cu, 0x14B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B974u;
label_14b974:
    // 0x14b974: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14B974u;
    {
        const bool branch_taken_0x14b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B974u;
        // 0x14b978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b974) {
            ctx->pc = 0x14B9B4u;
            goto label_14b9b4;
        }
    }
    ctx->pc = 0x14B97Cu;
label_14b97c:
    // 0x14b97c: 0x463000d  bgezl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14B97Cu;
    {
        const bool branch_taken_0x14b97c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14b97c) {
            ctx->pc = 0x14B980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B97Cu;
            // 0x14b980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9B4u;
            goto label_14b9b4;
        }
    }
    ctx->pc = 0x14B984u;
    // 0x14b984: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b984u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b988: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b98c: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b990: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b994: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b998: 0x24c6b0b0  addiu       $a2, $a2, -0x4F50
    ctx->pc = 0x14b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946992));
    // 0x14b99c: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B99Cu;
    SET_GPR_U32(ctx, 31, 0x14B9A4u);
    ctx->pc = 0x14B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B99Cu;
    // 0x14b9a0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B99Cu, 0x14B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9A4u;
label_14b9a4:
    // 0x14b9a4: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b9a8: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B9A8u;
    SET_GPR_U32(ctx, 31, 0x14B9B0u);
    ctx->pc = 0x14B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9A8u;
    // 0x14b9ac: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B9A8u, 0x14B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9B0u;
label_14b9b0:
    // 0x14b9b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b9b4:
    // 0x14b9b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b9b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b9bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9C4u;
        // 0x14b9c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B9CCu;
    // 0x14b9cc: 0x0  nop
    ctx->pc = 0x14b9ccu;
    // NOP
    ctx->pc = 0x14b9d0u;
}
