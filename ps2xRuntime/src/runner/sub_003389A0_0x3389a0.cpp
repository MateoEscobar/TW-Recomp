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

// Function: sub_003389A0
// Address: 0x3389a0 - 0x338a78
void sub_003389A0_0x3389a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003389A0_0x3389a0");
#endif

    switch (ctx->pc) {
        case 0x3389a0u: goto label_3389a0;
        case 0x3389a4u: goto label_3389a4;
        case 0x3389a8u: goto label_3389a8;
        case 0x3389acu: goto label_3389ac;
        case 0x3389b0u: goto label_3389b0;
        case 0x3389b4u: goto label_3389b4;
        case 0x3389b8u: goto label_3389b8;
        case 0x3389bcu: goto label_3389bc;
        case 0x3389c0u: goto label_3389c0;
        case 0x3389c4u: goto label_3389c4;
        case 0x3389c8u: goto label_3389c8;
        case 0x3389ccu: goto label_3389cc;
        case 0x3389d0u: goto label_3389d0;
        case 0x3389d4u: goto label_3389d4;
        case 0x3389d8u: goto label_3389d8;
        case 0x3389dcu: goto label_3389dc;
        case 0x3389e0u: goto label_3389e0;
        case 0x3389e4u: goto label_3389e4;
        case 0x3389e8u: goto label_3389e8;
        case 0x3389ecu: goto label_3389ec;
        case 0x3389f0u: goto label_3389f0;
        case 0x3389f4u: goto label_3389f4;
        case 0x3389f8u: goto label_3389f8;
        case 0x3389fcu: goto label_3389fc;
        case 0x338a00u: goto label_338a00;
        case 0x338a04u: goto label_338a04;
        case 0x338a08u: goto label_338a08;
        case 0x338a0cu: goto label_338a0c;
        case 0x338a10u: goto label_338a10;
        case 0x338a14u: goto label_338a14;
        case 0x338a18u: goto label_338a18;
        case 0x338a1cu: goto label_338a1c;
        case 0x338a20u: goto label_338a20;
        case 0x338a24u: goto label_338a24;
        case 0x338a28u: goto label_338a28;
        case 0x338a2cu: goto label_338a2c;
        case 0x338a30u: goto label_338a30;
        case 0x338a34u: goto label_338a34;
        case 0x338a38u: goto label_338a38;
        case 0x338a3cu: goto label_338a3c;
        case 0x338a40u: goto label_338a40;
        case 0x338a44u: goto label_338a44;
        case 0x338a48u: goto label_338a48;
        case 0x338a4cu: goto label_338a4c;
        case 0x338a50u: goto label_338a50;
        case 0x338a54u: goto label_338a54;
        case 0x338a58u: goto label_338a58;
        case 0x338a5cu: goto label_338a5c;
        case 0x338a60u: goto label_338a60;
        case 0x338a64u: goto label_338a64;
        case 0x338a68u: goto label_338a68;
        case 0x338a6cu: goto label_338a6c;
        case 0x338a70u: goto label_338a70;
        case 0x338a74u: goto label_338a74;
        default: break;
    }

    ctx->pc = 0x3389a0u;

label_3389a0:
    // 0x3389a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3389a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3389a4:
    // 0x3389a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3389a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3389a8:
    // 0x3389a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3389a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3389ac:
    // 0x3389ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3389acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3389b0:
    // 0x3389b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3389b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3389b4:
    // 0x3389b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3389b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3389b8:
    // 0x3389b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3389b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3389bc:
    // 0x3389bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3389bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3389c0:
    // 0x3389c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3389c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3389c4:
    // 0x3389c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3389c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3389c8:
    // 0x3389c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3389c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3389cc:
    // 0x3389cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3389ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3389d0:
    // 0x3389d0: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x3389d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3389d4:
    // 0x3389d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3389d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3389d8:
    // 0x3389d8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x3389d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3389dc:
    // 0x3389dc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3389e0:
    // 0x3389e0: 0x60f809  jalr        $v1
