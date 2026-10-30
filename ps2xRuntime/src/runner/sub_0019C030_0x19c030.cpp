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

// Function: sub_0019C030
// Address: 0x19c030 - 0x19c070
void sub_0019C030_0x19c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C030_0x19c030");
#endif

    switch (ctx->pc) {
        case 0x19c030u: goto label_19c030;
        case 0x19c034u: goto label_19c034;
        case 0x19c038u: goto label_19c038;
        case 0x19c03cu: goto label_19c03c;
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        default: break;
    }

    ctx->pc = 0x19c030u;

label_19c030:
    // 0x19c030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19c034:
    // 0x19c034: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19c038:
    // 0x19c038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_19c03c:
    // 0x19c03c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19c03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c040:
    // 0x19c040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c044:
    // 0x19c044: 0x8c4527e4  lw          $a1, 0x27E4($v0)
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_19c048:
    // 0x19c048: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19c04c:
    // 0x19c04c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19c04cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19c050:
    // 0x19c050: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19c054:
    // 0x19c054: 0x40f809  jalr        $v0
label_19c058:
    if (ctx->pc == 0x19C058u) {
        ctx->pc = 0x19C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C054u;
        // 0x19c058: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C05Cu;
        goto label_19c05c;
    }
    ctx->pc = 0x19C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C05Cu);
        ctx->pc = 0x19C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C054u;
        // 0x19c058: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C054u, 0x19C05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C05Cu;
label_19c05c:
    // 0x19c05c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19c05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19c060:
    // 0x19c060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c064:
    // 0x19c064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c068:
    // 0x19c068: 0x3e00008  jr          $ra
label_19c06c:
    if (ctx->pc == 0x19C06Cu) {
        ctx->pc = 0x19C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C068u;
        // 0x19c06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C070u;
        goto label_fallthrough_0x19c068;
    }
    ctx->pc = 0x19C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C068u;
        // 0x19c06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c068:
    ctx->pc = 0x19C070u;
}
