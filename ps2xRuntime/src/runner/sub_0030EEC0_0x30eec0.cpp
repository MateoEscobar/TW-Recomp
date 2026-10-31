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

// Function: sub_0030EEC0
// Address: 0x30eec0 - 0x30f408
void sub_0030EEC0_0x30eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EEC0_0x30eec0");
#endif

    switch (ctx->pc) {
        case 0x30ef14u: goto label_30ef14;
        case 0x30ef24u: goto label_30ef24;
        case 0x30ef50u: goto label_30ef50;
        case 0x30ef5cu: goto label_30ef5c;
        case 0x30ef7cu: goto label_30ef7c;
        case 0x30efb0u: goto label_30efb0;
        case 0x30efe0u: goto label_30efe0;
        case 0x30eff4u: goto label_30eff4;
        case 0x30effcu: goto label_30effc;
        case 0x30f028u: goto label_30f028;
        case 0x30f054u: goto label_30f054;
        case 0x30f09cu: goto label_30f09c;
        case 0x30f128u: goto label_30f128;
        case 0x30f130u: goto label_30f130;
        case 0x30f138u: goto label_30f138;
        case 0x30f148u: goto label_30f148;
        case 0x30f150u: goto label_30f150;
        case 0x30f188u: goto label_30f188;
        case 0x30f194u: goto label_30f194;
        case 0x30f1acu: goto label_30f1ac;
        case 0x30f1b4u: goto label_30f1b4;
        case 0x30f1e0u: goto label_30f1e0;
        case 0x30f1f0u: goto label_30f1f0;
        case 0x30f220u: goto label_30f220;
        case 0x30f250u: goto label_30f250;
        case 0x30f260u: goto label_30f260;
        case 0x30f268u: goto label_30f268;
        case 0x30f270u: goto label_30f270;
        case 0x30f284u: goto label_30f284;
        case 0x30f29cu: goto label_30f29c;
        case 0x30f2ecu: goto label_30f2ec;
        case 0x30f33cu: goto label_30f33c;
        case 0x30f34cu: goto label_30f34c;
        case 0x30f380u: goto label_30f380;
        case 0x30f39cu: goto label_30f39c;
        case 0x30f3b4u: goto label_30f3b4;
        default: break;
    }

    ctx->pc = 0x30eec0u;

    // 0x30eec0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x30eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x30eec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30eec8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x30eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x30eecc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x30eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x30eed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30eed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eed4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x30eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x30eed8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x30eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x30eedc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x30eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x30eee0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x30eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x30eee4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30eee8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x30eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x30eeec: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x30eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x30eef0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30eef4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x30eef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30eef8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x30eef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x30eefc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x30eefcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30ef00: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x30ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30ef04: 0x10430131  beq         $v0, $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x30EF04u;
    {
        const bool branch_taken_0x30ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF04u;
        // 0x30ef08: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef04) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30EF0Cu;
    // 0x30ef0c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30EF0Cu;
    SET_GPR_U32(ctx, 31, 0x30EF14u);
    ctx->pc = 0x30EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF0Cu;
    // 0x30ef10: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30EF0Cu, 0x30EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF14u;
label_30ef14:
    // 0x30ef14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30ef14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef18: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x30ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x30ef1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EF1Cu;
    {
        const bool branch_taken_0x30ef1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF1Cu;
        // 0x30ef20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef1c) {
            ctx->pc = 0x30EF2Cu;
            goto label_30ef2c;
        }
    }
    ctx->pc = 0x30EF24u;
label_30ef24:
    // 0x30ef24: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x30EF24u;
    {
        const bool branch_taken_0x30ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF24u;
        // 0x30ef28: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef24) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30EF2Cu;
label_30ef2c:
    // 0x30ef2c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x30ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30ef30: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x30ef34: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x30ef34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30ef38: 0x74182b  sltu        $v1, $v1, $s4
    ctx->pc = 0x30ef38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x30ef3c: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x30EF3Cu;
    {
        const bool branch_taken_0x30ef3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF3Cu;
        // 0x30ef40: 0x268200fa  addiu       $v0, $s4, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef3c) {
            ctx->pc = 0x30F100u;
            goto label_30f100;
        }
    }
    ctx->pc = 0x30EF44u;
    // 0x30ef44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ef48: 0xc05959e  jal         func_165678
    ctx->pc = 0x30EF48u;
    SET_GPR_U32(ctx, 31, 0x30EF50u);
    ctx->pc = 0x30EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF48u;
    // 0x30ef4c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30EF48u, 0x30EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF50u;
