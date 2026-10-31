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

// Function: sub_002C57B8
// Address: 0x2c57b8 - 0x2c5ab0
void sub_002C57B8_0x2c57b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C57B8_0x2c57b8");
#endif

    switch (ctx->pc) {
        case 0x2c5800u: goto label_2c5800;
        case 0x2c581cu: goto label_2c581c;
        case 0x2c5828u: goto label_2c5828;
        case 0x2c583cu: goto label_2c583c;
        case 0x2c586cu: goto label_2c586c;
        case 0x2c588cu: goto label_2c588c;
        case 0x2c58b4u: goto label_2c58b4;
        case 0x2c58c4u: goto label_2c58c4;
        case 0x2c5934u: goto label_2c5934;
        case 0x2c5958u: goto label_2c5958;
        case 0x2c596cu: goto label_2c596c;
        case 0x2c597cu: goto label_2c597c;
        case 0x2c5988u: goto label_2c5988;
        case 0x2c5998u: goto label_2c5998;
        case 0x2c59ccu: goto label_2c59cc;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c59f8u: goto label_2c59f8;
        case 0x2c5a2cu: goto label_2c5a2c;
        case 0x2c5a50u: goto label_2c5a50;
        case 0x2c5a78u: goto label_2c5a78;
        case 0x2c5a88u: goto label_2c5a88;
        default: break;
    }

    ctx->pc = 0x2c57b8u;

    // 0x2c57b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c57b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c57bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c57c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2c57c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c57c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2c57c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c57c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2c57d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c57d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c57d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c57dc: 0x92300038  lbu         $s0, 0x38($s1)
    ctx->pc = 0x2c57dcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c57e0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C57E0u;
    {
        const bool branch_taken_0x2c57e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57E0u;
        // 0x2c57e4: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57e0) {
            ctx->pc = 0x2C5808u;
            goto label_2c5808;
        }
    }
    ctx->pc = 0x2C57E8u;
    // 0x2c57e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2c57ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c57ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c57f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C57F0u;
    {
        const bool branch_taken_0x2c57f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c57f0) {
            ctx->pc = 0x2C57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C57F0u;
            // 0x2c57f4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C580Cu;
            goto label_2c580c;
        }
    }
    ctx->pc = 0x2C57F8u;
    // 0x2c57f8: 0xc0b1566  jal         func_2C5598
    ctx->pc = 0x2C57F8u;
    SET_GPR_U32(ctx, 31, 0x2C5800u);
    ctx->pc = 0x2C5598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5598u, 0x2C57F8u, 0x2C5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5800u;
label_2c5800:
    // 0x2c5800: 0x105000a4  beq         $v0, $s0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C5800u;
    {
        const bool branch_taken_0x2c5800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5800u;
        // 0x2c5804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5800) {
            ctx->pc = 0x2C5A94u;
            goto label_2c5a94;
        }
    }
    ctx->pc = 0x2C5808u;
label_2c5808:
    // 0x2c5808: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c580c:
    // 0x2c580c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5810: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c5810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5814: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C5814u;
    SET_GPR_U32(ctx, 31, 0x2C581Cu);
    ctx->pc = 0x2C5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5814u;
    // 0x2c5818: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5814u, 0x2C581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C581Cu;
label_2c581c:
    // 0x2c581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5820: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2C5820u;
    SET_GPR_U32(ctx, 31, 0x2C5828u);
    ctx->pc = 0x2C5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5820u;
    // 0x2c5824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C5820u, 0x2C5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5828u;
label_2c5828:
    // 0x2c5828: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5828u;
    {
        const bool branch_taken_0x2c5828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5828) {
            ctx->pc = 0x2C582Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5828u;
            // 0x2c582c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5840u;
            goto label_2c5840;
        }
    }
    ctx->pc = 0x2C5830u;
    // 0x2c5830: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c5830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5834: 0xc0a3fde  jal         func_28FF78
    ctx->pc = 0x2C5834u;
    SET_GPR_U32(ctx, 31, 0x2C583Cu);
    ctx->pc = 0x2C5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5834u;
    // 0x2c5838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2C5834u, 0x2C583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C583Cu;
