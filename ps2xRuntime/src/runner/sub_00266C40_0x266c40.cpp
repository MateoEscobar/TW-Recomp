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

// Function: sub_00266C40
// Address: 0x266c40 - 0x266d00
void sub_00266C40_0x266c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C40_0x266c40");
#endif

    switch (ctx->pc) {
        case 0x266c84u: goto label_266c84;
        default: break;
    }

    ctx->pc = 0x266c40u;

    // 0x266c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266c44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266c50: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x266C50u;
    {
        const bool branch_taken_0x266c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C50u;
        // 0x266c54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c50) {
            ctx->pc = 0x266CE8u;
            goto label_266ce8;
        }
    }
    ctx->pc = 0x266C58u;
    // 0x266c58: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x266C58u;
    {
        const bool branch_taken_0x266c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C58u;
        // 0x266c5c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c58) {
            ctx->pc = 0x266CE8u;
            goto label_266ce8;
        }
    }
    ctx->pc = 0x266C60u;
    // 0x266c60: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x266c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x266c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x266c68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266c70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266c74: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x266C74u;
    {
        const bool branch_taken_0x266c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C74u;
        // 0x266c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c74) {
            ctx->pc = 0x266CECu;
            goto label_266cec;
        }
    }
    ctx->pc = 0x266C7Cu;
    // 0x266c7c: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x266C7Cu;
    SET_GPR_U32(ctx, 31, 0x266C84u);
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x266C7Cu, 0x266C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C84u;
label_266c84:
    // 0x266c84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c88: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x266c88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x266c8c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x266c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x266c90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266c98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266c98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266c9c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x266C9Cu;
    {
        const bool branch_taken_0x266c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C9Cu;
        // 0x266ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c9c) {
            ctx->pc = 0x266CECu;
            goto label_266cec;
        }
    }
    ctx->pc = 0x266CA4u;
    // 0x266ca4: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x266ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x266ca8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x266ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x266cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266CACu;
    {
        const bool branch_taken_0x266cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CACu;
        // 0x266cb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cac) {
            ctx->pc = 0x266CC0u;
            goto label_266cc0;
        }
    }
    ctx->pc = 0x266CB4u;
    // 0x266cb4: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x266cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x266cb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x266CB8u;
    {
        const bool branch_taken_0x266cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266cb8) {
            ctx->pc = 0x266CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266CB8u;
            // 0x266cbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CE0u;
            goto label_266ce0;
        }
    }
    ctx->pc = 0x266CC0u;
label_266cc0:
    // 0x266cc0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x266cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x266cc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266CC4u;
    {
        const bool branch_taken_0x266cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x266CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CC4u;
        // 0x266cc8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cc4) {
            ctx->pc = 0x266CDCu;
            goto label_266cdc;
        }
    }
    ctx->pc = 0x266CCCu;
    // 0x266ccc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266CCCu;
    {
        const bool branch_taken_0x266ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x266CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CCCu;
        // 0x266cd0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ccc) {
            ctx->pc = 0x266CDCu;
            goto label_266cdc;
        }
    }
    ctx->pc = 0x266CD4u;
    // 0x266cd4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266CD4u;
    {
        const bool branch_taken_0x266cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266cd4) {
            ctx->pc = 0x266CE0u;
            goto label_266ce0;
        }
    }
    ctx->pc = 0x266CDCu;
label_266cdc:
    // 0x266cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266ce0:
    // 0x266ce0: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266CE0u;
    {
        const bool branch_taken_0x266ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CE0u;
        // 0x266ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ce0) {
            ctx->pc = 0x266CECu;
            goto label_266cec;
        }
    }
    ctx->pc = 0x266CE8u;
label_266ce8:
    // 0x266ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266cec:
    // 0x266cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x266cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x266CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CF4u;
        // 0x266cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266CFCu;
    // 0x266cfc: 0x0  nop
    ctx->pc = 0x266cfcu;
    // NOP
    ctx->pc = 0x266d00u;
}