label_30ef50:
    // 0x30ef50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30ef50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef54: 0xc05959e  jal         func_165678
    ctx->pc = 0x30EF54u;
    SET_GPR_U32(ctx, 31, 0x30EF5Cu);
    ctx->pc = 0x30EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF54u;
    // 0x30ef58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30EF54u, 0x30EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF5Cu;
label_30ef5c:
    // 0x30ef5c: 0x1260011a  beqz        $s3, . + 4 + (0x11A << 2)
    ctx->pc = 0x30EF5Cu;
    {
        const bool branch_taken_0x30ef5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF5Cu;
        // 0x30ef60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef5c) {
            ctx->pc = 0x30F3C8u;
            goto label_30f3c8;
        }
    }
    ctx->pc = 0x30EF64u;
    // 0x30ef64: 0x1200ffef  beqz        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x30EF64u;
    {
        const bool branch_taken_0x30ef64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF64u;
        // 0x30ef68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef64) {
            ctx->pc = 0x30EF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ef24;
        }
    }
    ctx->pc = 0x30EF6Cu;
    // 0x30ef6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ef70: 0x26750090  addiu       $s5, $s3, 0x90
    ctx->pc = 0x30ef70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x30ef74: 0xc0594da  jal         func_165368
    ctx->pc = 0x30EF74u;
    SET_GPR_U32(ctx, 31, 0x30EF7Cu);
    ctx->pc = 0x30EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF74u;
    // 0x30ef78: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165368u, 0x30EF74u, 0x30EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF7Cu;
label_30ef7c:
    // 0x30ef7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30EF7Cu;
    {
        const bool branch_taken_0x30ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF7Cu;
        // 0x30ef80: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef7c) {
            ctx->pc = 0x30EFB8u;
            goto label_30efb8;
        }
    }
    ctx->pc = 0x30EF84u;
    // 0x30ef84: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x30ef84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x30ef88: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x30ef88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x30ef8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ef8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef90: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30ef94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ef94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef98: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x30ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x30ef9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30efa0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30efa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30efa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30efa8: 0xc09381e  jal         func_24E078
    ctx->pc = 0x30EFA8u;
    SET_GPR_U32(ctx, 31, 0x30EFB0u);
    ctx->pc = 0x30EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFA8u;
    // 0x30efac: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x30EFA8u, 0x30EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFB0u;
label_30efb0:
    // 0x30efb0: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x30EFB0u;
    {
        const bool branch_taken_0x30efb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30efb0) {
            ctx->pc = 0x30EFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EFB0u;
            // 0x30efb4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F040u;
            goto label_30f040;
        }
    }
    ctx->pc = 0x30EFB8u;
label_30efb8:
    // 0x30efb8: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x30efb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x30efbc: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x30efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x30efc0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x30efc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x30efc4: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x30efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x30efc8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x30efc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x30efcc: 0x2508bf60  addiu       $t0, $t0, -0x40A0
    ctx->pc = 0x30efccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950752));
    // 0x30efd0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x30efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30efd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30efd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30efd8: 0xc0a734c  jal         func_29CD30
    ctx->pc = 0x30EFD8u;
    SET_GPR_U32(ctx, 31, 0x30EFE0u);
    ctx->pc = 0x30EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFD8u;
    // 0x30efdc: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD30u, 0x30EFD8u, 0x30EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFE0u;
