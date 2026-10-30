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

// Function: sub_0040C478
// Address: 0x40c478 - 0x40c538
void sub_0040C478_0x40c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C478_0x40c478");
#endif

    switch (ctx->pc) {
        case 0x40c4a4u: goto label_40c4a4;
        case 0x40c4d8u: goto label_40c4d8;
        case 0x40c4ecu: goto label_40c4ec;
        case 0x40c4fcu: goto label_40c4fc;
        case 0x40c510u: goto label_40c510;
        default: break;
    }

    ctx->pc = 0x40c478u;

    // 0x40c478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x40c47c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x40c480: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x40c484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x40c48c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x40c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c490: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x40c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x40c494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40c494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c49c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40C49Cu;
    SET_GPR_U32(ctx, 31, 0x40C4A4u);
    ctx->pc = 0x40C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C49Cu;
    // 0x40c4a0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40C49Cu, 0x40C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4A4u;
label_40c4a4:
    // 0x40c4a4: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x40C4A4u;
    {
        const bool branch_taken_0x40c4a4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x40C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C4A4u;
        // 0x40c4a8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c4a4) {
            ctx->pc = 0x40C4B0u;
            goto label_40c4b0;
        }
    }
    ctx->pc = 0x40C4ACu;
    // 0x40c4ac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x40c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_40c4b0:
    // 0x40c4b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40c4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40c4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40C4B4u;
    {
        const bool branch_taken_0x40c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C4B4u;
        // 0x40c4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c4b4) {
            ctx->pc = 0x40C4CCu;
            goto label_40c4cc;
        }
    }
    ctx->pc = 0x40C4BCu;
    // 0x40c4bc: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x40C4BCu;
    {
        const bool branch_taken_0x40c4bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c4bc) {
            ctx->pc = 0x40C4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C4BCu;
            // 0x40c4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C514u;
            goto label_40c514;
        }
    }
    ctx->pc = 0x40C4C4u;
    // 0x40c4c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x40C4C4u;
    {
        const bool branch_taken_0x40c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c4c4) {
            ctx->pc = 0x40C4E4u;
            goto label_40c4e4;
        }
    }
    ctx->pc = 0x40C4CCu;
label_40c4cc:
    // 0x40c4cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40c4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c4d0: 0xc102f42  jal         func_40BD08
    ctx->pc = 0x40C4D0u;
    SET_GPR_U32(ctx, 31, 0x40C4D8u);
    ctx->pc = 0x40C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4D0u;
    // 0x40c4d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BD08u, 0x40C4D0u, 0x40C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4D8u;
label_40c4d8:
    // 0x40c4d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x40C4D8u;
    {
        const bool branch_taken_0x40c4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c4d8) {
            ctx->pc = 0x40C4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C4D8u;
            // 0x40c4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C514u;
            goto label_40c514;
        }
    }
    ctx->pc = 0x40C4E0u;
    // 0x40c4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c4e4:
    // 0x40c4e4: 0xc102eea  jal         func_40BBA8
    ctx->pc = 0x40C4E4u;
    SET_GPR_U32(ctx, 31, 0x40C4ECu);
    ctx->pc = 0x40C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4E4u;
    // 0x40c4e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BBA8u, 0x40C4E4u, 0x40C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4ECu;
label_40c4ec:
    // 0x40c4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c4f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40c4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c4f4: 0xc102ec8  jal         func_40BB20
    ctx->pc = 0x40C4F4u;
    SET_GPR_U32(ctx, 31, 0x40C4FCu);
    ctx->pc = 0x40C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C4F4u;
    // 0x40c4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BB20u, 0x40C4F4u, 0x40C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C4FCu;
label_40c4fc:
    // 0x40c4fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x40c4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40c504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c508: 0xc1023f4  jal         func_408FD0
    ctx->pc = 0x40C508u;
    SET_GPR_U32(ctx, 31, 0x40C510u);
    ctx->pc = 0x40C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C508u;
    // 0x40c50c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408FD0u, 0x40C508u, 0x40C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C510u;
label_40c510:
    // 0x40c510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c514:
    // 0x40c514: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40c514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40c518: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40c518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c51c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40c51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c520: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40c520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c528: 0x3e00008  jr          $ra
    ctx->pc = 0x40C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C528u;
        // 0x40c52c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C530u;
    // 0x40c530: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x40c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x40c534: 0x0  nop
    ctx->pc = 0x40c534u;
    // NOP
    ctx->pc = 0x40c538u;
}
