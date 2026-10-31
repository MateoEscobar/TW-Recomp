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

// Function: sub_00266D00
// Address: 0x266d00 - 0x266f38
void sub_00266D00_0x266d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266D00_0x266d00");
#endif

    switch (ctx->pc) {
        case 0x266d70u: goto label_266d70;
        case 0x266d80u: goto label_266d80;
        case 0x266d94u: goto label_266d94;
        case 0x266da4u: goto label_266da4;
        default: break;
    }

    ctx->pc = 0x266d00u;

    // 0x266d00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x266d04: 0x30c20030  andi        $v0, $a2, 0x30
    ctx->pc = 0x266d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x266d08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x266d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x266d0c: 0x30d40003  andi        $s4, $a2, 0x3
    ctx->pc = 0x266d0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x266d10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x266d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x266d14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x266d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x266d18: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x266d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x266d1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x266d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x266d20: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x266d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x266d24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x266d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x266d28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x266d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d2c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x266d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x266d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x266d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266d38: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x266d38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x266d3c: 0x68882  srl         $s1, $a2, 2
    ctx->pc = 0x266d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x266d40: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x266d40u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x266d44: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266D44u;
    {
        const bool branch_taken_0x266d44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D44u;
        // 0x266d48: 0x30f40003  andi        $s4, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d44) {
            ctx->pc = 0x266D60u;
            goto label_266d60;
        }
    }
    ctx->pc = 0x266D4Cu;
    // 0x266d4c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x266d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x266d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266D50u;
    {
        const bool branch_taken_0x266d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d50) {
            ctx->pc = 0x266D60u;
            goto label_266d60;
        }
    }
    ctx->pc = 0x266D58u;
    // 0x266d58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x266D58u;
    {
        const bool branch_taken_0x266d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D58u;
        // 0x266d5c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d58) {
            ctx->pc = 0x266DD0u;
            goto label_266dd0;
        }
    }
    ctx->pc = 0x266D60u;
label_266d60:
    // 0x266d60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266D60u;
    {
        const bool branch_taken_0x266d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D60u;
        // 0x266d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d60) {
            ctx->pc = 0x266D74u;
            goto label_266d74;
        }
    }
    ctx->pc = 0x266D68u;
    // 0x266d68: 0xc099ad4  jal         func_266B50
    ctx->pc = 0x266D68u;
    SET_GPR_U32(ctx, 31, 0x266D70u);
    ctx->pc = 0x266D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D68u;
    // 0x266d6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B50u, 0x266D68u, 0x266D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D70u;
label_266d70:
    // 0x266d70: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_266d74:
    // 0x266d74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d78: 0xc099b10  jal         func_266C40
    ctx->pc = 0x266D78u;
    SET_GPR_U32(ctx, 31, 0x266D80u);
    ctx->pc = 0x266D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D78u;
    // 0x266d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C40u, 0x266D78u, 0x266D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D80u;
label_266d80:
    // 0x266d80: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x266D80u;
    {
        const bool branch_taken_0x266d80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D80u;
        // 0x266d84: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d80) {
            ctx->pc = 0x266DA8u;
            goto label_266da8;
        }
    }
    ctx->pc = 0x266D88u;
    // 0x266d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d8c: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x266D8Cu;
    SET_GPR_U32(ctx, 31, 0x266D94u);
    ctx->pc = 0x266D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D8Cu;
    // 0x266d90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x266D8Cu, 0x266D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D94u;
label_266d94:
    // 0x266d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266D94u;
    {
        const bool branch_taken_0x266d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D94u;
        // 0x266d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d94) {
            ctx->pc = 0x266DA8u;
            goto label_266da8;
        }
    }
    ctx->pc = 0x266D9Cu;
    // 0x266d9c: 0xc089998  jal         func_226660
    ctx->pc = 0x266D9Cu;
    SET_GPR_U32(ctx, 31, 0x266DA4u);
    ctx->pc = 0x266DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D9Cu;
    // 0x266da0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x266D9Cu, 0x266DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DA4u;