label_30efe0:
    // 0x30efe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30efe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30efe4: 0x520000f9  beql        $s0, $zero, . + 4 + (0xF9 << 2)
    ctx->pc = 0x30EFE4u;
    {
        const bool branch_taken_0x30efe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30efe4) {
            ctx->pc = 0x30EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EFE4u;
            // 0x30efe8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30EFECu;
    // 0x30efec: 0xc087502  jal         func_21D408
    ctx->pc = 0x30EFECu;
    SET_GPR_U32(ctx, 31, 0x30EFF4u);
    ctx->pc = 0x30EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFECu;
    // 0x30eff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30EFECu, 0x30EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFF4u;
label_30eff4:
    // 0x30eff4: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x30EFF4u;
    SET_GPR_U32(ctx, 31, 0x30EFFCu);
    ctx->pc = 0x30EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFF4u;
    // 0x30eff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x30EFF4u, 0x30EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFFCu;
label_30effc:
    // 0x30effc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x30effcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x30f000: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x30f000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x30f004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30f004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f00c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30f00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30f010: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x30f010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30f014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30f014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f018: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x30f01c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x30f01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30f020: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x30F020u;
    SET_GPR_U32(ctx, 31, 0x30F028u);
    ctx->pc = 0x30F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F020u;
    // 0x30f024: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x30F020u, 0x30F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F028u;
label_30f028:
    // 0x30f028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f030: 0x108300e6  beq         $a0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x30F030u;
    {
        const bool branch_taken_0x30f030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F030u;
        // 0x30f034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f030) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F038u;
    // 0x30f038: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x30F038u;
    {
        const bool branch_taken_0x30f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F038u;
        // 0x30f03c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f038) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F040u;
label_30f040:
    // 0x30f040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30f040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f044: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x30f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f048: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x30f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f04c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x30F04Cu;
    SET_GPR_U32(ctx, 31, 0x30F054u);
    ctx->pc = 0x30F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F04Cu;
    // 0x30f050: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x30F04Cu, 0x30F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F054u;
label_30f054:
    // 0x30f054: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x30f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f058: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x30f058u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x30f05c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30f05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30f060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f064: 0x4601b500  add.s       $f20, $f22, $f1
    ctx->pc = 0x30f064u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x30f068: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x30f068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x30f06c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x30f06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x30f070: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x30f070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f074: 0x0  nop
    ctx->pc = 0x30f074u;
    // NOP
    // 0x30f078: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x30F078u;
    {
        const bool branch_taken_0x30f078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f078) {
            ctx->pc = 0x30F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F078u;
            // 0x30f07c: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F0A0u;
            goto label_30f0a0;
        }
    }
    ctx->pc = 0x30F080u;
    // 0x30f080: 0x92220053  lbu         $v0, 0x53($s1)
    ctx->pc = 0x30f080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 83)));
    // 0x30f084: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F084u;
    {
        const bool branch_taken_0x30f084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f084) {
            ctx->pc = 0x30F088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F084u;
            // 0x30f088: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F0A0u;
            goto label_30f0a0;
        }
    }
    ctx->pc = 0x30F08Cu;
    // 0x30f08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f094: 0xc0c3b50  jal         func_30ED40
    ctx->pc = 0x30F094u;
    SET_GPR_U32(ctx, 31, 0x30F09Cu);
    ctx->pc = 0x30F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F094u;
    // 0x30f098: 0xa2220053  sb          $v0, 0x53($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ED40u, 0x30F094u, 0x30F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F09Cu;
