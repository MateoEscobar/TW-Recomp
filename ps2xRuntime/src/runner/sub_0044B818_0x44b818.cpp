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

// Function: sub_0044B818
// Address: 0x44b818 - 0x44b8b8
void sub_0044B818_0x44b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B818_0x44b818");
#endif

    switch (ctx->pc) {
        case 0x44b834u: goto label_44b834;
        default: break;
    }

    ctx->pc = 0x44b818u;

    // 0x44b818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44b81c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44b820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44b824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x44b824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44b82c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44B82Cu;
    SET_GPR_U32(ctx, 31, 0x44B834u);
    ctx->pc = 0x44B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B82Cu;
    // 0x44b830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44B82Cu, 0x44B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B834u;
label_44b834:
    // 0x44b834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44b834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b838: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x44b838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x44b83c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x44b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x44b840: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44B840u;
    {
        const bool branch_taken_0x44b840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x44B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B840u;
        // 0x44b844: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b840) {
            ctx->pc = 0x44B85Cu;
            goto label_44b85c;
        }
    }
    ctx->pc = 0x44B848u;
    // 0x44b848: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x44b848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x44b84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44b850: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x44b850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x44b854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x44B854u;
    {
        const bool branch_taken_0x44b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B854u;
        // 0x44b858: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b854) {
            ctx->pc = 0x44B864u;
            goto label_44b864;
        }
    }
    ctx->pc = 0x44B85Cu;
label_44b85c:
    // 0x44b85c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44b860: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x44b860u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_44b864:
    // 0x44b864: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44b868: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44b868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44b86c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x44b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x44b870: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x44b870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x44b874: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x44b874u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x44b878: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x44b878u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x44b87c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x44b87cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x44b880: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44b884: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x44b884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x44b888: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x44b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x44b88c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44b88cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x44b890: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44B890u;
    {
        const bool branch_taken_0x44b890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B890u;
        // 0x44b894: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b890) {
            ctx->pc = 0x44B8A8u;
            goto label_44b8a8;
        }
    }
    ctx->pc = 0x44B898u;
    // 0x44b898: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44b898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44b89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b8a0: 0x8110cc4  j           func_443310
    ctx->pc = 0x44B8A0u;
    ctx->pc = 0x44B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B8A0u;
    // 0x44b8a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x44B8A8u;
label_44b8a8:
    // 0x44b8a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44b8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44b8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x44B8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B8B0u;
        // 0x44b8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B8B8u;
}
