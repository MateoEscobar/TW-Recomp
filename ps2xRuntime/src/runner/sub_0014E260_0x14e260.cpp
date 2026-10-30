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

// Function: sub_0014E260
// Address: 0x14e260 - 0x14e2d8
void sub_0014E260_0x14e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E260_0x14e260");
#endif

    switch (ctx->pc) {
        case 0x14e288u: goto label_14e288;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e2c8u: goto label_14e2c8;
        default: break;
    }

    ctx->pc = 0x14e260u;

    // 0x14e260: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14e264: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e268: 0x8c44c20c  lw          $a0, -0x3DF4($v0)
    ctx->pc = 0x14e268u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x14e26c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14e26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e270: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14E270u;
    {
        const bool branch_taken_0x14e270 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x14E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E270u;
        // 0x14e274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e270) {
            ctx->pc = 0x14E2B0u;
            goto label_14e2b0;
        }
    }
    ctx->pc = 0x14E278u;
    // 0x14e278: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e27c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e280: 0x24463ac8  addiu       $a2, $v0, 0x3AC8
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14e284: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x14e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14e288:
    // 0x14e288: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e28c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x14E28Cu;
    {
        const bool branch_taken_0x14e28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e28c) {
            ctx->pc = 0x14E290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E28Cu;
            // 0x14e290: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E2CCu;
            goto label_14e2cc;
        }
    }
    ctx->pc = 0x14E294u;
    // 0x14e294: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E294u;
    {
        const bool branch_taken_0x14e294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x14e294) {
            ctx->pc = 0x14E298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E294u;
            // 0x14e298: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E2A4u;
            goto label_14e2a4;
        }
    }
    ctx->pc = 0x14E29Cu;
    // 0x14e29c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14E29Cu;
    {
        const bool branch_taken_0x14e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E29Cu;
        // 0x14e2a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e29c) {
            ctx->pc = 0x14E2CCu;
            goto label_14e2cc;
        }
    }
    ctx->pc = 0x14E2A4u;
label_14e2a4:
    // 0x14e2a4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14e2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14e2a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14E2A8u;
    {
        const bool branch_taken_0x14e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2A8u;
        // 0x14e2ac: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2a8) {
            ctx->pc = 0x14E288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e288;
        }
    }
    ctx->pc = 0x14E2B0u;
label_14e2b0:
    // 0x14e2b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e2b4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E2B4u;
    SET_GPR_U32(ctx, 31, 0x14E2BCu);
    ctx->pc = 0x14E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2B4u;
    // 0x14e2b8: 0x2484bb28  addiu       $a0, $a0, -0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E2B4u, 0x14E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2BCu;
label_14e2bc:
    // 0x14e2bc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14e2c0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14E2C0u;
    SET_GPR_U32(ctx, 31, 0x14E2C8u);
    ctx->pc = 0x14E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2C0u;
    // 0x14e2c4: 0x2484bb40  addiu       $a0, $a0, -0x44C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14E2C0u, 0x14E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2C8u;
label_14e2c8:
    // 0x14e2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e2cc:
    // 0x14e2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2D0u;
        // 0x14e2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E2D8u;
}
