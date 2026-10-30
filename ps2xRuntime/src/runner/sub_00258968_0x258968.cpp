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

// Function: sub_00258968
// Address: 0x258968 - 0x258a88
void sub_00258968_0x258968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258968_0x258968");
#endif

    switch (ctx->pc) {
        case 0x258988u: goto label_258988;
        case 0x258990u: goto label_258990;
        case 0x258998u: goto label_258998;
        case 0x2589a4u: goto label_2589a4;
        case 0x2589acu: goto label_2589ac;
        case 0x2589b4u: goto label_2589b4;
        case 0x2589c0u: goto label_2589c0;
        case 0x2589ccu: goto label_2589cc;
        case 0x2589f4u: goto label_2589f4;
        case 0x258a0cu: goto label_258a0c;
        case 0x258a18u: goto label_258a18;
        case 0x258a44u: goto label_258a44;
        case 0x258a50u: goto label_258a50;
        case 0x258a58u: goto label_258a58;
        case 0x258a60u: goto label_258a60;
        case 0x258a70u: goto label_258a70;
        default: break;
    }

    ctx->pc = 0x258968u;

    // 0x258968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25896c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x258970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258974: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x258974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x258978: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x258978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25897c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258980: 0xc0e409a  jal         func_390268
    ctx->pc = 0x258980u;
    SET_GPR_U32(ctx, 31, 0x258988u);
    ctx->pc = 0x258984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258980u;
    // 0x258984: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x258980u, 0x258988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258988u;
label_258988:
    // 0x258988: 0xc089a76  jal         func_2269D8
    ctx->pc = 0x258988u;
    SET_GPR_U32(ctx, 31, 0x258990u);
    ctx->pc = 0x25898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258988u;
    // 0x25898c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x258988u, 0x258990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258990u;
label_258990:
    // 0x258990: 0xc0962a2  jal         func_258A88
    ctx->pc = 0x258990u;
    SET_GPR_U32(ctx, 31, 0x258998u);
    ctx->pc = 0x258994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258990u;
    // 0x258994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x258990u, 0x258998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258998u;
label_258998:
    // 0x258998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25899c: 0xc08b900  jal         func_22E400
    ctx->pc = 0x25899Cu;
    SET_GPR_U32(ctx, 31, 0x2589A4u);
    ctx->pc = 0x2589A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25899Cu;
    // 0x2589a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x25899Cu, 0x2589A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589A4u;
label_2589a4:
    // 0x2589a4: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2589A4u;
    SET_GPR_U32(ctx, 31, 0x2589ACu);
    ctx->pc = 0x2589A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589A4u;
    // 0x2589a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2589A4u, 0x2589ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589ACu;
label_2589ac:
    // 0x2589ac: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2589ACu;
    SET_GPR_U32(ctx, 31, 0x2589B4u);
    ctx->pc = 0x2589B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589ACu;
    // 0x2589b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2589ACu, 0x2589B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589B4u;
label_2589b4:
    // 0x2589b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2589b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2589b8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2589B8u;
    SET_GPR_U32(ctx, 31, 0x2589C0u);
    ctx->pc = 0x2589BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589B8u;
    // 0x2589bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2589B8u, 0x2589C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589C0u;
label_2589c0:
    // 0x2589c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2589c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2589c4: 0xc089c20  jal         func_227080
    ctx->pc = 0x2589C4u;
    SET_GPR_U32(ctx, 31, 0x2589CCu);
    ctx->pc = 0x2589C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589C4u;
    // 0x2589c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x2589C4u, 0x2589CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589CCu;
label_2589cc:
    // 0x2589cc: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2589ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2589d0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2589d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2589d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2589d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2589d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2589d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2589dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2589dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2589e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2589e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2589e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2589E4u;
    {
        const bool branch_taken_0x2589e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589E4u;
        // 0x2589e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589e4) {
            ctx->pc = 0x2589F4u;
            goto label_2589f4;
        }
    }
    ctx->pc = 0x2589ECu;
    // 0x2589ec: 0xc08dbee  jal         func_236FB8
    ctx->pc = 0x2589ECu;
    SET_GPR_U32(ctx, 31, 0x2589F4u);
    ctx->pc = 0x2589F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589ECu;
    // 0x2589f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x2589ECu, 0x2589F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589F4u;
