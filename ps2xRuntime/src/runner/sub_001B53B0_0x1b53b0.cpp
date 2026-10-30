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

// Function: sub_001B53B0
// Address: 0x1b53b0 - 0x1b5450
void sub_001B53B0_0x1b53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B53B0_0x1b53b0");
#endif

    switch (ctx->pc) {
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5440u: goto label_1b5440;
        default: break;
    }

    ctx->pc = 0x1b53b0u;

    // 0x1b53b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b53b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b53b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53b8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1b53b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b53bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b53c0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1b53c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53c8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B53C8u;
    {
        const bool branch_taken_0x1b53c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C8u;
        // 0x1b53cc: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53c8) {
            ctx->pc = 0x1B5400u;
            goto label_1b5400;
        }
    }
    ctx->pc = 0x1B53D0u;
    // 0x1b53d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B53D0u;
    {
        const bool branch_taken_0x1b53d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53D0u;
        // 0x1b53d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53d0) {
            ctx->pc = 0x1B53F0u;
            goto label_1b53f0;
        }
    }
    ctx->pc = 0x1B53D8u;
    // 0x1b53d8: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B53D8u;
    {
        const bool branch_taken_0x1b53d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53D8u;
        // 0x1b53dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53d8) {
            ctx->pc = 0x1B541Cu;
            goto label_1b541c;
        }
    }
    ctx->pc = 0x1B53E0u;
    // 0x1b53e0: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B53E0u;
    {
        const bool branch_taken_0x1b53e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53E0u;
        // 0x1b53e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53e0) {
            ctx->pc = 0x1B542Cu;
            goto label_1b542c;
        }
    }
    ctx->pc = 0x1B53E8u;
    // 0x1b53e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B53E8u;
    {
        const bool branch_taken_0x1b53e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53e8) {
            ctx->pc = 0x1B5444u;
            goto label_1b5444;
        }
    }
    ctx->pc = 0x1B53F0u;
label_1b53f0:
    // 0x1b53f0: 0xc06d2e8  jal         func_1B4BA0
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1B53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53F0u;
    // 0x1b53f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BA0u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B53F8u;
    {
        const bool branch_taken_0x1b53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53F8u;
        // 0x1b53fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53f8) {
            ctx->pc = 0x1B5444u;
            goto label_1b5444;
        }
    }
    ctx->pc = 0x1B5400u;
label_1b5400:
    // 0x1b5400: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x1b5400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b5404: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b540c: 0xc06d326  jal         func_1B4C98
    ctx->pc = 0x1B540Cu;
    SET_GPR_U32(ctx, 31, 0x1B5414u);
    ctx->pc = 0x1B5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B540Cu;
    // 0x1b5410: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C98u, 0x1B540Cu, 0x1B5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5414u;
label_1b5414:
    // 0x1b5414: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B5414u;
    {
        const bool branch_taken_0x1b5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5414u;
        // 0x1b5418: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5414) {
            ctx->pc = 0x1B5444u;
            goto label_1b5444;
        }
    }
    ctx->pc = 0x1B541Cu;
label_1b541c:
    // 0x1b541c: 0xc06d3c0  jal         func_1B4F00
    ctx->pc = 0x1B541Cu;
    SET_GPR_U32(ctx, 31, 0x1B5424u);
    ctx->pc = 0x1B5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B541Cu;
    // 0x1b5420: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F00u, 0x1B541Cu, 0x1B5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5424u;
label_1b5424:
    // 0x1b5424: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5424u;
    {
        const bool branch_taken_0x1b5424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5424u;
        // 0x1b5428: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5424) {
            ctx->pc = 0x1B5444u;
            goto label_1b5444;
        }
    }
    ctx->pc = 0x1B542Cu;
label_1b542c:
    // 0x1b542c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b542cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5430: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b5430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5434: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1b5434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5438: 0xc06d402  jal         func_1B5008
    ctx->pc = 0x1B5438u;
    SET_GPR_U32(ctx, 31, 0x1B5440u);
    ctx->pc = 0x1B543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5438u;
    // 0x1b543c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5008u, 0x1B5438u, 0x1B5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5440u;
label_1b5440:
    // 0x1b5440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5444:
    // 0x1b5444: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5444u;
        // 0x1b5448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B544Cu;
    // 0x1b544c: 0x0  nop
    ctx->pc = 0x1b544cu;
    // NOP
    ctx->pc = 0x1b5450u;
}