label_2c583c:
    // 0x2c583c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5840:
    // 0x2c5840: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c5840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2c5844: 0x1c40006c  bgtz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2C5844u;
    {
        const bool branch_taken_0x2c5844 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5844) {
            ctx->pc = 0x2C59F8u;
            goto label_2c59f8;
        }
    }
    ctx->pc = 0x2C584Cu;
    // 0x2c584c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2c5850: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C5850u;
    {
        const bool branch_taken_0x2c5850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5850) {
            ctx->pc = 0x2C58ECu;
            goto label_2c58ec;
        }
    }
    ctx->pc = 0x2C5858u;
    // 0x2c5858: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2c5858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x2c585c: 0x1452001a  bne         $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C585Cu;
    {
        const bool branch_taken_0x2c585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C585Cu;
        // 0x2c5860: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c585c) {
            ctx->pc = 0x2C58C8u;
            goto label_2c58c8;
        }
    }
    ctx->pc = 0x2C5864u;
    // 0x2c5864: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2C5864u;
    SET_GPR_U32(ctx, 31, 0x2C586Cu);
    ctx->pc = 0x2C5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5864u;
    // 0x2c5868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C5864u, 0x2C586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C586Cu;
label_2c586c:
    // 0x2c586c: 0x14520016  bne         $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C586Cu;
    {
        const bool branch_taken_0x2c586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C586Cu;
        // 0x2c5870: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c586c) {
            ctx->pc = 0x2C58C8u;
            goto label_2c58c8;
        }
    }
    ctx->pc = 0x2C5874u;
    // 0x2c5874: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c5874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5878: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c587c: 0x14520012  bne         $v0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C587Cu;
    {
        const bool branch_taken_0x2c587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C587Cu;
        // 0x2c5880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c587c) {
            ctx->pc = 0x2C58C8u;
            goto label_2c58c8;
        }
    }
    ctx->pc = 0x2C5884u;
    // 0x2c5884: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C5884u;
    SET_GPR_U32(ctx, 31, 0x2C588Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C5884u, 0x2C588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C588Cu;
label_2c588c:
    // 0x2c588c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C588Cu;
    {
        const bool branch_taken_0x2c588c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C588Cu;
        // 0x2c5890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c588c) {
            ctx->pc = 0x2C58B4u;
            goto label_2c58b4;
        }
    }
    ctx->pc = 0x2C5894u;
    // 0x2c5894: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5898: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c5898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2c589c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c589cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c58a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c58a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c58a4: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2c58a8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c58ac: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2C58ACu;
    SET_GPR_U32(ctx, 31, 0x2C58B4u);
    ctx->pc = 0x2C58B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58ACu;
    // 0x2c58b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C58ACu, 0x2C58B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58B4u;
label_2c58b4:
    // 0x2c58b4: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2c58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c58b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c58b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58bc: 0xc08ce24  jal         func_233890
    ctx->pc = 0x2C58BCu;
    SET_GPR_U32(ctx, 31, 0x2C58C4u);
    ctx->pc = 0x2C58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58BCu;
    // 0x2c58c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233890u, 0x2C58BCu, 0x2C58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58C4u;
label_2c58c4:
    // 0x2c58c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c58c8:
    // 0x2c58c8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2c58cc: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2c58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2c58d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c58d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c58d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58d8: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2c58dc: 0xae26002c  sw          $a2, 0x2C($s1)
    ctx->pc = 0x2c58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    // 0x2c58e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c58e4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2C58E4u;
    {
        const bool branch_taken_0x2c58e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58E4u;
        // 0x2c58e8: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58e4) {
            ctx->pc = 0x2C5A94u;
            goto label_2c5a94;
        }
    }
    ctx->pc = 0x2C58ECu;
