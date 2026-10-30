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

// Function: sub_00291ED0
// Address: 0x291ed0 - 0x292008
void sub_00291ED0_0x291ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291ED0_0x291ed0");
#endif

    switch (ctx->pc) {
        case 0x291ed0u: goto label_291ed0;
        case 0x291ed4u: goto label_291ed4;
        case 0x291ed8u: goto label_291ed8;
        case 0x291edcu: goto label_291edc;
        case 0x291ee0u: goto label_291ee0;
        case 0x291ee4u: goto label_291ee4;
        case 0x291ee8u: goto label_291ee8;
        case 0x291eecu: goto label_291eec;
        case 0x291ef0u: goto label_291ef0;
        case 0x291ef4u: goto label_291ef4;
        case 0x291ef8u: goto label_291ef8;
        case 0x291efcu: goto label_291efc;
        case 0x291f00u: goto label_291f00;
        case 0x291f04u: goto label_291f04;
        case 0x291f08u: goto label_291f08;
        case 0x291f0cu: goto label_291f0c;
        case 0x291f10u: goto label_291f10;
        case 0x291f14u: goto label_291f14;
        case 0x291f18u: goto label_291f18;
        case 0x291f1cu: goto label_291f1c;
        case 0x291f20u: goto label_291f20;
        case 0x291f24u: goto label_291f24;
        case 0x291f28u: goto label_291f28;
        case 0x291f2cu: goto label_291f2c;
        case 0x291f30u: goto label_291f30;
        case 0x291f34u: goto label_291f34;
        case 0x291f38u: goto label_291f38;
        case 0x291f3cu: goto label_291f3c;
        case 0x291f40u: goto label_291f40;
        case 0x291f44u: goto label_291f44;
        case 0x291f48u: goto label_291f48;
        case 0x291f4cu: goto label_291f4c;
        case 0x291f50u: goto label_291f50;
        case 0x291f54u: goto label_291f54;
        case 0x291f58u: goto label_291f58;
        case 0x291f5cu: goto label_291f5c;
        case 0x291f60u: goto label_291f60;
        case 0x291f64u: goto label_291f64;
        case 0x291f68u: goto label_291f68;
        case 0x291f6cu: goto label_291f6c;
        case 0x291f70u: goto label_291f70;
        case 0x291f74u: goto label_291f74;
        case 0x291f78u: goto label_291f78;
        case 0x291f7cu: goto label_291f7c;
        case 0x291f80u: goto label_291f80;
        case 0x291f84u: goto label_291f84;
        case 0x291f88u: goto label_291f88;
        case 0x291f8cu: goto label_291f8c;
        case 0x291f90u: goto label_291f90;
        case 0x291f94u: goto label_291f94;
        case 0x291f98u: goto label_291f98;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fa0u: goto label_291fa0;
        case 0x291fa4u: goto label_291fa4;
        case 0x291fa8u: goto label_291fa8;
        case 0x291facu: goto label_291fac;
        case 0x291fb0u: goto label_291fb0;
        case 0x291fb4u: goto label_291fb4;
        case 0x291fb8u: goto label_291fb8;
        case 0x291fbcu: goto label_291fbc;
        case 0x291fc0u: goto label_291fc0;
        case 0x291fc4u: goto label_291fc4;
        case 0x291fc8u: goto label_291fc8;
        case 0x291fccu: goto label_291fcc;
        case 0x291fd0u: goto label_291fd0;
        case 0x291fd4u: goto label_291fd4;
        case 0x291fd8u: goto label_291fd8;
        case 0x291fdcu: goto label_291fdc;
        case 0x291fe0u: goto label_291fe0;
        case 0x291fe4u: goto label_291fe4;
        case 0x291fe8u: goto label_291fe8;
        case 0x291fecu: goto label_291fec;
        case 0x291ff0u: goto label_291ff0;
        case 0x291ff4u: goto label_291ff4;
        case 0x291ff8u: goto label_291ff8;
        case 0x291ffcu: goto label_291ffc;
        case 0x292000u: goto label_292000;
        case 0x292004u: goto label_292004;
        default: break;
    }

    ctx->pc = 0x291ed0u;

label_291ed0:
    // 0x291ed0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x291ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_291ed4:
    // 0x291ed4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x291ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_291ed8:
    // 0x291ed8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x291ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_291edc:
    // 0x291edc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x291edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_291ee0:
    // 0x291ee0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x291ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_291ee4:
    // 0x291ee4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x291ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_291ee8:
    // 0x291ee8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x291ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_291eec:
    // 0x291eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_291ef0:
    // 0x291ef0: 0xc087502  jal         func_21D408
