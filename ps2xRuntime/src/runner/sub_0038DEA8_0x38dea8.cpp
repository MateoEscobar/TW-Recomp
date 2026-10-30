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

// Function: sub_0038DEA8
// Address: 0x38dea8 - 0x38dee8
void sub_0038DEA8_0x38dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DEA8_0x38dea8");
#endif

    switch (ctx->pc) {
        case 0x38dea8u: goto label_38dea8;
        case 0x38deacu: goto label_38deac;
        case 0x38deb0u: goto label_38deb0;
        case 0x38deb4u: goto label_38deb4;
        case 0x38deb8u: goto label_38deb8;
        case 0x38debcu: goto label_38debc;
        case 0x38dec0u: goto label_38dec0;
        case 0x38dec4u: goto label_38dec4;
        case 0x38dec8u: goto label_38dec8;
        case 0x38deccu: goto label_38decc;
        case 0x38ded0u: goto label_38ded0;
        case 0x38ded4u: goto label_38ded4;
        case 0x38ded8u: goto label_38ded8;
        case 0x38dedcu: goto label_38dedc;
        case 0x38dee0u: goto label_38dee0;
        case 0x38dee4u: goto label_38dee4;
        default: break;
    }

    ctx->pc = 0x38dea8u;

label_38dea8:
    // 0x38dea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38deac:
    // 0x38deac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38deacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_38deb0:
    // 0x38deb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38deb4:
    // 0x38deb4: 0xc0e4088  jal         func_390220
label_38deb8:
    if (ctx->pc == 0x38DEB8u) {
        ctx->pc = 0x38DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEB4u;
        // 0x38deb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEBCu;
        goto label_38debc;
    }
    ctx->pc = 0x38DEB4u;
    SET_GPR_U32(ctx, 31, 0x38DEBCu);
    ctx->pc = 0x38DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DEB4u;
    // 0x38deb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38DEB4u, 0x38DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DEBCu;
label_38debc:
    // 0x38debc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38debcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38dec0:
    // 0x38dec0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_38dec4:
    if (ctx->pc == 0x38DEC4u) {
        ctx->pc = 0x38DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC0u;
        // 0x38dec4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEC8u;
        goto label_38dec8;
    }
    ctx->pc = 0x38DEC0u;
    {
        const bool branch_taken_0x38dec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEC0u;
        // 0x38dec4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dec0) {
            ctx->pc = 0x38DEE0u;
            goto label_38dee0;
        }
    }
    ctx->pc = 0x38DEC8u;
label_38dec8:
    // 0x38dec8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38decc:
    // 0x38decc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x38deccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_38ded0:
    // 0x38ded0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38ded4:
    // 0x38ded4: 0x60f809  jalr        $v1
label_38ded8:
    if (ctx->pc == 0x38DED8u) {
        ctx->pc = 0x38DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DED4u;
        // 0x38ded8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEDCu;
        goto label_38dedc;
    }
    ctx->pc = 0x38DED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38DEDCu);
        ctx->pc = 0x38DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DED4u;
        // 0x38ded8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DED4u, 0x38DEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DEDCu;
label_38dedc:
    // 0x38dedc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38dee0:
    // 0x38dee0: 0x3e00008  jr          $ra
label_38dee4:
    if (ctx->pc == 0x38DEE4u) {
        ctx->pc = 0x38DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEE0u;
        // 0x38dee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEE8u;
        goto label_fallthrough_0x38dee0;
    }
    ctx->pc = 0x38DEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEE0u;
        // 0x38dee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38dee0:
    ctx->pc = 0x38DEE8u;
}