label_2589f4:
    // 0x2589f4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2589F4u;
    {
        const bool branch_taken_0x2589f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589F4u;
        // 0x2589f8: 0xae000650  sw          $zero, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589f4) {
            ctx->pc = 0x258A34u;
            goto label_258a34;
        }
    }
    ctx->pc = 0x2589FCu;
    // 0x2589fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x258a00: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x258a00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x258a04: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x258A04u;
    SET_GPR_U32(ctx, 31, 0x258A0Cu);
    ctx->pc = 0x258A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A04u;
    // 0x258a08: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x258A04u, 0x258A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A0Cu;
label_258a0c:
    // 0x258a0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x258a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a10: 0xc087502  jal         func_21D408
    ctx->pc = 0x258A10u;
    SET_GPR_U32(ctx, 31, 0x258A18u);
    ctx->pc = 0x258A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A10u;
    // 0x258a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x258A10u, 0x258A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A18u;
label_258a18:
    // 0x258a18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x258a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258a20: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258A20u;
    {
        const bool branch_taken_0x258a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A20u;
        // 0x258a24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a20) {
            ctx->pc = 0x258A34u;
            goto label_258a34;
        }
    }
    ctx->pc = 0x258A28u;
    // 0x258a28: 0x82230086  lb          $v1, 0x86($s1)
    ctx->pc = 0x258a28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x258a2c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x258A2Cu;
    {
        const bool branch_taken_0x258a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258a2c) {
            ctx->pc = 0x258A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258A2Cu;
            // 0x258a30: 0xa243010d  sb          $v1, 0x10D($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258A34u;
            goto label_258a34;
        }
    }
    ctx->pc = 0x258A34u;
label_258a34:
    // 0x258a34: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x258a38: 0x34a5800f  ori         $a1, $a1, 0x800F
    ctx->pc = 0x258a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32783);
    // 0x258a3c: 0xc089988  jal         func_226620
    ctx->pc = 0x258A3Cu;
    SET_GPR_U32(ctx, 31, 0x258A44u);
    ctx->pc = 0x258A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A3Cu;
    // 0x258a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x258A3Cu, 0x258A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A44u;
label_258a44:
    // 0x258a44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258A44u;
    {
        const bool branch_taken_0x258a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258a44) {
            ctx->pc = 0x258A58u;
            goto label_258a58;
        }
    }
    ctx->pc = 0x258A4Cu;
    // 0x258a4c: 0x0  nop
    ctx->pc = 0x258a4cu;
    // NOP
label_258a50:
    // 0x258a50: 0xc094fca  jal         func_253F28
    ctx->pc = 0x258A50u;
    SET_GPR_U32(ctx, 31, 0x258A58u);
    ctx->pc = 0x258A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A50u;
    // 0x258a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x258A50u, 0x258A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A58u;
label_258a58:
    // 0x258a58: 0xc095018  jal         func_254060
    ctx->pc = 0x258A58u;
    SET_GPR_U32(ctx, 31, 0x258A60u);
    ctx->pc = 0x258A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A58u;
    // 0x258a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x258A58u, 0x258A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A60u;
label_258a60:
    // 0x258a60: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x258A60u;
    {
        const bool branch_taken_0x258a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A60u;
        // 0x258a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a60) {
            ctx->pc = 0x258A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258a50;
        }
    }
    ctx->pc = 0x258A68u;
    // 0x258a68: 0xc094f9a  jal         func_253E68
    ctx->pc = 0x258A68u;
    SET_GPR_U32(ctx, 31, 0x258A70u);
    ctx->pc = 0x258A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A68u;
    // 0x258a6c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x258A68u, 0x258A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A70u;
label_258a70:
    // 0x258a70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x258a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258a74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x258a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x258a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258a80: 0x3e00008  jr          $ra
    ctx->pc = 0x258A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A80u;
        // 0x258a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A88u;
}
