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

// Function: sub_002D79A8
// Address: 0x2d79a8 - 0x2d7a98
void sub_002D79A8_0x2d79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D79A8_0x2d79a8");
#endif

    switch (ctx->pc) {
        case 0x2d79a8u: goto label_2d79a8;
        case 0x2d79acu: goto label_2d79ac;
        case 0x2d79b0u: goto label_2d79b0;
        case 0x2d79b4u: goto label_2d79b4;
        case 0x2d79b8u: goto label_2d79b8;
        case 0x2d79bcu: goto label_2d79bc;
        case 0x2d79c0u: goto label_2d79c0;
        case 0x2d79c4u: goto label_2d79c4;
        case 0x2d79c8u: goto label_2d79c8;
        case 0x2d79ccu: goto label_2d79cc;
        case 0x2d79d0u: goto label_2d79d0;
        case 0x2d79d4u: goto label_2d79d4;
        case 0x2d79d8u: goto label_2d79d8;
        case 0x2d79dcu: goto label_2d79dc;
        case 0x2d79e0u: goto label_2d79e0;
        case 0x2d79e4u: goto label_2d79e4;
        case 0x2d79e8u: goto label_2d79e8;
        case 0x2d79ecu: goto label_2d79ec;
        case 0x2d79f0u: goto label_2d79f0;
        case 0x2d79f4u: goto label_2d79f4;
        case 0x2d79f8u: goto label_2d79f8;
        case 0x2d79fcu: goto label_2d79fc;
        case 0x2d7a00u: goto label_2d7a00;
        case 0x2d7a04u: goto label_2d7a04;
        case 0x2d7a08u: goto label_2d7a08;
        case 0x2d7a0cu: goto label_2d7a0c;
        case 0x2d7a10u: goto label_2d7a10;
        case 0x2d7a14u: goto label_2d7a14;
        case 0x2d7a18u: goto label_2d7a18;
        case 0x2d7a1cu: goto label_2d7a1c;
        case 0x2d7a20u: goto label_2d7a20;
        case 0x2d7a24u: goto label_2d7a24;
        case 0x2d7a28u: goto label_2d7a28;
        case 0x2d7a2cu: goto label_2d7a2c;
        case 0x2d7a30u: goto label_2d7a30;
        case 0x2d7a34u: goto label_2d7a34;
        case 0x2d7a38u: goto label_2d7a38;
        case 0x2d7a3cu: goto label_2d7a3c;
        case 0x2d7a40u: goto label_2d7a40;
        case 0x2d7a44u: goto label_2d7a44;
        case 0x2d7a48u: goto label_2d7a48;
        case 0x2d7a4cu: goto label_2d7a4c;
        case 0x2d7a50u: goto label_2d7a50;
        case 0x2d7a54u: goto label_2d7a54;
        case 0x2d7a58u: goto label_2d7a58;
        case 0x2d7a5cu: goto label_2d7a5c;
        case 0x2d7a60u: goto label_2d7a60;
        case 0x2d7a64u: goto label_2d7a64;
        case 0x2d7a68u: goto label_2d7a68;
        case 0x2d7a6cu: goto label_2d7a6c;
        case 0x2d7a70u: goto label_2d7a70;
        case 0x2d7a74u: goto label_2d7a74;
        case 0x2d7a78u: goto label_2d7a78;
        case 0x2d7a7cu: goto label_2d7a7c;
        case 0x2d7a80u: goto label_2d7a80;
        case 0x2d7a84u: goto label_2d7a84;
        case 0x2d7a88u: goto label_2d7a88;
        case 0x2d7a8cu: goto label_2d7a8c;
        case 0x2d7a90u: goto label_2d7a90;
        case 0x2d7a94u: goto label_2d7a94;
        default: break;
    }

    ctx->pc = 0x2d79a8u;

