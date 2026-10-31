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

// Function: sub_003A19B0
// Address: 0x3a19b0 - 0x3a1ad8
void sub_003A19B0_0x3a19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A19B0_0x3a19b0");
#endif

    switch (ctx->pc) {
        case 0x3a19b0u: goto label_3a19b0;
        case 0x3a19b4u: goto label_3a19b4;
        case 0x3a19b8u: goto label_3a19b8;
        case 0x3a19bcu: goto label_3a19bc;
        case 0x3a19c0u: goto label_3a19c0;
        case 0x3a19c4u: goto label_3a19c4;
        case 0x3a19c8u: goto label_3a19c8;
        case 0x3a19ccu: goto label_3a19cc;
        case 0x3a19d0u: goto label_3a19d0;
        case 0x3a19d4u: goto label_3a19d4;
        case 0x3a19d8u: goto label_3a19d8;
        case 0x3a19dcu: goto label_3a19dc;
        case 0x3a19e0u: goto label_3a19e0;
        case 0x3a19e4u: goto label_3a19e4;
        case 0x3a19e8u: goto label_3a19e8;
        case 0x3a19ecu: goto label_3a19ec;
        case 0x3a19f0u: goto label_3a19f0;
        case 0x3a19f4u: goto label_3a19f4;
        case 0x3a19f8u: goto label_3a19f8;
        case 0x3a19fcu: goto label_3a19fc;
        case 0x3a1a00u: goto label_3a1a00;
        case 0x3a1a04u: goto label_3a1a04;
        case 0x3a1a08u: goto label_3a1a08;
        case 0x3a1a0cu: goto label_3a1a0c;
        case 0x3a1a10u: goto label_3a1a10;
        case 0x3a1a14u: goto label_3a1a14;
        case 0x3a1a18u: goto label_3a1a18;
        case 0x3a1a1cu: goto label_3a1a1c;
        case 0x3a1a20u: goto label_3a1a20;
        case 0x3a1a24u: goto label_3a1a24;
        case 0x3a1a28u: goto label_3a1a28;
        case 0x3a1a2cu: goto label_3a1a2c;
        case 0x3a1a30u: goto label_3a1a30;
        case 0x3a1a34u: goto label_3a1a34;
        case 0x3a1a38u: goto label_3a1a38;
        case 0x3a1a3cu: goto label_3a1a3c;
        case 0x3a1a40u: goto label_3a1a40;
        case 0x3a1a44u: goto label_3a1a44;
        case 0x3a1a48u: goto label_3a1a48;
        case 0x3a1a4cu: goto label_3a1a4c;
        case 0x3a1a50u: goto label_3a1a50;
        case 0x3a1a54u: goto label_3a1a54;
        case 0x3a1a58u: goto label_3a1a58;
        case 0x3a1a5cu: goto label_3a1a5c;
        case 0x3a1a60u: goto label_3a1a60;
        case 0x3a1a64u: goto label_3a1a64;
        case 0x3a1a68u: goto label_3a1a68;
        case 0x3a1a6cu: goto label_3a1a6c;
        case 0x3a1a70u: goto label_3a1a70;
        case 0x3a1a74u: goto label_3a1a74;
        case 0x3a1a78u: goto label_3a1a78;
        case 0x3a1a7cu: goto label_3a1a7c;
        case 0x3a1a80u: goto label_3a1a80;
        case 0x3a1a84u: goto label_3a1a84;
        case 0x3a1a88u: goto label_3a1a88;
        case 0x3a1a8cu: goto label_3a1a8c;
        case 0x3a1a90u: goto label_3a1a90;
        case 0x3a1a94u: goto label_3a1a94;
        case 0x3a1a98u: goto label_3a1a98;
        case 0x3a1a9cu: goto label_3a1a9c;
        case 0x3a1aa0u: goto label_3a1aa0;
        case 0x3a1aa4u: goto label_3a1aa4;
        case 0x3a1aa8u: goto label_3a1aa8;
        case 0x3a1aacu: goto label_3a1aac;
        case 0x3a1ab0u: goto label_3a1ab0;
        case 0x3a1ab4u: goto label_3a1ab4;
        case 0x3a1ab8u: goto label_3a1ab8;
        case 0x3a1abcu: goto label_3a1abc;
        case 0x3a1ac0u: goto label_3a1ac0;
        case 0x3a1ac4u: goto label_3a1ac4;
        case 0x3a1ac8u: goto label_3a1ac8;
        case 0x3a1accu: goto label_3a1acc;
        case 0x3a1ad0u: goto label_3a1ad0;
        case 0x3a1ad4u: goto label_3a1ad4;
        default: break;
    }

    ctx->pc = 0x3a19b0u;

