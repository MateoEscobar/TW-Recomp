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

// Function: sub_0039D360
// Address: 0x39d360 - 0x39d3a8
void sub_0039D360_0x39d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D360_0x39d360");
#endif

    switch (ctx->pc) {
        case 0x39d360u: goto label_39d360;
        case 0x39d364u: goto label_39d364;
        case 0x39d368u: goto label_39d368;
        case 0x39d36cu: goto label_39d36c;
        case 0x39d370u: goto label_39d370;
        case 0x39d374u: goto label_39d374;
        case 0x39d378u: goto label_39d378;
        case 0x39d37cu: goto label_39d37c;
        case 0x39d380u: goto label_39d380;
        case 0x39d384u: goto label_39d384;
        case 0x39d388u: goto label_39d388;
        case 0x39d38cu: goto label_39d38c;
        case 0x39d390u: goto label_39d390;
        case 0x39d394u: goto label_39d394;
        case 0x39d398u: goto label_39d398;
        case 0x39d39cu: goto label_39d39c;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a4u: goto label_39d3a4;
        default: break;
    }

    ctx->pc = 0x39d360u;

label_39d360:
    // 0x39d360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39d364:
    // 0x39d364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39d368:
    // 0x39d368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d36c:
    // 0x39d36c: 0xc0e8598  jal         func_3A1660
label_39d370:
    if (ctx->pc == 0x39D370u) {
        ctx->pc = 0x39D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D36Cu;
        // 0x39d370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D374u;
        goto label_39d374;
    }
    ctx->pc = 0x39D36Cu;
    SET_GPR_U32(ctx, 31, 0x39D374u);
    ctx->pc = 0x39D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D36Cu;
    // 0x39d370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x39D36Cu, 0x39D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D374u;
label_39d374:
    // 0x39d374: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39d374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39d378:
    // 0x39d378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39d378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d37c:
    // 0x39d37c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x39d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_39d380:
    // 0x39d380: 0x8c460850  lw          $a2, 0x850($v0)
    ctx->pc = 0x39d380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
label_39d384:
    // 0x39d384: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39d388:
    // 0x39d388: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39d388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39d38c:
    // 0x39d38c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39d390:
    // 0x39d390: 0x40f809  jalr        $v0
label_39d394:
    if (ctx->pc == 0x39D394u) {
        ctx->pc = 0x39D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D390u;
        // 0x39d394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D398u;
        goto label_39d398;
    }
    ctx->pc = 0x39D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D398u);
        ctx->pc = 0x39D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D390u;
        // 0x39d394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D390u, 0x39D398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D398u;
label_39d398:
    // 0x39d398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39d398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d39c:
    // 0x39d39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d3a0:
    // 0x39d3a0: 0x3e00008  jr          $ra
label_39d3a4:
    if (ctx->pc == 0x39D3A4u) {
        ctx->pc = 0x39D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3A0u;
        // 0x39d3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3A8u;
        goto label_fallthrough_0x39d3a0;
    }
    ctx->pc = 0x39D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3A0u;
        // 0x39d3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d3a0:
    ctx->pc = 0x39D3A8u;
}
