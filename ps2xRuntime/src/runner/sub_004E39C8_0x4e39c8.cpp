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

// Function: sub_004E39C8
// Address: 0x4e39c8 - 0x4e3a48
void sub_004E39C8_0x4e39c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E39C8_0x4e39c8");
#endif

    switch (ctx->pc) {
        case 0x4e39c8u: goto label_4e39c8;
        case 0x4e39ccu: goto label_4e39cc;
        case 0x4e39d0u: goto label_4e39d0;
        case 0x4e39d4u: goto label_4e39d4;
        case 0x4e39d8u: goto label_4e39d8;
        case 0x4e39dcu: goto label_4e39dc;
        case 0x4e39e0u: goto label_4e39e0;
        case 0x4e39e4u: goto label_4e39e4;
        case 0x4e39e8u: goto label_4e39e8;
        case 0x4e39ecu: goto label_4e39ec;
        case 0x4e39f0u: goto label_4e39f0;
        case 0x4e39f4u: goto label_4e39f4;
        case 0x4e39f8u: goto label_4e39f8;
        case 0x4e39fcu: goto label_4e39fc;
        case 0x4e3a00u: goto label_4e3a00;
        case 0x4e3a04u: goto label_4e3a04;
        case 0x4e3a08u: goto label_4e3a08;
        case 0x4e3a0cu: goto label_4e3a0c;
        case 0x4e3a10u: goto label_4e3a10;
        case 0x4e3a14u: goto label_4e3a14;
        case 0x4e3a18u: goto label_4e3a18;
        case 0x4e3a1cu: goto label_4e3a1c;
        case 0x4e3a20u: goto label_4e3a20;
        case 0x4e3a24u: goto label_4e3a24;
        case 0x4e3a28u: goto label_4e3a28;
        case 0x4e3a2cu: goto label_4e3a2c;
        case 0x4e3a30u: goto label_4e3a30;
        case 0x4e3a34u: goto label_4e3a34;
        case 0x4e3a38u: goto label_4e3a38;
        case 0x4e3a3cu: goto label_4e3a3c;
        case 0x4e3a40u: goto label_4e3a40;
        case 0x4e3a44u: goto label_4e3a44;
        default: break;
    }

    ctx->pc = 0x4e39c8u;

label_4e39c8:
    // 0x4e39c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e39c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e39cc:
    // 0x4e39cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e39d0:
    // 0x4e39d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e39d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e39d4:
    // 0x4e39d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e39d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e39d8:
    // 0x4e39d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e39dc:
    // 0x4e39dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e39dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e39e0:
    // 0x4e39e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e39e4:
    // 0x4e39e4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e39e8:
    if (ctx->pc == 0x4E39E8u) {
        ctx->pc = 0x4E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39E4u;
        // 0x4e39e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E39ECu;
        goto label_4e39ec;
    }
    ctx->pc = 0x4E39E4u;
    {
        const bool branch_taken_0x4e39e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39E4u;
        // 0x4e39e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e39e4) {
            ctx->pc = 0x4E3A2Cu;
            goto label_4e3a2c;
        }
    }
    ctx->pc = 0x4E39ECu;
label_4e39ec:
    // 0x4e39ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e39f0:
    // 0x4e39f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e39f4:
    // 0x4e39f4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e39f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e39f8:
    // 0x4e39f8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e39fc:
    // 0x4e39fc: 0x60f809  jalr        $v1
label_4e3a00:
    if (ctx->pc == 0x4E3A00u) {
        ctx->pc = 0x4E3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39FCu;
        // 0x4e3a00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A04u;
        goto label_4e3a04;
    }
    ctx->pc = 0x4E39FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3A04u);
        ctx->pc = 0x4E3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E39FCu;
        // 0x4e3a00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E39FCu, 0x4E3A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3A04u;
label_4e3a04:
    // 0x4e3a04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e3a08:
    // 0x4e3a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e3a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a0c:
    // 0x4e3a0c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e3a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e3a10:
    // 0x4e3a10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e3a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a14:
    // 0x4e3a14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e3a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a18:
    // 0x4e3a18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3a1c:
    // 0x4e3a1c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3a20:
    // 0x4e3a20: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3a24:
    // 0x4e3a24: 0x60f809  jalr        $v1
label_4e3a28:
    if (ctx->pc == 0x4E3A28u) {
        ctx->pc = 0x4E3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A24u;
        // 0x4e3a28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A2Cu;
        goto label_4e3a2c;
    }
    ctx->pc = 0x4E3A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3A2Cu);
        ctx->pc = 0x4E3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A24u;
        // 0x4e3a28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3A24u, 0x4E3A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3A2Cu;
label_4e3a2c:
    // 0x4e3a2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e3a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3a30:
    // 0x4e3a30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e3a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3a34:
    // 0x4e3a34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e3a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3a38:
    // 0x4e3a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3a3c:
    // 0x4e3a3c: 0x3e00008  jr          $ra
label_4e3a40:
    if (ctx->pc == 0x4E3A40u) {
        ctx->pc = 0x4E3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A3Cu;
        // 0x4e3a40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A44u;
        goto label_4e3a44;
    }
    ctx->pc = 0x4E3A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A3Cu;
        // 0x4e3a40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3A44u;
label_4e3a44:
    // 0x4e3a44: 0x0  nop
    ctx->pc = 0x4e3a44u;
    // NOP
    ctx->pc = 0x4e3a48u;
}
