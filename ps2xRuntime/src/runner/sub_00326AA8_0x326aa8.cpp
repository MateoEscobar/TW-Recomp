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

// Function: sub_00326AA8
// Address: 0x326aa8 - 0x326b58
void sub_00326AA8_0x326aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326AA8_0x326aa8");
#endif

    switch (ctx->pc) {
        case 0x326b04u: goto label_326b04;
        case 0x326b14u: goto label_326b14;
        case 0x326b24u: goto label_326b24;
        default: break;
    }

    ctx->pc = 0x326aa8u;

    // 0x326aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326ab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326abc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326ac0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x326AC0u;
    {
        const bool branch_taken_0x326ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AC0u;
        // 0x326ac4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ac0) {
            ctx->pc = 0x326AF8u;
            goto label_326af8;
        }
    }
    ctx->pc = 0x326AC8u;
    // 0x326ac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326AC8u;
    {
        const bool branch_taken_0x326ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AC8u;
        // 0x326acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ac8) {
            ctx->pc = 0x326AE0u;
            goto label_326ae0;
        }
    }
    ctx->pc = 0x326AD0u;
    // 0x326ad0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x326AD0u;
    {
        const bool branch_taken_0x326ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ad0) {
            ctx->pc = 0x326AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326AD0u;
            // 0x326ad4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B0Cu;
            goto label_326b0c;
        }
    }
    ctx->pc = 0x326AD8u;
    // 0x326ad8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x326AD8u;
    {
        const bool branch_taken_0x326ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AD8u;
        // 0x326adc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ad8) {
            ctx->pc = 0x326B34u;
            goto label_326b34;
        }
    }
    ctx->pc = 0x326AE0u;
label_326ae0:
    // 0x326ae0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x326AE0u;
    {
        const bool branch_taken_0x326ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE0u;
        // 0x326ae4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ae0) {
            ctx->pc = 0x326B1Cu;
            goto label_326b1c;
        }
    }
    ctx->pc = 0x326AE8u;
    // 0x326ae8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x326AE8u;
    {
        const bool branch_taken_0x326ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE8u;
        // 0x326aec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ae8) {
            ctx->pc = 0x326B2Cu;
            goto label_326b2c;
        }
    }
    ctx->pc = 0x326AF0u;
    // 0x326af0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x326AF0u;
    {
        const bool branch_taken_0x326af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AF0u;
        // 0x326af4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326af0) {
            ctx->pc = 0x326B38u;
            goto label_326b38;
        }
    }
    ctx->pc = 0x326AF8u;
label_326af8:
    // 0x326af8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x326af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326afc: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326AFCu;
    SET_GPR_U32(ctx, 31, 0x326B04u);
    ctx->pc = 0x326B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AFCu;
    // 0x326b00: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326AFCu, 0x326B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B04u;
label_326b04:
    // 0x326b04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326B04u;
    {
        const bool branch_taken_0x326b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B04u;
        // 0x326b08: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b04) {
            ctx->pc = 0x326B34u;
            goto label_326b34;
        }
    }
    ctx->pc = 0x326B0Cu;
label_326b0c:
    // 0x326b0c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326B0Cu;
    SET_GPR_U32(ctx, 31, 0x326B14u);
    ctx->pc = 0x326B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B0Cu;
    // 0x326b10: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326B0Cu, 0x326B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B14u;
label_326b14:
    // 0x326b14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326B14u;
    {
        const bool branch_taken_0x326b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B14u;
        // 0x326b18: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b14) {
            ctx->pc = 0x326B34u;
            goto label_326b34;
        }
    }
    ctx->pc = 0x326B1Cu;
label_326b1c:
    // 0x326b1c: 0xc0c9d64  jal         func_327590
    ctx->pc = 0x326B1Cu;
    SET_GPR_U32(ctx, 31, 0x326B24u);
    ctx->pc = 0x326B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B1Cu;
    // 0x326b20: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327590u, 0x326B1Cu, 0x326B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B24u;
label_326b24:
    // 0x326b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x326B24u;
    {
        const bool branch_taken_0x326b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B24u;
        // 0x326b28: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b24) {
            ctx->pc = 0x326B34u;
            goto label_326b34;
        }
    }
    ctx->pc = 0x326B2Cu;
label_326b2c:
    // 0x326b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326B2Cu;
    {
        const bool branch_taken_0x326b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B2Cu;
        // 0x326b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b2c) {
            ctx->pc = 0x326B48u;
            goto label_326b48;
        }
    }
    ctx->pc = 0x326B34u;
label_326b34:
    // 0x326b34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x326b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_326b38:
    // 0x326b38: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x326b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x326b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326b40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x326b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x326b44: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x326b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_326b48:
    // 0x326b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326b50: 0x3e00008  jr          $ra
    ctx->pc = 0x326B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B50u;
        // 0x326b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B58u;
}
