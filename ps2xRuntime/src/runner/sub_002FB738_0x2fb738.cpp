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

// Function: sub_002FB738
// Address: 0x2fb738 - 0x2fb868
void sub_002FB738_0x2fb738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB738_0x2fb738");
#endif

    switch (ctx->pc) {
        case 0x2fb77cu: goto label_2fb77c;
        case 0x2fb7fcu: goto label_2fb7fc;
        case 0x2fb81cu: goto label_2fb81c;
        case 0x2fb824u: goto label_2fb824;
        case 0x2fb838u: goto label_2fb838;
        case 0x2fb84cu: goto label_2fb84c;
        default: break;
    }

    ctx->pc = 0x2fb738u;

    // 0x2fb738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fb738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fb73c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fb73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2fb740: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fb740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fb744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fb748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fb74c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2fb74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2fb750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb754: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2fb754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fb758: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fb758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fb75c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2fb760: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2fb760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fb764: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FB764u;
    {
        const bool branch_taken_0x2fb764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB764u;
        // 0x2fb768: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb764) {
            ctx->pc = 0x2FB850u;
            goto label_2fb850;
        }
    }
    ctx->pc = 0x2FB76Cu;
    // 0x2fb76c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb770: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fb770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb774: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2FB774u;
    SET_GPR_U32(ctx, 31, 0x2FB77Cu);
    ctx->pc = 0x2FB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB774u;
    // 0x2fb778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2FB774u, 0x2FB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB77Cu;
label_2fb77c:
    // 0x2fb77c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb780: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB780u;
    {
        const bool branch_taken_0x2fb780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb780) {
            ctx->pc = 0x2FB784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB780u;
            // 0x2fb784: 0x92020018  lbu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB790u;
            goto label_2fb790;
        }
    }
    ctx->pc = 0x2FB788u;
    // 0x2fb788: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2FB788u;
    {
        const bool branch_taken_0x2fb788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB788u;
        // 0x2fb78c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb788) {
            ctx->pc = 0x2FB850u;
            goto label_2fb850;
        }
    }
    ctx->pc = 0x2FB790u;
label_2fb790:
    // 0x2fb790: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FB790u;
    {
        const bool branch_taken_0x2fb790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb790) {
            ctx->pc = 0x2FB794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB790u;
            // 0x2fb794: 0x86240092  lh          $a0, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB804u;
            goto label_2fb804;
        }
    }
    ctx->pc = 0x2FB798u;
    // 0x2fb798: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fb79c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB79Cu;
    {
        const bool branch_taken_0x2fb79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB79Cu;
        // 0x2fb7a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb79c) {
            ctx->pc = 0x2FB800u;
            goto label_2fb800;
        }
    }
    ctx->pc = 0x2FB7A4u;
    // 0x2fb7a4: 0x8e230348  lw          $v1, 0x348($s1)
    ctx->pc = 0x2fb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x2fb7a8: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2fb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2fb7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fb7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7b0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB7B0u;
    {
        const bool branch_taken_0x2fb7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7B0u;
        // 0x2fb7b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7b0) {
            ctx->pc = 0x2FB7C4u;
            goto label_2fb7c4;
        }
    }
    ctx->pc = 0x2FB7B8u;
    // 0x2fb7b8: 0x8e22034c  lw          $v0, 0x34C($s1)
    ctx->pc = 0x2fb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x2fb7bc: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB7BCu;
    {
        const bool branch_taken_0x2fb7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7BCu;
        // 0x2fb7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7bc) {
            ctx->pc = 0x2FB7CCu;
            goto label_2fb7cc;
        }
    }
    ctx->pc = 0x2FB7C4u;
label_2fb7c4:
    // 0x2fb7c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2fb7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb7cc:
    // 0x2fb7cc: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB7CCu;
    {
        const bool branch_taken_0x2fb7cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb7cc) {
            ctx->pc = 0x2FB7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB7CCu;
            // 0x2fb7d0: 0x86240092  lh          $a0, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB804u;
            goto label_2fb804;
        }
    }
    ctx->pc = 0x2FB7D4u;
    // 0x2fb7d4: 0x8ca9bd30  lw          $t1, -0x42D0($a1)
    ctx->pc = 0x2fb7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
    // 0x2fb7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7dc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2fb7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fb7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb7e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fb7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fb7ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fb7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb7f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fb7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb7f4: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2FB7F4u;
    SET_GPR_U32(ctx, 31, 0x2FB7FCu);
    ctx->pc = 0x2FB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB7F4u;
    // 0x2fb7f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2FB7F4u, 0x2FB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB7FCu;
label_2fb7fc:
    // 0x2fb7fc: 0xa2120018  sb          $s2, 0x18($s0)
    ctx->pc = 0x2fb7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
label_2fb800:
    // 0x2fb800: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2fb800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2fb804:
    // 0x2fb804: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2fb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2fb808: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fb808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fb80c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fb810: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fb810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fb814: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2FB814u;
    SET_GPR_U32(ctx, 31, 0x2FB81Cu);
    ctx->pc = 0x2FB818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB814u;
    // 0x2fb818: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2FB814u, 0x2FB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB81Cu;
label_2fb81c:
    // 0x2fb81c: 0xc105896  jal         func_416258
    ctx->pc = 0x2FB81Cu;
    SET_GPR_U32(ctx, 31, 0x2FB824u);
    ctx->pc = 0x2FB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB81Cu;
    // 0x2fb820: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2FB81Cu, 0x2FB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB824u;
label_2fb824:
    // 0x2fb824: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2fb824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2fb828: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2fb828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2fb82c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fb82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fb830: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2FB830u;
    SET_GPR_U32(ctx, 31, 0x2FB838u);
    ctx->pc = 0x2FB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB830u;
    // 0x2fb834: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2FB830u, 0x2FB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB838u;
label_2fb838:
    // 0x2fb838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb840: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2fb840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x2fb844: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FB844u;
    SET_GPR_U32(ctx, 31, 0x2FB84Cu);
    ctx->pc = 0x2FB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB844u;
    // 0x2fb848: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FB844u, 0x2FB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB84Cu;
label_2fb84c:
    // 0x2fb84c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb850:
    // 0x2fb850: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fb850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fb854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb858: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2fb858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb860: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB860u;
        // 0x2fb864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB868u;
}