label_3a19b0:
    // 0x3a19b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a19b4:
    // 0x3a19b4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3a19b8:
    // 0x3a19b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3a19bc:
    // 0x3a19bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a19bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a19c0:
    // 0x3a19c0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3a19c4:
    // 0x3a19c4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a19c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3a19c8:
    // 0x3a19c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3a19cc:
    // 0x3a19cc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a19d0:
    // 0x3a19d0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3a19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a19d4:
    // 0x3a19d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a19d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a19d8:
    // 0x3a19d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_3a19dc:
    if (ctx->pc == 0x3A19DCu) {
        ctx->pc = 0x3A19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19D8u;
        // 0x3a19dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A19E0u;
        goto label_3a19e0;
    }
    ctx->pc = 0x3A19D8u;
    {
        const bool branch_taken_0x3a19d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19D8u;
        // 0x3a19dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19d8) {
            ctx->pc = 0x3A1AA0u;
            goto label_3a1aa0;
        }
    }
    ctx->pc = 0x3A19E0u;
label_3a19e0:
    // 0x3a19e0: 0xc0e8630  jal         func_3A18C0
label_3a19e4:
    if (ctx->pc == 0x3A19E4u) {
        ctx->pc = 0x3A19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19E0u;
        // 0x3a19e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A19E8u;
        goto label_3a19e8;
    }
    ctx->pc = 0x3A19E0u;
    SET_GPR_U32(ctx, 31, 0x3A19E8u);
    ctx->pc = 0x3A19E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19E0u;
    // 0x3a19e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A19E0u, 0x3A19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19E8u;
label_3a19e8:
    // 0x3a19e8: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_3a19ec:
    if (ctx->pc == 0x3A19ECu) {
        ctx->pc = 0x3A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19E8u;
        // 0x3a19ec: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A19F0u;
        goto label_3a19f0;
    }
    ctx->pc = 0x3A19E8u;
    {
        const bool branch_taken_0x3a19e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a19e8) {
            ctx->pc = 0x3A19ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A19E8u;
            // 0x3a19ec: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1AA4u;
            goto label_3a1aa4;
        }
    }
    ctx->pc = 0x3A19F0u;
label_3a19f0:
    // 0x3a19f0: 0xc0e8630  jal         func_3A18C0
label_3a19f4:
    if (ctx->pc == 0x3A19F4u) {
        ctx->pc = 0x3A19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19F0u;
        // 0x3a19f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A19F8u;
        goto label_3a19f8;
    }
    ctx->pc = 0x3A19F0u;
    SET_GPR_U32(ctx, 31, 0x3A19F8u);
    ctx->pc = 0x3A19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19F0u;
    // 0x3a19f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A19F0u, 0x3A19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19F8u;
label_3a19f8:
    // 0x3a19f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a19f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a19fc:
    // 0x3a19fc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3a19fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a1a00:
    // 0x3a1a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1a04:
    // 0x3a1a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a08:
    // 0x3a1a08: 0x84450098  lh          $a1, 0x98($v0)
    ctx->pc = 0x3a1a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_3a1a0c:
    // 0x3a1a0c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x3a1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3a1a10:
    // 0x3a1a10: 0x60f809  jalr        $v1
