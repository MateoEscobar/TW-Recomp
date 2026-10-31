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

// Function: sub_00266B50
// Address: 0x266b50 - 0x266c40
void sub_00266B50_0x266b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266B50_0x266b50");
#endif

    switch (ctx->pc) {
        case 0x266b78u: goto label_266b78;
        case 0x266b90u: goto label_266b90;
        case 0x266c20u: goto label_266c20;
        default: break;
    }

    ctx->pc = 0x266b50u;

    // 0x266b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266b54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x266b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x266b58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x266b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x266b5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x266b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x266b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x266b64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x266b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b68: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x266B68u;
    {
        const bool branch_taken_0x266b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B68u;
        // 0x266b6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b68) {
            ctx->pc = 0x266BD0u;
            goto label_266bd0;
        }
    }
    ctx->pc = 0x266B70u;
    // 0x266b70: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x266B70u;
    SET_GPR_U32(ctx, 31, 0x266B78u);
    ctx->pc = 0x266B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B70u;
    // 0x266b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x266B70u, 0x266B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B78u;
label_266b78:
    // 0x266b78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b7c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x266b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x266b80: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266B80u;
    {
        const bool branch_taken_0x266b80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x266b80) {
            ctx->pc = 0x266B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B80u;
            // 0x266b84: 0xde4300e0  ld          $v1, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266BA0u;
            goto label_266ba0;
        }
    }
    ctx->pc = 0x266B88u;
    // 0x266b88: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x266B88u;
    SET_GPR_U32(ctx, 31, 0x266B90u);
    ctx->pc = 0x266B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B88u;
    // 0x266b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x266B88u, 0x266B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B90u;
label_266b90:
    // 0x266b90: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x266b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x266b94: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x266B94u;
    {
        const bool branch_taken_0x266b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x266B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B94u;
        // 0x266b98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b94) {
            ctx->pc = 0x266C24u;
            goto label_266c24;
        }
    }
    ctx->pc = 0x266B9Cu;
    // 0x266b9c: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x266b9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_266ba0:
    // 0x266ba0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x266ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x266ba4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266ba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266bac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266bacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266bb0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x266BB0u;
    {
        const bool branch_taken_0x266bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BB0u;
        // 0x266bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bb0) {
            ctx->pc = 0x266C24u;
            goto label_266c24;
        }
    }
    ctx->pc = 0x266BB8u;
    // 0x266bb8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x266bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x266bbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266bc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266bc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266bc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266BC8u;
    {
        const bool branch_taken_0x266bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BC8u;
        // 0x266bcc: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bc8) {
            ctx->pc = 0x266BD8u;
            goto label_266bd8;
        }
    }
    ctx->pc = 0x266BD0u;
label_266bd0:
    // 0x266bd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x266BD0u;
    {
        const bool branch_taken_0x266bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BD0u;
        // 0x266bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bd0) {
            ctx->pc = 0x266C24u;
            goto label_266c24;
        }
    }
    ctx->pc = 0x266BD8u;
label_266bd8:
    // 0x266bd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x266bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x266bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266BDCu;
    {
        const bool branch_taken_0x266bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BDCu;
        // 0x266be0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bdc) {
            ctx->pc = 0x266BF0u;
            goto label_266bf0;
        }
    }
    ctx->pc = 0x266BE4u;
    // 0x266be4: 0x2a220015  slti        $v0, $s1, 0x15
    ctx->pc = 0x266be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x266be8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x266BE8u;
    {
        const bool branch_taken_0x266be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266be8) {
            ctx->pc = 0x266BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266BE8u;
            // 0x266bec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266C10u;
            goto label_266c10;
        }
    }
    ctx->pc = 0x266BF0u;
label_266bf0:
    // 0x266bf0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x266bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x266bf4: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266BF4u;
    {
        const bool branch_taken_0x266bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BF4u;
        // 0x266bf8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bf4) {
            ctx->pc = 0x266C0Cu;
            goto label_266c0c;
        }
    }
    ctx->pc = 0x266BFCu;
    // 0x266bfc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266BFCu;
    {
        const bool branch_taken_0x266bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BFCu;
        // 0x266c00: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bfc) {
            ctx->pc = 0x266C0Cu;
            goto label_266c0c;
        }
    }
    ctx->pc = 0x266C04u;
    // 0x266c04: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266C04u;
    {
        const bool branch_taken_0x266c04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x266c04) {
            ctx->pc = 0x266C10u;
            goto label_266c10;
        }
    }
    ctx->pc = 0x266C0Cu;
label_266c0c:
    // 0x266c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266c10:
    // 0x266c10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x266C10u;
    {
        const bool branch_taken_0x266c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C10u;
        // 0x266c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c10) {
            ctx->pc = 0x266C24u;
            goto label_266c24;
        }
    }
    ctx->pc = 0x266C18u;
    // 0x266c18: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x266C18u;
    SET_GPR_U32(ctx, 31, 0x266C20u);
    ctx->pc = 0x266C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C18u;
    // 0x266c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x266C18u, 0x266C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C20u;
label_266c20:
    // 0x266c20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x266c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_266c24:
    // 0x266c24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x266c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266c28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266c2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x266c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266c34: 0x3e00008  jr          $ra
    ctx->pc = 0x266C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C34u;
        // 0x266c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266C3Cu;
    // 0x266c3c: 0x0  nop
    ctx->pc = 0x266c3cu;
    // NOP
    ctx->pc = 0x266c40u;
}
