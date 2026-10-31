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

// Function: sub_00339AC8
// Address: 0x339ac8 - 0x339b00
void sub_00339AC8_0x339ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339AC8_0x339ac8");
#endif

    switch (ctx->pc) {
        case 0x339ac8u: goto label_339ac8;
        case 0x339accu: goto label_339acc;
        case 0x339ad0u: goto label_339ad0;
        case 0x339ad4u: goto label_339ad4;
        case 0x339ad8u: goto label_339ad8;
        case 0x339adcu: goto label_339adc;
        case 0x339ae0u: goto label_339ae0;
        case 0x339ae4u: goto label_339ae4;
        case 0x339ae8u: goto label_339ae8;
        case 0x339aecu: goto label_339aec;
        case 0x339af0u: goto label_339af0;
        case 0x339af4u: goto label_339af4;
        case 0x339af8u: goto label_339af8;
        case 0x339afcu: goto label_339afc;
        default: break;
    }

    ctx->pc = 0x339ac8u;

label_339ac8:
    // 0x339ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339acc:
    // 0x339acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339ad0:
    // 0x339ad0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339ad4:
    // 0x339ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339ad8:
    // 0x339ad8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339adc:
    // 0x339adc: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x339adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339ae0:
    // 0x339ae0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x339ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_339ae4:
    // 0x339ae4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x339ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_339ae8:
    // 0x339ae8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_339aec:
    // 0x339aec: 0x60f809  jalr        $v1
label_339af0:
    if (ctx->pc == 0x339AF0u) {
        ctx->pc = 0x339AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AECu;
        // 0x339af0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339AF4u;
        goto label_339af4;
    }
    ctx->pc = 0x339AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x339AF4u);
        ctx->pc = 0x339AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AECu;
        // 0x339af0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AECu, 0x339AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339AF4u;
label_339af4:
    // 0x339af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339af8:
    // 0x339af8: 0x3e00008  jr          $ra
label_339afc:
    if (ctx->pc == 0x339AFCu) {
        ctx->pc = 0x339AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AF8u;
        // 0x339afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B00u;
        goto label_fallthrough_0x339af8;
    }
    ctx->pc = 0x339AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AF8u;
        // 0x339afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339af8:
    ctx->pc = 0x339B00u;
}
