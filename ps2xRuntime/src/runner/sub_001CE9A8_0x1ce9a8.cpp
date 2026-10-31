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

// Function: sub_001CE9A8
// Address: 0x1ce9a8 - 0x1cea38
void sub_001CE9A8_0x1ce9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE9A8_0x1ce9a8");
#endif

    switch (ctx->pc) {
        case 0x1ce9a8u: goto label_1ce9a8;
        case 0x1ce9acu: goto label_1ce9ac;
        case 0x1ce9b0u: goto label_1ce9b0;
        case 0x1ce9b4u: goto label_1ce9b4;
        case 0x1ce9b8u: goto label_1ce9b8;
        case 0x1ce9bcu: goto label_1ce9bc;
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1ce9c4u: goto label_1ce9c4;
        case 0x1ce9c8u: goto label_1ce9c8;
        case 0x1ce9ccu: goto label_1ce9cc;
        case 0x1ce9d0u: goto label_1ce9d0;
        case 0x1ce9d4u: goto label_1ce9d4;
        case 0x1ce9d8u: goto label_1ce9d8;
        case 0x1ce9dcu: goto label_1ce9dc;
        case 0x1ce9e0u: goto label_1ce9e0;
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1ce9e8u: goto label_1ce9e8;
        case 0x1ce9ecu: goto label_1ce9ec;
        case 0x1ce9f0u: goto label_1ce9f0;
        case 0x1ce9f4u: goto label_1ce9f4;
        case 0x1ce9f8u: goto label_1ce9f8;
        case 0x1ce9fcu: goto label_1ce9fc;
        case 0x1cea00u: goto label_1cea00;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea0cu: goto label_1cea0c;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea18u: goto label_1cea18;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea24u: goto label_1cea24;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea30u: goto label_1cea30;
        case 0x1cea34u: goto label_1cea34;
        default: break;
    }

    ctx->pc = 0x1ce9a8u;

label_1ce9a8:
    // 0x1ce9a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ce9ac:
    // 0x1ce9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ce9b0:
    // 0x1ce9b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ce9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ce9b4:
    // 0x1ce9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce9b8:
    // 0x1ce9b8: 0x8c8203a0  lw          $v0, 0x3A0($a0)
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 928)));
label_1ce9bc:
    // 0x1ce9bc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ce9c0:
    if (ctx->pc == 0x1CE9C0u) {
        ctx->pc = 0x1CE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9BCu;
        // 0x1ce9c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9C4u;
        goto label_1ce9c4;
    }
    ctx->pc = 0x1CE9BCu;
    {
        const bool branch_taken_0x1ce9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9BCu;
        // 0x1ce9c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9bc) {
            ctx->pc = 0x1CEA24u;
            goto label_1cea24;
        }
    }
    ctx->pc = 0x1CE9C4u;
label_1ce9c4:
    // 0x1ce9c4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ce9c8:
    // 0x1ce9c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9cc:
    // 0x1ce9cc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1ce9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1ce9d0:
    // 0x1ce9d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce9d4:
    // 0x1ce9d4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ce9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ce9d8:
    // 0x1ce9d8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ce9dc:
    // 0x1ce9dc: 0x40f809  jalr        $v0
label_1ce9e0:
    if (ctx->pc == 0x1CE9E0u) {
        ctx->pc = 0x1CE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9DCu;
        // 0x1ce9e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9E4u;
        goto label_1ce9e4;
    }
    ctx->pc = 0x1CE9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE9E4u);
        ctx->pc = 0x1CE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9DCu;
        // 0x1ce9e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9DCu, 0x1CE9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE9E4u;
label_1ce9e4:
    // 0x1ce9e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ce9e8:
    if (ctx->pc == 0x1CE9E8u) {
        ctx->pc = 0x1CE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9E4u;
        // 0x1ce9e8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE9ECu;
        goto label_1ce9ec;
    }
    ctx->pc = 0x1CE9E4u;
    {
        const bool branch_taken_0x1ce9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9E4u;
        // 0x1ce9e8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9e4) {
            ctx->pc = 0x1CEA24u;
            goto label_1cea24;
        }
    }
    ctx->pc = 0x1CE9ECu;
label_1ce9ec:
    // 0x1ce9ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9f0:
    // 0x1ce9f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce9f4:
    // 0x1ce9f4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ce9f8:
    // 0x1ce9f8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ce9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ce9fc:
    // 0x1ce9fc: 0x60f809  jalr        $v1
label_1cea00:
    if (ctx->pc == 0x1CEA00u) {
        ctx->pc = 0x1CEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9FCu;
        // 0x1cea00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA04u;
        goto label_1cea04;
    }
    ctx->pc = 0x1CE9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEA04u);
        ctx->pc = 0x1CEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9FCu;
        // 0x1cea00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9FCu, 0x1CEA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEA04u;
label_1cea04:
    // 0x1cea04: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1cea04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1cea08:
    // 0x1cea08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cea0c:
    // 0x1cea0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cea0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cea10:
    // 0x1cea10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cea14:
    // 0x1cea14: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1cea14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1cea18:
    // 0x1cea18: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1cea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1cea1c:
    // 0x1cea1c: 0x60f809  jalr        $v1
label_1cea20:
    if (ctx->pc == 0x1CEA20u) {
        ctx->pc = 0x1CEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA1Cu;
        // 0x1cea20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA24u;
        goto label_1cea24;
    }
    ctx->pc = 0x1CEA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEA24u);
        ctx->pc = 0x1CEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA1Cu;
        // 0x1cea20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA1Cu, 0x1CEA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEA24u;
label_1cea24:
    // 0x1cea24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cea24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cea28:
    // 0x1cea28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cea28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cea2c:
    // 0x1cea2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cea2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cea30:
    // 0x1cea30: 0x3e00008  jr          $ra
label_1cea34:
    if (ctx->pc == 0x1CEA34u) {
        ctx->pc = 0x1CEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA30u;
        // 0x1cea34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEA38u;
        goto label_fallthrough_0x1cea30;
    }
    ctx->pc = 0x1CEA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA30u;
        // 0x1cea34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cea30:
    ctx->pc = 0x1CEA38u;
}
