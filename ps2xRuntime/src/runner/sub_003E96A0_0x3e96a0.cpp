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

// Function: sub_003E96A0
// Address: 0x3e96a0 - 0x3e9780
void sub_003E96A0_0x3e96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E96A0_0x3e96a0");
#endif

    switch (ctx->pc) {
        case 0x3e96a0u: goto label_3e96a0;
        case 0x3e96a4u: goto label_3e96a4;
        case 0x3e96a8u: goto label_3e96a8;
        case 0x3e96acu: goto label_3e96ac;
        case 0x3e96b0u: goto label_3e96b0;
        case 0x3e96b4u: goto label_3e96b4;
        case 0x3e96b8u: goto label_3e96b8;
        case 0x3e96bcu: goto label_3e96bc;
        case 0x3e96c0u: goto label_3e96c0;
        case 0x3e96c4u: goto label_3e96c4;
        case 0x3e96c8u: goto label_3e96c8;
        case 0x3e96ccu: goto label_3e96cc;
        case 0x3e96d0u: goto label_3e96d0;
        case 0x3e96d4u: goto label_3e96d4;
        case 0x3e96d8u: goto label_3e96d8;
        case 0x3e96dcu: goto label_3e96dc;
        case 0x3e96e0u: goto label_3e96e0;
        case 0x3e96e4u: goto label_3e96e4;
        case 0x3e96e8u: goto label_3e96e8;
        case 0x3e96ecu: goto label_3e96ec;
        case 0x3e96f0u: goto label_3e96f0;
        case 0x3e96f4u: goto label_3e96f4;
        case 0x3e96f8u: goto label_3e96f8;
        case 0x3e96fcu: goto label_3e96fc;
        case 0x3e9700u: goto label_3e9700;
        case 0x3e9704u: goto label_3e9704;
        case 0x3e9708u: goto label_3e9708;
        case 0x3e970cu: goto label_3e970c;
        case 0x3e9710u: goto label_3e9710;
        case 0x3e9714u: goto label_3e9714;
        case 0x3e9718u: goto label_3e9718;
        case 0x3e971cu: goto label_3e971c;
        case 0x3e9720u: goto label_3e9720;
        case 0x3e9724u: goto label_3e9724;
        case 0x3e9728u: goto label_3e9728;
        case 0x3e972cu: goto label_3e972c;
        case 0x3e9730u: goto label_3e9730;
        case 0x3e9734u: goto label_3e9734;
        case 0x3e9738u: goto label_3e9738;
        case 0x3e973cu: goto label_3e973c;
        case 0x3e9740u: goto label_3e9740;
        case 0x3e9744u: goto label_3e9744;
        case 0x3e9748u: goto label_3e9748;
        case 0x3e974cu: goto label_3e974c;
        case 0x3e9750u: goto label_3e9750;
        case 0x3e9754u: goto label_3e9754;
        case 0x3e9758u: goto label_3e9758;
        case 0x3e975cu: goto label_3e975c;
        case 0x3e9760u: goto label_3e9760;
        case 0x3e9764u: goto label_3e9764;
        case 0x3e9768u: goto label_3e9768;
        case 0x3e976cu: goto label_3e976c;
        case 0x3e9770u: goto label_3e9770;
        case 0x3e9774u: goto label_3e9774;
        case 0x3e9778u: goto label_3e9778;
        case 0x3e977cu: goto label_3e977c;
        default: break;
    }

    ctx->pc = 0x3e96a0u;

label_3e96a0:
    // 0x3e96a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e96a4:
    // 0x3e96a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e96a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e96a8:
    // 0x3e96a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e96ac:
    // 0x3e96ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e96acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e96b0:
    // 0x3e96b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e96b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e96b4:
    // 0x3e96b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e96b8:
    // 0x3e96b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e96b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e96bc:
    // 0x3e96bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e96c0:
    // 0x3e96c0: 0x40f809  jalr        $v0
label_3e96c4:
    if (ctx->pc == 0x3E96C4u) {
        ctx->pc = 0x3E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96C0u;
        // 0x3e96c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96C8u;
        goto label_3e96c8;
    }
    ctx->pc = 0x3E96C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E96C8u);
        ctx->pc = 0x3E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96C0u;
        // 0x3e96c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E96C0u, 0x3E96C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E96C8u;
label_3e96c8:
    // 0x3e96c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e96cc:
    // 0x3e96cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e96ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e96d0:
    // 0x3e96d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e96d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e96d4:
    // 0x3e96d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e96d8:
    // 0x3e96d8: 0x40f809  jalr        $v0
label_3e96dc:
    if (ctx->pc == 0x3E96DCu) {
        ctx->pc = 0x3E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D8u;
        // 0x3e96dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96E0u;
        goto label_3e96e0;
    }
    ctx->pc = 0x3E96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E96E0u);
        ctx->pc = 0x3E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D8u;
        // 0x3e96dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E96D8u, 0x3E96E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E96E0u;