label_3389e4:
    if (ctx->pc == 0x3389E4u) {
        ctx->pc = 0x3389E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389E0u;
        // 0x3389e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3389E8u;
        goto label_3389e8;
    }
    ctx->pc = 0x3389E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3389E8u);
        ctx->pc = 0x3389E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389E0u;
        // 0x3389e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3389E0u, 0x3389E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3389E8u;
label_3389e8:
    // 0x3389e8: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x3389e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3389ec:
    // 0x3389ec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3389ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_3389f0:
    // 0x3389f0: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x3389f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_3389f4:
    // 0x3389f4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3389f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3389f8:
    // 0x3389f8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3389f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3389fc:
    // 0x3389fc: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x3389fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_338a00:
    // 0x338a00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x338a00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338a04:
    // 0x338a04: 0x25086c60  addiu       $t0, $t0, 0x6C60
    ctx->pc = 0x338a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27744));
label_338a08:
    // 0x338a08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x338a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_338a0c:
    // 0x338a0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338a10:
    // 0x338a10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x338a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_338a14:
    // 0x338a14: 0x24a56c58  addiu       $a1, $a1, 0x6C58
    ctx->pc = 0x338a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27736));
label_338a18:
    // 0x338a18: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x338a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_338a1c:
    // 0x338a1c: 0x40f809  jalr        $v0
label_338a20:
    if (ctx->pc == 0x338A20u) {
        ctx->pc = 0x338A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A1Cu;
        // 0x338a20: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338A24u;
        goto label_338a24;
    }
    ctx->pc = 0x338A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338A24u);
        ctx->pc = 0x338A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A1Cu;
        // 0x338a20: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A1Cu, 0x338A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338A24u;
label_338a24:
    // 0x338a24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x338a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_338a28:
    // 0x338a28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x338a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338a2c:
    // 0x338a2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338a30:
    // 0x338a30: 0xc0ce29e  jal         func_338A78
label_338a34:
    if (ctx->pc == 0x338A34u) {
        ctx->pc = 0x338A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A30u;
        // 0x338a34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338A38u;
        goto label_338a38;
    }
    ctx->pc = 0x338A30u;
    SET_GPR_U32(ctx, 31, 0x338A38u);
    ctx->pc = 0x338A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A30u;
    // 0x338a34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A78u, 0x338A30u, 0x338A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A38u;
label_338a38:
    // 0x338a38: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x338a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_338a3c:
    // 0x338a3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x338a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_338a40:
    // 0x338a40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338a44:
    // 0x338a44: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x338a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_338a48:
    // 0x338a48: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x338a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_338a4c:
    // 0x338a4c: 0x60f809  jalr        $v1
label_338a50:
    if (ctx->pc == 0x338A50u) {
        ctx->pc = 0x338A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A4Cu;
        // 0x338a50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338A54u;
        goto label_338a54;
    }
    ctx->pc = 0x338A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338A54u);
        ctx->pc = 0x338A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A4Cu;
        // 0x338a50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A4Cu, 0x338A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338A54u;
label_338a54:
    // 0x338a54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x338a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_338a58:
    // 0x338a58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x338a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_338a5c:
    // 0x338a5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x338a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_338a60:
    // 0x338a60: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x338a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338a64:
    // 0x338a64: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x338a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338a68:
    // 0x338a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338a6c:
    // 0x338a6c: 0x3e00008  jr          $ra
label_338a70:
    if (ctx->pc == 0x338A70u) {
        ctx->pc = 0x338A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A6Cu;
        // 0x338a70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338A74u;
        goto label_338a74;
    }
    ctx->pc = 0x338A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A6Cu;
        // 0x338a70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A74u;
label_338a74:
    // 0x338a74: 0x0  nop
    ctx->pc = 0x338a74u;
    // NOP
    ctx->pc = 0x338a78u;
}