label_30f09c:
    // 0x30f09c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x30f09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_30f0a0:
    // 0x30f0a0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x30f0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f0a4: 0x0  nop
    ctx->pc = 0x30f0a4u;
    // NOP
    // 0x30f0a8: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x30F0A8u;
    {
        const bool branch_taken_0x30f0a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f0a8) {
            ctx->pc = 0x30F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F0A8u;
            // 0x30f0ac: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F0E8u;
            goto label_30f0e8;
        }
    }
    ctx->pc = 0x30F0B0u;
    // 0x30f0b0: 0x92220052  lbu         $v0, 0x52($s1)
    ctx->pc = 0x30f0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x30f0b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F0B4u;
    {
        const bool branch_taken_0x30f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f0b4) {
            ctx->pc = 0x30F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F0B4u;
            // 0x30f0b8: 0xc6200028  lwc1        $f0, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F0C8u;
            goto label_30f0c8;
        }
    }
    ctx->pc = 0x30F0BCu;
    // 0x30f0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f0c0: 0xa2220052  sb          $v0, 0x52($s1)
    ctx->pc = 0x30f0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x30f0c4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x30f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f0c8:
    // 0x30f0c8: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x30f0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x30f0cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x30f0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x30f0d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x30f0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f0d4: 0x0  nop
    ctx->pc = 0x30f0d4u;
    // NOP
    // 0x30f0d8: 0x450100bc  bc1t        . + 4 + (0xBC << 2)
    ctx->pc = 0x30F0D8u;
    {
        const bool branch_taken_0x30f0d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0D8u;
        // 0x30f0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0d8) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F0E0u;
    // 0x30f0e0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x30F0E0u;
    {
        const bool branch_taken_0x30f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0E0u;
        // 0x30f0e4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0e0) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F0E8u;
label_30f0e8:
    // 0x30f0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f0ec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F0ECu;
    {
        const bool branch_taken_0x30f0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f0ec) {
            ctx->pc = 0x30F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F0ECu;
            // 0x30f0f0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F104u;
            goto label_30f104;
        }
    }
    ctx->pc = 0x30F0F4u;
    // 0x30f0f4: 0xa2200052  sb          $zero, 0x52($s1)
    ctx->pc = 0x30f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f0f8: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x30F0F8u;
    {
        const bool branch_taken_0x30f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0F8u;
        // 0x30f0fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0f8) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F100u;
label_30f100:
    // 0x30f100: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_30f104:
    // 0x30f104: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x30f104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x30f108: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30F108u;
    {
        const bool branch_taken_0x30f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F108u;
        // 0x30f10c: 0x268202ee  addiu       $v0, $s4, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f108) {
            ctx->pc = 0x30F16Cu;
            goto label_30f16c;
        }
    }
    ctx->pc = 0x30F110u;
    // 0x30f110: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f114: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x30f114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x30f118: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30f118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f11c: 0x24710048  addiu       $s1, $v1, 0x48
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x30f120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f124: 0x0  nop
    ctx->pc = 0x30f124u;
    // NOP
label_30f128:
    // 0x30f128: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30F128u;
    SET_GPR_U32(ctx, 31, 0x30F130u);
    ctx->pc = 0x30F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F128u;
    // 0x30f12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30F128u, 0x30F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F130u;
label_30f130:
    // 0x30f130: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30F130u;
    SET_GPR_U32(ctx, 31, 0x30F138u);
    ctx->pc = 0x30F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F130u;
    // 0x30f134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30F130u, 0x30F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F138u;
label_30f138:
    // 0x30f138: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F138u;
    {
        const bool branch_taken_0x30f138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f138) {
            ctx->pc = 0x30F13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F138u;
            // 0x30f13c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F158u;
            goto label_30f158;
        }
    }
    ctx->pc = 0x30F140u;
    // 0x30f140: 0xc087502  jal         func_21D408
    ctx->pc = 0x30F140u;
    SET_GPR_U32(ctx, 31, 0x30F148u);
    ctx->pc = 0x30F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F140u;
    // 0x30f144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F140u, 0x30F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F148u;
label_30f148:
    // 0x30f148: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x30F148u;
    SET_GPR_U32(ctx, 31, 0x30F150u);
    ctx->pc = 0x30F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F148u;
    // 0x30f14c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x30F148u, 0x30F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F150u;
label_30f150:
    // 0x30f150: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x30F150u;
    {
        const bool branch_taken_0x30f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F150u;
        // 0x30f154: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f150) {
            ctx->pc = 0x30F3C8u;
            goto label_30f3c8;
        }
    }
    ctx->pc = 0x30F158u;
label_30f158:
    // 0x30f158: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30f158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30f15c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x30F15Cu;
    {
        const bool branch_taken_0x30f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f15c) {
            ctx->pc = 0x30F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F15Cu;
            // 0x30f160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f128;
        }
    }
    ctx->pc = 0x30F164u;
    // 0x30f164: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x30F164u;
    {
        const bool branch_taken_0x30f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F164u;
        // 0x30f168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f164) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F16Cu;
label_30f16c:
    // 0x30f16c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x30f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30f170: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x30f170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x30f174: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x30F174u;
    {
        const bool branch_taken_0x30f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F174u;
        // 0x30f178: 0x268201f4  addiu       $v0, $s4, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f174) {
            ctx->pc = 0x30F3C8u;
            goto label_30f3c8;
        }
    }
    ctx->pc = 0x30F17Cu;
    // 0x30f17c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f180: 0xc05959e  jal         func_165678
    ctx->pc = 0x30F180u;
    SET_GPR_U32(ctx, 31, 0x30F188u);
    ctx->pc = 0x30F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F180u;
    // 0x30f184: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30F180u, 0x30F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F188u;