label_3e96e0:
    // 0x3e96e0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e96e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3e96e4:
    // 0x3e96e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3e96e8:
    if (ctx->pc == 0x3E96E8u) {
        ctx->pc = 0x3E96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96E4u;
        // 0x3e96e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96ECu;
        goto label_3e96ec;
    }
    ctx->pc = 0x3E96E4u;
    {
        const bool branch_taken_0x3e96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96E4u;
        // 0x3e96e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96e4) {
            ctx->pc = 0x3E9710u;
            goto label_3e9710;
        }
    }
    ctx->pc = 0x3E96ECu;
label_3e96ec:
    // 0x3e96ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e96ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e96f0:
    // 0x3e96f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e96f4:
    // 0x3e96f4: 0xc0cd4ee  jal         func_3353B8
label_3e96f8:
    if (ctx->pc == 0x3E96F8u) {
        ctx->pc = 0x3E96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96F4u;
        // 0x3e96f8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96FCu;
        goto label_3e96fc;
    }
    ctx->pc = 0x3E96F4u;
    SET_GPR_U32(ctx, 31, 0x3E96FCu);
    ctx->pc = 0x3E96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E96F4u;
    // 0x3e96f8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E96F4u, 0x3E96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E96FCu;
label_3e96fc:
    // 0x3e96fc: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x3e96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3e9700:
    // 0x3e9700: 0xc0e858c  jal         func_3A1630
label_3e9704:
    if (ctx->pc == 0x3E9704u) {
        ctx->pc = 0x3E9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9700u;
        // 0x3e9704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9708u;
        goto label_3e9708;
    }
    ctx->pc = 0x3E9700u;
    SET_GPR_U32(ctx, 31, 0x3E9708u);
    ctx->pc = 0x3E9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9700u;
    // 0x3e9704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9700u, 0x3E9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9708u;
label_3e9708:
    // 0x3e9708: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e970c:
    if (ctx->pc == 0x3E970Cu) {
        ctx->pc = 0x3E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9708u;
        // 0x3e970c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9710u;
        goto label_3e9710;
    }
    ctx->pc = 0x3E9708u;
    {
        const bool branch_taken_0x3e9708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9708u;
        // 0x3e970c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9708) {
            ctx->pc = 0x3E9718u;
            goto label_3e9718;
        }
    }
    ctx->pc = 0x3E9710u;
label_3e9710:
    // 0x3e9710: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3e9710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9714:
    // 0x3e9714: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3e9714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9718:
    // 0x3e9718: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e971c:
    if (ctx->pc == 0x3E971Cu) {
        ctx->pc = 0x3E971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9718u;
        // 0x3e971c: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9720u;
        goto label_3e9720;
    }
    ctx->pc = 0x3E9718u;
    {
        const bool branch_taken_0x3e9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9718) {
            ctx->pc = 0x3E971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9718u;
            // 0x3e971c: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9734u;
            goto label_3e9734;
        }
    }
    ctx->pc = 0x3E9720u;
label_3e9720:
    // 0x3e9720: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9724:
    // 0x3e9724: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3e9724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3e9728:
    // 0x3e9728: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e972c:
    // 0x3e972c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3e972cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3e9730:
    // 0x3e9730: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3e9730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9734:
    // 0x3e9734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9738:
    // 0x3e9738: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3e973c:
    if (ctx->pc == 0x3E973Cu) {
        ctx->pc = 0x3E973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9738u;
        // 0x3e973c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9740u;
        goto label_3e9740;
    }
    ctx->pc = 0x3E9738u;
    {
        const bool branch_taken_0x3e9738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9738) {
            ctx->pc = 0x3E973Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9738u;
            // 0x3e973c: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9758u;
            goto label_3e9758;
        }
    }
    ctx->pc = 0x3E9740u;
label_3e9740:
    // 0x3e9740: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3e9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e9744:
    // 0x3e9744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9748:
    // 0x3e9748: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3e9748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3e974c:
    // 0x3e974c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3e974cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3e9750:
    // 0x3e9750: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3e9750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3e9754:
    // 0x3e9754: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3e9754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9758:
    // 0x3e9758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e975c:
    // 0x3e975c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9760:
    // 0x3e9760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e9764:
    // 0x3e9764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e9764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9768:
    // 0x3e9768: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3e9768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3e976c:
    // 0x3e976c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e976cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3e9770:
    // 0x3e9770: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3e9770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e9774:
    // 0x3e9774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e9774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9778:
    // 0x3e9778: 0x3e00008  jr          $ra
label_3e977c:
    if (ctx->pc == 0x3E977Cu) {
        ctx->pc = 0x3E977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9778u;
        // 0x3e977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9780u;
        goto label_fallthrough_0x3e9778;
    }
    ctx->pc = 0x3E9778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9778u;
        // 0x3e977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9778:
    ctx->pc = 0x3E9780u;
}
