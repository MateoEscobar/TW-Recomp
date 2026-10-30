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

// Function: sub_001739B0
// Address: 0x1739b0 - 0x173aa0
void sub_001739B0_0x1739b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001739B0_0x1739b0");
#endif

    switch (ctx->pc) {
        case 0x1739b0u: goto label_1739b0;
        case 0x1739b4u: goto label_1739b4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739c0u: goto label_1739c0;
        case 0x1739c4u: goto label_1739c4;
        case 0x1739c8u: goto label_1739c8;
        case 0x1739ccu: goto label_1739cc;
        case 0x1739d0u: goto label_1739d0;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739d8u: goto label_1739d8;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e0u: goto label_1739e0;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739e8u: goto label_1739e8;
        case 0x1739ecu: goto label_1739ec;
        case 0x1739f0u: goto label_1739f0;
        case 0x1739f4u: goto label_1739f4;
        case 0x1739f8u: goto label_1739f8;
        case 0x1739fcu: goto label_1739fc;
        case 0x173a00u: goto label_173a00;
        case 0x173a04u: goto label_173a04;
        case 0x173a08u: goto label_173a08;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a10u: goto label_173a10;
        case 0x173a14u: goto label_173a14;
        case 0x173a18u: goto label_173a18;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a20u: goto label_173a20;
        case 0x173a24u: goto label_173a24;
        case 0x173a28u: goto label_173a28;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a30u: goto label_173a30;
        case 0x173a34u: goto label_173a34;
        case 0x173a38u: goto label_173a38;
        case 0x173a3cu: goto label_173a3c;
        case 0x173a40u: goto label_173a40;
        case 0x173a44u: goto label_173a44;
        case 0x173a48u: goto label_173a48;
        case 0x173a4cu: goto label_173a4c;
        case 0x173a50u: goto label_173a50;
        case 0x173a54u: goto label_173a54;
        case 0x173a58u: goto label_173a58;
        case 0x173a5cu: goto label_173a5c;
        case 0x173a60u: goto label_173a60;
        case 0x173a64u: goto label_173a64;
        case 0x173a68u: goto label_173a68;
        case 0x173a6cu: goto label_173a6c;
        case 0x173a70u: goto label_173a70;
        case 0x173a74u: goto label_173a74;
        case 0x173a78u: goto label_173a78;
        case 0x173a7cu: goto label_173a7c;
        case 0x173a80u: goto label_173a80;
        case 0x173a84u: goto label_173a84;
        case 0x173a88u: goto label_173a88;
        case 0x173a8cu: goto label_173a8c;
        case 0x173a90u: goto label_173a90;
        case 0x173a94u: goto label_173a94;
        case 0x173a98u: goto label_173a98;
        case 0x173a9cu: goto label_173a9c;
        default: break;
    }

    ctx->pc = 0x1739b0u;

label_1739b0:
    // 0x1739b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1739b4:
    // 0x1739b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1739b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1739b8:
    // 0x1739b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1739b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1739bc:
    // 0x1739bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1739bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1739c0:
    // 0x1739c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1739c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1739c4:
    // 0x1739c4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1739c8:
    // 0x1739c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1739c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1739cc:
    // 0x1739cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1739ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1739d0:
    // 0x1739d0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1739d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1739d4:
    // 0x1739d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1739d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1739d8:
    // 0x1739d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1739d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1739dc:
    // 0x1739dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1739dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1739e0:
    // 0x1739e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1739e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1739e4:
    // 0x1739e4: 0xc137a1a  jal         func_4DE868
label_1739e8:
    if (ctx->pc == 0x1739E8u) {
        ctx->pc = 0x1739E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739E4u;
        // 0x1739e8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739ECu;
        goto label_1739ec;
    }
    ctx->pc = 0x1739E4u;
    SET_GPR_U32(ctx, 31, 0x1739ECu);
    ctx->pc = 0x1739E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739E4u;
    // 0x1739e8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x1739E4u, 0x1739ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739ECu;
label_1739ec:
    // 0x1739ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1739ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1739f0:
    // 0x1739f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1739f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1739f4:
    // 0x1739f4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1739f8:
    if (ctx->pc == 0x1739F8u) {
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739FCu;
        goto label_1739fc;
    }
    ctx->pc = 0x1739F4u;
    {
        const bool branch_taken_0x1739f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739f4) {
            ctx->pc = 0x173A24u;
            goto label_173a24;
        }
    }
    ctx->pc = 0x1739FCu;
label_1739fc:
    // 0x1739fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1739fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_173a00:
    // 0x173a00: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x173a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173a04:
    // 0x173a04: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x173a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_173a08:
    // 0x173a08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x173a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_173a0c:
    // 0x173a0c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x173a0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_173a10:
    // 0x173a10: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x173a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_173a14:
    // 0x173a14: 0x40f809  jalr        $v0
