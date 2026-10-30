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

// Function: sub_0041CC40
// Address: 0x41cc40 - 0x41ce88
void sub_0041CC40_0x41cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CC40_0x41cc40");
#endif

    switch (ctx->pc) {
        case 0x41cc74u: goto label_41cc74;
        case 0x41ccb4u: goto label_41ccb4;
        case 0x41cce8u: goto label_41cce8;
        case 0x41cd30u: goto label_41cd30;
        case 0x41cd3cu: goto label_41cd3c;
        case 0x41cd78u: goto label_41cd78;
        case 0x41cd94u: goto label_41cd94;
        case 0x41cdc8u: goto label_41cdc8;
        case 0x41ce08u: goto label_41ce08;
        case 0x41ce48u: goto label_41ce48;
        case 0x41ce58u: goto label_41ce58;
        default: break;
    }

    ctx->pc = 0x41cc40u;

    // 0x41cc40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41cc44: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x41cc48: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x41cc4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41cc4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cc50: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41cc54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41cc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cc58: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x41cc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cc60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x41cc64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41cc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cc68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41cc6c: 0xc087502  jal         func_21D408
    ctx->pc = 0x41CC6Cu;
    SET_GPR_U32(ctx, 31, 0x41CC74u);
    ctx->pc = 0x41CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CC6Cu;
    // 0x41cc70: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41CC6Cu, 0x41CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CC74u;
label_41cc74:
    // 0x41cc74: 0x823301b0  lb          $s3, 0x1B0($s1)
    ctx->pc = 0x41cc74u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x41cc78: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x41cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x41cc7c: 0x9044041a  lbu         $a0, 0x41A($v0)
    ctx->pc = 0x41cc7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    // 0x41cc80: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x41cc80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x41cc84: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x41CC84u;
    {
        const bool branch_taken_0x41cc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC84u;
        // 0x41cc88: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc84) {
            ctx->pc = 0x41CE64u;
            goto label_41ce64;
        }
    }
    ctx->pc = 0x41CC8Cu;
    // 0x41cc8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x41cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x41cc90: 0x2442aea0  addiu       $v0, $v0, -0x5160
    ctx->pc = 0x41cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946464));
    // 0x41cc94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41cc98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41cc9c: 0x800008  jr          $a0
    ctx->pc = 0x41CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x41CCA4u: goto label_41cca4;
            case 0x41CCF4u: goto label_41ccf4;
            case 0x41CD44u: goto label_41cd44;
            case 0x41CD84u: goto label_41cd84;
            case 0x41CDD4u: goto label_41cdd4;
            case 0x41CE14u: goto label_41ce14;
            case 0x41CE5Cu: goto label_41ce5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x41CCA4u;
label_41cca4:
    // 0x41cca4: 0x1600006e  bnez        $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x41CCA4u;
    {
        const bool branch_taken_0x41cca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCA4u;
        // 0x41cca8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cca4) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CCACu;
    // 0x41ccac: 0xc08a05a  jal         func_228168
    ctx->pc = 0x41CCACu;
    SET_GPR_U32(ctx, 31, 0x41CCB4u);
    ctx->pc = 0x41CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CCACu;
    // 0x41ccb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x41CCACu, 0x41CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CCB4u;
label_41ccb4:
    // 0x41ccb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x41ccb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41ccbc: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x41ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x41ccc0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41ccc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41ccc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41ccc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41ccc8: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x41ccc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x41cccc: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x41ccccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
    // 0x41ccd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ccd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41ccd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ccd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41ccd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ccdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41ccdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cce0: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CCE0u;
    SET_GPR_U32(ctx, 31, 0x41CCE8u);
    ctx->pc = 0x41CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CCE0u;
    // 0x41cce4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CCE0u, 0x41CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CCE8u;
label_41cce8:
    // 0x41cce8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x41ccec: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x41CCECu;
    {
        const bool branch_taken_0x41ccec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCECu;
        // 0x41ccf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ccec) {
            ctx->pc = 0x41CE50u;
            goto label_41ce50;
        }
    }
    ctx->pc = 0x41CCF4u;
label_41ccf4:
    // 0x41ccf4: 0x1600005a  bnez        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x41CCF4u;
    {
        const bool branch_taken_0x41ccf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CCF4u;
        // 0x41ccf8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ccf4) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CCFCu;
    // 0x41ccfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x41ccfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cd00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41cd04: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41cd04u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41cd08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41cd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41cd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41cd10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41cd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41cd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd18: 0x252280b  movn        $a1, $s2, $s2
    ctx->pc = 0x41cd18u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x41cd1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41cd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cd24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41cd24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd28: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CD28u;
    SET_GPR_U32(ctx, 31, 0x41CD30u);
    ctx->pc = 0x41CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CD28u;
    // 0x41cd2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CD28u, 0x41CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD30u;
label_41cd30:
    // 0x41cd30: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x41cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x41cd34: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x41CD34u;
    SET_GPR_U32(ctx, 31, 0x41CD3Cu);
    ctx->pc = 0x41CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CD34u;
    // 0x41cd38: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41CD34u, 0x41CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD3Cu;
label_41cd3c:
    // 0x41cd3c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x41CD3Cu;
    {
        const bool branch_taken_0x41cd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD3Cu;
        // 0x41cd40: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd3c) {
            ctx->pc = 0x41CE5Cu;
            goto label_41ce5c;
        }
    }
    ctx->pc = 0x41CD44u;
