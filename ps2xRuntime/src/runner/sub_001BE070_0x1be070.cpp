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

// Function: sub_001BE070
// Address: 0x1be070 - 0x1be130
void sub_001BE070_0x1be070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE070_0x1be070");
#endif

    switch (ctx->pc) {
        case 0x1be070u: goto label_1be070;
        case 0x1be074u: goto label_1be074;
        case 0x1be078u: goto label_1be078;
        case 0x1be07cu: goto label_1be07c;
        case 0x1be080u: goto label_1be080;
        case 0x1be084u: goto label_1be084;
        case 0x1be088u: goto label_1be088;
        case 0x1be08cu: goto label_1be08c;
        case 0x1be090u: goto label_1be090;
        case 0x1be094u: goto label_1be094;
        case 0x1be098u: goto label_1be098;
        case 0x1be09cu: goto label_1be09c;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0acu: goto label_1be0ac;
        case 0x1be0b0u: goto label_1be0b0;
        case 0x1be0b4u: goto label_1be0b4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0bcu: goto label_1be0bc;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0c4u: goto label_1be0c4;
        case 0x1be0c8u: goto label_1be0c8;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0d4u: goto label_1be0d4;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0dcu: goto label_1be0dc;
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0e4u: goto label_1be0e4;
        case 0x1be0e8u: goto label_1be0e8;
        case 0x1be0ecu: goto label_1be0ec;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be0f8u: goto label_1be0f8;
        case 0x1be0fcu: goto label_1be0fc;
        case 0x1be100u: goto label_1be100;
        case 0x1be104u: goto label_1be104;
        case 0x1be108u: goto label_1be108;
        case 0x1be10cu: goto label_1be10c;
        case 0x1be110u: goto label_1be110;
        case 0x1be114u: goto label_1be114;
        case 0x1be118u: goto label_1be118;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be120u: goto label_1be120;
        case 0x1be124u: goto label_1be124;
        case 0x1be128u: goto label_1be128;
        case 0x1be12cu: goto label_1be12c;
        default: break;
    }

    ctx->pc = 0x1be070u;

label_1be070:
    // 0x1be070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1be074:
    // 0x1be074: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1be078:
    // 0x1be078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1be07c:
    // 0x1be07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be080:
    // 0x1be080: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1be084:
    if (ctx->pc == 0x1BE084u) {
        ctx->pc = 0x1BE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE080u;
        // 0x1be084: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE088u;
        goto label_1be088;
    }
    ctx->pc = 0x1BE080u;
    {
        const bool branch_taken_0x1be080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE080u;
        // 0x1be084: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be080) {
            ctx->pc = 0x1BE11Cu;
            goto label_1be11c;
        }
    }
    ctx->pc = 0x1BE088u;
label_1be088:
    // 0x1be088: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1be08c:
    // 0x1be08c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1be090:
    // 0x1be090: 0x24424c50  addiu       $v0, $v0, 0x4C50
    ctx->pc = 0x1be090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
label_1be094:
    // 0x1be094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be098:
    // 0x1be098: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1be09c:
    // 0x1be09c: 0x800008  jr          $a0
label_1be0a0:
    if (ctx->pc == 0x1BE0A0u) {
        ctx->pc = 0x1BE0A4u;
        goto label_1be0a4;
    }
    ctx->pc = 0x1BE09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE0A4u: goto label_1be0a4;
            case 0x1BE0B4u: goto label_1be0b4;
            case 0x1BE0C4u: goto label_1be0c4;
            case 0x1BE0CCu: goto label_1be0cc;
            case 0x1BE114u: goto label_1be114;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BE0A4u;
label_1be0a4:
    // 0x1be0a4: 0xc06f712  jal         func_1BDC48
label_1be0a8:
    if (ctx->pc == 0x1BE0A8u) {
        ctx->pc = 0x1BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0A4u;
        // 0x1be0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0ACu;
        goto label_1be0ac;
    }
    ctx->pc = 0x1BE0A4u;
    SET_GPR_U32(ctx, 31, 0x1BE0ACu);
    ctx->pc = 0x1BE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0A4u;
    // 0x1be0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x1BE0A4u, 0x1BE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0ACu;
label_1be0ac:
    // 0x1be0ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1be0b0:
    if (ctx->pc == 0x1BE0B0u) {
        ctx->pc = 0x1BE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0ACu;
        // 0x1be0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0B4u;
        goto label_1be0b4;
    }
    ctx->pc = 0x1BE0ACu;
    {
        const bool branch_taken_0x1be0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0ACu;
        // 0x1be0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0ac) {
            ctx->pc = 0x1BE120u;
            goto label_1be120;
        }
    }
    ctx->pc = 0x1BE0B4u;
label_1be0b4:
    // 0x1be0b4: 0xc06f734  jal         func_1BDCD0
