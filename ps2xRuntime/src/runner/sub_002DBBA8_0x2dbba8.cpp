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

// Function: sub_002DBBA8
// Address: 0x2dbba8 - 0x2dbbd4
void sub_002DBBA8_0x2dbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBBA8_0x2dbba8");
#endif

    switch (ctx->pc) {
        case 0x2dbba8u: goto label_2dbba8;
        case 0x2dbbacu: goto label_2dbbac;
        case 0x2dbbb0u: goto label_2dbbb0;
        case 0x2dbbb4u: goto label_2dbbb4;
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbbbcu: goto label_2dbbbc;
        case 0x2dbbc0u: goto label_2dbbc0;
        case 0x2dbbc4u: goto label_2dbbc4;
        case 0x2dbbc8u: goto label_2dbbc8;
        case 0x2dbbccu: goto label_2dbbcc;
        case 0x2dbbd0u: goto label_2dbbd0;
        default: break;
    }

    ctx->pc = 0x2dbba8u;

label_2dbba8:
    // 0x2dbba8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2dbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2dbbac:
    // 0x2dbbac: 0x944400d0  lhu         $a0, 0xD0($v0)
    ctx->pc = 0x2dbbacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_2dbbb0:
    // 0x2dbbb0: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x2dbbb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_2dbbb4:
    // 0x2dbbb4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2dbbb8:
    if (ctx->pc == 0x2DBBB8u) {
        ctx->pc = 0x2DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBB4u;
        // 0x2dbbb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBBBCu;
        goto label_2dbbbc;
    }
    ctx->pc = 0x2DBBB4u;
    {
        const bool branch_taken_0x2dbbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBB4u;
        // 0x2dbbb8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbb4) {
            ctx->pc = 0x2DBBE4u;
            return;
        }
    }
    ctx->pc = 0x2DBBBCu;
label_2dbbbc:
    // 0x2dbbbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2dbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2dbbc0:
    // 0x2dbbc0: 0x24426a40  addiu       $v0, $v0, 0x6A40
    ctx->pc = 0x2dbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
label_2dbbc4:
    // 0x2dbbc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dbbc8:
    // 0x2dbbc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dbbcc:
    // 0x2dbbcc: 0x800008  jr          $a0
label_2dbbd0:
    if (ctx->pc == 0x2DBBD0u) {
        ctx->pc = 0x2DBBD4u;
        goto label_fallthrough_0x2dbbcc;
    }
    ctx->pc = 0x2DBBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBBCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2dbbcc:
    ctx->pc = 0x2DBBD4u;
}
