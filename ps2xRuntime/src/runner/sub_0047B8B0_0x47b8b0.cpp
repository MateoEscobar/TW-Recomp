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

// Function: sub_0047B8B0
// Address: 0x47b8b0 - 0x47b938
void sub_0047B8B0_0x47b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B8B0_0x47b8b0");
#endif

    switch (ctx->pc) {
        case 0x47b904u: goto label_47b904;
        default: break;
    }

    ctx->pc = 0x47b8b0u;

    // 0x47b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b8b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47b8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b8c0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x47b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x47b8c4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x47B8C4u;
    {
        const bool branch_taken_0x47b8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B8C4u;
        // 0x47b8c8: 0x8f828918  lw          $v0, -0x76E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b8c4) {
            ctx->pc = 0x47B918u;
            goto label_47b918;
        }
    }
    ctx->pc = 0x47B8CCu;
    // 0x47b8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47b8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b8d0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x47b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47b8d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47B8D8u;
    {
        const bool branch_taken_0x47b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b8d8) {
            ctx->pc = 0x47B8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B8D8u;
            // 0x47b8dc: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B8F8u;
            goto label_47b8f8;
        }
    }
    ctx->pc = 0x47B8E0u;
    // 0x47b8e0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x47b8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47b8e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b8e8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B8E8u;
    {
        const bool branch_taken_0x47b8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b8e8) {
            ctx->pc = 0x47B8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B8E8u;
            // 0x47b8ec: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B8F8u;
            goto label_47b8f8;
        }
    }
    ctx->pc = 0x47B8F0u;
    // 0x47b8f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B8F0u;
    {
        const bool branch_taken_0x47b8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B8F0u;
        // 0x47b8f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b8f0) {
            ctx->pc = 0x47B904u;
            goto label_47b904;
        }
    }
    ctx->pc = 0x47B8F8u;
label_47b8f8:
    // 0x47b8f8: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x47b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x47b8fc: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47B8FCu;
    SET_GPR_U32(ctx, 31, 0x47B904u);
    ctx->pc = 0x47B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B8FCu;
    // 0x47b900: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47B8FCu, 0x47B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B904u;
label_47b904:
    // 0x47b904: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b908: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47B908u;
    {
        const bool branch_taken_0x47b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B908u;
        // 0x47b90c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b908) {
            ctx->pc = 0x47B924u;
            goto label_47b924;
        }
    }
    ctx->pc = 0x47B910u;
    // 0x47b910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B910u;
    {
        const bool branch_taken_0x47b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B910u;
        // 0x47b914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b910) {
            ctx->pc = 0x47B924u;
            goto label_47b924;
        }
    }
    ctx->pc = 0x47B918u;
label_47b918:
    // 0x47b918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b91c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x47b920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b924:
    // 0x47b924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x47B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B92Cu;
        // 0x47b930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B934u;
    // 0x47b934: 0x0  nop
    ctx->pc = 0x47b934u;
    // NOP
    ctx->pc = 0x47b938u;
}