label_3a1a14:
    if (ctx->pc == 0x3A1A14u) {
        ctx->pc = 0x3A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A10u;
        // 0x3a1a14: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A18u;
        goto label_3a1a18;
    }
    ctx->pc = 0x3A1A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1A18u);
        ctx->pc = 0x3A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A10u;
        // 0x3a1a14: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1A10u, 0x3A1A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1A18u;
label_3a1a18:
    // 0x3a1a18: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x3a1a18u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1a1c:
    // 0x3a1a1c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3a1a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a1a20:
    // 0x3a1a20: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3a1a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1a24:
    // 0x3a1a24: 0x9223006d  lbu         $v1, 0x6D($s1)
    ctx->pc = 0x3a1a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
label_3a1a28:
    // 0x3a1a28: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3a1a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3a1a2c:
    // 0x3a1a2c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3a1a30:
    if (ctx->pc == 0x3A1A30u) {
        ctx->pc = 0x3A1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A2Cu;
        // 0x3a1a30: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A34u;
        goto label_3a1a34;
    }
    ctx->pc = 0x3A1A2Cu;
    {
        const bool branch_taken_0x3a1a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A2Cu;
        // 0x3a1a30: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a2c) {
            ctx->pc = 0x3A1A80u;
            goto label_3a1a80;
        }
    }
    ctx->pc = 0x3A1A34u;
label_3a1a34:
    // 0x3a1a34: 0xc08a61a  jal         func_229868
label_3a1a38:
    if (ctx->pc == 0x3A1A38u) {
        ctx->pc = 0x3A1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A34u;
        // 0x3a1a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A3Cu;
        goto label_3a1a3c;
    }
    ctx->pc = 0x3A1A34u;
    SET_GPR_U32(ctx, 31, 0x3A1A3Cu);
    ctx->pc = 0x3A1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A34u;
    // 0x3a1a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A1A34u, 0x3A1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A3Cu;
label_3a1a3c:
    // 0x3a1a3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3a1a40:
    if (ctx->pc == 0x3A1A40u) {
        ctx->pc = 0x3A1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A3Cu;
        // 0x3a1a40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A44u;
        goto label_3a1a44;
    }
    ctx->pc = 0x3A1A3Cu;
    {
        const bool branch_taken_0x3a1a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A3Cu;
        // 0x3a1a40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a3c) {
            ctx->pc = 0x3A1A84u;
            goto label_3a1a84;
        }
    }
    ctx->pc = 0x3A1A44u;
label_3a1a44:
    // 0x3a1a44: 0xc08a61a  jal         func_229868
label_3a1a48:
    if (ctx->pc == 0x3A1A48u) {
        ctx->pc = 0x3A1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A44u;
        // 0x3a1a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A4Cu;
        goto label_3a1a4c;
    }
    ctx->pc = 0x3A1A44u;
    SET_GPR_U32(ctx, 31, 0x3A1A4Cu);
    ctx->pc = 0x3A1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A44u;
    // 0x3a1a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A1A44u, 0x3A1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A4Cu;
label_3a1a4c:
    // 0x3a1a4c: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x3a1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_3a1a50:
    // 0x3a1a50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3a1a54:
    if (ctx->pc == 0x3A1A54u) {
        ctx->pc = 0x3A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A50u;
        // 0x3a1a54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A58u;
        goto label_3a1a58;
    }
    ctx->pc = 0x3A1A50u;
    {
        const bool branch_taken_0x3a1a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A50u;
        // 0x3a1a54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a50) {
            ctx->pc = 0x3A1A80u;
            goto label_3a1a80;
        }
    }
    ctx->pc = 0x3A1A58u;
label_3a1a58:
    // 0x3a1a58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1a5c:
    // 0x3a1a5c: 0x9226006d  lbu         $a2, 0x6D($s1)
    ctx->pc = 0x3a1a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