label_2c58ec:
    // 0x2c58ec: 0x14720044  bne         $v1, $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C58ECu;
    {
        const bool branch_taken_0x2c58ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58ECu;
        // 0x2c58f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58ec) {
            ctx->pc = 0x2C5A00u;
            goto label_2c5a00;
        }
    }
    ctx->pc = 0x2C58F4u;
    // 0x2c58f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2c58f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2c58fc: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2c58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c5900: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c5900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c5904: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c5904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c5908: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C5908u;
    {
        const bool branch_taken_0x2c5908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5908u;
        // 0x2c590c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5908) {
            ctx->pc = 0x2C5A8Cu;
            goto label_2c5a8c;
        }
    }
    ctx->pc = 0x2C5910u;
    // 0x2c5910: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2c5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5914: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c5914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c5918: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c591c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c591cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5920: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c5920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c5924: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c5924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c5928: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2c5928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c592c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2C592Cu;
    SET_GPR_U32(ctx, 31, 0x2C5934u);
    ctx->pc = 0x2C5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C592Cu;
    // 0x2c5930: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2C592Cu, 0x2C5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5934u;
label_2c5934:
    // 0x2c5934: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c5934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2c5938: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c5938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2c593c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c593cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c5940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5944: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c5944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c594c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5950: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2C5950u;
    SET_GPR_U32(ctx, 31, 0x2C5958u);
    ctx->pc = 0x2C5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5950u;
    // 0x2c5954: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2C5950u, 0x2C5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5958u;
label_2c5958:
    // 0x2c5958: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C5958u;
    {
        const bool branch_taken_0x2c5958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5958u;
        // 0x2c595c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5958) {
            ctx->pc = 0x2C59F8u;
            goto label_2c59f8;
        }
    }
    ctx->pc = 0x2C5960u;
    // 0x2c5960: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c5960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2c5964: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C5964u;
    SET_GPR_U32(ctx, 31, 0x2C596Cu);
    ctx->pc = 0x2C5968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5964u;
    // 0x2c5968: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5964u, 0x2C596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C596Cu;
label_2c596c:
    // 0x2c596c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C596Cu;
    {
        const bool branch_taken_0x2c596c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c596c) {
            ctx->pc = 0x2C5990u;
            goto label_2c5990;
        }
    }
    ctx->pc = 0x2C5974u;
    // 0x2c5974: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C5974u;
    SET_GPR_U32(ctx, 31, 0x2C597Cu);
    ctx->pc = 0x2C5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5974u;
    // 0x2c5978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C5974u, 0x2C597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C597Cu;
label_2c597c:
    // 0x2c597c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2c5980: 0xc05a7f8  jal         func_169FE0
    ctx->pc = 0x2C5980u;
    SET_GPR_U32(ctx, 31, 0x2C5988u);
    ctx->pc = 0x2C5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5980u;
    // 0x2c5984: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169FE0u, 0x2C5980u, 0x2C5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5988u;
label_2c5988:
    // 0x2c5988: 0x10520042  beq         $v0, $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C5988u;
    {
        const bool branch_taken_0x2c5988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5988u;
        // 0x2c598c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5988) {
            ctx->pc = 0x2C5A94u;
            goto label_2c5a94;
        }
    }
    ctx->pc = 0x2C5990u;
label_2c5990:
    // 0x2c5990: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C5990u;
    SET_GPR_U32(ctx, 31, 0x2C5998u);
    ctx->pc = 0x2C5994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5990u;
    // 0x2c5994: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C5990u, 0x2C5998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5998u;
label_2c5998:
    // 0x2c5998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c599c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C599Cu;
    {
        const bool branch_taken_0x2c599c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C599Cu;
        // 0x2c59a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c599c) {
            ctx->pc = 0x2C59CCu;
            goto label_2c59cc;
        }
    }
    ctx->pc = 0x2C59A4u;
    // 0x2c59a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c59a8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c59a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c59ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c59acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59b0: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x2c59b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2c59b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c59b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c59b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c59bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c59bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c59c0: 0x240903e8  addiu       $t1, $zero, 0x3E8
    ctx->pc = 0x2c59c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2c59c4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2C59C4u;
    SET_GPR_U32(ctx, 31, 0x2C59CCu);
    ctx->pc = 0x2C59C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59C4u;
    // 0x2c59c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C59C4u, 0x2C59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59CCu;
