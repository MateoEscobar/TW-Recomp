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

// Function: sub_00295F28
// Address: 0x295f28 - 0x296028
void sub_00295F28_0x295f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295F28_0x295f28");
#endif

    switch (ctx->pc) {
        case 0x295f28u: goto label_295f28;
        case 0x295f2cu: goto label_295f2c;
        case 0x295f30u: goto label_295f30;
        case 0x295f34u: goto label_295f34;
        case 0x295f38u: goto label_295f38;
        case 0x295f3cu: goto label_295f3c;
        case 0x295f40u: goto label_295f40;
        case 0x295f44u: goto label_295f44;
        case 0x295f48u: goto label_295f48;
        case 0x295f4cu: goto label_295f4c;
        case 0x295f50u: goto label_295f50;
        case 0x295f54u: goto label_295f54;
        case 0x295f58u: goto label_295f58;
        case 0x295f5cu: goto label_295f5c;
        case 0x295f60u: goto label_295f60;
        case 0x295f64u: goto label_295f64;
        case 0x295f68u: goto label_295f68;
        case 0x295f6cu: goto label_295f6c;
        case 0x295f70u: goto label_295f70;
        case 0x295f74u: goto label_295f74;
        case 0x295f78u: goto label_295f78;
        case 0x295f7cu: goto label_295f7c;
        case 0x295f80u: goto label_295f80;
        case 0x295f84u: goto label_295f84;
        case 0x295f88u: goto label_295f88;
        case 0x295f8cu: goto label_295f8c;
        case 0x295f90u: goto label_295f90;
        case 0x295f94u: goto label_295f94;
        case 0x295f98u: goto label_295f98;
        case 0x295f9cu: goto label_295f9c;
        case 0x295fa0u: goto label_295fa0;
        case 0x295fa4u: goto label_295fa4;
        case 0x295fa8u: goto label_295fa8;
        case 0x295facu: goto label_295fac;
        case 0x295fb0u: goto label_295fb0;
        case 0x295fb4u: goto label_295fb4;
        case 0x295fb8u: goto label_295fb8;
        case 0x295fbcu: goto label_295fbc;
        case 0x295fc0u: goto label_295fc0;
        case 0x295fc4u: goto label_295fc4;
        case 0x295fc8u: goto label_295fc8;
        case 0x295fccu: goto label_295fcc;
        case 0x295fd0u: goto label_295fd0;
        case 0x295fd4u: goto label_295fd4;
        case 0x295fd8u: goto label_295fd8;
        case 0x295fdcu: goto label_295fdc;
        case 0x295fe0u: goto label_295fe0;
        case 0x295fe4u: goto label_295fe4;
        case 0x295fe8u: goto label_295fe8;
        case 0x295fecu: goto label_295fec;
        case 0x295ff0u: goto label_295ff0;
        case 0x295ff4u: goto label_295ff4;
        case 0x295ff8u: goto label_295ff8;
        case 0x295ffcu: goto label_295ffc;
        case 0x296000u: goto label_296000;
        case 0x296004u: goto label_296004;
        case 0x296008u: goto label_296008;
        case 0x29600cu: goto label_29600c;
        case 0x296010u: goto label_296010;
        case 0x296014u: goto label_296014;
        case 0x296018u: goto label_296018;
        case 0x29601cu: goto label_29601c;
        case 0x296020u: goto label_296020;
        case 0x296024u: goto label_296024;
        default: break;
    }

    ctx->pc = 0x295f28u;

label_295f28:
    // 0x295f28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_295f2c:
    // 0x295f2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x295f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_295f30:
    // 0x295f30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x295f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_295f34:
    // 0x295f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295f38:
    // 0x295f38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x295f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_295f3c:
    // 0x295f3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x295f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_295f40:
    // 0x295f40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x295f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_295f44:
    // 0x295f44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x295f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_295f48:
    // 0x295f48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x295f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_295f4c:
    // 0x295f4c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x295f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_295f50:
    // 0x295f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_295f54:
    // 0x295f54: 0xc0a5832  jal         func_2960C8
label_295f58:
    if (ctx->pc == 0x295F58u) {
        ctx->pc = 0x295F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F54u;
        // 0x295f58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295F5Cu;
        goto label_295f5c;
    }
    ctx->pc = 0x295F54u;
    SET_GPR_U32(ctx, 31, 0x295F5Cu);
    ctx->pc = 0x295F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F54u;
    // 0x295f58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960C8u, 0x295F54u, 0x295F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F5Cu;
label_295f5c:
    // 0x295f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295f60:
    // 0x295f60: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
label_295f64:
    if (ctx->pc == 0x295F64u) {
        ctx->pc = 0x295F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F60u;
        // 0x295f64: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295F68u;
        goto label_295f68;
    }
    ctx->pc = 0x295F60u;
    {
        const bool branch_taken_0x295f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x295F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F60u;
        // 0x295f64: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f60) {
            ctx->pc = 0x295FF8u;
            goto label_295ff8;
        }
    }
    ctx->pc = 0x295F68u;
label_295f68:
    // 0x295f68: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x295f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_295f6c:
    // 0x295f6c: 0x2442eaf0  addiu       $v0, $v0, -0x1510
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
label_295f70:
    // 0x295f70: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x295f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_295f74:
    // 0x295f74: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x295f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_295f78:
    // 0x295f78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x295f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295f7c:
    // 0x295f7c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x295f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_295f80:
    // 0x295f80: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x295f80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_295f84:
    // 0x295f84: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_295f88:
    // 0x295f88: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295f8c:
    // 0x295f8c: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_295f90:
    // 0x295f90: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_295f94:
    // 0x295f94: 0x2a603  sra         $s4, $v0, 24
    ctx->pc = 0x295f94u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 24));
