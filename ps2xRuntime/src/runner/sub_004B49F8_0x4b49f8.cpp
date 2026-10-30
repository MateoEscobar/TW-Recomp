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

// Function: sub_004B49F8
// Address: 0x4b49f8 - 0x4b4ac8
void sub_004B49F8_0x4b49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B49F8_0x4b49f8");
#endif

    switch (ctx->pc) {
        case 0x4b4a1cu: goto label_4b4a1c;
        case 0x4b4a2cu: goto label_4b4a2c;
        case 0x4b4aacu: goto label_4b4aac;
        default: break;
    }

    ctx->pc = 0x4b49f8u;

    // 0x4b49f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b49fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4b49fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4b4a00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b4a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b4a04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b4a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4b4a10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b4a14: 0xc12d1d6  jal         func_4B4758
    ctx->pc = 0x4B4A14u;
    SET_GPR_U32(ctx, 31, 0x4B4A1Cu);
    ctx->pc = 0x4B4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4A14u;
    // 0x4b4a18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4758u, 0x4B4A14u, 0x4B4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4A1Cu;
label_4b4a1c:
    // 0x4b4a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b4a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b4a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a24: 0xc12d1d6  jal         func_4B4758
    ctx->pc = 0x4B4A24u;
    SET_GPR_U32(ctx, 31, 0x4B4A2Cu);
    ctx->pc = 0x4B4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4A24u;
    // 0x4b4a28: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4758u, 0x4B4A24u, 0x4B4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4A2Cu;
label_4b4a2c:
    // 0x4b4a2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4b4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b4a30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b4a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a34: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4b4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b4a38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4a3c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4b4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4a40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4b4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b4a44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4b4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x4b4a48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b4a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b4a50: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4A50u;
    {
        const bool branch_taken_0x4b4a50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A50u;
        // 0x4b4a54: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a50) {
            ctx->pc = 0x4B4A7Cu;
            goto label_4b4a7c;
        }
    }
    ctx->pc = 0x4B4A58u;
    // 0x4b4a58: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x4b4a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x4b4a5c: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x4b4a5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b4a60: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4a64: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b4a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b4a68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b4a6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b4a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b4a70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b4a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b4a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B4A74u;
    {
        const bool branch_taken_0x4b4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A74u;
        // 0x4b4a78: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a74) {
            ctx->pc = 0x4B4AA0u;
            goto label_4b4aa0;
        }
    }
    ctx->pc = 0x4B4A7Cu;
label_4b4a7c:
    // 0x4b4a7c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4b4a7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4a80: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x4b4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x4b4a84: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x4b4a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b4a88: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4a8c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b4a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b4a90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b4a94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b4a98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b4a9c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4b4a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b4aa0:
    // 0x4b4aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b4aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4aa4: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B4AA4u;
    SET_GPR_U32(ctx, 31, 0x4B4AACu);
    ctx->pc = 0x4B4AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4AA4u;
    // 0x4b4aa8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B4AA4u, 0x4B4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4AACu;
label_4b4aac:
    // 0x4b4aac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b4aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4ab0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b4ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4ab4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4b4ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4ab8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b4ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4abc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4ABCu;
        // 0x4b4ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4AC4u;
    // 0x4b4ac4: 0x0  nop
    ctx->pc = 0x4b4ac4u;
    // NOP
    ctx->pc = 0x4b4ac8u;
}
