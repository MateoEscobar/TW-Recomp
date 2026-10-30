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

// Function: sub_00433A88
// Address: 0x433a88 - 0x433b60
void sub_00433A88_0x433a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433A88_0x433a88");
#endif

    switch (ctx->pc) {
        case 0x433a88u: goto label_433a88;
        case 0x433a8cu: goto label_433a8c;
        case 0x433a90u: goto label_433a90;
        case 0x433a94u: goto label_433a94;
        case 0x433a98u: goto label_433a98;
        case 0x433a9cu: goto label_433a9c;
        case 0x433aa0u: goto label_433aa0;
        case 0x433aa4u: goto label_433aa4;
        case 0x433aa8u: goto label_433aa8;
        case 0x433aacu: goto label_433aac;
        case 0x433ab0u: goto label_433ab0;
        case 0x433ab4u: goto label_433ab4;
        case 0x433ab8u: goto label_433ab8;
        case 0x433abcu: goto label_433abc;
        case 0x433ac0u: goto label_433ac0;
        case 0x433ac4u: goto label_433ac4;
        case 0x433ac8u: goto label_433ac8;
        case 0x433accu: goto label_433acc;
        case 0x433ad0u: goto label_433ad0;
        case 0x433ad4u: goto label_433ad4;
        case 0x433ad8u: goto label_433ad8;
        case 0x433adcu: goto label_433adc;
        case 0x433ae0u: goto label_433ae0;
        case 0x433ae4u: goto label_433ae4;
        case 0x433ae8u: goto label_433ae8;
        case 0x433aecu: goto label_433aec;
        case 0x433af0u: goto label_433af0;
        case 0x433af4u: goto label_433af4;
        case 0x433af8u: goto label_433af8;
        case 0x433afcu: goto label_433afc;
        case 0x433b00u: goto label_433b00;
        case 0x433b04u: goto label_433b04;
        case 0x433b08u: goto label_433b08;
        case 0x433b0cu: goto label_433b0c;
        case 0x433b10u: goto label_433b10;
        case 0x433b14u: goto label_433b14;
        case 0x433b18u: goto label_433b18;
        case 0x433b1cu: goto label_433b1c;
        case 0x433b20u: goto label_433b20;
        case 0x433b24u: goto label_433b24;
        case 0x433b28u: goto label_433b28;
        case 0x433b2cu: goto label_433b2c;
        case 0x433b30u: goto label_433b30;
        case 0x433b34u: goto label_433b34;
        case 0x433b38u: goto label_433b38;
        case 0x433b3cu: goto label_433b3c;
        case 0x433b40u: goto label_433b40;
        case 0x433b44u: goto label_433b44;
        case 0x433b48u: goto label_433b48;
        case 0x433b4cu: goto label_433b4c;
        case 0x433b50u: goto label_433b50;
        case 0x433b54u: goto label_433b54;
        case 0x433b58u: goto label_433b58;
        case 0x433b5cu: goto label_433b5c;
        default: break;
    }

    ctx->pc = 0x433a88u;

label_433a88:
    // 0x433a88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x433a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_433a8c:
    // 0x433a8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x433a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_433a90:
    // 0x433a90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x433a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_433a94:
    // 0x433a94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x433a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_433a98:
    // 0x433a98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x433a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_433a9c:
    // 0x433a9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x433a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433aa0:
    // 0x433aa0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x433aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_433aa4:
    // 0x433aa4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x433aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_433aa8:
    // 0x433aa8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x433aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_433aac:
    // 0x433aac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x433aacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_433ab0:
    // 0x433ab0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x433ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_433ab4:
    // 0x433ab4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x433ab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_433ab8:
    // 0x433ab8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x433ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_433abc:
    // 0x433abc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x433abcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433ac0:
    // 0x433ac0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x433ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_433ac4:
    // 0x433ac4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_433ac8:
    if (ctx->pc == 0x433AC8u) {
        ctx->pc = 0x433AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AC4u;
        // 0x433ac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433ACCu;
        goto label_433acc;
    }
    ctx->pc = 0x433AC4u;
    {
        const bool branch_taken_0x433ac4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x433AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AC4u;
        // 0x433ac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ac4) {
            ctx->pc = 0x433B2Cu;
            goto label_433b2c;
        }
    }
    ctx->pc = 0x433ACCu;
label_433acc:
    // 0x433acc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_433ad0:
    if (ctx->pc == 0x433AD0u) {
        ctx->pc = 0x433AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433ACCu;
        // 0x433ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433AD4u;
        goto label_433ad4;
    }
    ctx->pc = 0x433ACCu;
    {
        const bool branch_taken_0x433acc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x433AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433ACCu;
        // 0x433ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433acc) {
            ctx->pc = 0x433AE4u;
            goto label_433ae4;
        }
    }
    ctx->pc = 0x433AD4u;
label_433ad4:
    // 0x433ad4: 0x10000017  b           . + 4 + (0x17 << 2)
label_433ad8:
    if (ctx->pc == 0x433AD8u) {
        ctx->pc = 0x433AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AD4u;
        // 0x433ad8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433ADCu;
        goto label_433adc;
    }
    ctx->pc = 0x433AD4u;
    {
        const bool branch_taken_0x433ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AD4u;
        // 0x433ad8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ad4) {
            ctx->pc = 0x433B34u;
            goto label_433b34;
        }
    }
    ctx->pc = 0x433ADCu;
