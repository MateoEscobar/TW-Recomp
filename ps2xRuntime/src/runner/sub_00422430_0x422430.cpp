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

// Function: sub_00422430
// Address: 0x422430 - 0x4224b0
void sub_00422430_0x422430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422430_0x422430");
#endif

    ctx->pc = 0x422430u;

    // 0x422430: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x422430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x422434: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x422434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x422438: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x422438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x42243c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x42243Cu;
    {
        const bool branch_taken_0x42243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42243Cu;
        // 0x422440: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42243c) {
            ctx->pc = 0x4224C4u;
            return;
        }
    }
    ctx->pc = 0x422444u;
    // 0x422444: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x422444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x422448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x422448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42244c: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x42244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x422450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x422450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x422454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x422454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x422458: 0x800008  jr          $a0
    ctx->pc = 0x422458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x422460u: goto label_422460;
            case 0x422470u: goto label_422470;
            case 0x422480u: goto label_422480;
            case 0x422490u: goto label_422490;
            case 0x4224A0u: goto label_4224a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x422460u;
label_422460:
    // 0x422460: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x422460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x422464: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x422464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x422468: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x422468u;
    {
        const bool branch_taken_0x422468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422468u;
        // 0x42246c: 0x244271b8  addiu       $v0, $v0, 0x71B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422468) {
            ctx->pc = 0x4224BCu;
            return;
        }
    }
    ctx->pc = 0x422470u;
label_422470:
    // 0x422470: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x422470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x422474: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x422474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x422478: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x422478u;
    {
        const bool branch_taken_0x422478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422478u;
        // 0x42247c: 0x244271c0  addiu       $v0, $v0, 0x71C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422478) {
            ctx->pc = 0x4224BCu;
            return;
        }
    }
    ctx->pc = 0x422480u;
label_422480:
    // 0x422480: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x422480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x422484: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x422484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x422488: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x422488u;
    {
        const bool branch_taken_0x422488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422488u;
        // 0x42248c: 0x24425510  addiu       $v0, $v0, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422488) {
            ctx->pc = 0x4224BCu;
            return;
        }
    }
    ctx->pc = 0x422490u;
label_422490:
    // 0x422490: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x422490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x422494: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x422494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x422498: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x422498u;
    {
        const bool branch_taken_0x422498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422498u;
        // 0x42249c: 0x24425500  addiu       $v0, $v0, 0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422498) {
            ctx->pc = 0x4224BCu;
            return;
        }
    }
    ctx->pc = 0x4224A0u;
label_4224a0:
    // 0x4224a0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4224a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x4224a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4224a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4224A8u;
    {
        const bool branch_taken_0x4224a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4224ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4224A8u;
        // 0x4224ac: 0x24425818  addiu       $v0, $v0, 0x5818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4224a8) {
            ctx->pc = 0x4224BCu;
            return;
        }
    }
    ctx->pc = 0x4224B0u;
}
