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

// Function: sub_00227428
// Address: 0x227428 - 0x2274a0
void sub_00227428_0x227428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227428_0x227428");
#endif

    switch (ctx->pc) {
        case 0x227450u: goto label_227450;
        case 0x227468u: goto label_227468;
        case 0x227470u: goto label_227470;
        default: break;
    }

    ctx->pc = 0x227428u;

    // 0x227428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22742c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x227430: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x227430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x227434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22743c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22743cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227444: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x227448: 0xc0e4060  jal         func_390180
    ctx->pc = 0x227448u;
    SET_GPR_U32(ctx, 31, 0x227450u);
    ctx->pc = 0x22744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227448u;
    // 0x22744c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x227448u, 0x227450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227450u;
label_227450:
    // 0x227450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x227450u;
    {
        const bool branch_taken_0x227450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227450u;
        // 0x227454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227450) {
            ctx->pc = 0x227488u;
            goto label_227488;
        }
    }
    ctx->pc = 0x227458u;
    // 0x227458: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x22745c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x22745cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x227460: 0xc0e4060  jal         func_390180
    ctx->pc = 0x227460u;
    SET_GPR_U32(ctx, 31, 0x227468u);
    ctx->pc = 0x227464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227460u;
    // 0x227464: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x227460u, 0x227468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227468u;
label_227468:
    // 0x227468: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x227468u;
    SET_GPR_U32(ctx, 31, 0x227470u);
    ctx->pc = 0x22746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227468u;
    // 0x22746c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x227468u, 0x227470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227470u;
label_227470:
    // 0x227470: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x227470u;
    {
        const bool branch_taken_0x227470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227470) {
            ctx->pc = 0x227474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227470u;
            // 0x227474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227488u;
            goto label_227488;
        }
    }
    ctx->pc = 0x227478u;
    // 0x227478: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x22747c: 0x10710002  beq         $v1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22747Cu;
    {
        const bool branch_taken_0x22747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x227480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22747Cu;
        // 0x227480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22747c) {
            ctx->pc = 0x227488u;
            goto label_227488;
        }
    }
    ctx->pc = 0x227484u;
    // 0x227484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227488:
    // 0x227488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x227488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22748c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22748cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227494: 0x3e00008  jr          $ra
    ctx->pc = 0x227494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227494u;
        // 0x227498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22749Cu;
    // 0x22749c: 0x0  nop
    ctx->pc = 0x22749cu;
    // NOP
    ctx->pc = 0x2274a0u;
}