label_30f188:
    // 0x30f188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30f188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f18c: 0xc05959e  jal         func_165678
    ctx->pc = 0x30F18Cu;
    SET_GPR_U32(ctx, 31, 0x30F194u);
    ctx->pc = 0x30F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F18Cu;
    // 0x30f190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30F18Cu, 0x30F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F194u;
label_30f194:
    // 0x30f194: 0x1280008c  beqz        $s4, . + 4 + (0x8C << 2)
    ctx->pc = 0x30F194u;
    {
        const bool branch_taken_0x30f194 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F194u;
        // 0x30f198: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f194) {
            ctx->pc = 0x30F3C8u;
            goto label_30f3c8;
        }
    }
    ctx->pc = 0x30F19Cu;
    // 0x30f19c: 0x1200008b  beqz        $s0, . + 4 + (0x8B << 2)
    ctx->pc = 0x30F19Cu;
    {
        const bool branch_taken_0x30f19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F19Cu;
        // 0x30f1a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f19c) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F1A4u;
    // 0x30f1a4: 0xc087502  jal         func_21D408
    ctx->pc = 0x30F1A4u;
    SET_GPR_U32(ctx, 31, 0x30F1ACu);
    ctx->pc = 0x30F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1A4u;
    // 0x30f1a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F1A4u, 0x30F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1ACu;
label_30f1ac:
    // 0x30f1ac: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x30F1ACu;
    SET_GPR_U32(ctx, 31, 0x30F1B4u);
    ctx->pc = 0x30F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1ACu;
    // 0x30f1b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x30F1ACu, 0x30F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1B4u;
label_30f1b4:
    // 0x30f1b4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x30f1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x30f1b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x30f1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x30f1bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30f1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30f1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1c4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30f1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30f1c8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x30f1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30f1cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x30f1ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x30f1d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30f1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x30f1d4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x30f1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30f1d8: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x30F1D8u;
    SET_GPR_U32(ctx, 31, 0x30F1E0u);
    ctx->pc = 0x30F1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1D8u;
    // 0x30f1dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x30F1D8u, 0x30F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1E0u;
label_30f1e0:
    // 0x30f1e0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30F1E0u;
    {
        const bool branch_taken_0x30f1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f1e0) {
            ctx->pc = 0x30F1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F1E0u;
            // 0x30f1e4: 0x86850092  lh          $a1, 0x92($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F228u;
            goto label_30f228;
        }
    }
    ctx->pc = 0x30F1E8u;
    // 0x30f1e8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x30F1E8u;
    {
        const bool branch_taken_0x30f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1E8u;
        // 0x30f1ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1e8) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F1F0u;
label_30f1f0:
    // 0x30f1f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30f1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30f1f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30f1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1fc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x30f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x30f200: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30f200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30f204: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30f204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30f208: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30f208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f20c: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30f210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f214: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30f214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f218: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x30F218u;
    SET_GPR_U32(ctx, 31, 0x30F220u);
    ctx->pc = 0x30F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F218u;
    // 0x30f21c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x30F218u, 0x30F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F220u;
label_30f220:
    // 0x30f220: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x30F220u;
    {
        const bool branch_taken_0x30f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F220u;
        // 0x30f224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f220) {
            ctx->pc = 0x30F3CCu;
            goto label_30f3cc;
        }
    }
    ctx->pc = 0x30F228u;
label_30f228:
    // 0x30f228: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x30f22c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x30f230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f234: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30f238: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30f238u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f23c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30f240: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30f240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f244: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x30f248: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x30F248u;
    SET_GPR_U32(ctx, 31, 0x30F250u);
    ctx->pc = 0x30F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F248u;
    // 0x30f24c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x30F248u, 0x30F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F250u;
