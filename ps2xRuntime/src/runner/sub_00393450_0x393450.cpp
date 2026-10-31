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

// Function: sub_00393450
// Address: 0x393450 - 0x393538
void sub_00393450_0x393450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393450_0x393450");
#endif

    switch (ctx->pc) {
        case 0x393488u: goto label_393488;
        default: break;
    }

    ctx->pc = 0x393450u;

    // 0x393450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x393450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x393454: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x393454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x393458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x393458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x39345c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x393460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x393460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393464: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x393464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x393468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x393468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39346c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393470: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x393470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x393474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x393474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x393478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x393478u;
    {
        const bool branch_taken_0x393478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393478u;
        // 0x39347c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393478) {
            ctx->pc = 0x3934A0u;
            goto label_3934a0;
        }
    }
    ctx->pc = 0x393480u;
    // 0x393480: 0xc0e5476  jal         func_3951D8
    ctx->pc = 0x393480u;
    SET_GPR_U32(ctx, 31, 0x393488u);
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x393480u, 0x393488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393488u;
label_393488:
    // 0x393488: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x393488u;
    {
        const bool branch_taken_0x393488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393488u;
        // 0x39348c: 0x3c023c4e  lui         $v0, 0x3C4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15438 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393488) {
            ctx->pc = 0x3934C0u;
            goto label_3934c0;
        }
    }
    ctx->pc = 0x393490u;
    // 0x393490: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x393490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x393494: 0x3442590b  ori         $v0, $v0, 0x590B
    ctx->pc = 0x393494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22795);
    // 0x393498: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x393498u;
    {
        const bool branch_taken_0x393498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x393498) {
            ctx->pc = 0x3934C0u;
            goto label_3934c0;
        }
    }
    ctx->pc = 0x3934A0u;
label_3934a0:
    // 0x3934a0: 0x9204010e  lbu         $a0, 0x10E($s0)
    ctx->pc = 0x3934a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 270)));
    // 0x3934a4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3934a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3934a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3934A8u;
    {
        const bool branch_taken_0x3934a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934A8u;
        // 0x3934ac: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934a8) {
            ctx->pc = 0x3934C0u;
            goto label_3934c0;
        }
    }
    ctx->pc = 0x3934B0u;
    // 0x3934b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3934B0u;
    {
        const bool branch_taken_0x3934b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3934B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934B0u;
        // 0x3934b4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934b0) {
            ctx->pc = 0x3934C0u;
            goto label_3934c0;
        }
    }
    ctx->pc = 0x3934B8u;
    // 0x3934b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3934b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3934bc: 0xa202010e  sb          $v0, 0x10E($s0)
    ctx->pc = 0x3934bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 2));
label_3934c0:
    // 0x3934c0: 0x56400017  bnel        $s2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3934C0u;
    {
        const bool branch_taken_0x3934c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3934c0) {
            ctx->pc = 0x3934C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3934C0u;
            // 0x3934c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393520u;
            goto label_393520;
        }
    }
    ctx->pc = 0x3934C8u;
    // 0x3934c8: 0x9204010d  lbu         $a0, 0x10D($s0)
    ctx->pc = 0x3934c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
    // 0x3934cc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3934ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3934d0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3934D0u;
    {
        const bool branch_taken_0x3934d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934D0u;
        // 0x3934d4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934d0) {
            ctx->pc = 0x39351Cu;
            goto label_39351c;
        }
    }
    ctx->pc = 0x3934D8u;
    // 0x3934d8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3934D8u;
    {
        const bool branch_taken_0x3934d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3934DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934D8u;
        // 0x3934dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934d8) {
            ctx->pc = 0x39351Cu;
            goto label_39351c;
        }
    }
    ctx->pc = 0x3934E0u;
    // 0x3934e0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3934E0u;
    {
        const bool branch_taken_0x3934e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3934E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934E0u;
        // 0x3934e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934e0) {
            ctx->pc = 0x3934F4u;
            goto label_3934f4;
        }
    }
    ctx->pc = 0x3934E8u;
    // 0x3934e8: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x3934e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x3934ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3934ECu;
    {
        const bool branch_taken_0x3934ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3934F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934ECu;
        // 0x3934f0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934ec) {
            ctx->pc = 0x393500u;
            goto label_393500;
        }
    }
    ctx->pc = 0x3934F4u;
label_3934f4:
    // 0x3934f4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3934f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3934f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3934F8u;
    {
        const bool branch_taken_0x3934f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934F8u;
        // 0x3934fc: 0xa202010d  sb          $v0, 0x10D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934f8) {
            ctx->pc = 0x39351Cu;
            goto label_39351c;
        }
    }
    ctx->pc = 0x393500u;
label_393500:
    // 0x393500: 0x9202010d  lbu         $v0, 0x10D($s0)
    ctx->pc = 0x393500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
    // 0x393504: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x393504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x393508: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x393508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x39350c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x393510: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x393510u;
    {
        const bool branch_taken_0x393510 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x393510) {
            ctx->pc = 0x393514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393510u;
            // 0x393514: 0xa200010d  sb          $zero, 0x10D($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39351Cu;
            goto label_39351c;
        }
    }
    ctx->pc = 0x393518u;
    // 0x393518: 0xa202010d  sb          $v0, 0x10D($s0)
    ctx->pc = 0x393518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
label_39351c:
    // 0x39351c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39351cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393520:
    // 0x393520: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x393520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393524: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x393524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39352c: 0x3e00008  jr          $ra
    ctx->pc = 0x39352Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39352Cu;
        // 0x393530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39352Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393534u;
    // 0x393534: 0x0  nop
    ctx->pc = 0x393534u;
    // NOP
    ctx->pc = 0x393538u;
}