label_173a18:
    if (ctx->pc == 0x173A18u) {
        ctx->pc = 0x173A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A14u;
        // 0x173a18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A1Cu;
        goto label_173a1c;
    }
    ctx->pc = 0x173A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173A1Cu);
        ctx->pc = 0x173A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A14u;
        // 0x173a18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A14u, 0x173A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173A1Cu;
label_173a1c:
    // 0x173a1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_173a20:
    if (ctx->pc == 0x173A20u) {
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A1Cu;
        // 0x173a20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A24u;
        goto label_173a24;
    }
    ctx->pc = 0x173A1Cu;
    {
        const bool branch_taken_0x173a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A1Cu;
        // 0x173a20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a1c) {
            ctx->pc = 0x173A7Cu;
            goto label_173a7c;
        }
    }
    ctx->pc = 0x173A24u;
label_173a24:
    // 0x173a24: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x173a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_173a28:
    // 0x173a28: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x173a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_173a2c:
    // 0x173a2c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x173a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_173a30:
    // 0x173a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173a34:
    // 0x173a34: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x173a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_173a38:
    // 0x173a38: 0xc10ca04  jal         func_432810
label_173a3c:
    if (ctx->pc == 0x173A3Cu) {
        ctx->pc = 0x173A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A38u;
        // 0x173a3c: 0x24c61bf0  addiu       $a2, $a2, 0x1BF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A40u;
        goto label_173a40;
    }
    ctx->pc = 0x173A38u;
    SET_GPR_U32(ctx, 31, 0x173A40u);
    ctx->pc = 0x173A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A38u;
    // 0x173a3c: 0x24c61bf0  addiu       $a2, $a2, 0x1BF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x173A38u, 0x173A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A40u;
label_173a40:
    // 0x173a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173a44:
    // 0x173a44: 0xc061668  jal         func_1859A0
label_173a48:
    if (ctx->pc == 0x173A48u) {
        ctx->pc = 0x173A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A44u;
        // 0x173a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A4Cu;
        goto label_173a4c;
    }
    ctx->pc = 0x173A44u;
    SET_GPR_U32(ctx, 31, 0x173A4Cu);
    ctx->pc = 0x173A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A44u;
    // 0x173a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x173A44u, 0x173A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A4Cu;
label_173a4c:
    // 0x173a4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_173a50:
    if (ctx->pc == 0x173A50u) {
        ctx->pc = 0x173A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A4Cu;
        // 0x173a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A54u;
        goto label_173a54;
    }
    ctx->pc = 0x173A4Cu;
    {
        const bool branch_taken_0x173a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A4Cu;
        // 0x173a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a4c) {
            ctx->pc = 0x173A80u;
            goto label_173a80;
        }
    }
    ctx->pc = 0x173A54u;
label_173a54:
    // 0x173a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173a58:
    // 0x173a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173a5c:
    // 0x173a5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x173a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173a60:
    // 0x173a60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x173a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173a64:
    // 0x173a64: 0xc061eaa  jal         func_187AA8
label_173a68:
    if (ctx->pc == 0x173A68u) {
        ctx->pc = 0x173A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A64u;
        // 0x173a68: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A6Cu;
        goto label_173a6c;
    }
    ctx->pc = 0x173A64u;
    SET_GPR_U32(ctx, 31, 0x173A6Cu);
    ctx->pc = 0x173A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A64u;
    // 0x173a68: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x173A64u, 0x173A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A6Cu;
label_173a6c:
    // 0x173a6c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x173a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_173a70:
    // 0x173a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173a74:
    // 0x173a74: 0xc0552b8  jal         func_154AE0
label_173a78:
    if (ctx->pc == 0x173A78u) {
        ctx->pc = 0x173A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A74u;
        // 0x173a78: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A7Cu;
        goto label_173a7c;
    }
    ctx->pc = 0x173A74u;
    SET_GPR_U32(ctx, 31, 0x173A7Cu);
    ctx->pc = 0x173A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A74u;
    // 0x173a78: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x173A74u, 0x173A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A7Cu;
label_173a7c:
    // 0x173a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173a80:
    // 0x173a80: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x173a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_173a84:
    // 0x173a84: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x173a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_173a88:
    // 0x173a88: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x173a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_173a8c:
    // 0x173a8c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x173a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_173a90:
    // 0x173a90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x173a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_173a94:
    // 0x173a94: 0x3e00008  jr          $ra
label_173a98:
    if (ctx->pc == 0x173A98u) {
        ctx->pc = 0x173A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A94u;
        // 0x173a98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A9Cu;
        goto label_173a9c;
    }
    ctx->pc = 0x173A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A94u;
        // 0x173a98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A9Cu;
label_173a9c:
    // 0x173a9c: 0x0  nop
    ctx->pc = 0x173a9cu;
    // NOP
    ctx->pc = 0x173aa0u;
}
