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

// Function: sub_0011E978
// Address: 0x11e978 - 0x11e9c0
void sub_0011E978_0x11e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E978_0x11e978");
#endif

    switch (ctx->pc) {
        case 0x11e978u: goto label_11e978;
        case 0x11e97cu: goto label_11e97c;
        case 0x11e980u: goto label_11e980;
        case 0x11e984u: goto label_11e984;
        case 0x11e988u: goto label_11e988;
        case 0x11e98cu: goto label_11e98c;
        case 0x11e990u: goto label_11e990;
        case 0x11e994u: goto label_11e994;
        case 0x11e998u: goto label_11e998;
        case 0x11e99cu: goto label_11e99c;
        case 0x11e9a0u: goto label_11e9a0;
        case 0x11e9a4u: goto label_11e9a4;
        case 0x11e9a8u: goto label_11e9a8;
        case 0x11e9acu: goto label_11e9ac;
        case 0x11e9b0u: goto label_11e9b0;
        case 0x11e9b4u: goto label_11e9b4;
        case 0x11e9b8u: goto label_11e9b8;
        case 0x11e9bcu: goto label_11e9bc;
        default: break;
    }

    ctx->pc = 0x11e978u;

label_11e978:
    // 0x11e978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e97c:
    // 0x11e97c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11e97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_11e980:
    // 0x11e980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e984:
    // 0x11e984: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_11e988:
    if (ctx->pc == 0x11E988u) {
        ctx->pc = 0x11E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E984u;
        // 0x11e988: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E98Cu;
        goto label_11e98c;
    }
    ctx->pc = 0x11E984u;
    {
        const bool branch_taken_0x11e984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E984u;
        // 0x11e988: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e984) {
            ctx->pc = 0x11E9ACu;
            goto label_11e9ac;
        }
    }
    ctx->pc = 0x11E98Cu;
label_11e98c:
    // 0x11e98c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e990:
    // 0x11e990: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x11e990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_11e994:
    // 0x11e994: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x11e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_11e998:
    // 0x11e998: 0x40f809  jalr        $v0
label_11e99c:
    if (ctx->pc == 0x11E99Cu) {
        ctx->pc = 0x11E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E998u;
        // 0x11e99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E9A0u;
        goto label_11e9a0;
    }
    ctx->pc = 0x11E998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E9A0u);
        ctx->pc = 0x11E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E998u;
        // 0x11e99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E998u, 0x11E9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E9A0u;
label_11e9a0:
    // 0x11e9a0: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x11e9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_11e9a4:
    // 0x11e9a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_11e9a8:
    if (ctx->pc == 0x11E9A8u) {
        ctx->pc = 0x11E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A4u;
        // 0x11e9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E9ACu;
        goto label_11e9ac;
    }
    ctx->pc = 0x11E9A4u;
    {
        const bool branch_taken_0x11e9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A4u;
        // 0x11e9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a4) {
            ctx->pc = 0x11E9B0u;
            goto label_11e9b0;
        }
    }
    ctx->pc = 0x11E9ACu;
label_11e9ac:
    // 0x11e9ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e9b0:
    // 0x11e9b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11e9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9b4:
    // 0x11e9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e9b8:
    // 0x11e9b8: 0x3e00008  jr          $ra
label_11e9bc:
    if (ctx->pc == 0x11E9BCu) {
        ctx->pc = 0x11E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9B8u;
        // 0x11e9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E9C0u;
        goto label_fallthrough_0x11e9b8;
    }
    ctx->pc = 0x11E9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9B8u;
        // 0x11e9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11e9b8:
    ctx->pc = 0x11E9C0u;
}
