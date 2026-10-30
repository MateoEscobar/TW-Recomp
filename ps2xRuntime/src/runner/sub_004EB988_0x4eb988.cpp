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

// Function: sub_004EB988
// Address: 0x4eb988 - 0x4eba20
void sub_004EB988_0x4eb988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB988_0x4eb988");
#endif

    switch (ctx->pc) {
        case 0x4eb988u: goto label_4eb988;
        case 0x4eb98cu: goto label_4eb98c;
        case 0x4eb990u: goto label_4eb990;
        case 0x4eb994u: goto label_4eb994;
        case 0x4eb998u: goto label_4eb998;
        case 0x4eb99cu: goto label_4eb99c;
        case 0x4eb9a0u: goto label_4eb9a0;
        case 0x4eb9a4u: goto label_4eb9a4;
        case 0x4eb9a8u: goto label_4eb9a8;
        case 0x4eb9acu: goto label_4eb9ac;
        case 0x4eb9b0u: goto label_4eb9b0;
        case 0x4eb9b4u: goto label_4eb9b4;
        case 0x4eb9b8u: goto label_4eb9b8;
        case 0x4eb9bcu: goto label_4eb9bc;
        case 0x4eb9c0u: goto label_4eb9c0;
        case 0x4eb9c4u: goto label_4eb9c4;
        case 0x4eb9c8u: goto label_4eb9c8;
        case 0x4eb9ccu: goto label_4eb9cc;
        case 0x4eb9d0u: goto label_4eb9d0;
        case 0x4eb9d4u: goto label_4eb9d4;
        case 0x4eb9d8u: goto label_4eb9d8;
        case 0x4eb9dcu: goto label_4eb9dc;
        case 0x4eb9e0u: goto label_4eb9e0;
        case 0x4eb9e4u: goto label_4eb9e4;
        case 0x4eb9e8u: goto label_4eb9e8;
        case 0x4eb9ecu: goto label_4eb9ec;
        case 0x4eb9f0u: goto label_4eb9f0;
        case 0x4eb9f4u: goto label_4eb9f4;
        case 0x4eb9f8u: goto label_4eb9f8;
        case 0x4eb9fcu: goto label_4eb9fc;
        case 0x4eba00u: goto label_4eba00;
        case 0x4eba04u: goto label_4eba04;
        case 0x4eba08u: goto label_4eba08;
        case 0x4eba0cu: goto label_4eba0c;
        case 0x4eba10u: goto label_4eba10;
        case 0x4eba14u: goto label_4eba14;
        case 0x4eba18u: goto label_4eba18;
        case 0x4eba1cu: goto label_4eba1c;
        default: break;
    }

    ctx->pc = 0x4eb988u;

label_4eb988:
    // 0x4eb988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eb988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eb98c:
    // 0x4eb98c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eb98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eb990:
    // 0x4eb990: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eb994:
    // 0x4eb994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb998:
    // 0x4eb998: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eb99c:
    // 0x4eb99c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9a0:
    // 0x4eb9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eb9a4:
    // 0x4eb9a4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4eb9a8:
    if (ctx->pc == 0x4EB9A8u) {
        ctx->pc = 0x4EB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9A4u;
        // 0x4eb9a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB9ACu;
        goto label_4eb9ac;
    }
    ctx->pc = 0x4EB9A4u;
    {
        const bool branch_taken_0x4eb9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9A4u;
        // 0x4eb9a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb9a4) {
            ctx->pc = 0x4EBA04u;
            goto label_4eba04;
        }
    }
    ctx->pc = 0x4EB9ACu;
label_4eb9ac:
    // 0x4eb9ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4eb9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eb9b0:
    // 0x4eb9b0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4eb9b4:
    if (ctx->pc == 0x4EB9B4u) {
        ctx->pc = 0x4EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9B0u;
        // 0x4eb9b4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB9B8u;
        goto label_4eb9b8;
    }
    ctx->pc = 0x4EB9B0u;
    {
        const bool branch_taken_0x4eb9b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9B0u;
        // 0x4eb9b4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb9b0) {
            ctx->pc = 0x4EB9DCu;
            goto label_4eb9dc;
        }
    }
    ctx->pc = 0x4EB9B8u;
label_4eb9b8:
    // 0x4eb9b8: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x4eb9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_4eb9bc:
    // 0x4eb9bc: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4eb9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4eb9c0:
    // 0x4eb9c0: 0x24c681a0  addiu       $a2, $a2, -0x7E60
    ctx->pc = 0x4eb9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934944));
label_4eb9c4:
    // 0x4eb9c4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eb9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eb9c8:
    // 0x4eb9c8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb9cc:
    // 0x4eb9cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb9ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb9d0:
    // 0x4eb9d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb9d4:
    // 0x4eb9d4: 0x60f809  jalr        $v1
label_4eb9d8:
    if (ctx->pc == 0x4EB9D8u) {
        ctx->pc = 0x4EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9D4u;
        // 0x4eb9d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB9DCu;
        goto label_4eb9dc;
    }
    ctx->pc = 0x4EB9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EB9DCu);
        ctx->pc = 0x4EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9D4u;
        // 0x4eb9d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB9D4u, 0x4EB9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB9DCu;
label_4eb9dc:
    // 0x4eb9dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eb9e0:
    // 0x4eb9e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9e4:
    // 0x4eb9e4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eb9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eb9e8:
    // 0x4eb9e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eb9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9ec:
    // 0x4eb9ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eb9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9f0:
    // 0x4eb9f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb9f4:
    // 0x4eb9f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb9f8:
    // 0x4eb9f8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb9fc:
    // 0x4eb9fc: 0x60f809  jalr        $v1
label_4eba00:
    if (ctx->pc == 0x4EBA00u) {
        ctx->pc = 0x4EBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9FCu;
        // 0x4eba00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA04u;
        goto label_4eba04;
    }
    ctx->pc = 0x4EB9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBA04u);
        ctx->pc = 0x4EBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB9FCu;
        // 0x4eba00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB9FCu, 0x4EBA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBA04u;
label_4eba04:
    // 0x4eba04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eba04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eba08:
    // 0x4eba08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eba08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eba0c:
    // 0x4eba0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eba0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eba10:
    // 0x4eba10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eba14:
    // 0x4eba14: 0x3e00008  jr          $ra
label_4eba18:
    if (ctx->pc == 0x4EBA18u) {
        ctx->pc = 0x4EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA14u;
        // 0x4eba18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBA1Cu;
        goto label_4eba1c;
    }
    ctx->pc = 0x4EBA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBA14u;
        // 0x4eba18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBA1Cu;
label_4eba1c:
    // 0x4eba1c: 0x0  nop
    ctx->pc = 0x4eba1cu;
    // NOP
    ctx->pc = 0x4eba20u;
}