label_291ef4:
    if (ctx->pc == 0x291EF4u) {
        ctx->pc = 0x291EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EF0u;
        // 0x291ef4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291EF8u;
        goto label_291ef8;
    }
    ctx->pc = 0x291EF0u;
    SET_GPR_U32(ctx, 31, 0x291EF8u);
    ctx->pc = 0x291EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EF0u;
    // 0x291ef4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x291EF0u, 0x291EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EF8u;
label_291ef8:
    // 0x291ef8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291efc:
    // 0x291efc: 0xc0a4752  jal         func_291D48
label_291f00:
    if (ctx->pc == 0x291F00u) {
        ctx->pc = 0x291F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EFCu;
        // 0x291f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F04u;
        goto label_291f04;
    }
    ctx->pc = 0x291EFCu;
    SET_GPR_U32(ctx, 31, 0x291F04u);
    ctx->pc = 0x291F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EFCu;
    // 0x291f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D48u, 0x291EFCu, 0x291F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F04u;
label_291f04:
    // 0x291f04: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291f08:
    // 0x291f08: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_291f0c:
    // 0x291f0c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x291f0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_291f10:
    // 0x291f10: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_291f14:
    // 0x291f14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x291f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_291f18:
    // 0x291f18: 0xc04808c  jal         func_120230
label_291f1c:
    if (ctx->pc == 0x291F1Cu) {
        ctx->pc = 0x291F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F18u;
        // 0x291f1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F20u;
        goto label_291f20;
    }
    ctx->pc = 0x291F18u;
    SET_GPR_U32(ctx, 31, 0x291F20u);
    ctx->pc = 0x291F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F18u;
    // 0x291f1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x291F18u, 0x291F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F20u;
label_291f20:
    // 0x291f20: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x291f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_291f24:
    // 0x291f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_291f28:
    // 0x291f28: 0x0  nop
    ctx->pc = 0x291f28u;
    // NOP
label_291f2c:
    // 0x291f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x291f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291f30:
    // 0x291f30: 0x0  nop
    ctx->pc = 0x291f30u;
    // NOP
label_291f34:
    // 0x291f34: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_291f38:
    if (ctx->pc == 0x291F38u) {
        ctx->pc = 0x291F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F34u;
        // 0x291f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F3Cu;
        goto label_291f3c;
    }
    ctx->pc = 0x291F34u;
    {
        const bool branch_taken_0x291f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F34u;
        // 0x291f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f34) {
            ctx->pc = 0x291FE4u;
            goto label_291fe4;
        }
    }
    ctx->pc = 0x291F3Cu;
label_291f3c:
    // 0x291f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291f40:
    // 0x291f40: 0xc0a476e  jal         func_291DB8
label_291f44:
    if (ctx->pc == 0x291F44u) {
        ctx->pc = 0x291F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F40u;
        // 0x291f44: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F48u;
        goto label_291f48;
    }
    ctx->pc = 0x291F40u;
    SET_GPR_U32(ctx, 31, 0x291F48u);
    ctx->pc = 0x291F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F40u;
    // 0x291f44: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DB8u, 0x291F40u, 0x291F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F48u;
label_291f48:
    // 0x291f48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x291f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291f4c:
    // 0x291f4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x291f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291f50:
    // 0x291f50: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_291f54:
    // 0x291f54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x291f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_291f58:
    // 0x291f58: 0x2442ddf8  addiu       $v0, $v0, -0x2208
    ctx->pc = 0x291f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958584));
label_291f5c:
    // 0x291f5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_291f60:
    if (ctx->pc == 0x291F60u) {
        ctx->pc = 0x291F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F5Cu;
        // 0x291f60: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F64u;
        goto label_291f64;
    }
    ctx->pc = 0x291F5Cu;
    {
        const bool branch_taken_0x291f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F5Cu;
        // 0x291f60: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f5c) {
            ctx->pc = 0x291F6Cu;
            goto label_291f6c;
        }
    }
    ctx->pc = 0x291F64u;
label_291f64:
    // 0x291f64: 0x0  nop
    ctx->pc = 0x291f64u;
    // NOP
label_291f68:
    // 0x291f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x291f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_291f6c:
    // 0x291f6c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_291f70:
    // 0x291f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_291f74:
    if (ctx->pc == 0x291F74u) {
        ctx->pc = 0x291F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F70u;
        // 0x291f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F78u;
        goto label_291f78;
    }
    ctx->pc = 0x291F70u;
    {
        const bool branch_taken_0x291f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F70u;
        // 0x291f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f70) {
            ctx->pc = 0x291FA4u;
            goto label_291fa4;
        }
    }
    ctx->pc = 0x291F78u;
label_291f78:
    // 0x291f78: 0xc0e409a  jal         func_390268
