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

// Function: sub_00156078
// Address: 0x156078 - 0x1560c0
void sub_00156078_0x156078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156078_0x156078");
#endif

    switch (ctx->pc) {
        case 0x156078u: goto label_156078;
        case 0x15607cu: goto label_15607c;
        case 0x156080u: goto label_156080;
        case 0x156084u: goto label_156084;
        case 0x156088u: goto label_156088;
        case 0x15608cu: goto label_15608c;
        case 0x156090u: goto label_156090;
        case 0x156094u: goto label_156094;
        case 0x156098u: goto label_156098;
        case 0x15609cu: goto label_15609c;
        case 0x1560a0u: goto label_1560a0;
        case 0x1560a4u: goto label_1560a4;
        case 0x1560a8u: goto label_1560a8;
        case 0x1560acu: goto label_1560ac;
        case 0x1560b0u: goto label_1560b0;
        case 0x1560b4u: goto label_1560b4;
        case 0x1560b8u: goto label_1560b8;
        case 0x1560bcu: goto label_1560bc;
        default: break;
    }

    ctx->pc = 0x156078u;

label_156078:
    // 0x156078: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15607c:
    // 0x15607c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_156080:
    // 0x156080: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x156080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_156084:
    // 0x156084: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156088:
    // 0x156088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15608c:
    // 0x15608c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156090:
    // 0x156090: 0xa06056e0  sb          $zero, 0x56E0($v1)
    ctx->pc = 0x156090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22240), (uint8_t)GPR_U32(ctx, 0));
label_156094:
    // 0x156094: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_156098:
    // 0x156098: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_15609c:
    if (ctx->pc == 0x15609Cu) {
        ctx->pc = 0x15609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156098u;
        // 0x15609c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560A0u;
        goto label_1560a0;
    }
    ctx->pc = 0x156098u;
    {
        const bool branch_taken_0x156098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156098u;
        // 0x15609c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156098) {
            ctx->pc = 0x1560B8u;
            goto label_1560b8;
        }
    }
    ctx->pc = 0x1560A0u;
label_1560a0:
    // 0x1560a0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1560a4:
    // 0x1560a4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1560a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1560a8:
    // 0x1560a8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1560ac:
    // 0x1560ac: 0x60f809  jalr        $v1
label_1560b0:
    if (ctx->pc == 0x1560B0u) {
        ctx->pc = 0x1560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560ACu;
        // 0x1560b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560B4u;
        goto label_1560b4;
    }
    ctx->pc = 0x1560ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1560B4u);
        ctx->pc = 0x1560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560ACu;
        // 0x1560b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560ACu, 0x1560B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1560B4u;
label_1560b4:
    // 0x1560b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1560b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1560b8:
    // 0x1560b8: 0x3e00008  jr          $ra
label_1560bc:
    if (ctx->pc == 0x1560BCu) {
        ctx->pc = 0x1560BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560B8u;
        // 0x1560bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560C0u;
        goto label_fallthrough_0x1560b8;
    }
    ctx->pc = 0x1560B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560B8u;
        // 0x1560bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1560b8:
    ctx->pc = 0x1560C0u;
}
