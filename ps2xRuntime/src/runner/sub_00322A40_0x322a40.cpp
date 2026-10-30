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

// Function: sub_00322A40
// Address: 0x322a40 - 0x322b78
void sub_00322A40_0x322a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322A40_0x322a40");
#endif

    switch (ctx->pc) {
        case 0x322a60u: goto label_322a60;
        case 0x322a78u: goto label_322a78;
        case 0x322a88u: goto label_322a88;
        case 0x322a98u: goto label_322a98;
        case 0x322abcu: goto label_322abc;
        case 0x322ad0u: goto label_322ad0;
        case 0x322b00u: goto label_322b00;
        case 0x322b08u: goto label_322b08;
        case 0x322b28u: goto label_322b28;
        case 0x322b38u: goto label_322b38;
        case 0x322b58u: goto label_322b58;
        default: break;
    }

    ctx->pc = 0x322a40u;

    // 0x322a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322a44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x322a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x322a48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x322a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x322a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322a58: 0xc05959e  jal         func_165678
    ctx->pc = 0x322A58u;
    SET_GPR_U32(ctx, 31, 0x322A60u);
    ctx->pc = 0x322A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A58u;
    // 0x322a5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322A58u, 0x322A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A60u;
label_322a60:
    // 0x322a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a64: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x322A64u;
    {
        const bool branch_taken_0x322a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A64u;
        // 0x322a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a64) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322A6Cu;
    // 0x322a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a70: 0xc088edc  jal         func_223B70
    ctx->pc = 0x322A70u;
    SET_GPR_U32(ctx, 31, 0x322A78u);
    ctx->pc = 0x322A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A70u;
    // 0x322a74: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x322A70u, 0x322A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A78u;
label_322a78:
    // 0x322a78: 0x10520038  beq         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x322A78u;
    {
        const bool branch_taken_0x322a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x322A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A78u;
        // 0x322a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a78) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322A80u;
    // 0x322a80: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x322A80u;
    SET_GPR_U32(ctx, 31, 0x322A88u);
    ctx->pc = 0x322A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A80u;
    // 0x322a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x322A80u, 0x322A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A88u;
label_322a88:
    // 0x322a88: 0x10520034  beq         $v0, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x322A88u;
    {
        const bool branch_taken_0x322a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x322A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A88u;
        // 0x322a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a88) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322A90u;
    // 0x322a90: 0xc08a08a  jal         func_228228
    ctx->pc = 0x322A90u;
    SET_GPR_U32(ctx, 31, 0x322A98u);
    ctx->pc = 0x322A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A90u;
    // 0x322a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x322A90u, 0x322A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A98u;
label_322a98:
    // 0x322a98: 0x10520030  beq         $v0, $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x322A98u;
    {
        const bool branch_taken_0x322a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x322A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A98u;
        // 0x322a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a98) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322AA0u;
    // 0x322aa0: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x322aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x322aa4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x322AA4u;
    {
        const bool branch_taken_0x322aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322aa4) {
            ctx->pc = 0x322AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322AA4u;
            // 0x322aa8: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322B2Cu;
            goto label_322b2c;
        }
    }
    ctx->pc = 0x322AACu;
    // 0x322aac: 0xa2320018  sb          $s2, 0x18($s1)
    ctx->pc = 0x322aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 18));
    // 0x322ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322ab4: 0xc059856  jal         func_166158
    ctx->pc = 0x322AB4u;
    SET_GPR_U32(ctx, 31, 0x322ABCu);
    ctx->pc = 0x322AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AB4u;
    // 0x322ab8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x322AB4u, 0x322ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322ABCu;
label_322abc:
    // 0x322abc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x322abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x322ac0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x322AC0u;
    {
        const bool branch_taken_0x322ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322ac0) {
            ctx->pc = 0x322AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322AC0u;
            // 0x322ac4: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322B2Cu;
            goto label_322b2c;
        }
    }
    ctx->pc = 0x322AC8u;
    // 0x322ac8: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x322AC8u;
    SET_GPR_U32(ctx, 31, 0x322AD0u);
    ctx->pc = 0x322ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AC8u;
    // 0x322acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x322AC8u, 0x322AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322AD0u;
label_322ad0:
    // 0x322ad0: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x322AD0u;
    {
        const bool branch_taken_0x322ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x322AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AD0u;
        // 0x322ad4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ad0) {
            ctx->pc = 0x322B00u;
            goto label_322b00;
        }
    }
    ctx->pc = 0x322AD8u;
    // 0x322ad8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x322ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x322adc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x322adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x322ae0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x322ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x322ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322af0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x322af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322af8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x322AF8u;
    SET_GPR_U32(ctx, 31, 0x322B00u);
    ctx->pc = 0x322AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AF8u;
    // 0x322afc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x322AF8u, 0x322B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B00u;
label_322b00:
    // 0x322b00: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x322B00u;
    SET_GPR_U32(ctx, 31, 0x322B08u);
    ctx->pc = 0x322B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B00u;
    // 0x322b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x322B00u, 0x322B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B08u;
label_322b08:
    // 0x322b08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x322b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x322b0c: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x322b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x322b10: 0x240602a4  addiu       $a2, $zero, 0x2A4
    ctx->pc = 0x322b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x322b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b18: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x322b18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x322b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x322b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b20: 0xc0c8636  jal         func_3218D8
    ctx->pc = 0x322B20u;
    SET_GPR_U32(ctx, 31, 0x322B28u);
    ctx->pc = 0x322B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B20u;
    // 0x322b24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218D8u, 0x322B20u, 0x322B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B28u;
label_322b28:
    // 0x322b28: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_322b2c:
    // 0x322b2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b30: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x322B30u;
    SET_GPR_U32(ctx, 31, 0x322B38u);
    ctx->pc = 0x322B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B30u;
    // 0x322b34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x322B30u, 0x322B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B38u;
label_322b38:
    // 0x322b38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322B38u;
    {
        const bool branch_taken_0x322b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B38u;
        // 0x322b3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b38) {
            ctx->pc = 0x322B58u;
            goto label_322b58;
        }
    }
    ctx->pc = 0x322B40u;
    // 0x322b40: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x322b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x322b44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322B44u;
    {
        const bool branch_taken_0x322b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B44u;
        // 0x322b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b44) {
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322B4Cu;
    // 0x322b4c: 0xa2230019  sb          $v1, 0x19($s1)
    ctx->pc = 0x322b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x322b50: 0xc0c89d0  jal         func_322740
    ctx->pc = 0x322B50u;
    SET_GPR_U32(ctx, 31, 0x322B58u);
    ctx->pc = 0x322B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B50u;
    // 0x322b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322740u, 0x322B50u, 0x322B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B58u;
label_322b58:
    // 0x322b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322b5c:
    // 0x322b5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x322b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322b60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x322b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x322B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B6Cu;
        // 0x322b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322B74u;
    // 0x322b74: 0x0  nop
    ctx->pc = 0x322b74u;
    // NOP
    ctx->pc = 0x322b78u;
}
