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

// Function: sub_0042BC98
// Address: 0x42bc98 - 0x42bcf0
void sub_0042BC98_0x42bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042BC98_0x42bc98");
#endif

    switch (ctx->pc) {
        case 0x42bcb8u: goto label_42bcb8;
        case 0x42bcc8u: goto label_42bcc8;
        case 0x42bcd8u: goto label_42bcd8;
        case 0x42bce0u: goto label_42bce0;
        default: break;
    }

    ctx->pc = 0x42bc98u;

    // 0x42bc98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x42bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x42bc9c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x42bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x42bca0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x42bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x42bca4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42bca8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x42bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x42bcac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x42bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x42bcb0: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BCB0u;
    SET_GPR_U32(ctx, 31, 0x42BCB8u);
    ctx->pc = 0x42BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BCB0u;
    // 0x42bcb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BCB0u, 0x42BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BCB8u;
label_42bcb8:
    // 0x42bcb8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x42bcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42bcbc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x42bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x42bcc0: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BCC0u;
    SET_GPR_U32(ctx, 31, 0x42BCC8u);
    ctx->pc = 0x42BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BCC0u;
    // 0x42bcc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BCC0u, 0x42BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BCC8u;
label_42bcc8:
    // 0x42bcc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42bcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bccc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x42bcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42bcd0: 0xc10ae96  jal         func_42BA58
    ctx->pc = 0x42BCD0u;
    SET_GPR_U32(ctx, 31, 0x42BCD8u);
    ctx->pc = 0x42BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BCD0u;
    // 0x42bcd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BA58u, 0x42BCD0u, 0x42BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BCD8u;
label_42bcd8:
    // 0x42bcd8: 0xc10ae22  jal         func_42B888
    ctx->pc = 0x42BCD8u;
    SET_GPR_U32(ctx, 31, 0x42BCE0u);
    ctx->pc = 0x42BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BCD8u;
    // 0x42bcdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B888u, 0x42BCD8u, 0x42BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BCE0u;
label_42bce0:
    // 0x42bce0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42bce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42bce4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x42bce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x42bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x42BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCE8u;
        // 0x42bcec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BCF0u;
}