label_1be0b8:
    if (ctx->pc == 0x1BE0B8u) {
        ctx->pc = 0x1BE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0B4u;
        // 0x1be0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0BCu;
        goto label_1be0bc;
    }
    ctx->pc = 0x1BE0B4u;
    SET_GPR_U32(ctx, 31, 0x1BE0BCu);
    ctx->pc = 0x1BE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0B4u;
    // 0x1be0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCD0u, 0x1BE0B4u, 0x1BE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0BCu;
label_1be0bc:
    // 0x1be0bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1be0c0:
    if (ctx->pc == 0x1BE0C0u) {
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0BCu;
        // 0x1be0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0C4u;
        goto label_1be0c4;
    }
    ctx->pc = 0x1BE0BCu;
    {
        const bool branch_taken_0x1be0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0BCu;
        // 0x1be0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0bc) {
            ctx->pc = 0x1BE120u;
            goto label_1be120;
        }
    }
    ctx->pc = 0x1BE0C4u;
label_1be0c4:
    // 0x1be0c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1be0c8:
    if (ctx->pc == 0x1BE0C8u) {
        ctx->pc = 0x1BE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C4u;
        // 0x1be0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0CCu;
        goto label_1be0cc;
    }
    ctx->pc = 0x1BE0C4u;
    {
        const bool branch_taken_0x1be0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C4u;
        // 0x1be0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0c4) {
            ctx->pc = 0x1BE120u;
            goto label_1be120;
        }
    }
    ctx->pc = 0x1BE0CCu;
label_1be0cc:
    // 0x1be0cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1be0d0:
    // 0x1be0d0: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1be0d4:
    // 0x1be0d4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1be0d8:
    // 0x1be0d8: 0x60f809  jalr        $v1
label_1be0dc:
    if (ctx->pc == 0x1BE0DCu) {
        ctx->pc = 0x1BE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0D8u;
        // 0x1be0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0E0u;
        goto label_1be0e0;
    }
    ctx->pc = 0x1BE0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE0E0u);
        ctx->pc = 0x1BE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0D8u;
        // 0x1be0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE0D8u, 0x1BE0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE0E0u;
label_1be0e0:
    // 0x1be0e0: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_1be0e4:
    // 0x1be0e4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1be0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1be0e8:
    // 0x1be0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be0ec:
    // 0x1be0ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be0f0:
    // 0x1be0f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1be0f4:
    // 0x1be0f4: 0xc078824  jal         func_1E2090
label_1be0f8:
    if (ctx->pc == 0x1BE0F8u) {
        ctx->pc = 0x1BE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0F4u;
        // 0x1be0f8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0FCu;
        goto label_1be0fc;
    }
    ctx->pc = 0x1BE0F4u;
    SET_GPR_U32(ctx, 31, 0x1BE0FCu);
    ctx->pc = 0x1BE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0F4u;
    // 0x1be0f8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2090u, 0x1BE0F4u, 0x1BE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0FCu;
label_1be0fc:
    // 0x1be0fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be100:
    // 0x1be100: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1be104:
    // 0x1be104: 0xc043f0c  jal         func_10FC30
label_1be108:
    if (ctx->pc == 0x1BE108u) {
        ctx->pc = 0x1BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE104u;
        // 0x1be108: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE10Cu;
        goto label_1be10c;
    }
    ctx->pc = 0x1BE104u;
    SET_GPR_U32(ctx, 31, 0x1BE10Cu);
    ctx->pc = 0x1BE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE104u;
    // 0x1be108: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BE104u, 0x1BE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE10Cu;
label_1be10c:
    // 0x1be10c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1be110:
    if (ctx->pc == 0x1BE110u) {
        ctx->pc = 0x1BE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE10Cu;
        // 0x1be110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE114u;
        goto label_1be114;
    }
    ctx->pc = 0x1BE10Cu;
    {
        const bool branch_taken_0x1be10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE10Cu;
        // 0x1be110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be10c) {
            ctx->pc = 0x1BE120u;
            goto label_1be120;
        }
    }
    ctx->pc = 0x1BE114u;
label_1be114:
    // 0x1be114: 0xc057560  jal         func_15D580
label_1be118:
    if (ctx->pc == 0x1BE118u) {
        ctx->pc = 0x1BE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE114u;
        // 0x1be118: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE11Cu;
        goto label_1be11c;
    }
    ctx->pc = 0x1BE114u;
    SET_GPR_U32(ctx, 31, 0x1BE11Cu);
    ctx->pc = 0x1BE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE114u;
    // 0x1be118: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D580u, 0x1BE114u, 0x1BE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE11Cu;
label_1be11c:
    // 0x1be11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be120:
    // 0x1be120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be124:
    // 0x1be124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be128:
    // 0x1be128: 0x3e00008  jr          $ra
label_1be12c:
    if (ctx->pc == 0x1BE12Cu) {
        ctx->pc = 0x1BE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE128u;
        // 0x1be12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE130u;
        goto label_fallthrough_0x1be128;
    }
    ctx->pc = 0x1BE128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE128u;
        // 0x1be12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be128:
    ctx->pc = 0x1BE130u;
}