label_295f98:
    // 0x295f98: 0xc0e4060  jal         func_390180
label_295f9c:
    if (ctx->pc == 0x295F9Cu) {
        ctx->pc = 0x295F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F98u;
        // 0x295f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FA0u;
        goto label_295fa0;
    }
    ctx->pc = 0x295F98u;
    SET_GPR_U32(ctx, 31, 0x295FA0u);
    ctx->pc = 0x295F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F98u;
    // 0x295f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x295F98u, 0x295FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FA0u;
label_295fa0:
    // 0x295fa0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_295fa4:
    if (ctx->pc == 0x295FA4u) {
        ctx->pc = 0x295FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FA0u;
        // 0x295fa4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FA8u;
        goto label_295fa8;
    }
    ctx->pc = 0x295FA0u;
    {
        const bool branch_taken_0x295fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FA0u;
        // 0x295fa4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fa0) {
            ctx->pc = 0x295FECu;
            goto label_295fec;
        }
    }
    ctx->pc = 0x295FA8u;
label_295fa8:
    // 0x295fa8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_295fac:
    // 0x295fac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x295facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_295fb0:
    // 0x295fb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x295fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_295fb4:
    // 0x295fb4: 0x40f809  jalr        $v0
label_295fb8:
    if (ctx->pc == 0x295FB8u) {
        ctx->pc = 0x295FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FB4u;
        // 0x295fb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FBCu;
        goto label_295fbc;
    }
    ctx->pc = 0x295FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295FBCu);
        ctx->pc = 0x295FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FB4u;
        // 0x295fb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295FB4u, 0x295FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295FBCu;
label_295fbc:
    // 0x295fbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x295fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_295fc0:
    // 0x295fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295fc4:
    // 0x295fc4: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x295fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_295fc8:
    // 0x295fc8: 0x8ec2bd30  lw          $v0, -0x42D0($s6)
    ctx->pc = 0x295fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_295fcc:
    // 0x295fcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x295fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_295fd0:
    // 0x295fd0: 0xa2370274  sb          $s7, 0x274($s1)
    ctx->pc = 0x295fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 628), (uint8_t)GPR_U32(ctx, 23));
label_295fd4:
    // 0x295fd4: 0x92220273  lbu         $v0, 0x273($s1)
    ctx->pc = 0x295fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 627)));
label_295fd8:
    // 0x295fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_295fdc:
    // 0x295fdc: 0xc087502  jal         func_21D408
label_295fe0:
    if (ctx->pc == 0x295FE0u) {
        ctx->pc = 0x295FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FDCu;
        // 0x295fe0: 0xa2220273  sb          $v0, 0x273($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FE4u;
        goto label_295fe4;
    }
    ctx->pc = 0x295FDCu;
    SET_GPR_U32(ctx, 31, 0x295FE4u);
    ctx->pc = 0x295FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FDCu;
    // 0x295fe0: 0xa2220273  sb          $v0, 0x273($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x295FDCu, 0x295FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FE4u;
label_295fe4:
    // 0x295fe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_295fe8:
    if (ctx->pc == 0x295FE8u) {
        ctx->pc = 0x295FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FE4u;
        // 0x295fe8: 0xa0540212  sb          $s4, 0x212($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 530), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FECu;
        goto label_295fec;
    }
    ctx->pc = 0x295FE4u;
    {
        const bool branch_taken_0x295fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FE4u;
        // 0x295fe8: 0xa0540212  sb          $s4, 0x212($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 530), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fe4) {
            ctx->pc = 0x295FF8u;
            goto label_295ff8;
        }
    }
    ctx->pc = 0x295FECu;
label_295fec:
    // 0x295fec: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_295ff0:
    // 0x295ff0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_295ff4:
    if (ctx->pc == 0x295FF4u) {
        ctx->pc = 0x295FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FF0u;
        // 0x295ff4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295FF8u;
        goto label_295ff8;
    }
    ctx->pc = 0x295FF0u;
    {
        const bool branch_taken_0x295ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FF0u;
        // 0x295ff4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ff0) {
            ctx->pc = 0x295F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295f98;
        }
    }
    ctx->pc = 0x295FF8u;
label_295ff8:
    // 0x295ff8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x295ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_295ffc:
    // 0x295ffc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x295ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_296000:
    // 0x296000: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x296000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_296004:
    // 0x296004: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x296004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_296008:
    // 0x296008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29600c:
    // 0x29600c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x29600cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296010:
    // 0x296010: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x296010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296014:
    // 0x296014: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x296014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296018:
    // 0x296018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29601c:
    // 0x29601c: 0x3e00008  jr          $ra
label_296020:
    if (ctx->pc == 0x296020u) {
        ctx->pc = 0x296020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29601Cu;
        // 0x296020: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296024u;
        goto label_296024;
    }
    ctx->pc = 0x29601Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29601Cu;
        // 0x296020: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29601Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296024u;
label_296024:
    // 0x296024: 0x0  nop
    ctx->pc = 0x296024u;
    // NOP
    ctx->pc = 0x296028u;
}