label_2d79a8:
    // 0x2d79a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d79a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d79ac:
    // 0x2d79ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d79acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d79b0:
    // 0x2d79b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d79b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d79b4:
    // 0x2d79b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d79b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d79b8:
    // 0x2d79b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d79b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d79bc:
    // 0x2d79bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d79bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d79c0:
    // 0x2d79c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d79c4:
    // 0x2d79c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d79c8:
    // 0x2d79c8: 0xc089000  jal         func_224000
label_2d79cc:
    if (ctx->pc == 0x2D79CCu) {
        ctx->pc = 0x2D79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79C8u;
        // 0x2d79cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D79D0u;
        goto label_2d79d0;
    }
    ctx->pc = 0x2D79C8u;
    SET_GPR_U32(ctx, 31, 0x2D79D0u);
    ctx->pc = 0x2D79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79C8u;
    // 0x2d79cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2D79C8u, 0x2D79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79D0u;
label_2d79d0:
    // 0x2d79d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d79d4:
    // 0x2d79d4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2d79d8:
    if (ctx->pc == 0x2D79D8u) {
        ctx->pc = 0x2D79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79D4u;
        // 0x2d79d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D79DCu;
        goto label_2d79dc;
    }
    ctx->pc = 0x2D79D4u;
    {
        const bool branch_taken_0x2d79d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d79d4) {
            ctx->pc = 0x2D79D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D79D4u;
            // 0x2d79d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D79E8u;
            goto label_2d79e8;
        }
    }
    ctx->pc = 0x2D79DCu;
label_2d79dc:
    // 0x2d79dc: 0xc095fce  jal         func_257F38
label_2d79e0:
    if (ctx->pc == 0x2D79E0u) {
        ctx->pc = 0x2D79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79DCu;
        // 0x2d79e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D79E4u;
        goto label_2d79e4;
    }
    ctx->pc = 0x2D79DCu;
    SET_GPR_U32(ctx, 31, 0x2D79E4u);
    ctx->pc = 0x2D79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79DCu;
    // 0x2d79e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D79DCu, 0x2D79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79E4u;
label_2d79e4:
    // 0x2d79e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d79e8:
    // 0x2d79e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d79ec:
    // 0x2d79ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d79f0:
    // 0x2d79f0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2d79f4:
    if (ctx->pc == 0x2D79F4u) {
        ctx->pc = 0x2D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79F0u;
        // 0x2d79f4: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D79F8u;
        goto label_2d79f8;
    }
    ctx->pc = 0x2D79F0u;
    {
        const bool branch_taken_0x2d79f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79F0u;
        // 0x2d79f4: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79f0) {
            ctx->pc = 0x2D7A74u;
            goto label_2d7a74;
        }
    }
    ctx->pc = 0x2D79F8u;
label_2d79f8:
    // 0x2d79f8: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2d79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2d79fc:
    // 0x2d79fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7a00:
    // 0x2d7a00: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x2d7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
label_2d7a04:
    // 0x2d7a04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7a08:
    // 0x2d7a08: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2d7a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d7a0c:
    // 0x2d7a0c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2d7a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d7a10:
    // 0x2d7a10: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2d7a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2d7a14:
    // 0x2d7a14: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2d7a18:
    // 0x2d7a18: 0x40f809  jalr        $v0
label_2d7a1c:
    if (ctx->pc == 0x2D7A1Cu) {
        ctx->pc = 0x2D7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A18u;
        // 0x2d7a1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A20u;
        goto label_2d7a20;
    }
    ctx->pc = 0x2D7A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7A20u);
        ctx->pc = 0x2D7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A18u;
        // 0x2d7a1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A18u, 0x2D7A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7A20u;
label_2d7a20:
    // 0x2d7a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a24:
    // 0x2d7a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a28:
    // 0x2d7a28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2d7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2d7a2c:
    // 0x2d7a2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a30:
    // 0x2d7a30: 0x24510840  addiu       $s1, $v0, 0x840
    ctx->pc = 0x2d7a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2d7a34:
    // 0x2d7a34: 0xc071462  jal         func_1C5188
