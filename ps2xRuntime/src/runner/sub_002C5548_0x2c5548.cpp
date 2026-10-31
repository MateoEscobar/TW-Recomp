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

// Function: sub_002C5548
// Address: 0x2c5548 - 0x2c5598
void sub_002C5548_0x2c5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5548_0x2c5548");
#endif

    switch (ctx->pc) {
        case 0x2c5548u: goto label_2c5548;
        case 0x2c554cu: goto label_2c554c;
        case 0x2c5550u: goto label_2c5550;
        case 0x2c5554u: goto label_2c5554;
        case 0x2c5558u: goto label_2c5558;
        case 0x2c555cu: goto label_2c555c;
        case 0x2c5560u: goto label_2c5560;
        case 0x2c5564u: goto label_2c5564;
        case 0x2c5568u: goto label_2c5568;
        case 0x2c556cu: goto label_2c556c;
        case 0x2c5570u: goto label_2c5570;
        case 0x2c5574u: goto label_2c5574;
        case 0x2c5578u: goto label_2c5578;
        case 0x2c557cu: goto label_2c557c;
        case 0x2c5580u: goto label_2c5580;
        case 0x2c5584u: goto label_2c5584;
        case 0x2c5588u: goto label_2c5588;
        case 0x2c558cu: goto label_2c558c;
        case 0x2c5590u: goto label_2c5590;
        case 0x2c5594u: goto label_2c5594;
        default: break;
    }

    ctx->pc = 0x2c5548u;

label_2c5548:
    // 0x2c5548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c554c:
    // 0x2c554c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5550:
    // 0x2c5550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5554:
    // 0x2c5554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c5554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c5558:
    // 0x2c5558: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x2c5558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_2c555c:
    // 0x2c555c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2c555cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2c5560:
    // 0x2c5560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5564:
    // 0x2c5564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c5568:
    // 0x2c5568: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c5568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c556c:
    // 0x2c556c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c556cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c5570:
    // 0x2c5570: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c5570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c5574:
    // 0x2c5574: 0x40f809  jalr        $v0
label_2c5578:
    if (ctx->pc == 0x2C5578u) {
        ctx->pc = 0x2C5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5574u;
        // 0x2c5578: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C557Cu;
        goto label_2c557c;
    }
    ctx->pc = 0x2C5574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C557Cu);
        ctx->pc = 0x2C5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5574u;
        // 0x2c5578: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5574u, 0x2C557Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C557Cu;
label_2c557c:
    // 0x2c557c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5580:
    // 0x2c5580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c5580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5584:
    // 0x2c5584: 0xc08e1a4  jal         func_238690
label_2c5588:
    if (ctx->pc == 0x2C5588u) {
        ctx->pc = 0x2C5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5584u;
        // 0x2c5588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C558Cu;
        goto label_2c558c;
    }
    ctx->pc = 0x2C5584u;
    SET_GPR_U32(ctx, 31, 0x2C558Cu);
    ctx->pc = 0x2C5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5584u;
    // 0x2c5588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C5584u, 0x2C558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C558Cu;
label_2c558c:
    // 0x2c558c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c558cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5590:
    // 0x2c5590: 0x3e00008  jr          $ra
label_2c5594:
    if (ctx->pc == 0x2C5594u) {
        ctx->pc = 0x2C5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5590u;
        // 0x2c5594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5598u;
        goto label_fallthrough_0x2c5590;
    }
    ctx->pc = 0x2C5590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5590u;
        // 0x2c5594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c5590:
    ctx->pc = 0x2C5598u;
}
