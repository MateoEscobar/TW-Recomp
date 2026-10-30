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

// Function: sub_0042D990
// Address: 0x42d990 - 0x42da00
void sub_0042D990_0x42d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D990_0x42d990");
#endif

    switch (ctx->pc) {
        case 0x42d990u: goto label_42d990;
        case 0x42d994u: goto label_42d994;
        case 0x42d998u: goto label_42d998;
        case 0x42d99cu: goto label_42d99c;
        case 0x42d9a0u: goto label_42d9a0;
        case 0x42d9a4u: goto label_42d9a4;
        case 0x42d9a8u: goto label_42d9a8;
        case 0x42d9acu: goto label_42d9ac;
        case 0x42d9b0u: goto label_42d9b0;
        case 0x42d9b4u: goto label_42d9b4;
        case 0x42d9b8u: goto label_42d9b8;
        case 0x42d9bcu: goto label_42d9bc;
        case 0x42d9c0u: goto label_42d9c0;
        case 0x42d9c4u: goto label_42d9c4;
        case 0x42d9c8u: goto label_42d9c8;
        case 0x42d9ccu: goto label_42d9cc;
        case 0x42d9d0u: goto label_42d9d0;
        case 0x42d9d4u: goto label_42d9d4;
        case 0x42d9d8u: goto label_42d9d8;
        case 0x42d9dcu: goto label_42d9dc;
        case 0x42d9e0u: goto label_42d9e0;
        case 0x42d9e4u: goto label_42d9e4;
        case 0x42d9e8u: goto label_42d9e8;
        case 0x42d9ecu: goto label_42d9ec;
        case 0x42d9f0u: goto label_42d9f0;
        case 0x42d9f4u: goto label_42d9f4;
        case 0x42d9f8u: goto label_42d9f8;
        case 0x42d9fcu: goto label_42d9fc;
        default: break;
    }

    ctx->pc = 0x42d990u;

label_42d990:
    // 0x42d990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42d994:
    // 0x42d994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42d998:
    // 0x42d998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42d99c:
    // 0x42d99c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_42d9a0:
    if (ctx->pc == 0x42D9A0u) {
        ctx->pc = 0x42D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D99Cu;
        // 0x42d9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9A4u;
        goto label_42d9a4;
    }
    ctx->pc = 0x42D99Cu;
    {
        const bool branch_taken_0x42d99c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D99Cu;
        // 0x42d9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d99c) {
            ctx->pc = 0x42D9B4u;
            goto label_42d9b4;
        }
    }
    ctx->pc = 0x42D9A4u;
label_42d9a4:
    // 0x42d9a4: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x42d9a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_42d9a8:
    // 0x42d9a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42d9ac:
    // 0x42d9ac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_42d9b0:
    if (ctx->pc == 0x42D9B0u) {
        ctx->pc = 0x42D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9ACu;
        // 0x42d9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9B4u;
        goto label_42d9b4;
    }
    ctx->pc = 0x42D9ACu;
    {
        const bool branch_taken_0x42d9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x42D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9ACu;
        // 0x42d9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d9ac) {
            ctx->pc = 0x42D9ECu;
            goto label_42d9ec;
        }
    }
    ctx->pc = 0x42D9B4u;
label_42d9b4:
    // 0x42d9b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_42d9b8:
    // 0x42d9b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42d9bc:
    // 0x42d9bc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_42d9c0:
    if (ctx->pc == 0x42D9C0u) {
        ctx->pc = 0x42D9C4u;
        goto label_42d9c4;
    }
    ctx->pc = 0x42D9BCu;
    {
        const bool branch_taken_0x42d9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x42d9bc) {
            ctx->pc = 0x42D9CCu;
            goto label_42d9cc;
        }
    }
    ctx->pc = 0x42D9C4u;
label_42d9c4:
    // 0x42d9c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_42d9c8:
    if (ctx->pc == 0x42D9C8u) {
        ctx->pc = 0x42D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9C4u;
        // 0x42d9c8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9CCu;
        goto label_42d9cc;
    }
    ctx->pc = 0x42D9C4u;
    {
        const bool branch_taken_0x42d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9C4u;
        // 0x42d9c8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d9c4) {
            ctx->pc = 0x42D9ECu;
            goto label_42d9ec;
        }
    }
    ctx->pc = 0x42D9CCu;
label_42d9cc:
    // 0x42d9cc: 0xa0f809  jalr        $a1
label_42d9d0:
    if (ctx->pc == 0x42D9D0u) {
        ctx->pc = 0x42D9D4u;
        goto label_42d9d4;
    }
    ctx->pc = 0x42D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x42D9D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D9CCu, 0x42D9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42D9D4u;
label_42d9d4:
    // 0x42d9d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x42d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_42d9d8:
    // 0x42d9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d9dc:
    // 0x42d9dc: 0xc10bd90  jal         func_42F640
label_42d9e0:
    if (ctx->pc == 0x42D9E0u) {
        ctx->pc = 0x42D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9DCu;
        // 0x42d9e0: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9E4u;
        goto label_42d9e4;
    }
    ctx->pc = 0x42D9DCu;
    SET_GPR_U32(ctx, 31, 0x42D9E4u);
    ctx->pc = 0x42D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D9DCu;
    // 0x42d9e0: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F640u, 0x42D9DCu, 0x42D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D9E4u;
label_42d9e4:
    // 0x42d9e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_42d9e8:
    if (ctx->pc == 0x42D9E8u) {
        ctx->pc = 0x42D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9E4u;
        // 0x42d9e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9ECu;
        goto label_42d9ec;
    }
    ctx->pc = 0x42D9E4u;
    {
        const bool branch_taken_0x42d9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d9e4) {
            ctx->pc = 0x42D9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D9E4u;
            // 0x42d9e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D9ECu;
            goto label_42d9ec;
        }
    }
    ctx->pc = 0x42D9ECu;
label_42d9ec:
    // 0x42d9ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42d9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42d9f0:
    // 0x42d9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42d9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42d9f4:
    // 0x42d9f4: 0x3e00008  jr          $ra
label_42d9f8:
    if (ctx->pc == 0x42D9F8u) {
        ctx->pc = 0x42D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9F4u;
        // 0x42d9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D9FCu;
        goto label_42d9fc;
    }
    ctx->pc = 0x42D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D9F4u;
        // 0x42d9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D9FCu;
label_42d9fc:
    // 0x42d9fc: 0x0  nop
    ctx->pc = 0x42d9fcu;
    // NOP
    ctx->pc = 0x42da00u;
}
