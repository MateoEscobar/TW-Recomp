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

// Function: sub_002FB278
// Address: 0x2fb278 - 0x2fb2f0
void sub_002FB278_0x2fb278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB278_0x2fb278");
#endif

    switch (ctx->pc) {
        case 0x2fb29cu: goto label_2fb29c;
        case 0x2fb2b8u: goto label_2fb2b8;
        default: break;
    }

    ctx->pc = 0x2fb278u;

    // 0x2fb278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb27c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fb27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fb280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fb284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb288: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2FB288u;
    {
        const bool branch_taken_0x2fb288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb288) {
            ctx->pc = 0x2FB2C8u;
            goto label_2fb2c8;
        }
    }
    ctx->pc = 0x2FB290u;
    // 0x2fb290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb294: 0xc08c716  jal         func_231C58
    ctx->pc = 0x2FB294u;
    SET_GPR_U32(ctx, 31, 0x2FB29Cu);
    ctx->pc = 0x2FB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB294u;
    // 0x2fb298: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2FB294u, 0x2FB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB29Cu;
label_2fb29c:
    // 0x2fb29c: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x2fb29cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fb2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb2a4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FB2A4u;
    {
        const bool branch_taken_0x2fb2a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A4u;
        // 0x2fb2a8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2a4) {
            ctx->pc = 0x2FB2D0u;
            goto label_2fb2d0;
        }
    }
    ctx->pc = 0x2FB2ACu;
    // 0x2fb2ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb2b0: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x2FB2B0u;
    SET_GPR_U32(ctx, 31, 0x2FB2B8u);
    ctx->pc = 0x2FB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2B0u;
    // 0x2fb2b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x2FB2B0u, 0x2FB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B8u;
label_2fb2b8:
    // 0x2fb2b8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB2B8u;
    {
        const bool branch_taken_0x2fb2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2B8u;
        // 0x2fb2bc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2b8) {
            ctx->pc = 0x2FB2CCu;
            goto label_2fb2cc;
        }
    }
    ctx->pc = 0x2FB2C0u;
    // 0x2fb2c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB2C0u;
    {
        const bool branch_taken_0x2fb2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C0u;
        // 0x2fb2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2c0) {
            ctx->pc = 0x2FB2DCu;
            goto label_2fb2dc;
        }
    }
    ctx->pc = 0x2FB2C8u;
label_2fb2c8:
    // 0x2fb2c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2fb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2fb2cc:
    // 0x2fb2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb2d0:
    // 0x2fb2d0: 0x8c8312ac  lw          $v1, 0x12AC($a0)
    ctx->pc = 0x2fb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4780)));
    // 0x2fb2d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fb2d8: 0xac8312ac  sw          $v1, 0x12AC($a0)
    ctx->pc = 0x2fb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 3));
label_2fb2dc:
    // 0x2fb2dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fb2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2E8u;
        // 0x2fb2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB2F0u;
}
