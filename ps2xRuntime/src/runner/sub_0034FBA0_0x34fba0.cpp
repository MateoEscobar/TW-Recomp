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

// Function: sub_0034FBA0
// Address: 0x34fba0 - 0x34fc2c
void sub_0034FBA0_0x34fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FBA0_0x34fba0");
#endif

    switch (ctx->pc) {
        case 0x34fba0u: goto label_34fba0;
        case 0x34fba4u: goto label_34fba4;
        case 0x34fba8u: goto label_34fba8;
        case 0x34fbacu: goto label_34fbac;
        case 0x34fbb0u: goto label_34fbb0;
        case 0x34fbb4u: goto label_34fbb4;
        case 0x34fbb8u: goto label_34fbb8;
        case 0x34fbbcu: goto label_34fbbc;
        case 0x34fbc0u: goto label_34fbc0;
        case 0x34fbc4u: goto label_34fbc4;
        case 0x34fbc8u: goto label_34fbc8;
        case 0x34fbccu: goto label_34fbcc;
        case 0x34fbd0u: goto label_34fbd0;
        case 0x34fbd4u: goto label_34fbd4;
        case 0x34fbd8u: goto label_34fbd8;
        case 0x34fbdcu: goto label_34fbdc;
        case 0x34fbe0u: goto label_34fbe0;
        case 0x34fbe4u: goto label_34fbe4;
        case 0x34fbe8u: goto label_34fbe8;
        case 0x34fbecu: goto label_34fbec;
        case 0x34fbf0u: goto label_34fbf0;
        case 0x34fbf4u: goto label_34fbf4;
        case 0x34fbf8u: goto label_34fbf8;
        case 0x34fbfcu: goto label_34fbfc;
        case 0x34fc00u: goto label_34fc00;
        case 0x34fc04u: goto label_34fc04;
        case 0x34fc08u: goto label_34fc08;
        case 0x34fc0cu: goto label_34fc0c;
        case 0x34fc10u: goto label_34fc10;
        case 0x34fc14u: goto label_34fc14;
        case 0x34fc18u: goto label_34fc18;
        case 0x34fc1cu: goto label_34fc1c;
        case 0x34fc20u: goto label_34fc20;
        case 0x34fc24u: goto label_34fc24;
        case 0x34fc28u: goto label_34fc28;
        default: break;
    }

    ctx->pc = 0x34fba0u;

label_34fba0:
    // 0x34fba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34fba4:
    // 0x34fba4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x34fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_34fba8:
    // 0x34fba8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x34fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_34fbac:
    // 0x34fbac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34fbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34fbb0:
    // 0x34fbb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34fbb4:
    // 0x34fbb4: 0xc0e40aa  jal         func_3902A8
label_34fbb8:
    if (ctx->pc == 0x34FBB8u) {
        ctx->pc = 0x34FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBB4u;
        // 0x34fbb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FBBCu;
        goto label_34fbbc;
    }
    ctx->pc = 0x34FBB4u;
    SET_GPR_U32(ctx, 31, 0x34FBBCu);
    ctx->pc = 0x34FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBB4u;
    // 0x34fbb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x34FBB4u, 0x34FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBBCu;
label_34fbbc:
    // 0x34fbbc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x34fbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34fbc0:
    // 0x34fbc0: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
label_34fbc4:
    if (ctx->pc == 0x34FBC4u) {
        ctx->pc = 0x34FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBC0u;
        // 0x34fbc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FBC8u;
        goto label_34fbc8;
    }
    ctx->pc = 0x34FBC0u;
    {
        const bool branch_taken_0x34fbc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBC0u;
        // 0x34fbc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbc0) {
            ctx->pc = 0x34FBF4u;
            goto label_34fbf4;
        }
    }
    ctx->pc = 0x34FBC8u;
label_34fbc8:
    // 0x34fbc8: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x34fbc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_34fbcc:
    // 0x34fbcc: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x34fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_34fbd0:
    // 0x34fbd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34fbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34fbd4:
    // 0x34fbd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34fbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34fbd8:
    // 0x34fbd8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34fbdc:
    // 0x34fbdc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_34fbe0:
    // 0x34fbe0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x34fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34fbe4:
    // 0x34fbe4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_34fbe8:
    // 0x34fbe8: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x34fbe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_34fbec:
    // 0x34fbec: 0xc0d4458  jal         func_351160
label_34fbf0:
    if (ctx->pc == 0x34FBF0u) {
        ctx->pc = 0x34FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBECu;
        // 0x34fbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FBF4u;
        goto label_34fbf4;
    }
    ctx->pc = 0x34FBECu;
    SET_GPR_U32(ctx, 31, 0x34FBF4u);
    ctx->pc = 0x34FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBECu;
    // 0x34fbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351160u, 0x34FBECu, 0x34FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBF4u;
label_34fbf4:
    // 0x34fbf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x34fbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34fbf8:
    // 0x34fbf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34fbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34fbfc:
    // 0x34fbfc: 0x3e00008  jr          $ra
label_34fc00:
    if (ctx->pc == 0x34FC00u) {
        ctx->pc = 0x34FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBFCu;
        // 0x34fc00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FC04u;
        goto label_34fc04;
    }
    ctx->pc = 0x34FBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBFCu;
        // 0x34fc00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FC04u;
label_34fc04:
    // 0x34fc04: 0x0  nop
    ctx->pc = 0x34fc04u;
    // NOP
label_34fc08:
    // 0x34fc08: 0x2c8200bf  sltiu       $v0, $a0, 0xBF
    ctx->pc = 0x34fc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
label_34fc0c:
    // 0x34fc0c: 0x10400244  beqz        $v0, . + 4 + (0x244 << 2)
label_34fc10:
    if (ctx->pc == 0x34FC10u) {
        ctx->pc = 0x34FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC0Cu;
        // 0x34fc10: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34FC14u;
        goto label_34fc14;
    }
    ctx->pc = 0x34FC0Cu;
    {
        const bool branch_taken_0x34fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC0Cu;
        // 0x34fc10: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc0c) {
            ctx->pc = 0x350520u;
            return;
        }
    }
    ctx->pc = 0x34FC14u;
label_34fc14:
    // 0x34fc14: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x34fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_34fc18:
    // 0x34fc18: 0x244285d0  addiu       $v0, $v0, -0x7A30
    ctx->pc = 0x34fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
label_34fc1c:
    // 0x34fc1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34fc20:
    // 0x34fc20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34fc24:
    // 0x34fc24: 0x800008  jr          $a0
label_34fc28:
    if (ctx->pc == 0x34FC28u) {
        ctx->pc = 0x34FC2Cu;
        goto label_fallthrough_0x34fc24;
    }
    ctx->pc = 0x34FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FC24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x34fc24:
    ctx->pc = 0x34FC2Cu;
}
