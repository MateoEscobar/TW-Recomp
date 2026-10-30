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

// Function: sub_0018B460
// Address: 0x18b460 - 0x18b4a8
void sub_0018B460_0x18b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B460_0x18b460");
#endif

    switch (ctx->pc) {
        case 0x18b49cu: goto label_18b49c;
        default: break;
    }

    ctx->pc = 0x18b460u;

    // 0x18b460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b468: 0xac850194  sw          $a1, 0x194($a0)
    ctx->pc = 0x18b468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 5));
    // 0x18b46c: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x18b470: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18b470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b474: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18B474u;
    {
        const bool branch_taken_0x18b474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B474u;
        // 0x18b478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b474) {
            ctx->pc = 0x18B4A0u;
            goto label_18b4a0;
        }
    }
    ctx->pc = 0x18B47Cu;
    // 0x18b47c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b480: 0xac850198  sw          $a1, 0x198($a0)
    ctx->pc = 0x18b480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 5));
    // 0x18b484: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x18b484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18b488: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x18b488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x18b48c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18b48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18b490: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x18b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b494: 0xc063262  jal         func_18C988
    ctx->pc = 0x18B494u;
    SET_GPR_U32(ctx, 31, 0x18B49Cu);
    ctx->pc = 0x18B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B494u;
    // 0x18b498: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x18B494u, 0x18B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B49Cu;
label_18b49c:
    // 0x18b49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b4a0:
    // 0x18b4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4A0u;
        // 0x18b4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B4A8u;
}
