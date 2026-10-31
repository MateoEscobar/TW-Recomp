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

// Function: sub_00221710
// Address: 0x221710 - 0x221760
void sub_00221710_0x221710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221710_0x221710");
#endif

    switch (ctx->pc) {
        case 0x221748u: goto label_221748;
        case 0x221750u: goto label_221750;
        default: break;
    }

    ctx->pc = 0x221710u;

    // 0x221710: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x221710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x221714: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221718: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x221718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5101E0u));
    // 0x22171c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22171Cu;
    {
        const bool branch_taken_0x22171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22171Cu;
        // 0x221720: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22171c) {
            ctx->pc = 0x221740u;
            goto label_221740;
        }
    }
    ctx->pc = 0x221724u;
    // 0x221724: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x221728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221728u;
    {
        const bool branch_taken_0x221728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221728) {
            ctx->pc = 0x221740u;
            goto label_221740;
        }
    }
    ctx->pc = 0x221730u;
    // 0x221730: 0xc48103a4  lwc1        $f1, 0x3A4($a0)
    ctx->pc = 0x221730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221734: 0xc4400164  lwc1        $f0, 0x164($v0)
    ctx->pc = 0x221734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221738: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221738u;
    {
        const bool branch_taken_0x221738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221738u;
        // 0x22173c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221738) {
            ctx->pc = 0x221754u;
            goto label_221754;
        }
    }
    ctx->pc = 0x221740u;
label_221740:
    // 0x221740: 0xc08a200  jal         func_228800
    ctx->pc = 0x221740u;
    SET_GPR_U32(ctx, 31, 0x221748u);
    ctx->pc = 0x221744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221740u;
    // 0x221744: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x221740u, 0x221748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221748u;
label_221748:
    // 0x221748: 0xc08a206  jal         func_228818
    ctx->pc = 0x221748u;
    SET_GPR_U32(ctx, 31, 0x221750u);
    ctx->pc = 0x22174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221748u;
    // 0x22174c: 0x9044011c  lbu         $a0, 0x11C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x221748u, 0x221750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221750u;
label_221750:
    // 0x221750: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x221750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221754:
    // 0x221754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221758: 0x3e00008  jr          $ra
    ctx->pc = 0x221758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221758u;
        // 0x22175c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221760u;
}