label_30f250:
    // 0x30f250: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    // 0x30f254: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f258: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x30f258u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30f25c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30f260:
    // 0x30f260: 0xc137866  jal         func_4DE198
    ctx->pc = 0x30F260u;
    SET_GPR_U32(ctx, 31, 0x30F268u);
    ctx->pc = 0x30F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F260u;
    // 0x30f264: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x30F260u, 0x30F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F268u;
label_30f268:
    // 0x30f268: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30F268u;
    SET_GPR_U32(ctx, 31, 0x30F270u);
    ctx->pc = 0x30F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F268u;
    // 0x30f26c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30F268u, 0x30F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F270u;
label_30f270:
    // 0x30f270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30f270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f274: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x30F274u;
    {
        const bool branch_taken_0x30f274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f274) {
            ctx->pc = 0x30F278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F274u;
            // 0x30f278: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F27Cu;
    // 0x30f27c: 0xc089018  jal         func_224060
    ctx->pc = 0x30F27Cu;
    SET_GPR_U32(ctx, 31, 0x30F284u);
    ctx->pc = 0x30F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F27Cu;
    // 0x30f280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x30F27Cu, 0x30F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F284u;
label_30f284:
    // 0x30f284: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x30F284u;
    {
        const bool branch_taken_0x30f284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f284) {
            ctx->pc = 0x30F288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F284u;
            // 0x30f288: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F28Cu;
    // 0x30f28c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x30f290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f294: 0xc089998  jal         func_226660
    ctx->pc = 0x30F294u;
    SET_GPR_U32(ctx, 31, 0x30F29Cu);
    ctx->pc = 0x30F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F294u;
    // 0x30f298: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x30F294u, 0x30F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F29Cu;
label_30f29c:
    // 0x30f29c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x30F29Cu;
    {
        const bool branch_taken_0x30f29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f29c) {
            ctx->pc = 0x30F2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F29Cu;
            // 0x30f2a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F2A4u;
    // 0x30f2a4: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x30f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x30f2a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f2ac: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30F2ACu;
    {
        const bool branch_taken_0x30f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30f2ac) {
            ctx->pc = 0x30F2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2ACu;
            // 0x30f2b0: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F2D8u;
            goto label_30f2d8;
        }
    }
    ctx->pc = 0x30F2B4u;
    // 0x30f2b4: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x30F2B4u;
    {
        const bool branch_taken_0x30f2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f2b4) {
            ctx->pc = 0x30F2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2B4u;
            // 0x30f2b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F2BCu;
    // 0x30f2bc: 0x92220052  lbu         $v0, 0x52($s1)
    ctx->pc = 0x30f2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x30f2c0: 0x50550005  beql        $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F2C0u;
    {
        const bool branch_taken_0x30f2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x30f2c0) {
            ctx->pc = 0x30F2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2C0u;
            // 0x30f2c4: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F2D8u;
            goto label_30f2d8;
        }
    }
    ctx->pc = 0x30F2C8u;
    // 0x30f2c8: 0x92220051  lbu         $v0, 0x51($s1)
    ctx->pc = 0x30f2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
    // 0x30f2cc: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x30F2CCu;
    {
        const bool branch_taken_0x30f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30f2cc) {
            ctx->pc = 0x30F2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2CCu;
            // 0x30f2d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F2D4u;
    // 0x30f2d4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x30f2d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_30f2d8:
    // 0x30f2d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30f2dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30f2e0: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x30f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x30f2e4: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x30F2E4u;
    SET_GPR_U32(ctx, 31, 0x30F2ECu);
    ctx->pc = 0x30F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F2E4u;
    // 0x30f2e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x30F2E4u, 0x30F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F2ECu;
label_30f2ec:
    // 0x30f2ec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x30f2ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f2f0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x30f2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f2f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x30f2f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x30f2f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x30f2f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30f2fc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x30f2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x30f300: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x30f300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x30f304: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x30f304u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x30f308: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x30f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x30f30c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x30f30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x30f310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30f310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f314: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30f314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f318: 0x0  nop
    ctx->pc = 0x30f318u;
    // NOP
    // 0x30f31c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30f31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f320: 0x0  nop
    ctx->pc = 0x30f320u;
    // NOP
    // 0x30f324: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x30F324u;
    {
        const bool branch_taken_0x30f324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f324) {
            ctx->pc = 0x30F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F324u;
            // 0x30f328: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F3BCu;
            goto label_30f3bc;
        }
    }
    ctx->pc = 0x30F32Cu;
    // 0x30f32c: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x30f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x30f330: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x30f334: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x30F334u;
    SET_GPR_U32(ctx, 31, 0x30F33Cu);
    ctx->pc = 0x30F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F334u;
    // 0x30f338: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x30F334u, 0x30F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F33Cu;
label_30f33c:
    // 0x30f33c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30F33Cu;
    {
        const bool branch_taken_0x30f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f33c) {
            ctx->pc = 0x30F340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F33Cu;
            // 0x30f340: 0x92220054  lbu         $v0, 0x54($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F384u;
            goto label_30f384;
        }
    }
    ctx->pc = 0x30F344u;
    // 0x30f344: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x30F344u;
    SET_GPR_U32(ctx, 31, 0x30F34Cu);
    ctx->pc = 0x30F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F344u;
    // 0x30f348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x30F344u, 0x30F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F34Cu;
label_30f34c:
    // 0x30f34c: 0x5455000d  bnel        $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x30F34Cu;
    {
        const bool branch_taken_0x30f34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x30f34c) {
            ctx->pc = 0x30F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F34Cu;
            // 0x30f350: 0x92220054  lbu         $v0, 0x54($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F384u;
            goto label_30f384;
        }
    }
    ctx->pc = 0x30F354u;
    // 0x30f354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x30f358: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x30f358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x30f35c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x30f35cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x30f360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30f368: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30f368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f374: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30f374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f378: 0xc088178  jal         func_2205E0
    ctx->pc = 0x30F378u;
    SET_GPR_U32(ctx, 31, 0x30F380u);
    ctx->pc = 0x30F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F378u;
    // 0x30f37c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x30F378u, 0x30F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F380u;
