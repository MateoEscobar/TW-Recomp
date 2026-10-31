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

// Function: sub_002FA338
// Address: 0x2fa338 - 0x2fa398
void sub_002FA338_0x2fa338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA338_0x2fa338");
#endif

    switch (ctx->pc) {
        case 0x2fa360u: goto label_2fa360;
        case 0x2fa374u: goto label_2fa374;
        default: break;
    }

    ctx->pc = 0x2fa338u;

    // 0x2fa338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fa340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fa344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa350: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fa350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa354: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fa354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa358: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FA358u;
    SET_GPR_U32(ctx, 31, 0x2FA360u);
    ctx->pc = 0x2FA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA358u;
    // 0x2fa35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FA358u, 0x2FA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA360u;
label_2fa360:
    // 0x2fa360: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fa360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fa364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa368: 0xae2203c4  sw          $v0, 0x3C4($s1)
    ctx->pc = 0x2fa368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 964), GPR_U32(ctx, 2));
    // 0x2fa36c: 0xc088680  jal         func_221A00
    ctx->pc = 0x2FA36Cu;
    SET_GPR_U32(ctx, 31, 0x2FA374u);
    ctx->pc = 0x2FA370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA36Cu;
    // 0x2fa370: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2FA36Cu, 0x2FA374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA374u;
label_2fa374:
    // 0x2fa374: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fa374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa378: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fa378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa37c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2fa37cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2fa380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa388: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2fa388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa38c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA38Cu;
        // 0x2fa390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA394u;
    // 0x2fa394: 0x0  nop
    ctx->pc = 0x2fa394u;
    // NOP
    ctx->pc = 0x2fa398u;
}
