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

// Function: sub_001FE268
// Address: 0x1fe268 - 0x1fe2a0
void sub_001FE268_0x1fe268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE268_0x1fe268");
#endif

    switch (ctx->pc) {
        case 0x1fe288u: goto label_1fe288;
        default: break;
    }

    ctx->pc = 0x1fe268u;

    // 0x1fe268: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fe26c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe270: 0x8c62f4e4  lw          $v0, -0xB1C($v1)
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50F4E4u));
    // 0x1fe274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE278u;
    {
        const bool branch_taken_0x1fe278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE278u;
        // 0x1fe27c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe278) {
            ctx->pc = 0x1FE290u;
            goto label_1fe290;
        }
    }
    ctx->pc = 0x1FE280u;
    // 0x1fe280: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1FE280u;
    SET_GPR_U32(ctx, 31, 0x1FE288u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1FE280u, 0x1FE288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE288u;
label_1fe288:
    // 0x1fe288: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x1fe288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
    // 0x1fe28c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1fe28cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe290:
    // 0x1fe290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe294: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fe294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe298: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE298u;
        // 0x1fe29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2A0u;
}
