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

// Function: sub_002B7900
// Address: 0x2b7900 - 0x2b79b8
void sub_002B7900_0x2b7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7900_0x2b7900");
#endif

    switch (ctx->pc) {
        case 0x2b7928u: goto label_2b7928;
        case 0x2b7938u: goto label_2b7938;
        case 0x2b794cu: goto label_2b794c;
        case 0x2b7984u: goto label_2b7984;
        default: break;
    }

    ctx->pc = 0x2b7900u;

    // 0x2b7900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7904: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b7908: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b790c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b790cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7918: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b791c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b791cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7920: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B7920u;
    SET_GPR_U32(ctx, 31, 0x2B7928u);
    ctx->pc = 0x2B7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7920u;
    // 0x2b7924: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B7920u, 0x2B7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7928u;
label_2b7928:
    // 0x2b7928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b792c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7930: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B7930u;
    SET_GPR_U32(ctx, 31, 0x2B7938u);
    ctx->pc = 0x2B7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7930u;
    // 0x2b7934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B7930u, 0x2B7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7938u;
label_2b7938:
    // 0x2b7938: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7938u;
    {
        const bool branch_taken_0x2b7938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7938) {
            ctx->pc = 0x2B793Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7938u;
            // 0x2b793c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7950u;
            goto label_2b7950;
        }
    }
    ctx->pc = 0x2B7940u;
    // 0x2b7940: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b7940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7944: 0xc0a3fde  jal         func_28FF78
    ctx->pc = 0x2B7944u;
    SET_GPR_U32(ctx, 31, 0x2B794Cu);
    ctx->pc = 0x2B7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7944u;
    // 0x2b7948: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2B7944u, 0x2B794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B794Cu;
label_2b794c:
    // 0x2b794c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2b794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2b7950:
    // 0x2b7950: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7950u;
    {
        const bool branch_taken_0x2b7950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7950) {
            ctx->pc = 0x2B7954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7950u;
            // 0x2b7954: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7994u;
            goto label_2b7994;
        }
    }
    ctx->pc = 0x2B7958u;
    // 0x2b7958: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b7958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b795c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7960: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7960u;
    {
        const bool branch_taken_0x2b7960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7960) {
            ctx->pc = 0x2B7964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7960u;
            // 0x2b7964: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7968u;
            goto label_2b7968;
        }
    }
    ctx->pc = 0x2B7968u;
label_2b7968:
    // 0x2b7968: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2b796c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b796cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b7970: 0x2010  mfhi        $a0
    ctx->pc = 0x2b7970u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2b7974: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7974u;
    {
        const bool branch_taken_0x2b7974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7974) {
            ctx->pc = 0x2B7978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7974u;
            // 0x2b7978: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7994u;
            goto label_2b7994;
        }
    }
    ctx->pc = 0x2B797Cu;
    // 0x2b797c: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2B797Cu;
    SET_GPR_U32(ctx, 31, 0x2B7984u);
    ctx->pc = 0x2B7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B797Cu;
    // 0x2b7980: 0x24a40164  addiu       $a0, $a1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2B797Cu, 0x2B7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7984u;
label_2b7984:
    // 0x2b7984: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7984u;
    {
        const bool branch_taken_0x2b7984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7984) {
            ctx->pc = 0x2B7988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7984u;
            // 0x2b7988: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7994u;
            goto label_2b7994;
        }
    }
    ctx->pc = 0x2B798Cu;
    // 0x2b798c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B798Cu;
    {
        const bool branch_taken_0x2b798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B798Cu;
        // 0x2b7990: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b798c) {
            ctx->pc = 0x2B79A4u;
            goto label_2b79a4;
        }
    }
    ctx->pc = 0x2B7994u;
label_2b7994:
    // 0x2b7994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b7994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7998: 0x8064002e  lb          $a0, 0x2E($v1)
    ctx->pc = 0x2b7998u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2b799c: 0x4202a  slt         $a0, $zero, $a0
    ctx->pc = 0x2b799cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b79a0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2b79a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2b79a4:
    // 0x2b79a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b79a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b79a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b79a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b79ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b79acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b79b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79B0u;
        // 0x2b79b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79B8u;
}