label_433adc:
    // 0x433adc: 0x10000014  b           . + 4 + (0x14 << 2)
label_433ae0:
    if (ctx->pc == 0x433AE0u) {
        ctx->pc = 0x433AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433ADCu;
        // 0x433ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433AE4u;
        goto label_433ae4;
    }
    ctx->pc = 0x433ADCu;
    {
        const bool branch_taken_0x433adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433ADCu;
        // 0x433ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433adc) {
            ctx->pc = 0x433B30u;
            goto label_433b30;
        }
    }
    ctx->pc = 0x433AE4u;
label_433ae4:
    // 0x433ae4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_433ae8:
    if (ctx->pc == 0x433AE8u) {
        ctx->pc = 0x433AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AE4u;
        // 0x433ae8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433AECu;
        goto label_433aec;
    }
    ctx->pc = 0x433AE4u;
    {
        const bool branch_taken_0x433ae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x433AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433AE4u;
        // 0x433ae8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ae4) {
            ctx->pc = 0x433B34u;
            goto label_433b34;
        }
    }
    ctx->pc = 0x433AECu;
label_433aec:
    // 0x433aec: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x433aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_433af0:
    // 0x433af0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x433af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_433af4:
    // 0x433af4: 0x28042  srl         $s0, $v0, 1
    ctx->pc = 0x433af4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_433af8:
    // 0x433af8: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x433af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_433afc:
    // 0x433afc: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x433afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_433b00:
    // 0x433b00: 0x2a0f809  jalr        $s5
label_433b04:
    if (ctx->pc == 0x433B04u) {
        ctx->pc = 0x433B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B00u;
        // 0x433b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433B08u;
        goto label_433b08;
    }
    ctx->pc = 0x433B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x433B08u);
        ctx->pc = 0x433B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B00u;
        // 0x433b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433B00u, 0x433B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x433B08u;
label_433b08:
    // 0x433b08: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_433b0c:
    if (ctx->pc == 0x433B0Cu) {
        ctx->pc = 0x433B10u;
        goto label_433b10;
    }
    ctx->pc = 0x433B08u;
    {
        const bool branch_taken_0x433b08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x433b08) {
            ctx->pc = 0x433B18u;
            goto label_433b18;
        }
    }
    ctx->pc = 0x433B10u;
label_433b10:
    // 0x433b10: 0x10000003  b           . + 4 + (0x3 << 2)
label_433b14:
    if (ctx->pc == 0x433B14u) {
        ctx->pc = 0x433B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B10u;
        // 0x433b14: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433B18u;
        goto label_433b18;
    }
    ctx->pc = 0x433B10u;
    {
        const bool branch_taken_0x433b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B10u;
        // 0x433b14: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433b10) {
            ctx->pc = 0x433B20u;
            goto label_433b20;
        }
    }
    ctx->pc = 0x433B18u;
label_433b18:
    // 0x433b18: 0x1840fff0  blez        $v0, . + 4 + (-0x10 << 2)
label_433b1c:
    if (ctx->pc == 0x433B1Cu) {
        ctx->pc = 0x433B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B18u;
        // 0x433b1c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433B20u;
        goto label_433b20;
    }
    ctx->pc = 0x433B18u;
    {
        const bool branch_taken_0x433b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x433B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B18u;
        // 0x433b1c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433b18) {
            ctx->pc = 0x433ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433adc;
        }
    }
    ctx->pc = 0x433B20u;
label_433b20:
    // 0x433b20: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x433b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_433b24:
    // 0x433b24: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_433b28:
    if (ctx->pc == 0x433B28u) {
        ctx->pc = 0x433B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B24u;
        // 0x433b28: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433B2Cu;
        goto label_433b2c;
    }
    ctx->pc = 0x433B24u;
    {
        const bool branch_taken_0x433b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B24u;
        // 0x433b28: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433b24) {
            ctx->pc = 0x433AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433af0;
        }
    }
    ctx->pc = 0x433B2Cu;
label_433b2c:
    // 0x433b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x433b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433b30:
    // 0x433b30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x433b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_433b34:
    // 0x433b34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x433b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_433b38:
    // 0x433b38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x433b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_433b3c:
    // 0x433b3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x433b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_433b40:
    // 0x433b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x433b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_433b44:
    // 0x433b44: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x433b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_433b48:
    // 0x433b48: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x433b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_433b4c:
    // 0x433b4c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x433b4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_433b50:
    // 0x433b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_433b54:
    // 0x433b54: 0x3e00008  jr          $ra
label_433b58:
    if (ctx->pc == 0x433B58u) {
        ctx->pc = 0x433B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B54u;
        // 0x433b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x433B5Cu;
        goto label_433b5c;
    }
    ctx->pc = 0x433B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433B54u;
        // 0x433b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433B5Cu;
label_433b5c:
    // 0x433b5c: 0x0  nop
    ctx->pc = 0x433b5cu;
    // NOP
    ctx->pc = 0x433b60u;
}
