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

// Function: sub_003A1790
// Address: 0x3a1790 - 0x3a17e8
void sub_003A1790_0x3a1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1790_0x3a1790");
#endif

    switch (ctx->pc) {
        case 0x3a17dcu: goto label_3a17dc;
        default: break;
    }

    ctx->pc = 0x3a1790u;

    // 0x3a1790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1794: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a1794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a179c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3a179cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x3a17a0: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3a17a4: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x3a17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3a17a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A17A8u;
    {
        const bool branch_taken_0x3a17a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17A8u;
        // 0x3a17ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17a8) {
            ctx->pc = 0x3A17E0u;
            goto label_3a17e0;
        }
    }
    ctx->pc = 0x3A17B0u;
    // 0x3a17b0: 0xdcc20050  ld          $v0, 0x50($a2)
    ctx->pc = 0x3a17b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x3a17b4: 0x34038010  ori         $v1, $zero, 0x8010
    ctx->pc = 0x3a17b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x3a17b8: 0x31abc  dsll32      $v1, $v1, 10
    ctx->pc = 0x3a17b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 10));
    // 0x3a17bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a17bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a17c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A17C0u;
    {
        const bool branch_taken_0x3a17c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17C0u;
        // 0x3a17c4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17c0) {
            ctx->pc = 0x3A17E0u;
            goto label_3a17e0;
        }
    }
    ctx->pc = 0x3A17C8u;
    // 0x3a17c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a17cc: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a17d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a17d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a17d4: 0xc0e8ce6  jal         func_3A3398
    ctx->pc = 0x3A17D4u;
    SET_GPR_U32(ctx, 31, 0x3A17DCu);
    ctx->pc = 0x3A17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A17D4u;
    // 0x3a17d8: 0xacc30054  sw          $v1, 0x54($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3398u, 0x3A17D4u, 0x3A17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A17DCu;
label_3a17dc:
    // 0x3a17dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a17dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a17e0:
    // 0x3a17e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A17E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17E0u;
        // 0x3a17e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A17E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A17E8u;
}
