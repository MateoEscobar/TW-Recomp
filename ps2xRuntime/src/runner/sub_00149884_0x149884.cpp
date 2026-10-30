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

// Function: sub_00149884
// Address: 0x149884 - 0x1498a8
void sub_00149884_0x149884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149884_0x149884");
#endif

    switch (ctx->pc) {
        case 0x149884u: goto label_149884;
        case 0x149888u: goto label_149888;
        case 0x14988cu: goto label_14988c;
        case 0x149890u: goto label_149890;
        case 0x149894u: goto label_149894;
        case 0x149898u: goto label_149898;
        case 0x14989cu: goto label_14989c;
        case 0x1498a0u: goto label_1498a0;
        case 0x1498a4u: goto label_1498a4;
        default: break;
    }

    ctx->pc = 0x149884u;

label_149884:
    // 0x149884: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_149888:
    // 0x149888: 0x40f809  jalr        $v0
label_14988c:
    if (ctx->pc == 0x14988Cu) {
        ctx->pc = 0x14988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149888u;
        // 0x14988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149890u;
        goto label_149890;
    }
    ctx->pc = 0x149888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149890u);
        ctx->pc = 0x14988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149888u;
        // 0x14988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149888u, 0x149890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149890u;
label_149890:
    // 0x149890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149894:
    // 0x149894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149898:
    // 0x149898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14989c:
    // 0x14989c: 0x3e00008  jr          $ra
label_1498a0:
    if (ctx->pc == 0x1498A0u) {
        ctx->pc = 0x1498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14989Cu;
        // 0x1498a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1498A4u;
        goto label_1498a4;
    }
    ctx->pc = 0x14989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14989Cu;
        // 0x1498a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498A4u;
label_1498a4:
    // 0x1498a4: 0x0  nop
    ctx->pc = 0x1498a4u;
    // NOP
    ctx->pc = 0x1498a8u;
}
