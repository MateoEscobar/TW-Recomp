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

// Function: sub_003578D8
// Address: 0x3578d8 - 0x357910
void sub_003578D8_0x3578d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003578D8_0x3578d8");
#endif

    switch (ctx->pc) {
        case 0x3578d8u: goto label_3578d8;
        case 0x3578dcu: goto label_3578dc;
        case 0x3578e0u: goto label_3578e0;
        case 0x3578e4u: goto label_3578e4;
        case 0x3578e8u: goto label_3578e8;
        case 0x3578ecu: goto label_3578ec;
        case 0x3578f0u: goto label_3578f0;
        case 0x3578f4u: goto label_3578f4;
        case 0x3578f8u: goto label_3578f8;
        case 0x3578fcu: goto label_3578fc;
        case 0x357900u: goto label_357900;
        case 0x357904u: goto label_357904;
        case 0x357908u: goto label_357908;
        case 0x35790cu: goto label_35790c;
        default: break;
    }

    ctx->pc = 0x3578d8u;

label_3578d8:
    // 0x3578d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3578d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3578dc:
    // 0x3578dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3578dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3578e0:
    // 0x3578e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3578e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3578e4:
    // 0x3578e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3578e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3578e8:
    // 0x3578e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3578e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3578ec:
    // 0x3578ec: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3578ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3578f0:
    // 0x3578f0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3578f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3578f4:
    // 0x3578f4: 0x40f809  jalr        $v0
label_3578f8:
    if (ctx->pc == 0x3578F8u) {
        ctx->pc = 0x3578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578F4u;
        // 0x3578f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3578FCu;
        goto label_3578fc;
    }
    ctx->pc = 0x3578F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3578FCu);
        ctx->pc = 0x3578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578F4u;
        // 0x3578f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578F4u, 0x3578FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3578FCu;
label_3578fc:
    // 0x3578fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3578fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_357900:
    // 0x357900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x357900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357904:
    // 0x357904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357908:
    // 0x357908: 0x3e00008  jr          $ra
label_35790c:
    if (ctx->pc == 0x35790Cu) {
        ctx->pc = 0x35790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357908u;
        // 0x35790c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357910u;
        goto label_fallthrough_0x357908;
    }
    ctx->pc = 0x357908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357908u;
        // 0x35790c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357908:
    ctx->pc = 0x357910u;
}
