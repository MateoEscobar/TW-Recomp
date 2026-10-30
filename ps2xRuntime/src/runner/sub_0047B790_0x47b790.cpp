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

// Function: sub_0047B790
// Address: 0x47b790 - 0x47b818
void sub_0047B790_0x47b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B790_0x47b790");
#endif

    switch (ctx->pc) {
        case 0x47b7e4u: goto label_47b7e4;
        default: break;
    }

    ctx->pc = 0x47b790u;

    // 0x47b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b794: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47b798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b7a0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x47b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x47b7a4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x47B7A4u;
    {
        const bool branch_taken_0x47b7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B7A4u;
        // 0x47b7a8: 0x8f828910  lw          $v0, -0x76F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b7a4) {
            ctx->pc = 0x47B7F8u;
            goto label_47b7f8;
        }
    }
    ctx->pc = 0x47B7ACu;
    // 0x47b7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b7b0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x47b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b7b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47b7b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47B7B8u;
    {
        const bool branch_taken_0x47b7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b7b8) {
            ctx->pc = 0x47B7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B7B8u;
            // 0x47b7bc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B7D8u;
            goto label_47b7d8;
        }
    }
    ctx->pc = 0x47B7C0u;
    // 0x47b7c0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x47b7c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47b7c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b7c8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B7C8u;
    {
        const bool branch_taken_0x47b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b7c8) {
            ctx->pc = 0x47B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B7C8u;
            // 0x47b7cc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B7D8u;
            goto label_47b7d8;
        }
    }
    ctx->pc = 0x47B7D0u;
    // 0x47b7d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B7D0u;
    {
        const bool branch_taken_0x47b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B7D0u;
        // 0x47b7d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b7d0) {
            ctx->pc = 0x47B7E4u;
            goto label_47b7e4;
        }
    }
    ctx->pc = 0x47B7D8u;
label_47b7d8:
    // 0x47b7d8: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x47b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x47b7dc: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47B7DCu;
    SET_GPR_U32(ctx, 31, 0x47B7E4u);
    ctx->pc = 0x47B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B7DCu;
    // 0x47b7e0: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47B7DCu, 0x47B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B7E4u;
label_47b7e4:
    // 0x47b7e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b7e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47B7E8u;
    {
        const bool branch_taken_0x47b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B7E8u;
        // 0x47b7ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b7e8) {
            ctx->pc = 0x47B804u;
            goto label_47b804;
        }
    }
    ctx->pc = 0x47B7F0u;
    // 0x47b7f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B7F0u;
    {
        const bool branch_taken_0x47b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B7F0u;
        // 0x47b7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b7f0) {
            ctx->pc = 0x47B804u;
            goto label_47b804;
        }
    }
    ctx->pc = 0x47B7F8u;
label_47b7f8:
    // 0x47b7f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x47b7fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x47b800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b804:
    // 0x47b804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x47B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B80Cu;
        // 0x47b810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B814u;
    // 0x47b814: 0x0  nop
    ctx->pc = 0x47b814u;
    // NOP
    ctx->pc = 0x47b818u;
}
