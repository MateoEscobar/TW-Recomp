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

// Function: sub_004E69B0
// Address: 0x4e69b0 - 0x4e6a48
void sub_004E69B0_0x4e69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E69B0_0x4e69b0");
#endif

    switch (ctx->pc) {
        case 0x4e69b0u: goto label_4e69b0;
        case 0x4e69b4u: goto label_4e69b4;
        case 0x4e69b8u: goto label_4e69b8;
        case 0x4e69bcu: goto label_4e69bc;
        case 0x4e69c0u: goto label_4e69c0;
        case 0x4e69c4u: goto label_4e69c4;
        case 0x4e69c8u: goto label_4e69c8;
        case 0x4e69ccu: goto label_4e69cc;
        case 0x4e69d0u: goto label_4e69d0;
        case 0x4e69d4u: goto label_4e69d4;
        case 0x4e69d8u: goto label_4e69d8;
        case 0x4e69dcu: goto label_4e69dc;
        case 0x4e69e0u: goto label_4e69e0;
        case 0x4e69e4u: goto label_4e69e4;
        case 0x4e69e8u: goto label_4e69e8;
        case 0x4e69ecu: goto label_4e69ec;
        case 0x4e69f0u: goto label_4e69f0;
        case 0x4e69f4u: goto label_4e69f4;
        case 0x4e69f8u: goto label_4e69f8;
        case 0x4e69fcu: goto label_4e69fc;
        case 0x4e6a00u: goto label_4e6a00;
        case 0x4e6a04u: goto label_4e6a04;
        case 0x4e6a08u: goto label_4e6a08;
        case 0x4e6a0cu: goto label_4e6a0c;
        case 0x4e6a10u: goto label_4e6a10;
        case 0x4e6a14u: goto label_4e6a14;
        case 0x4e6a18u: goto label_4e6a18;
        case 0x4e6a1cu: goto label_4e6a1c;
        case 0x4e6a20u: goto label_4e6a20;
        case 0x4e6a24u: goto label_4e6a24;
        case 0x4e6a28u: goto label_4e6a28;
        case 0x4e6a2cu: goto label_4e6a2c;
        case 0x4e6a30u: goto label_4e6a30;
        case 0x4e6a34u: goto label_4e6a34;
        case 0x4e6a38u: goto label_4e6a38;
        case 0x4e6a3cu: goto label_4e6a3c;
        case 0x4e6a40u: goto label_4e6a40;
        case 0x4e6a44u: goto label_4e6a44;
        default: break;
    }

    ctx->pc = 0x4e69b0u;

label_4e69b0:
    // 0x4e69b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e69b4:
    // 0x4e69b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e69b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e69b8:
    // 0x4e69b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e69bc:
    // 0x4e69bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e69bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e69c0:
    // 0x4e69c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e69c4:
    // 0x4e69c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e69c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e69c8:
    // 0x4e69c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e69cc:
    // 0x4e69cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e69d0:
    // 0x4e69d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4e69d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e69d4:
    // 0x4e69d4: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_4e69d8:
    if (ctx->pc == 0x4E69D8u) {
        ctx->pc = 0x4E69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69D4u;
        // 0x4e69d8: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E69DCu;
        goto label_4e69dc;
    }
    ctx->pc = 0x4E69D4u;
    {
        const bool branch_taken_0x4e69d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69D4u;
        // 0x4e69d8: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e69d4) {
            ctx->pc = 0x4E6A20u;
            goto label_4e6a20;
        }
    }
    ctx->pc = 0x4E69DCu;
label_4e69dc:
    // 0x4e69dc: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4e69dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4e69e0:
    // 0x4e69e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e69e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e69e4:
    // 0x4e69e4: 0x0  nop
    ctx->pc = 0x4e69e4u;
    // NOP
label_4e69e8:
    // 0x4e69e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4e69ec:
    if (ctx->pc == 0x4E69ECu) {
        ctx->pc = 0x4E69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69E8u;
        // 0x4e69ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E69F0u;
        goto label_4e69f0;
    }
    ctx->pc = 0x4E69E8u;
    {
        const bool branch_taken_0x4e69e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69E8u;
        // 0x4e69ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e69e8) {
            ctx->pc = 0x4E6A10u;
            goto label_4e6a10;
        }
    }
    ctx->pc = 0x4E69F0u;
label_4e69f0:
    // 0x4e69f0: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4e69f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4e69f4:
    // 0x4e69f4: 0x264653e8  addiu       $a2, $s2, 0x53E8
    ctx->pc = 0x4e69f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 21480));
label_4e69f8:
    // 0x4e69f8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e69f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e69fc:
    // 0x4e69fc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e6a00:
    // 0x4e6a00: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e6a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e6a04:
    // 0x4e6a04: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e6a08:
    // 0x4e6a08: 0x60f809  jalr        $v1
label_4e6a0c:
    if (ctx->pc == 0x4E6A0Cu) {
        ctx->pc = 0x4E6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A08u;
        // 0x4e6a0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A10u;
        goto label_4e6a10;
    }
    ctx->pc = 0x4E6A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E6A10u);
        ctx->pc = 0x4E6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A08u;
        // 0x4e6a0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6A08u, 0x4E6A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E6A10u;
label_4e6a10:
    // 0x4e6a10: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e6a14:
    // 0x4e6a14: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_4e6a18:
    if (ctx->pc == 0x4E6A18u) {
        ctx->pc = 0x4E6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A14u;
        // 0x4e6a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A1Cu;
        goto label_4e6a1c;
    }
    ctx->pc = 0x4E6A14u;
    {
        const bool branch_taken_0x4e6a14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A14u;
        // 0x4e6a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a14) {
            ctx->pc = 0x4E69E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e69e8;
        }
    }
    ctx->pc = 0x4E6A1Cu;
label_4e6a1c:
    // 0x4e6a1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e6a20:
    // 0x4e6a20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e6a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e6a24:
    // 0x4e6a24: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4e6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_4e6a28:
    // 0x4e6a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e6a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6a2c:
    // 0x4e6a2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4e6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e6a30:
    // 0x4e6a30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e6a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6a34:
    // 0x4e6a34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e6a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6a38:
    // 0x4e6a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6a3c:
    // 0x4e6a3c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x4e6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_4e6a40:
    // 0x4e6a40: 0x3e00008  jr          $ra
label_4e6a44:
    if (ctx->pc == 0x4E6A44u) {
        ctx->pc = 0x4E6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A40u;
        // 0x4e6a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A48u;
        goto label_fallthrough_0x4e6a40;
    }
    ctx->pc = 0x4E6A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A40u;
        // 0x4e6a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e6a40:
    ctx->pc = 0x4E6A48u;
}
