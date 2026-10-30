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

// Function: sub_001927D8
// Address: 0x1927d8 - 0x192858
void sub_001927D8_0x1927d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001927D8_0x1927d8");
#endif

    switch (ctx->pc) {
        case 0x19280cu: goto label_19280c;
        case 0x192834u: goto label_192834;
        default: break;
    }

    ctx->pc = 0x1927d8u;

    // 0x1927d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1927dc: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1927e0: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x1927e4: 0x3c080019  lui         $t0, 0x19
    ctx->pc = 0x1927e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25 << 16));
    // 0x1927e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1927e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1927ec: 0x24c62618  addiu       $a2, $a2, 0x2618
    ctx->pc = 0x1927ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9752));
    // 0x1927f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1927f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1927f4: 0x24e72648  addiu       $a3, $a3, 0x2648
    ctx->pc = 0x1927f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9800));
    // 0x1927f8: 0x25082650  addiu       $t0, $t0, 0x2650
    ctx->pc = 0x1927f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9808));
    // 0x1927fc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192800: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x192804: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x192804u;
    SET_GPR_U32(ctx, 31, 0x19280Cu);
    ctx->pc = 0x192808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192804u;
    // 0x192808: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x192804u, 0x19280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19280Cu;
label_19280c:
    // 0x19280c: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19280Cu;
    {
        const bool branch_taken_0x19280c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19280Cu;
        // 0x192810: 0xae02cd98  sw          $v0, -0x3268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19280c) {
            ctx->pc = 0x192844u;
            goto label_192844;
        }
    }
    ctx->pc = 0x192814u;
    // 0x192814: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x192818: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19281c: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x192820: 0x24a52688  addiu       $a1, $a1, 0x2688
    ctx->pc = 0x192820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9864));
    // 0x192824: 0x24c62740  addiu       $a2, $a2, 0x2740
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10048));
    // 0x192828: 0x24e727d0  addiu       $a3, $a3, 0x27D0
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10192));
    // 0x19282c: 0xc11a9f6  jal         func_46A7D8
    ctx->pc = 0x19282Cu;
    SET_GPR_U32(ctx, 31, 0x192834u);
    ctx->pc = 0x192830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19282Cu;
    // 0x192830: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A7D8u, 0x19282Cu, 0x192834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192834u;
label_192834:
    // 0x192834: 0x8e03cd98  lw          $v1, -0x3268($s0)
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954392)));
    // 0x192838: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x192838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19283c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19283Cu;
    {
        const bool branch_taken_0x19283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19283Cu;
        // 0x192840: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19283c) {
            ctx->pc = 0x192848u;
            goto label_192848;
        }
    }
    ctx->pc = 0x192844u;
label_192844:
    // 0x192844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192848:
    // 0x192848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19284c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192850: 0x3e00008  jr          $ra
    ctx->pc = 0x192850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192850u;
        // 0x192854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192858u;
}