label_2d7a38:
    if (ctx->pc == 0x2D7A38u) {
        ctx->pc = 0x2D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A34u;
        // 0x2d7a38: 0x262415d0  addiu       $a0, $s1, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A3Cu;
        goto label_2d7a3c;
    }
    ctx->pc = 0x2D7A34u;
    SET_GPR_U32(ctx, 31, 0x2D7A3Cu);
    ctx->pc = 0x2D7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A34u;
    // 0x2d7a38: 0x262415d0  addiu       $a0, $s1, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2D7A34u, 0x2D7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A3Cu;
label_2d7a3c:
    // 0x2d7a3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d7a3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2d7a40:
    // 0x2d7a40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2d7a44:
    if (ctx->pc == 0x2D7A44u) {
        ctx->pc = 0x2D7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A40u;
        // 0x2d7a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A48u;
        goto label_2d7a48;
    }
    ctx->pc = 0x2D7A40u;
    {
        const bool branch_taken_0x2d7a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A40u;
        // 0x2d7a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a40) {
            ctx->pc = 0x2D7A78u;
            goto label_2d7a78;
        }
    }
    ctx->pc = 0x2D7A48u;
label_2d7a48:
    // 0x2d7a48: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_2d7a4c:
    // 0x2d7a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a50:
    // 0x2d7a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a54:
    // 0x2d7a54: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x2d7a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
label_2d7a58:
    // 0x2d7a58: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2d7a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2d7a5c:
    // 0x2d7a5c: 0xc06ca64  jal         func_1B2990
label_2d7a60:
    if (ctx->pc == 0x2D7A60u) {
        ctx->pc = 0x2D7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A5Cu;
        // 0x2d7a60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A64u;
        goto label_2d7a64;
    }
    ctx->pc = 0x2D7A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A64u);
    ctx->pc = 0x2D7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A5Cu;
    // 0x2d7a60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2D7A5Cu, 0x2D7A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A64u;
label_2d7a64:
    // 0x2d7a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a68:
    // 0x2d7a68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a6c:
    // 0x2d7a6c: 0xc06ccb8  jal         func_1B32E0
label_2d7a70:
    if (ctx->pc == 0x2D7A70u) {
        ctx->pc = 0x2D7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A6Cu;
        // 0x2d7a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A74u;
        goto label_2d7a74;
    }
    ctx->pc = 0x2D7A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A74u);
    ctx->pc = 0x2D7A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A6Cu;
    // 0x2d7a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2D7A6Cu, 0x2D7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A74u;
label_2d7a74:
    // 0x2d7a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a78:
    // 0x2d7a78: 0xc087612  jal         func_21D848
label_2d7a7c:
    if (ctx->pc == 0x2D7A7Cu) {
        ctx->pc = 0x2D7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A78u;
        // 0x2d7a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A80u;
        goto label_2d7a80;
    }
    ctx->pc = 0x2D7A78u;
    SET_GPR_U32(ctx, 31, 0x2D7A80u);
    ctx->pc = 0x2D7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A78u;
    // 0x2d7a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D7A78u, 0x2D7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A80u;
label_2d7a80:
    // 0x2d7a80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d7a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d7a84:
    // 0x2d7a84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d7a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7a88:
    // 0x2d7a88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d7a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7a8c:
    // 0x2d7a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7a90:
    // 0x2d7a90: 0x3e00008  jr          $ra
label_2d7a94:
    if (ctx->pc == 0x2D7A94u) {
        ctx->pc = 0x2D7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A90u;
        // 0x2d7a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7A98u;
        goto label_fallthrough_0x2d7a90;
    }
    ctx->pc = 0x2D7A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A90u;
        // 0x2d7a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d7a90:
    ctx->pc = 0x2D7A98u;
}