label_30f380:
    // 0x30f380: 0x92220054  lbu         $v0, 0x54($s1)
    ctx->pc = 0x30f380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_30f384:
    // 0x30f384: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F384u;
    {
        const bool branch_taken_0x30f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f384) {
            ctx->pc = 0x30F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F384u;
            // 0x30f388: 0x92250050  lbu         $a1, 0x50($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F394u;
            goto label_30f394;
        }
    }
    ctx->pc = 0x30F38Cu;
    // 0x30f38c: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x30f38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x30f390: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x30f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30f394:
    // 0x30f394: 0xc0cd526  jal         func_335498
    ctx->pc = 0x30F394u;
    SET_GPR_U32(ctx, 31, 0x30F39Cu);
    ctx->pc = 0x30F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F394u;
    // 0x30f398: 0x26e4b8a0  addiu       $a0, $s7, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x30F394u, 0x30F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F39Cu;
label_30f39c:
    // 0x30f39c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f3a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30f3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3a4: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30f3a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30f3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3ac: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x30F3ACu;
    SET_GPR_U32(ctx, 31, 0x30F3B4u);
    ctx->pc = 0x30F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F3ACu;
    // 0x30f3b0: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x30F3ACu, 0x30F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3B4u;
label_30f3b4:
    // 0x30f3b4: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x30F3B4u;
    {
        const bool branch_taken_0x30f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3B4u;
        // 0x30f3b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3b4) {
            ctx->pc = 0x30F1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f1f0;
        }
    }
    ctx->pc = 0x30F3BCu;
label_30f3bc:
    // 0x30f3bc: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x30f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30f3c0: 0x5440ffa7  bnel        $v0, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x30F3C0u;
    {
        const bool branch_taken_0x30f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f3c0) {
            ctx->pc = 0x30F3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F3C0u;
            // 0x30f3c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f260;
        }
    }
    ctx->pc = 0x30F3C8u;
label_30f3c8:
    // 0x30f3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30f3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f3cc:
    // 0x30f3cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x30f3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30f3d0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x30f3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f3d4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x30f3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f3d8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x30f3d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f3dc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x30f3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f3e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x30f3e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f3e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30f3e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f3e8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x30f3e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f3ec: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x30f3ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f3f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f3f4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x30f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30f3f8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x30f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30f3fc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x30f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f400: 0x3e00008  jr          $ra
    ctx->pc = 0x30F400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F400u;
        // 0x30f404: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F408u;
}
