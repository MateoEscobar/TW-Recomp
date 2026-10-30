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

// Function: sub_004F4328
// Address: 0x4f4328 - 0x4f4388
void sub_004F4328_0x4f4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4328_0x4f4328");
#endif

    switch (ctx->pc) {
        case 0x4f4328u: goto label_4f4328;
        case 0x4f432cu: goto label_4f432c;
        case 0x4f4330u: goto label_4f4330;
        case 0x4f4334u: goto label_4f4334;
        case 0x4f4338u: goto label_4f4338;
        case 0x4f433cu: goto label_4f433c;
        case 0x4f4340u: goto label_4f4340;
        case 0x4f4344u: goto label_4f4344;
        case 0x4f4348u: goto label_4f4348;
        case 0x4f434cu: goto label_4f434c;
        case 0x4f4350u: goto label_4f4350;
        case 0x4f4354u: goto label_4f4354;
        case 0x4f4358u: goto label_4f4358;
        case 0x4f435cu: goto label_4f435c;
        case 0x4f4360u: goto label_4f4360;
        case 0x4f4364u: goto label_4f4364;
        case 0x4f4368u: goto label_4f4368;
        case 0x4f436cu: goto label_4f436c;
        case 0x4f4370u: goto label_4f4370;
        case 0x4f4374u: goto label_4f4374;
        case 0x4f4378u: goto label_4f4378;
        case 0x4f437cu: goto label_4f437c;
        case 0x4f4380u: goto label_4f4380;
        case 0x4f4384u: goto label_4f4384;
        default: break;
    }

    ctx->pc = 0x4f4328u;

label_4f4328:
    // 0x4f4328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f432c:
    // 0x4f432c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f4330:
    // 0x4f4330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4334:
    // 0x4f4334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4338:
    // 0x4f4338: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f4338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f433c:
    // 0x4f433c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f433cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f4340:
    // 0x4f4340: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f4344:
    // 0x4f4344: 0x40f809  jalr        $v0
label_4f4348:
    if (ctx->pc == 0x4F4348u) {
        ctx->pc = 0x4F4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4344u;
        // 0x4f4348: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F434Cu;
        goto label_4f434c;
    }
    ctx->pc = 0x4F4344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F434Cu);
        ctx->pc = 0x4F4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4344u;
        // 0x4f4348: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4344u, 0x4F434Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F434Cu;
label_4f434c:
    // 0x4f434c: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f4350:
    if (ctx->pc == 0x4F4350u) {
        ctx->pc = 0x4F4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F434Cu;
        // 0x4f4350: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4354u;
        goto label_4f4354;
    }
    ctx->pc = 0x4F434Cu;
    {
        const bool branch_taken_0x4f434c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f434c) {
            ctx->pc = 0x4F4350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F434Cu;
            // 0x4f4350: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F435Cu;
            goto label_4f435c;
        }
    }
    ctx->pc = 0x4F4354u;
label_4f4354:
    // 0x4f4354: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f4358:
    if (ctx->pc == 0x4F4358u) {
        ctx->pc = 0x4F4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4354u;
        // 0x4f4358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F435Cu;
        goto label_4f435c;
    }
    ctx->pc = 0x4F4354u;
    {
        const bool branch_taken_0x4f4354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4354u;
        // 0x4f4358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4354) {
            ctx->pc = 0x4F4374u;
            goto label_4f4374;
        }
    }
    ctx->pc = 0x4F435Cu;
label_4f435c:
    // 0x4f435c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f4360:
    // 0x4f4360: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f4360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f4364:
    // 0x4f4364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f4368:
    // 0x4f4368: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f436c:
    // 0x4f436c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f4370:
    // 0x4f4370: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f4370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f4374:
    // 0x4f4374: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f4374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4378:
    // 0x4f4378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f437c:
    // 0x4f437c: 0x3e00008  jr          $ra
label_4f4380:
    if (ctx->pc == 0x4F4380u) {
        ctx->pc = 0x4F4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F437Cu;
        // 0x4f4380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4384u;
        goto label_4f4384;
    }
    ctx->pc = 0x4F437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F437Cu;
        // 0x4f4380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F437Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4384u;
label_4f4384:
    // 0x4f4384: 0x0  nop
    ctx->pc = 0x4f4384u;
    // NOP
    ctx->pc = 0x4f4388u;
}
