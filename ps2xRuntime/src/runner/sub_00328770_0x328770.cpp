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

// Function: sub_00328770
// Address: 0x328770 - 0x3287e0
void sub_00328770_0x328770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328770_0x328770");
#endif

    switch (ctx->pc) {
        case 0x3287bcu: goto label_3287bc;
        case 0x3287d4u: goto label_3287d4;
        default: break;
    }

    ctx->pc = 0x328770u;

    // 0x328770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328774: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x328774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32877c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x32877cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x328780: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x328780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x328784: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x328784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x328788: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x328788u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32878c: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32878Cu;
    {
        const bool branch_taken_0x32878c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x328790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32878Cu;
        // 0x328790: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32878c) {
            ctx->pc = 0x3287D8u;
            goto label_3287d8;
        }
    }
    ctx->pc = 0x328794u;
    // 0x328794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x328794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x328798: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x328798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32879c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x32879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3287a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3287a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3287a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3287a8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3287a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3287ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3287ACu;
    {
        const bool branch_taken_0x3287ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287ACu;
        // 0x3287b0: 0x24c20280  addiu       $v0, $a2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287ac) {
            ctx->pc = 0x3287C4u;
            goto label_3287c4;
        }
    }
    ctx->pc = 0x3287B4u;
    // 0x3287b4: 0xc0ca47c  jal         func_3291F0
    ctx->pc = 0x3287B4u;
    SET_GPR_U32(ctx, 31, 0x3287BCu);
    ctx->pc = 0x3287B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287B4u;
    // 0x3287b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291F0u, 0x3287B4u, 0x3287BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287BCu;
label_3287bc:
    // 0x3287bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3287BCu;
    {
        const bool branch_taken_0x3287bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287BCu;
        // 0x3287c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287bc) {
            ctx->pc = 0x3287D8u;
            goto label_3287d8;
        }
    }
    ctx->pc = 0x3287C4u;
label_3287c4:
    // 0x3287c4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3287c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3287c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3287c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3287cc: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3287CCu;
    SET_GPR_U32(ctx, 31, 0x3287D4u);
    ctx->pc = 0x3287D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287CCu;
    // 0x3287d0: 0x24a55370  addiu       $a1, $a1, 0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3287CCu, 0x3287D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287D4u;
label_3287d4:
    // 0x3287d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3287d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3287d8:
    // 0x3287d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3287D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287D8u;
        // 0x3287dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3287D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3287E0u;
}
