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

// Function: sub_003259C0
// Address: 0x3259c0 - 0x325b00
void sub_003259C0_0x3259c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003259C0_0x3259c0");
#endif

    switch (ctx->pc) {
        case 0x3259e0u: goto label_3259e0;
        case 0x325a14u: goto label_325a14;
        case 0x325a2cu: goto label_325a2c;
        case 0x325a58u: goto label_325a58;
        case 0x325a68u: goto label_325a68;
        case 0x325a84u: goto label_325a84;
        case 0x325a94u: goto label_325a94;
        case 0x325aa8u: goto label_325aa8;
        case 0x325ad4u: goto label_325ad4;
        case 0x325ae4u: goto label_325ae4;
        default: break;
    }

    ctx->pc = 0x3259c0u;

    // 0x3259c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3259c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3259c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3259c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3259c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3259c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3259cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3259ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3259d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3259d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3259d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3259d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3259d8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3259D8u;
    SET_GPR_U32(ctx, 31, 0x3259E0u);
    ctx->pc = 0x3259DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259D8u;
    // 0x3259dc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3259D8u, 0x3259E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259E0u;
label_3259e0:
    // 0x3259e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3259e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259e4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3259e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3259e8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3259E8u;
    {
        const bool branch_taken_0x3259e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259E8u;
        // 0x3259ec: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259e8) {
            ctx->pc = 0x325AC0u;
            goto label_325ac0;
        }
    }
    ctx->pc = 0x3259F0u;
    // 0x3259f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3259f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3259f4: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x3259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
    // 0x3259f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3259f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3259fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325a00: 0x800008  jr          $a0
    ctx->pc = 0x325A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x325A08u: goto label_325a08;
            case 0x325A20u: goto label_325a20;
            case 0x325A34u: goto label_325a34;
            case 0x325A44u: goto label_325a44;
            case 0x325A70u: goto label_325a70;
            case 0x325AB0u: goto label_325ab0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x325A08u;
label_325a08:
    // 0x325a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a0c: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x325A0Cu;
    SET_GPR_U32(ctx, 31, 0x325A14u);
    ctx->pc = 0x325A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A0Cu;
    // 0x325a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x325A0Cu, 0x325A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A14u;
label_325a14:
    // 0x325a14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a18: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x325A18u;
    {
        const bool branch_taken_0x325a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A18u;
        // 0x325a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a18) {
            ctx->pc = 0x325ADCu;
            goto label_325adc;
        }
    }
    ctx->pc = 0x325A20u;
label_325a20:
    // 0x325a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a24: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325A24u;
    SET_GPR_U32(ctx, 31, 0x325A2Cu);
    ctx->pc = 0x325A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A24u;
    // 0x325a28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325A24u, 0x325A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A2Cu;
label_325a2c:
    // 0x325a2c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x325A2Cu;
    {
        const bool branch_taken_0x325a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A2Cu;
        // 0x325a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a2c) {
            ctx->pc = 0x325AE8u;
            goto label_325ae8;
        }
    }
    ctx->pc = 0x325A34u;
label_325a34:
    // 0x325a34: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x325a34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x325a38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x325A3Cu;
    {
        const bool branch_taken_0x325a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A3Cu;
        // 0x325a40: 0x26104ae0  addiu       $s0, $s0, 0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a3c) {
            ctx->pc = 0x325A50u;
            goto label_325a50;
        }
    }
    ctx->pc = 0x325A44u;
label_325a44:
    // 0x325a44: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x325a44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x325a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a4c: 0x26104af0  addiu       $s0, $s0, 0x4AF0
    ctx->pc = 0x325a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19184));
label_325a50:
    // 0x325a50: 0xc0c8e10  jal         func_323840
    ctx->pc = 0x325A50u;
    SET_GPR_U32(ctx, 31, 0x325A58u);
    ctx->pc = 0x325A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A50u;
    // 0x325a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323840u, 0x325A50u, 0x325A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A58u;
label_325a58:
    // 0x325a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x325a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a60: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x325A60u;
    SET_GPR_U32(ctx, 31, 0x325A68u);
    ctx->pc = 0x325A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A60u;
    // 0x325a64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x325A60u, 0x325A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A68u;
label_325a68:
    // 0x325a68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x325A68u;
    {
        const bool branch_taken_0x325a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A68u;
        // 0x325a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a68) {
            ctx->pc = 0x325AD8u;
            goto label_325ad8;
        }
    }
    ctx->pc = 0x325A70u;
label_325a70:
    // 0x325a70: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x325a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x325a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a78: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x325a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x325a7c: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x325A7Cu;
    SET_GPR_U32(ctx, 31, 0x325A84u);
    ctx->pc = 0x325A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A7Cu;
    // 0x325a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x325A7Cu, 0x325A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A84u;
label_325a84:
    // 0x325a84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x325a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a8c: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x325A8Cu;
    SET_GPR_U32(ctx, 31, 0x325A94u);
    ctx->pc = 0x325A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A8Cu;
    // 0x325a90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x325A8Cu, 0x325A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A94u;
label_325a94:
    // 0x325a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x325a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x325a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x325a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325aa0: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x325AA0u;
    SET_GPR_U32(ctx, 31, 0x325AA8u);
    ctx->pc = 0x325AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325AA0u;
    // 0x325aa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x325AA0u, 0x325AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AA8u;
label_325aa8:
    // 0x325aa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x325AA8u;
    {
        const bool branch_taken_0x325aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AA8u;
        // 0x325aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325aa8) {
            ctx->pc = 0x325AD8u;
            goto label_325ad8;
        }
    }
    ctx->pc = 0x325AB0u;
label_325ab0:
    // 0x325ab0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x325ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325AB8u;
    {
        const bool branch_taken_0x325ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AB8u;
        // 0x325abc: 0x24a54b18  addiu       $a1, $a1, 0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ab8) {
            ctx->pc = 0x325ADCu;
            goto label_325adc;
        }
    }
    ctx->pc = 0x325AC0u;
label_325ac0:
    // 0x325ac0: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x325ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x325ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ac8: 0x24c64b20  addiu       $a2, $a2, 0x4B20
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19232));
    // 0x325acc: 0xc0c910e  jal         func_324438
    ctx->pc = 0x325ACCu;
    SET_GPR_U32(ctx, 31, 0x325AD4u);
    ctx->pc = 0x325AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325ACCu;
    // 0x325ad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x325ACCu, 0x325AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AD4u;
label_325ad4:
    // 0x325ad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_325ad8:
    // 0x325ad8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x325ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_325adc:
    // 0x325adc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x325ADCu;
    SET_GPR_U32(ctx, 31, 0x325AE4u);
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x325ADCu, 0x325AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AE4u;
label_325ae4:
    // 0x325ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325ae8:
    // 0x325ae8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x325ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325aec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x325aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325af0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x325af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325af4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325af8: 0x3e00008  jr          $ra
    ctx->pc = 0x325AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AF8u;
        // 0x325afc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325B00u;
}