label_3a1a60:
    // 0x3a1a60: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x3a1a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3a1a64:
    // 0x3a1a64: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3a1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3a1a68:
    // 0x3a1a68: 0x60f809  jalr        $v1
label_3a1a6c:
    if (ctx->pc == 0x3A1A6Cu) {
        ctx->pc = 0x3A1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A68u;
        // 0x3a1a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A70u;
        goto label_3a1a70;
    }
    ctx->pc = 0x3A1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1A70u);
        ctx->pc = 0x3A1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A68u;
        // 0x3a1a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1A68u, 0x3A1A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1A70u;
label_3a1a70:
    // 0x3a1a70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a1a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a74:
    // 0x3a1a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a78:
    // 0x3a1a78: 0xc0cd66c  jal         func_3359B0
label_3a1a7c:
    if (ctx->pc == 0x3A1A7Cu) {
        ctx->pc = 0x3A1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A78u;
        // 0x3a1a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A80u;
        goto label_3a1a80;
    }
    ctx->pc = 0x3A1A78u;
    SET_GPR_U32(ctx, 31, 0x3A1A80u);
    ctx->pc = 0x3A1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A78u;
    // 0x3a1a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A1A78u, 0x3A1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A80u;
label_3a1a80:
    // 0x3a1a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a84:
    // 0x3a1a84: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3a1a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3a1a88:
    // 0x3a1a88: 0xc0cd66c  jal         func_3359B0
label_3a1a8c:
    if (ctx->pc == 0x3A1A8Cu) {
        ctx->pc = 0x3A1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A88u;
        // 0x3a1a8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A90u;
        goto label_3a1a90;
    }
    ctx->pc = 0x3A1A88u;
    SET_GPR_U32(ctx, 31, 0x3A1A90u);
    ctx->pc = 0x3A1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A88u;
    // 0x3a1a8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A1A88u, 0x3A1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A90u;
label_3a1a90:
    // 0x3a1a90: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a1a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1a94:
    // 0x3a1a94: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a1a94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1a98:
    // 0x3a1a98: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a1a9c:
    if (ctx->pc == 0x3A1A9Cu) {
        ctx->pc = 0x3A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A98u;
        // 0x3a1a9c: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AA0u;
        goto label_3a1aa0;
    }
    ctx->pc = 0x3A1A98u;
    {
        const bool branch_taken_0x3a1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A98u;
        // 0x3a1a9c: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a98) {
            ctx->pc = 0x3A1AACu;
            goto label_3a1aac;
        }
    }
    ctx->pc = 0x3A1AA0u;
label_3a1aa0:
    // 0x3a1aa0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3a1aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3a1aa4:
    // 0x3a1aa4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3a1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3a1aa8:
    // 0x3a1aa8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3a1aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3a1aac:
    // 0x3a1aac: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x3a1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
label_3a1ab0:
    // 0x3a1ab0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a1ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ab4:
    // 0x3a1ab4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a1ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a1ab8:
    // 0x3a1ab8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a1ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a1abc:
    // 0x3a1abc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a1abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a1ac0:
    // 0x3a1ac0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a1ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a1ac4:
    // 0x3a1ac4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a1ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a1ac8:
    // 0x3a1ac8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a1ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1acc:
    // 0x3a1acc: 0x3e00008  jr          $ra
label_3a1ad0:
    if (ctx->pc == 0x3A1AD0u) {
        ctx->pc = 0x3A1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ACCu;
        // 0x3a1ad0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AD4u;
        goto label_3a1ad4;
    }
    ctx->pc = 0x3A1ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ACCu;
        // 0x3a1ad0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1AD4u;
label_3a1ad4:
    // 0x3a1ad4: 0x0  nop
    ctx->pc = 0x3a1ad4u;
    // NOP
    ctx->pc = 0x3a1ad8u;
}
