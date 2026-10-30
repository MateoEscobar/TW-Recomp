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

// Function: sub_0031B1B0
// Address: 0x31b1b0 - 0x31b24c
void sub_0031B1B0_0x31b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B1B0_0x31b1b0");
#endif

    switch (ctx->pc) {
        case 0x31b1d8u: goto label_31b1d8;
        case 0x31b218u: goto label_31b218;
        case 0x31b22cu: goto label_31b22c;
        case 0x31b244u: goto label_31b244;
        default: break;
    }

    ctx->pc = 0x31b1b0u;

    // 0x31b1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31b1b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31b1b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31b1bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31b1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31b1c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b1cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31b1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1d0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x31B1D0u;
    SET_GPR_U32(ctx, 31, 0x31B1D8u);
    ctx->pc = 0x31B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1D0u;
    // 0x31b1d4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31B1D0u, 0x31B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1D8u;
label_31b1d8:
    // 0x31b1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1dc: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x31B1DCu;
    {
        const bool branch_taken_0x31b1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1DCu;
        // 0x31b1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1dc) {
            ctx->pc = 0x31B250u;
            return;
        }
    }
    ctx->pc = 0x31B1E4u;
    // 0x31b1e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x31b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31b1e8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31b1ec: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31b1ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x31b1f0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31B1F0u;
    {
        const bool branch_taken_0x31b1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F0u;
        // 0x31b1f4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1f0) {
            ctx->pc = 0x31B24Cu;
            return;
        }
    }
    ctx->pc = 0x31B1F8u;
    // 0x31b1f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31b1fc: 0x24421250  addiu       $v0, $v0, 0x1250
    ctx->pc = 0x31b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4688));
    // 0x31b200: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31b204: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31b204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b208: 0x800008  jr          $a0
    ctx->pc = 0x31B208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31B210u: goto label_31b210;
            case 0x31B220u: goto label_31b220;
            case 0x31B234u: goto label_31b234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B208u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31B210u;
label_31b210:
    // 0x31b210: 0xc0c69ca  jal         func_31A728
    ctx->pc = 0x31B210u;
    SET_GPR_U32(ctx, 31, 0x31B218u);
    ctx->pc = 0x31B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B210u;
    // 0x31b214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A728u, 0x31B210u, 0x31B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B218u;
label_31b218:
    // 0x31b218: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31B218u;
    {
        const bool branch_taken_0x31b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B218u;
        // 0x31b21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b218) {
            ctx->pc = 0x31B250u;
            return;
        }
    }
    ctx->pc = 0x31B220u;
label_31b220:
    // 0x31b220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b224: 0xc0c6a06  jal         func_31A818
    ctx->pc = 0x31B224u;
    SET_GPR_U32(ctx, 31, 0x31B22Cu);
    ctx->pc = 0x31B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B224u;
    // 0x31b228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A818u, 0x31B224u, 0x31B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B22Cu;
label_31b22c:
    // 0x31b22c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B22Cu;
    {
        const bool branch_taken_0x31b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B22Cu;
        // 0x31b230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b22c) {
            ctx->pc = 0x31B250u;
            return;
        }
    }
    ctx->pc = 0x31B234u;
label_31b234:
    // 0x31b234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31b238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b23c: 0xc0c6b2e  jal         func_31ACB8
    ctx->pc = 0x31B23Cu;
    SET_GPR_U32(ctx, 31, 0x31B244u);
    ctx->pc = 0x31B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B23Cu;
    // 0x31b240: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ACB8u, 0x31B23Cu, 0x31B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B244u;
label_31b244:
    // 0x31b244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B244u;
    {
        const bool branch_taken_0x31b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B244u;
        // 0x31b248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b244) {
            ctx->pc = 0x31B250u;
            return;
        }
    }
    ctx->pc = 0x31B24Cu;
}
