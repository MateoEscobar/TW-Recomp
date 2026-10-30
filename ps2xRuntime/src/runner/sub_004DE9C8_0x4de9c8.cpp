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

// Function: sub_004DE9C8
// Address: 0x4de9c8 - 0x4dea48
void sub_004DE9C8_0x4de9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE9C8_0x4de9c8");
#endif

    switch (ctx->pc) {
        case 0x4de9c8u: goto label_4de9c8;
        case 0x4de9ccu: goto label_4de9cc;
        case 0x4de9d0u: goto label_4de9d0;
        case 0x4de9d4u: goto label_4de9d4;
        case 0x4de9d8u: goto label_4de9d8;
        case 0x4de9dcu: goto label_4de9dc;
        case 0x4de9e0u: goto label_4de9e0;
        case 0x4de9e4u: goto label_4de9e4;
        case 0x4de9e8u: goto label_4de9e8;
        case 0x4de9ecu: goto label_4de9ec;
        case 0x4de9f0u: goto label_4de9f0;
        case 0x4de9f4u: goto label_4de9f4;
        case 0x4de9f8u: goto label_4de9f8;
        case 0x4de9fcu: goto label_4de9fc;
        case 0x4dea00u: goto label_4dea00;
        case 0x4dea04u: goto label_4dea04;
        case 0x4dea08u: goto label_4dea08;
        case 0x4dea0cu: goto label_4dea0c;
        case 0x4dea10u: goto label_4dea10;
        case 0x4dea14u: goto label_4dea14;
        case 0x4dea18u: goto label_4dea18;
        case 0x4dea1cu: goto label_4dea1c;
        case 0x4dea20u: goto label_4dea20;
        case 0x4dea24u: goto label_4dea24;
        case 0x4dea28u: goto label_4dea28;
        case 0x4dea2cu: goto label_4dea2c;
        case 0x4dea30u: goto label_4dea30;
        case 0x4dea34u: goto label_4dea34;
        case 0x4dea38u: goto label_4dea38;
        case 0x4dea3cu: goto label_4dea3c;
        case 0x4dea40u: goto label_4dea40;
        case 0x4dea44u: goto label_4dea44;
        default: break;
    }

    ctx->pc = 0x4de9c8u;

label_4de9c8:
    // 0x4de9c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de9cc:
    // 0x4de9cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de9d0:
    // 0x4de9d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de9d4:
    // 0x4de9d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de9d8:
    // 0x4de9d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de9dc:
    // 0x4de9dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de9e0:
    // 0x4de9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de9e4:
    // 0x4de9e4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de9e8:
    if (ctx->pc == 0x4DE9E8u) {
        ctx->pc = 0x4DE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9E4u;
        // 0x4de9e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE9ECu;
        goto label_4de9ec;
    }
    ctx->pc = 0x4DE9E4u;
    {
        const bool branch_taken_0x4de9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9E4u;
        // 0x4de9e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de9e4) {
            ctx->pc = 0x4DEA2Cu;
            goto label_4dea2c;
        }
    }
    ctx->pc = 0x4DE9ECu;
label_4de9ec:
    // 0x4de9ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4de9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4de9f0:
    // 0x4de9f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de9f4:
    // 0x4de9f4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de9f8:
    // 0x4de9f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de9fc:
    // 0x4de9fc: 0x60f809  jalr        $v1
label_4dea00:
    if (ctx->pc == 0x4DEA00u) {
        ctx->pc = 0x4DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9FCu;
        // 0x4dea00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEA04u;
        goto label_4dea04;
    }
    ctx->pc = 0x4DE9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEA04u);
        ctx->pc = 0x4DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE9FCu;
        // 0x4dea00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE9FCu, 0x4DEA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEA04u;
label_4dea04:
    // 0x4dea04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4dea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4dea08:
    // 0x4dea08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dea0c:
    // 0x4dea0c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dea0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dea10:
    // 0x4dea10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4dea10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dea14:
    // 0x4dea14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4dea14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dea18:
    // 0x4dea18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dea1c:
    // 0x4dea1c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dea1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dea20:
    // 0x4dea20: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dea24:
    // 0x4dea24: 0x60f809  jalr        $v1
label_4dea28:
    if (ctx->pc == 0x4DEA28u) {
        ctx->pc = 0x4DEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA24u;
        // 0x4dea28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEA2Cu;
        goto label_4dea2c;
    }
    ctx->pc = 0x4DEA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEA2Cu);
        ctx->pc = 0x4DEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA24u;
        // 0x4dea28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEA24u, 0x4DEA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEA2Cu;
label_4dea2c:
    // 0x4dea2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dea2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dea30:
    // 0x4dea30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dea30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dea34:
    // 0x4dea34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dea34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dea38:
    // 0x4dea38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dea3c:
    // 0x4dea3c: 0x3e00008  jr          $ra
label_4dea40:
    if (ctx->pc == 0x4DEA40u) {
        ctx->pc = 0x4DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA3Cu;
        // 0x4dea40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEA44u;
        goto label_4dea44;
    }
    ctx->pc = 0x4DEA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA3Cu;
        // 0x4dea40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DEA44u;
label_4dea44:
    // 0x4dea44: 0x0  nop
    ctx->pc = 0x4dea44u;
    // NOP
    ctx->pc = 0x4dea48u;
}
