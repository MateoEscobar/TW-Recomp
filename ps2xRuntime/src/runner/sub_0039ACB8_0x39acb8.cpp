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

// Function: sub_0039ACB8
// Address: 0x39acb8 - 0x39ada0
void sub_0039ACB8_0x39acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039ACB8_0x39acb8");
#endif

    switch (ctx->pc) {
        case 0x39acf8u: goto label_39acf8;
        case 0x39ad10u: goto label_39ad10;
        case 0x39ad2cu: goto label_39ad2c;
        case 0x39ad40u: goto label_39ad40;
        case 0x39ad4cu: goto label_39ad4c;
        case 0x39ad54u: goto label_39ad54;
        default: break;
    }

    ctx->pc = 0x39acb8u;

    // 0x39acb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39acb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39acbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x39acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x39acc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x39acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x39acc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39acc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39acc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39accc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39acd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x39acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x39acd4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x39acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x39acd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x39acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x39acdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39ace0: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x39ace0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x39ace4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x39ACE4u;
    {
        const bool branch_taken_0x39ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACE4u;
        // 0x39ace8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ace4) {
            ctx->pc = 0x39AD6Cu;
            goto label_39ad6c;
        }
    }
    ctx->pc = 0x39ACECu;
    // 0x39acec: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x39acecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x39acf0: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x39acf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39acf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39acf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39acf8:
    // 0x39acf8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x39acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x39acfc: 0x8ea42c04  lw          $a0, 0x2C04($s5)
    ctx->pc = 0x39acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11268)));
    // 0x39ad00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x39ad04: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x39ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x39ad08: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x39AD08u;
    SET_GPR_U32(ctx, 31, 0x39AD10u);
    ctx->pc = 0x39AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD08u;
    // 0x39ad0c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39AD08u, 0x39AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD10u;
label_39ad10:
    // 0x39ad10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad14: 0x80820086  lb          $v0, 0x86($a0)
    ctx->pc = 0x39ad14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x39ad18: 0x54540010  bnel        $v0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x39AD18u;
    {
        const bool branch_taken_0x39ad18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x39ad18) {
            ctx->pc = 0x39AD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AD18u;
            // 0x39ad1c: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AD5Cu;
            goto label_39ad5c;
        }
    }
    ctx->pc = 0x39AD20u;
    // 0x39ad20: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x39ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x39ad24: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x39AD24u;
    SET_GPR_U32(ctx, 31, 0x39AD2Cu);
    ctx->pc = 0x39AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD24u;
    // 0x39ad28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39AD24u, 0x39AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD2Cu;
label_39ad2c:
    // 0x39ad2c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x39AD2Cu;
    {
        const bool branch_taken_0x39ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ad2c) {
            ctx->pc = 0x39AD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AD2Cu;
            // 0x39ad30: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AD5Cu;
            goto label_39ad5c;
        }
    }
    ctx->pc = 0x39AD34u;
    // 0x39ad34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad38: 0xc0e63f8  jal         func_398FE0
    ctx->pc = 0x39AD38u;
    SET_GPR_U32(ctx, 31, 0x39AD40u);
    ctx->pc = 0x39AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD38u;
    // 0x39ad3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398FE0u, 0x39AD38u, 0x39AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD40u;
label_39ad40:
    // 0x39ad40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39ad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad44: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39AD44u;
    SET_GPR_U32(ctx, 31, 0x39AD4Cu);
    ctx->pc = 0x39AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD44u;
    // 0x39ad48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39AD44u, 0x39AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD4Cu;
label_39ad4c:
    // 0x39ad4c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x39AD4Cu;
    SET_GPR_U32(ctx, 31, 0x39AD54u);
    ctx->pc = 0x39AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD4Cu;
    // 0x39ad50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39AD4Cu, 0x39AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD54u;
label_39ad54:
    // 0x39ad54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39AD54u;
    {
        const bool branch_taken_0x39ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD54u;
        // 0x39ad58: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad54) {
            ctx->pc = 0x39AD74u;
            goto label_39ad74;
        }
    }
    ctx->pc = 0x39AD5Cu;
label_39ad5c:
    // 0x39ad5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39ad5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39ad60: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x39ad60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39ad64: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x39AD64u;
    {
        const bool branch_taken_0x39ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD64u;
        // 0x39ad68: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad64) {
            ctx->pc = 0x39ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39acf8;
        }
    }
    ctx->pc = 0x39AD6Cu;
label_39ad6c:
    // 0x39ad6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ad6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x39ad70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39ad74:
    // 0x39ad74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x39ad74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39ad78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x39ad78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39ad7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39ad7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39ad80: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x39ad80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ad84: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x39ad84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ad88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ad8c: 0x3e00008  jr          $ra
    ctx->pc = 0x39AD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD8Cu;
        // 0x39ad90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AD94u;
    // 0x39ad94: 0x0  nop
    ctx->pc = 0x39ad94u;
    // NOP
    // 0x39ad98: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x39ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x39ad9c: 0x0  nop
    ctx->pc = 0x39ad9cu;
    // NOP
    ctx->pc = 0x39ada0u;
}