label_266da4:
    // 0x266da4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x266da4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_266da8:
    // 0x266da8: 0x926200e0  lbu         $v0, 0xE0($s3)
    ctx->pc = 0x266da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x266dac: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x266dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x266db0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266db4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266DB4u;
    {
        const bool branch_taken_0x266db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DB4u;
        // 0x266db8: 0x2e030002  sltiu       $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266db4) {
            ctx->pc = 0x266DC4u;
            goto label_266dc4;
        }
    }
    ctx->pc = 0x266DBCu;
    // 0x266dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266dc0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x266dc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_266dc4:
    // 0x266dc4: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x266dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x266dc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x266dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266dcc: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x266dccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_266dd0:
    // 0x266dd0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x266dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x266dd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x266dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x266dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266ddc: 0x0  nop
    ctx->pc = 0x266ddcu;
    // NOP
    // 0x266de0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266de4: 0x0  nop
    ctx->pc = 0x266de4u;
    // NOP
    // 0x266de8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x266DE8u;
    {
        const bool branch_taken_0x266de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266de8) {
            ctx->pc = 0x266E18u;
            goto label_266e18;
        }
    }
    ctx->pc = 0x266DF0u;
    // 0x266df0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x266df4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x266df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x266df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266dfc: 0x0  nop
    ctx->pc = 0x266dfcu;
    // NOP
    // 0x266e00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266e04: 0x0  nop
    ctx->pc = 0x266e04u;
    // NOP
    // 0x266e08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x266E08u;
    {
        const bool branch_taken_0x266e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266e08) {
            ctx->pc = 0x266E24u;
            goto label_266e24;
        }
    }
    ctx->pc = 0x266E10u;
    // 0x266e10: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E10u;
        // 0x266e14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266EE0u;
            goto label_266ee0;
        }
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x266e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x266e1c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x266e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x266e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266e24:
    // 0x266e24: 0x0  nop
    ctx->pc = 0x266e24u;
    // NOP
    // 0x266e28: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266e2c: 0x0  nop
    ctx->pc = 0x266e2cu;
    // NOP
    // 0x266e30: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x266E30u;
    {
        const bool branch_taken_0x266e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266e30) {
            ctx->pc = 0x266E5Cu;
            goto label_266e5c;
        }
    }
    ctx->pc = 0x266E38u;
    // 0x266e38: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x266e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x266e3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266e40: 0x0  nop
    ctx->pc = 0x266e40u;
    // NOP
    // 0x266e44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266e48: 0x0  nop
    ctx->pc = 0x266e48u;
    // NOP
    // 0x266e4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x266E4Cu;
    {
        const bool branch_taken_0x266e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266e4c) {
            ctx->pc = 0x266E5Cu;
            goto label_266e5c;
        }
    }
    ctx->pc = 0x266E54u;
    // 0x266e54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x266E54u;
    {
        const bool branch_taken_0x266e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E54u;
        // 0x266e58: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e54) {
            ctx->pc = 0x266EE0u;
            goto label_266ee0;
        }
    }
    ctx->pc = 0x266E5Cu;
label_266e5c:
    // 0x266e5c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x266e60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x266e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x266e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266e68: 0x0  nop
    ctx->pc = 0x266e68u;
    // NOP
    // 0x266e6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266e70: 0x0  nop
    ctx->pc = 0x266e70u;
    // NOP
    // 0x266e74: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x266E74u;
    {
        const bool branch_taken_0x266e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266e74) {
            ctx->pc = 0x266EA4u;
            goto label_266ea4;
        }
    }
    ctx->pc = 0x266E7Cu;
    // 0x266e7c: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x266e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x266e80: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x266e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x266e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266e88: 0x0  nop
    ctx->pc = 0x266e88u;
    // NOP
    // 0x266e8c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266e90: 0x0  nop
    ctx->pc = 0x266e90u;
    // NOP
    // 0x266e94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x266E94u;
    {
        const bool branch_taken_0x266e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266e94) {
            ctx->pc = 0x266EB0u;
            goto label_266eb0;
        }
    }
    ctx->pc = 0x266E9Cu;
    // 0x266e9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x266E9Cu;
    {
        const bool branch_taken_0x266e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E9Cu;
        // 0x266ea0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e9c) {
            ctx->pc = 0x266EE0u;
            goto label_266ee0;
        }
    }
    ctx->pc = 0x266EA4u;
label_266ea4:
    // 0x266ea4: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x266ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x266ea8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x266ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x266eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266eb0:
    // 0x266eb0: 0x0  nop
    ctx->pc = 0x266eb0u;
    // NOP
    // 0x266eb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266eb8: 0x0  nop
    ctx->pc = 0x266eb8u;
    // NOP
    // 0x266ebc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x266EBCu;
    {
        const bool branch_taken_0x266ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EBCu;
        // 0x266ec0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ebc) {
            ctx->pc = 0x266EE4u;
            goto label_266ee4;
        }
    }
    ctx->pc = 0x266EC4u;
    // 0x266ec4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x266ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266ecc: 0x0  nop
    ctx->pc = 0x266eccu;
    // NOP
    // 0x266ed0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266ed4: 0x0  nop
    ctx->pc = 0x266ed4u;
    // NOP
    // 0x266ed8: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x266ED8u;
    {
        const bool branch_taken_0x266ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x266ed8) {
            ctx->pc = 0x266EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266ED8u;
            // 0x266edc: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EE4u;
            goto label_266ee4;
        }
    }
    ctx->pc = 0x266EE0u;
label_266ee0:
    // 0x266ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266ee4:
    // 0x266ee4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266EE4u;
    {
        const bool branch_taken_0x266ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EE4u;
        // 0x266ee8: 0x2e230003  sltiu       $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ee4) {
            ctx->pc = 0x266EFCu;
            goto label_266efc;
        }
    }
    ctx->pc = 0x266EECu;
    // 0x266eec: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x266EECu;
    {
        const bool branch_taken_0x266eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x266EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EECu;
        // 0x266ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266eec) {
            ctx->pc = 0x266F00u;
            goto label_266f00;
        }
    }
    ctx->pc = 0x266EF4u;
    // 0x266ef4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266EF4u;
    {
        const bool branch_taken_0x266ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EF4u;
        // 0x266ef8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ef4) {
            ctx->pc = 0x266F04u;
            goto label_266f04;
        }
    }
    ctx->pc = 0x266EFCu;
label_266efc:
    // 0x266efc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266f00:
    // 0x266f00: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x266f00u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_266f04:
    // 0x266f04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x266f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x266f08: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x266f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x266f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x266f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x266f10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x266f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266f14: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x266f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x266f18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x266f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266f1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x266f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266f20: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x266f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266f24: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x266f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266f2c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x266f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266f30: 0x3e00008  jr          $ra
    ctx->pc = 0x266F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F30u;
        // 0x266f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F38u;
}