label_291f7c:
    if (ctx->pc == 0x291F7Cu) {
        ctx->pc = 0x291F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F78u;
        // 0x291f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F80u;
        goto label_291f80;
    }
    ctx->pc = 0x291F78u;
    SET_GPR_U32(ctx, 31, 0x291F80u);
    ctx->pc = 0x291F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F78u;
    // 0x291f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x291F78u, 0x291F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F80u;
label_291f80:
    // 0x291f80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_291f84:
    if (ctx->pc == 0x291F84u) {
        ctx->pc = 0x291F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F80u;
        // 0x291f84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F88u;
        goto label_291f88;
    }
    ctx->pc = 0x291F80u;
    {
        const bool branch_taken_0x291f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F80u;
        // 0x291f84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f80) {
            ctx->pc = 0x291F9Cu;
            goto label_291f9c;
        }
    }
    ctx->pc = 0x291F88u;
label_291f88:
    // 0x291f88: 0x8c420178  lw          $v0, 0x178($v0)
    ctx->pc = 0x291f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
label_291f8c:
    // 0x291f8c: 0xc043d5e  jal         func_10F578
label_291f90:
    if (ctx->pc == 0x291F90u) {
        ctx->pc = 0x291F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F8Cu;
        // 0x291f90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F94u;
        goto label_291f94;
    }
    ctx->pc = 0x291F8Cu;
    SET_GPR_U32(ctx, 31, 0x291F94u);
    ctx->pc = 0x291F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F8Cu;
    // 0x291f90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x291F8Cu, 0x291F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F94u;
label_291f94:
    // 0x291f94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_291f98:
    if (ctx->pc == 0x291F98u) {
        ctx->pc = 0x291F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F94u;
        // 0x291f98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F9Cu;
        goto label_291f9c;
    }
    ctx->pc = 0x291F94u;
    {
        const bool branch_taken_0x291f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F94u;
        // 0x291f98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f94) {
            ctx->pc = 0x291F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291f68;
        }
    }
    ctx->pc = 0x291F9Cu;
label_291f9c:
    // 0x291f9c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x291f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291fa0:
    // 0x291fa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_291fa4:
    // 0x291fa4: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_291fa8:
    if (ctx->pc == 0x291FA8u) {
        ctx->pc = 0x291FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FA4u;
        // 0x291fa8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291FACu;
        goto label_291fac;
    }
    ctx->pc = 0x291FA4u;
    {
        const bool branch_taken_0x291fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x291FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FA4u;
        // 0x291fa8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fa4) {
            ctx->pc = 0x291FE0u;
            goto label_291fe0;
        }
    }
    ctx->pc = 0x291FACu;
label_291fac:
    // 0x291fac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x291facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291fb0:
    // 0x291fb0: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x291fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_291fb4:
    // 0x291fb4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x291fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_291fb8:
    // 0x291fb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x291fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_291fbc:
    // 0x291fbc: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x291fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_291fc0:
    // 0x291fc0: 0x2463ddf8  addiu       $v1, $v1, -0x2208
    ctx->pc = 0x291fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958584));
label_291fc4:
    // 0x291fc4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x291fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_291fc8:
    // 0x291fc8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x291fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_291fcc:
    // 0x291fcc: 0x40f809  jalr        $v0
label_291fd0:
    if (ctx->pc == 0x291FD0u) {
        ctx->pc = 0x291FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FCCu;
        // 0x291fd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291FD4u;
        goto label_291fd4;
    }
    ctx->pc = 0x291FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291FD4u);
        ctx->pc = 0x291FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FCCu;
        // 0x291fd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291FCCu, 0x291FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291FD4u;
label_291fd4:
    // 0x291fd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x291fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_291fd8:
    // 0x291fd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_291fdc:
    if (ctx->pc == 0x291FDCu) {
        ctx->pc = 0x291FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FD8u;
        // 0x291fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291FE0u;
        goto label_291fe0;
    }
    ctx->pc = 0x291FD8u;
    {
        const bool branch_taken_0x291fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FD8u;
        // 0x291fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fd8) {
            ctx->pc = 0x291FE4u;
            goto label_291fe4;
        }
    }
    ctx->pc = 0x291FE0u;
label_291fe0:
    // 0x291fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291fe4:
    // 0x291fe4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x291fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_291fe8:
    // 0x291fe8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x291fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_291fec:
    // 0x291fec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x291fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_291ff0:
    // 0x291ff0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x291ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_291ff4:
    // 0x291ff4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x291ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291ff8:
    // 0x291ff8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x291ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291ffc:
    // 0x291ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292000:
    // 0x292000: 0x3e00008  jr          $ra
label_292004:
    if (ctx->pc == 0x292004u) {
        ctx->pc = 0x292004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292000u;
        // 0x292004: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292008u;
        goto label_fallthrough_0x292000;
    }
    ctx->pc = 0x292000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292000u;
        // 0x292004: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x292000:
    ctx->pc = 0x292008u;
}
