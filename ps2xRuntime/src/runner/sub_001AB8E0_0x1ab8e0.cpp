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

// Function: sub_001AB8E0
// Address: 0x1ab8e0 - 0x1ab930
void sub_001AB8E0_0x1ab8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB8E0_0x1ab8e0");
#endif

    switch (ctx->pc) {
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab8e4u: goto label_1ab8e4;
        case 0x1ab8e8u: goto label_1ab8e8;
        case 0x1ab8ecu: goto label_1ab8ec;
        case 0x1ab8f0u: goto label_1ab8f0;
        case 0x1ab8f4u: goto label_1ab8f4;
        case 0x1ab8f8u: goto label_1ab8f8;
        case 0x1ab8fcu: goto label_1ab8fc;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab904u: goto label_1ab904;
        case 0x1ab908u: goto label_1ab908;
        case 0x1ab90cu: goto label_1ab90c;
        case 0x1ab910u: goto label_1ab910;
        case 0x1ab914u: goto label_1ab914;
        case 0x1ab918u: goto label_1ab918;
        case 0x1ab91cu: goto label_1ab91c;
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab924u: goto label_1ab924;
        case 0x1ab928u: goto label_1ab928;
        case 0x1ab92cu: goto label_1ab92c;
        default: break;
    }

    ctx->pc = 0x1ab8e0u;

label_1ab8e0:
    // 0x1ab8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab8e4:
    // 0x1ab8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab8e8:
    // 0x1ab8e8: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1ab8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab8ec:
    // 0x1ab8ec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1ab8f0:
    if (ctx->pc == 0x1AB8F0u) {
        ctx->pc = 0x1AB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8ECu;
        // 0x1ab8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB8F4u;
        goto label_1ab8f4;
    }
    ctx->pc = 0x1AB8ECu;
    {
        const bool branch_taken_0x1ab8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8ECu;
        // 0x1ab8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8ec) {
            ctx->pc = 0x1AB920u;
            goto label_1ab920;
        }
    }
    ctx->pc = 0x1AB8F4u;
label_1ab8f4:
    // 0x1ab8f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ab8f8:
    // 0x1ab8f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ab8fc:
    if (ctx->pc == 0x1AB8FCu) {
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB900u;
        goto label_1ab900;
    }
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB920u;
            goto label_1ab920;
        }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab904:
    // 0x1ab904: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ab904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ab908:
    // 0x1ab908: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ab90c:
    // 0x1ab90c: 0x40f809  jalr        $v0
label_1ab910:
    if (ctx->pc == 0x1AB910u) {
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB90Cu;
        // 0x1ab910: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB914u;
        goto label_1ab914;
    }
    ctx->pc = 0x1AB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB914u);
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB90Cu;
        // 0x1ab910: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB90Cu, 0x1AB914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB914u;
label_1ab914:
    // 0x1ab914: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ab918:
    if (ctx->pc == 0x1AB918u) {
        ctx->pc = 0x1AB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB914u;
        // 0x1ab918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB91Cu;
        goto label_1ab91c;
    }
    ctx->pc = 0x1AB914u;
    {
        const bool branch_taken_0x1ab914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB914u;
        // 0x1ab918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab914) {
            ctx->pc = 0x1AB920u;
            goto label_1ab920;
        }
    }
    ctx->pc = 0x1AB91Cu;
label_1ab91c:
    // 0x1ab91c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab920:
    // 0x1ab920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab924:
    // 0x1ab924: 0x3e00008  jr          $ra
label_1ab928:
    if (ctx->pc == 0x1AB928u) {
        ctx->pc = 0x1AB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB924u;
        // 0x1ab928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB92Cu;
        goto label_1ab92c;
    }
    ctx->pc = 0x1AB924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB924u;
        // 0x1ab928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB92Cu;
label_1ab92c:
    // 0x1ab92c: 0x0  nop
    ctx->pc = 0x1ab92cu;
    // NOP
    ctx->pc = 0x1ab930u;
}