label_41cd44:
    // 0x41cd44: 0x16000046  bnez        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x41CD44u;
    {
        const bool branch_taken_0x41cd44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD44u;
        // 0x41cd48: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd44) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CD4Cu;
    // 0x41cd4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41cd50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41cd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41cd54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41cd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41cd58: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41cd58u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41cd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x41cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41cd64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41cd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cd6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41cd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cd70: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CD70u;
    SET_GPR_U32(ctx, 31, 0x41CD78u);
    ctx->pc = 0x41CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CD70u;
    // 0x41cd74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CD70u, 0x41CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD78u;
label_41cd78:
    // 0x41cd78: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x41cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x41cd7c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x41CD7Cu;
    {
        const bool branch_taken_0x41cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD7Cu;
        // 0x41cd80: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd7c) {
            ctx->pc = 0x41CE50u;
            goto label_41ce50;
        }
    }
    ctx->pc = 0x41CD84u;
label_41cd84:
    // 0x41cd84: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x41CD84u;
    {
        const bool branch_taken_0x41cd84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CD84u;
        // 0x41cd88: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd84) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CD8Cu;
    // 0x41cd8c: 0xc08a05a  jal         func_228168
    ctx->pc = 0x41CD8Cu;
    SET_GPR_U32(ctx, 31, 0x41CD94u);
    ctx->pc = 0x41CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CD8Cu;
    // 0x41cd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x41CD8Cu, 0x41CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CD94u;
label_41cd94:
    // 0x41cd94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x41cd98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41cd9c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x41cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x41cda0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41cda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41cda4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41cda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41cda8: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x41cda8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x41cdac: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x41cdacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
    // 0x41cdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cdb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cdb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41cdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cdbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41cdbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cdc0: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CDC0u;
    SET_GPR_U32(ctx, 31, 0x41CDC8u);
    ctx->pc = 0x41CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CDC0u;
    // 0x41cdc4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CDC0u, 0x41CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CDC8u;
label_41cdc8:
    // 0x41cdc8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x41cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x41cdcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x41CDCCu;
    {
        const bool branch_taken_0x41cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDCCu;
        // 0x41cdd0: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdcc) {
            ctx->pc = 0x41CE50u;
            goto label_41ce50;
        }
    }
    ctx->pc = 0x41CDD4u;
label_41cdd4:
    // 0x41cdd4: 0x16000022  bnez        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x41CDD4u;
    {
        const bool branch_taken_0x41cdd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CDD4u;
        // 0x41cdd8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdd4) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CDDCu;
    // 0x41cddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41cde0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41cde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41cde4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41cde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41cde8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41cde8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41cdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cdf0: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x41cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x41cdf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cdf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41cdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cdfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41cdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ce00: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CE00u;
    SET_GPR_U32(ctx, 31, 0x41CE08u);
    ctx->pc = 0x41CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CE00u;
    // 0x41ce04: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CE00u, 0x41CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE08u;
label_41ce08:
    // 0x41ce08: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x41ce0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x41CE0Cu;
    {
        const bool branch_taken_0x41ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE0Cu;
        // 0x41ce10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce0c) {
            ctx->pc = 0x41CE50u;
            goto label_41ce50;
        }
    }
    ctx->pc = 0x41CE14u;
label_41ce14:
    // 0x41ce14: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x41CE14u;
    {
        const bool branch_taken_0x41ce14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE14u;
        // 0x41ce18: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce14) {
            ctx->pc = 0x41CE60u;
            goto label_41ce60;
        }
    }
    ctx->pc = 0x41CE1Cu;
    // 0x41ce1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41ce20: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41ce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x41ce24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41ce24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41ce28: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x41ce28u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x41ce2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ce30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ce34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41ce34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ce38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41ce38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ce3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41ce3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ce40: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41CE40u;
    SET_GPR_U32(ctx, 31, 0x41CE48u);
    ctx->pc = 0x41CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CE40u;
    // 0x41ce44: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41CE40u, 0x41CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE48u;
label_41ce48:
    // 0x41ce48: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x41ce4c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x41ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_41ce50:
    // 0x41ce50: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x41CE50u;
    SET_GPR_U32(ctx, 31, 0x41CE58u);
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41CE50u, 0x41CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CE58u;
label_41ce58:
    // 0x41ce58: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x41ce58u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41ce5c:
    // 0x41ce5c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x41ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_41ce60:
    // 0x41ce60: 0xa0500416  sb          $s0, 0x416($v0)
    ctx->pc = 0x41ce60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1046), (uint8_t)GPR_U32(ctx, 16));
label_41ce64:
    // 0x41ce64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41ce64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41ce68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41ce68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41ce6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x41ce6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41ce70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41ce70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41ce74: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41ce74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41ce78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41ce78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41ce7c: 0x3e00008  jr          $ra
    ctx->pc = 0x41CE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CE7Cu;
        // 0x41ce80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CE84u;
    // 0x41ce84: 0x0  nop
    ctx->pc = 0x41ce84u;
    // NOP
    ctx->pc = 0x41ce88u;
}