label_2c59cc:
    // 0x2c59cc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C59CCu;
    SET_GPR_U32(ctx, 31, 0x2C59D4u);
    ctx->pc = 0x2C59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59CCu;
    // 0x2c59d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C59CCu, 0x2C59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C59D4u;
    {
        const bool branch_taken_0x2c59d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59D4u;
        // 0x2c59d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59d4) {
            ctx->pc = 0x2C59F8u;
            goto label_2c59f8;
        }
    }
    ctx->pc = 0x2C59DCu;
    // 0x2c59dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c59e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c59e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c59e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c59e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c59e8: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2c59ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c59ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59f0: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2C59F0u;
    SET_GPR_U32(ctx, 31, 0x2C59F8u);
    ctx->pc = 0x2C59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59F0u;
    // 0x2c59f4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C59F0u, 0x2C59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59F8u;
label_2c59f8:
    // 0x2c59f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C59F8u;
    {
        const bool branch_taken_0x2c59f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59F8u;
        // 0x2c59fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59f8) {
            ctx->pc = 0x2C5A94u;
            goto label_2c5a94;
        }
    }
    ctx->pc = 0x2C5A00u;
label_2c5a00:
    // 0x2c5a00: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C5A00u;
    {
        const bool branch_taken_0x2c5a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A00u;
        // 0x2c5a04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a00) {
            ctx->pc = 0x2C5A94u;
            goto label_2c5a94;
        }
    }
    ctx->pc = 0x2C5A08u;
    // 0x2c5a08: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x2c5a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c5a0c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2c5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2c5a10: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2c5a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2c5a14: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2c5a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5a18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c5a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5a1c: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C5A1Cu;
    {
        const bool branch_taken_0x2c5a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A1Cu;
        // 0x2c5a20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a1c) {
            ctx->pc = 0x2C5A8Cu;
            goto label_2c5a8c;
        }
    }
    ctx->pc = 0x2C5A24u;
    // 0x2c5a24: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2C5A24u;
    SET_GPR_U32(ctx, 31, 0x2C5A2Cu);
    ctx->pc = 0x2C5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A24u;
    // 0x2c5a28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C5A24u, 0x2C5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A2Cu;
label_2c5a2c:
    // 0x2c5a2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a30: 0x54720016  bnel        $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C5A30u;
    {
        const bool branch_taken_0x2c5a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c5a30) {
            ctx->pc = 0x2C5A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5A30u;
            // 0x2c5a34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5A8Cu;
            goto label_2c5a8c;
        }
    }
    ctx->pc = 0x2C5A38u;
    // 0x2c5a38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5a3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c5a40: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C5A40u;
    {
        const bool branch_taken_0x2c5a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A40u;
        // 0x2c5a44: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a40) {
            ctx->pc = 0x2C5A8Cu;
            goto label_2c5a8c;
        }
    }
    ctx->pc = 0x2C5A48u;
    // 0x2c5a48: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C5A48u;
    SET_GPR_U32(ctx, 31, 0x2C5A50u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C5A48u, 0x2C5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A50u;
label_2c5a50:
    // 0x2c5a50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5A50u;
    {
        const bool branch_taken_0x2c5a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A50u;
        // 0x2c5a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a50) {
            ctx->pc = 0x2C5A78u;
            goto label_2c5a78;
        }
    }
    ctx->pc = 0x2C5A58u;
    // 0x2c5a58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5a5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c5a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2c5a60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c5a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c5a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c5a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5a68: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c5a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2c5a6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c5a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5a70: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2C5A70u;
    SET_GPR_U32(ctx, 31, 0x2C5A78u);
    ctx->pc = 0x2C5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A70u;
    // 0x2c5a74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C5A70u, 0x2C5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A78u;
label_2c5a78:
    // 0x2c5a78: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2c5a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c5a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a80: 0xc08ce24  jal         func_233890
    ctx->pc = 0x2C5A80u;
    SET_GPR_U32(ctx, 31, 0x2C5A88u);
    ctx->pc = 0x2C5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A80u;
    // 0x2c5a84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233890u, 0x2C5A80u, 0x2C5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A88u;
label_2c5a88:
    // 0x2c5a88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c5a8c:
    // 0x2c5a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a90: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2c5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2c5a94:
    // 0x2c5a94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c5a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5a98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c5a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5a9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c5a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5aa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AA8u;
        // 0x2c5aac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5AB0u;
}
