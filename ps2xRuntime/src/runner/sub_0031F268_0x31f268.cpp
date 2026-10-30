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

// Function: sub_0031F268
// Address: 0x31f268 - 0x31f2e8
void sub_0031F268_0x31f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F268_0x31f268");
#endif

    switch (ctx->pc) {
        case 0x31f268u: goto label_31f268;
        case 0x31f26cu: goto label_31f26c;
        case 0x31f270u: goto label_31f270;
        case 0x31f274u: goto label_31f274;
        case 0x31f278u: goto label_31f278;
        case 0x31f27cu: goto label_31f27c;
        case 0x31f280u: goto label_31f280;
        case 0x31f284u: goto label_31f284;
        case 0x31f288u: goto label_31f288;
        case 0x31f28cu: goto label_31f28c;
        case 0x31f290u: goto label_31f290;
        case 0x31f294u: goto label_31f294;
        case 0x31f298u: goto label_31f298;
        case 0x31f29cu: goto label_31f29c;
        case 0x31f2a0u: goto label_31f2a0;
        case 0x31f2a4u: goto label_31f2a4;
        case 0x31f2a8u: goto label_31f2a8;
        case 0x31f2acu: goto label_31f2ac;
        case 0x31f2b0u: goto label_31f2b0;
        case 0x31f2b4u: goto label_31f2b4;
        case 0x31f2b8u: goto label_31f2b8;
        case 0x31f2bcu: goto label_31f2bc;
        case 0x31f2c0u: goto label_31f2c0;
        case 0x31f2c4u: goto label_31f2c4;
        case 0x31f2c8u: goto label_31f2c8;
        case 0x31f2ccu: goto label_31f2cc;
        case 0x31f2d0u: goto label_31f2d0;
        case 0x31f2d4u: goto label_31f2d4;
        case 0x31f2d8u: goto label_31f2d8;
        case 0x31f2dcu: goto label_31f2dc;
        case 0x31f2e0u: goto label_31f2e0;
        case 0x31f2e4u: goto label_31f2e4;
        default: break;
    }

    ctx->pc = 0x31f268u;

label_31f268:
    // 0x31f268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31f26c:
    // 0x31f26c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31f270:
    // 0x31f270: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x31f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_31f274:
    // 0x31f274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31f278:
    // 0x31f278: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x31f278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31f27c:
    // 0x31f27c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_31f280:
    if (ctx->pc == 0x31F280u) {
        ctx->pc = 0x31F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F27Cu;
        // 0x31f280: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F284u;
        goto label_31f284;
    }
    ctx->pc = 0x31F27Cu;
    {
        const bool branch_taken_0x31f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F27Cu;
        // 0x31f280: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f27c) {
            ctx->pc = 0x31F2F0u;
            return;
        }
    }
    ctx->pc = 0x31F284u;
label_31f284:
    // 0x31f284: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x31f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_31f288:
    // 0x31f288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31f28c:
    // 0x31f28c: 0x24422f60  addiu       $v0, $v0, 0x2F60
    ctx->pc = 0x31f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12128));
label_31f290:
    // 0x31f290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31f294:
    // 0x31f294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31f298:
    // 0x31f298: 0x800008  jr          $a0
label_31f29c:
    if (ctx->pc == 0x31F29Cu) {
        ctx->pc = 0x31F2A0u;
        goto label_31f2a0;
    }
    ctx->pc = 0x31F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31F2A0u: goto label_31f2a0;
            case 0x31F2ACu: goto label_31f2ac;
            case 0x31F2B8u: goto label_31f2b8;
            case 0x31F2D8u: goto label_31f2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31F2A0u;
label_31f2a0:
    // 0x31f2a0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x31f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_31f2a4:
    // 0x31f2a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_31f2a8:
    if (ctx->pc == 0x31F2A8u) {
        ctx->pc = 0x31F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2A4u;
        // 0x31f2a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2ACu;
        goto label_31f2ac;
    }
    ctx->pc = 0x31F2A4u;
    {
        const bool branch_taken_0x31f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2A4u;
        // 0x31f2a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2a4) {
            ctx->pc = 0x31F2C0u;
            goto label_31f2c0;
        }
    }
    ctx->pc = 0x31F2ACu;
label_31f2ac:
    // 0x31f2ac: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x31f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_31f2b0:
    // 0x31f2b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_31f2b4:
    if (ctx->pc == 0x31F2B4u) {
        ctx->pc = 0x31F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2B0u;
        // 0x31f2b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2B8u;
        goto label_31f2b8;
    }
    ctx->pc = 0x31F2B0u;
    {
        const bool branch_taken_0x31f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2B0u;
        // 0x31f2b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2b0) {
            ctx->pc = 0x31F2C0u;
            goto label_31f2c0;
        }
    }
    ctx->pc = 0x31F2B8u;
label_31f2b8:
    // 0x31f2b8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x31f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_31f2bc:
    // 0x31f2bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31f2c0:
    // 0x31f2c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31f2c4:
    // 0x31f2c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31f2c8:
    // 0x31f2c8: 0x60f809  jalr        $v1
label_31f2cc:
    if (ctx->pc == 0x31F2CCu) {
        ctx->pc = 0x31F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2C8u;
        // 0x31f2cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2D0u;
        goto label_31f2d0;
    }
    ctx->pc = 0x31F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31F2D0u);
        ctx->pc = 0x31F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2C8u;
        // 0x31f2cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F2C8u, 0x31F2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F2D0u;
label_31f2d0:
    // 0x31f2d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_31f2d4:
    if (ctx->pc == 0x31F2D4u) {
        ctx->pc = 0x31F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2D0u;
        // 0x31f2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2D8u;
        goto label_31f2d8;
    }
    ctx->pc = 0x31F2D0u;
    {
        const bool branch_taken_0x31f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2D0u;
        // 0x31f2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2d0) {
            ctx->pc = 0x31F2F4u;
            return;
        }
    }
    ctx->pc = 0x31F2D8u;
label_31f2d8:
    // 0x31f2d8: 0xc0c7b50  jal         func_31ED40
label_31f2dc:
    if (ctx->pc == 0x31F2DCu) {
        ctx->pc = 0x31F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2D8u;
        // 0x31f2dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2E0u;
        goto label_31f2e0;
    }
    ctx->pc = 0x31F2D8u;
    SET_GPR_U32(ctx, 31, 0x31F2E0u);
    ctx->pc = 0x31F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2D8u;
    // 0x31f2dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED40u, 0x31F2D8u, 0x31F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F2E0u;
label_31f2e0:
    // 0x31f2e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_31f2e4:
    if (ctx->pc == 0x31F2E4u) {
        ctx->pc = 0x31F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2E0u;
        // 0x31f2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F2E8u;
        goto label_fallthrough_0x31f2e0;
    }
    ctx->pc = 0x31F2E0u;
    {
        const bool branch_taken_0x31f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2E0u;
        // 0x31f2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2e0) {
            ctx->pc = 0x31F2F4u;
            return;
        }
    }
label_fallthrough_0x31f2e0:
    ctx->pc = 0x31F2E8u;
}
