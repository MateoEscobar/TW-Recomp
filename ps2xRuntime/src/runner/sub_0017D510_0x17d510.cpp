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

// Function: sub_0017D510
// Address: 0x17d510 - 0x17d578
void sub_0017D510_0x17d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D510_0x17d510");
#endif

    switch (ctx->pc) {
        case 0x17d55cu: goto label_17d55c;
        default: break;
    }

    ctx->pc = 0x17d510u;

    // 0x17d510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d514: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17d514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d51c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x17d51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d520: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x17d524: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x17d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17d528: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d52c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D52Cu;
    {
        const bool branch_taken_0x17d52c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D52Cu;
        // 0x17d530: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d52c) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D534u;
    // 0x17d534: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17d538: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17d53c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17d540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d544: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D548u;
    {
        const bool branch_taken_0x17d548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D548u;
        // 0x17d54c: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d548) {
            ctx->pc = 0x17D568u;
            goto label_17d568;
        }
    }
    ctx->pc = 0x17D550u;
    // 0x17d550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d554: 0xc05f142  jal         func_17C508
    ctx->pc = 0x17D554u;
    SET_GPR_U32(ctx, 31, 0x17D55Cu);
    ctx->pc = 0x17D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D554u;
    // 0x17d558: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C508u, 0x17D554u, 0x17D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D55Cu;
label_17d55c:
    // 0x17d55c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D55Cu;
    {
        const bool branch_taken_0x17d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D55Cu;
        // 0x17d560: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d55c) {
            ctx->pc = 0x17D56Cu;
            goto label_17d56c;
        }
    }
    ctx->pc = 0x17D564u;
label_17d564:
    // 0x17d564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d568:
    // 0x17d568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d56c:
    // 0x17d56c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D56Cu;
        // 0x17d570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D574u;
    // 0x17d574: 0x0  nop
    ctx->pc = 0x17d574u;
    // NOP
    ctx->pc = 0x17d578u;
}
