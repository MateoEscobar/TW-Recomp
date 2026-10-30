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

// Function: sub_001BC078
// Address: 0x1bc078 - 0x1bc100
void sub_001BC078_0x1bc078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC078_0x1bc078");
#endif

    switch (ctx->pc) {
        case 0x1bc078u: goto label_1bc078;
        case 0x1bc07cu: goto label_1bc07c;
        case 0x1bc080u: goto label_1bc080;
        case 0x1bc084u: goto label_1bc084;
        case 0x1bc088u: goto label_1bc088;
        case 0x1bc08cu: goto label_1bc08c;
        case 0x1bc090u: goto label_1bc090;
        case 0x1bc094u: goto label_1bc094;
        case 0x1bc098u: goto label_1bc098;
        case 0x1bc09cu: goto label_1bc09c;
        case 0x1bc0a0u: goto label_1bc0a0;
        case 0x1bc0a4u: goto label_1bc0a4;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0acu: goto label_1bc0ac;
        case 0x1bc0b0u: goto label_1bc0b0;
        case 0x1bc0b4u: goto label_1bc0b4;
        case 0x1bc0b8u: goto label_1bc0b8;
        case 0x1bc0bcu: goto label_1bc0bc;
        case 0x1bc0c0u: goto label_1bc0c0;
        case 0x1bc0c4u: goto label_1bc0c4;
        case 0x1bc0c8u: goto label_1bc0c8;
        case 0x1bc0ccu: goto label_1bc0cc;
        case 0x1bc0d0u: goto label_1bc0d0;
        case 0x1bc0d4u: goto label_1bc0d4;
        case 0x1bc0d8u: goto label_1bc0d8;
        case 0x1bc0dcu: goto label_1bc0dc;
        case 0x1bc0e0u: goto label_1bc0e0;
        case 0x1bc0e4u: goto label_1bc0e4;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0ecu: goto label_1bc0ec;
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc0f4u: goto label_1bc0f4;
        case 0x1bc0f8u: goto label_1bc0f8;
        case 0x1bc0fcu: goto label_1bc0fc;
        default: break;
    }

    ctx->pc = 0x1bc078u;

label_1bc078:
    // 0x1bc078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bc07c:
    // 0x1bc07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bc080:
    // 0x1bc080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bc084:
    // 0x1bc084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc088:
    // 0x1bc088: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bc08c:
    // 0x1bc08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bc090:
    // 0x1bc090: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_1bc094:
    // 0x1bc094: 0xc06870c  jal         func_1A1C30
label_1bc098:
    if (ctx->pc == 0x1BC098u) {
        ctx->pc = 0x1BC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC094u;
        // 0x1bc098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC09Cu;
        goto label_1bc09c;
    }
    ctx->pc = 0x1BC094u;
    SET_GPR_U32(ctx, 31, 0x1BC09Cu);
    ctx->pc = 0x1BC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC094u;
    // 0x1bc098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1BC094u, 0x1BC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC09Cu;
label_1bc09c:
    // 0x1bc09c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc0a0:
    // 0x1bc0a0: 0xc078516  jal         func_1E1458
label_1bc0a4:
    if (ctx->pc == 0x1BC0A4u) {
        ctx->pc = 0x1BC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0A0u;
        // 0x1bc0a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0A8u;
        goto label_1bc0a8;
    }
    ctx->pc = 0x1BC0A0u;
    SET_GPR_U32(ctx, 31, 0x1BC0A8u);
    ctx->pc = 0x1BC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0A0u;
    // 0x1bc0a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1458u, 0x1BC0A0u, 0x1BC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0A8u;
label_1bc0a8:
    // 0x1bc0a8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bc0ac:
    // 0x1bc0ac: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1bc0b0:
    if (ctx->pc == 0x1BC0B0u) {
        ctx->pc = 0x1BC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0ACu;
        // 0x1bc0b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0B4u;
        goto label_1bc0b4;
    }
    ctx->pc = 0x1BC0ACu;
    {
        const bool branch_taken_0x1bc0ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0ACu;
        // 0x1bc0b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0ac) {
            ctx->pc = 0x1BC0D8u;
            goto label_1bc0d8;
        }
    }
    ctx->pc = 0x1BC0B4u;
label_1bc0b4:
    // 0x1bc0b4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1bc0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1bc0b8:
    // 0x1bc0b8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1bc0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1bc0bc:
    // 0x1bc0bc: 0x24c64b20  addiu       $a2, $a2, 0x4B20
    ctx->pc = 0x1bc0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19232));
label_1bc0c0:
    // 0x1bc0c0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1bc0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1bc0c4:
    // 0x1bc0c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1bc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1bc0c8:
    // 0x1bc0c8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1bc0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1bc0cc:
    // 0x1bc0cc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1bc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1bc0d0:
    // 0x1bc0d0: 0x60f809  jalr        $v1
label_1bc0d4:
    if (ctx->pc == 0x1BC0D4u) {
        ctx->pc = 0x1BC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0D0u;
        // 0x1bc0d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0D8u;
        goto label_1bc0d8;
    }
    ctx->pc = 0x1BC0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC0D8u);
        ctx->pc = 0x1BC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0D0u;
        // 0x1bc0d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC0D0u, 0x1BC0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC0D8u;
label_1bc0d8:
    // 0x1bc0d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1bc0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1bc0dc:
    // 0x1bc0dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1bc0e0:
    if (ctx->pc == 0x1BC0E0u) {
        ctx->pc = 0x1BC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0DCu;
        // 0x1bc0e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0E4u;
        goto label_1bc0e4;
    }
    ctx->pc = 0x1BC0DCu;
    {
        const bool branch_taken_0x1bc0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc0dc) {
            ctx->pc = 0x1BC0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC0DCu;
            // 0x1bc0e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC0F0u;
            goto label_1bc0f0;
        }
    }
    ctx->pc = 0x1BC0E4u;
label_1bc0e4:
    // 0x1bc0e4: 0xc10b208  jal         func_42C820
label_1bc0e8:
    if (ctx->pc == 0x1BC0E8u) {
        ctx->pc = 0x1BC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0E4u;
        // 0x1bc0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0ECu;
        goto label_1bc0ec;
    }
    ctx->pc = 0x1BC0E4u;
    SET_GPR_U32(ctx, 31, 0x1BC0ECu);
    ctx->pc = 0x1BC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0E4u;
    // 0x1bc0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1BC0E4u, 0x1BC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0ECu;
label_1bc0ec:
    // 0x1bc0ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc0f0:
    // 0x1bc0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc0f4:
    // 0x1bc0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc0f8:
    // 0x1bc0f8: 0x3e00008  jr          $ra
label_1bc0fc:
    if (ctx->pc == 0x1BC0FCu) {
        ctx->pc = 0x1BC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0F8u;
        // 0x1bc0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC100u;
        goto label_fallthrough_0x1bc0f8;
    }
    ctx->pc = 0x1BC0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0F8u;
        // 0x1bc0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc0f8:
    ctx->pc = 0x1BC100u;
}
