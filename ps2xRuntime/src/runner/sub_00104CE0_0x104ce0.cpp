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

// Function: sub_00104CE0
// Address: 0x104ce0 - 0x105158
void sub_00104CE0_0x104ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104CE0_0x104ce0");
#endif

    switch (ctx->pc) {
        case 0x104dccu: goto label_104dcc;
        case 0x104ec8u: goto label_104ec8;
        case 0x104ed0u: goto label_104ed0;
        case 0x10502cu: goto label_10502c;
        case 0x1050a8u: goto label_1050a8;
        case 0x1050e0u: goto label_1050e0;
        default: break;
    }

    ctx->pc = 0x104ce0u;

    // 0x104ce0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x104ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x104ce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x104ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x104ce8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x104ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x104cec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x104cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cf4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x104cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x104cf8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x104cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x104cfc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x104cfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d00: 0x8c44a894  lw          $a0, -0x576C($v0)
    ctx->pc = 0x104d00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50A894u));
    // 0x104d04: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x104d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x104d08: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x104d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x104d0c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x104d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x104d10: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x104d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x104d14: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x104d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x104d18: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x104d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x104d1c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x104d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x104d20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x104d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x104d24: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x104d24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x104d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x104d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104d2c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x104d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x104d30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104D30u;
    {
        const bool branch_taken_0x104d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D30u;
        // 0x104d34: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d30) {
            ctx->pc = 0x104D40u;
            goto label_104d40;
        }
    }
    ctx->pc = 0x104D38u;
    // 0x104d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104D38u;
    {
        const bool branch_taken_0x104d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D38u;
        // 0x104d3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d38) {
            ctx->pc = 0x104D4Cu;
            goto label_104d4c;
        }
    }
    ctx->pc = 0x104D40u;
label_104d40:
    // 0x104d40: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x104d44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x104d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x104d48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104d4c:
    // 0x104d4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104D4Cu;
    {
        const bool branch_taken_0x104d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D4Cu;
        // 0x104d50: 0x8cc4a894  lw          $a0, -0x576C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d4c) {
            ctx->pc = 0x104D5Cu;
            goto label_104d5c;
        }
    }
    ctx->pc = 0x104D54u;
    // 0x104d54: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x104D54u;
    {
        const bool branch_taken_0x104d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D54u;
        // 0x104d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d54) {
            ctx->pc = 0x10511Cu;
            goto label_10511c;
        }
    }
    ctx->pc = 0x104D5Cu;
label_104d5c:
    // 0x104d5c: 0x26c30080  addiu       $v1, $s6, 0x80
    ctx->pc = 0x104d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x104d60: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x104d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104d64: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x104d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x104d68: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x104d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x104d6c: 0x26740024  addiu       $s4, $s3, 0x24
    ctx->pc = 0x104d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x104d70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104d74: 0x267500d8  addiu       $s5, $s3, 0xD8
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
    // 0x104d78: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x104d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x104d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104d80: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x104d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104d84: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x104d88: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x104d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x104d8c: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x104d8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104d90: 0x24de0020  addiu       $fp, $a2, 0x20
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x104d94: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x104d98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104d9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x104da0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x104da4: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x104DA4u;
    {
        const bool branch_taken_0x104da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DA4u;
        // 0x104da8: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104da4) {
            ctx->pc = 0x104E84u;
            goto label_104e84;
        }
    }
    ctx->pc = 0x104DACu;
    // 0x104dac: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x104dacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x104db0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x104DB0u;
    {
        const bool branch_taken_0x104db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DB0u;
        // 0x104db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104db0) {
            ctx->pc = 0x104E84u;
            goto label_104e84;
        }
    }
    ctx->pc = 0x104DB8u;
    // 0x104db8: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x104db8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x104dbc: 0x966600d8  lhu         $a2, 0xD8($s3)
    ctx->pc = 0x104dbcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x104dc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x104dc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x104dc4: 0xc0412f2  jal         func_104BC8
    ctx->pc = 0x104DC4u;
    SET_GPR_U32(ctx, 31, 0x104DCCu);
    ctx->pc = 0x104DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DC4u;
    // 0x104dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BC8u, 0x104DC4u, 0x104DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DCCu;
label_104dcc:
    // 0x104dcc: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x104dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104dd0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x104DD0u;
    {
        const bool branch_taken_0x104dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104dd0) {
            ctx->pc = 0x104DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DD0u;
            // 0x104dd4: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104E4Cu;
            goto label_104e4c;
        }
    }
    ctx->pc = 0x104DD8u;
    // 0x104dd8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x104ddc: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x104de0: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x104de4: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x104de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x104de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104df0: 0x0  nop
    ctx->pc = 0x104df0u;
    // NOP
    // 0x104df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104df8: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x104df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x104dfc: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x104e00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x104e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104e08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x104e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104e0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104e10: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x104e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x104e14: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x104e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e1c: 0x0  nop
    ctx->pc = 0x104e1cu;
    // NOP
    // 0x104e20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104e24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104e28: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x104e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x104e2c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x104e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104e30: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x104e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x104e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e38: 0x0  nop
    ctx->pc = 0x104e38u;
    // NOP
    // 0x104e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104e40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x104e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x104e44: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x104e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x104e48: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x104e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_104e4c:
    // 0x104e4c: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x104e50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x104e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x104e54: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x104e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x104e58: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x104e5c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x104e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104e60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x104e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x104e64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x104e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104e68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x104e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104e6c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x104e6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104e70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x104e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x104e74: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x104e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x104e78: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x104e78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104e7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x104E7Cu;
    {
        const bool branch_taken_0x104e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E7Cu;
        // 0x104e80: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e7c) {
            ctx->pc = 0x104E9Cu;
            goto label_104e9c;
        }
    }
    ctx->pc = 0x104E84u;
label_104e84:
    // 0x104e84: 0x7ac20080  lq          $v0, 0x80($s6)
    ctx->pc = 0x104e84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x104e88: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x104e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x104e8c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x104e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x104e90: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x104e90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x104e94: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x104e94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104e98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x104e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_104e9c:
    // 0x104e9c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x104e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x104ea0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x104ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x104ea4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x104ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x104ea8: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x104ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x104eac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x104EACu;
    {
        const bool branch_taken_0x104eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EACu;
        // 0x104eb0: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eac) {
            ctx->pc = 0x104F04u;
            goto label_104f04;
        }
    }
    ctx->pc = 0x104EB4u;
    // 0x104eb4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x104eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x104eb8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x104ebc: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x104ebcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104ec0: 0xc0412f2  jal         func_104BC8
    ctx->pc = 0x104EC0u;
    SET_GPR_U32(ctx, 31, 0x104EC8u);
    ctx->pc = 0x104EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EC0u;
    // 0x104ec4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BC8u, 0x104EC0u, 0x104EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EC8u;
label_104ec8:
    // 0x104ec8: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x104EC8u;
    SET_GPR_U32(ctx, 31, 0x104ED0u);
    ctx->pc = 0x104ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EC8u;
    // 0x104ecc: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7C0u, 0x104EC8u, 0x104ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ED0u;
label_104ed0:
    // 0x104ed0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x104ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x104ed4: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x104ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x104ed8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x104ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x104edc: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x104edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x104ee0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x104ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x104ee4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x104ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104ee8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x104ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104eec: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x104eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104ef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104ef4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x104ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x104ef8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x104ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x104efc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x104EFCu;
    {
        const bool branch_taken_0x104efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EFCu;
        // 0x104f00: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104efc) {
            ctx->pc = 0x104F24u;
            goto label_104f24;
        }
    }
    ctx->pc = 0x104F04u;
label_104f04:
    // 0x104f04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104f08: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x104f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x104f0c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x104f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x104f10: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x104f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x104f14: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x104f14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x104f18: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x104f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104f1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x104f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x104f20: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x104f20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
label_104f24:
    // 0x104f24: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x104f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x104f28: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x104f2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x104f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x104f30: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x104F30u;
    {
        const bool branch_taken_0x104f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F30u;
        // 0x104f34: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f30) {
            ctx->pc = 0x10505Cu;
            goto label_10505c;
        }
    }
    ctx->pc = 0x104F38u;
    // 0x104f38: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x104f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104f3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104f40: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x104F40u;
    {
        const bool branch_taken_0x104f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F40u;
        // 0x104f44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f40) {
            ctx->pc = 0x10505Cu;
            goto label_10505c;
        }
    }
    ctx->pc = 0x104F48u;
    // 0x104f48: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x104f4c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x104f50: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x104f54: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x104f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x104f58: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x104f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x104f5c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x104f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x104f60: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104f64: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x104f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x104f68: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x104f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104f6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x104f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x104f70: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x104f74: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x104f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104f7c: 0x0  nop
    ctx->pc = 0x104f7cu;
    // NOP
    // 0x104f80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x104f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x104f84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x104f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x104f88: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x104f88u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104f8c: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x104f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104f90: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x104f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104f94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x104f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104f98: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x104f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104f9c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x104f9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104fa0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x104fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x104fa4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x104fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x104fa8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x104fa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104fac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104fb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x104fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104fb8: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x104fb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104fbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x104fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x104fc0: 0x0  nop
    ctx->pc = 0x104fc0u;
    // NOP
    // 0x104fc4: 0x0  nop
    ctx->pc = 0x104fc4u;
    // NOP
    // 0x104fc8: 0x46000004  c1          0x4
    ctx->pc = 0x104fc8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104fcc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x104FCCu;
    {
        const bool branch_taken_0x104fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x104FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FCCu;
        // 0x104fd0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fcc) {
            ctx->pc = 0x105034u;
            goto label_105034;
        }
    }
    ctx->pc = 0x104FD4u;
    // 0x104fd4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x104fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104fdc: 0x34210004  ori         $at, $at, 0x4
    ctx->pc = 0x104fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4);
    // 0x104fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104fe4: 0x0  nop
    ctx->pc = 0x104fe4u;
    // NOP
    // 0x104fe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x104fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104fec: 0x0  nop
    ctx->pc = 0x104fecu;
    // NOP
    // 0x104ff0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x104FF0u;
    {
        const bool branch_taken_0x104ff0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x104FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FF0u;
        // 0x104ff4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ff0) {
            ctx->pc = 0x105018u;
            goto label_105018;
        }
    }
    ctx->pc = 0x104FF8u;
    // 0x104ff8: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x104ffc: 0x3421fff8  ori         $at, $at, 0xFFF8
    ctx->pc = 0x104ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65528);
    // 0x105000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105004: 0x0  nop
    ctx->pc = 0x105004u;
    // NOP
    // 0x105008: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x105008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10500c: 0x0  nop
    ctx->pc = 0x10500cu;
    // NOP
    // 0x105010: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x105010u;
    {
        const bool branch_taken_0x105010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105010u;
        // 0x105014: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105010) {
            ctx->pc = 0x105038u;
            goto label_105038;
        }
    }
    ctx->pc = 0x105018u;
label_105018:
    // 0x105018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10501c: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x10501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    // 0x105020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105024: 0xc0cda80  jal         func_336A00
    ctx->pc = 0x105024u;
    SET_GPR_U32(ctx, 31, 0x10502Cu);
    ctx->pc = 0x105028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105024u;
    // 0x105028: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x105024u, 0x10502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10502Cu;
label_10502c:
    // 0x10502c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10502Cu;
    {
        const bool branch_taken_0x10502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10502Cu;
        // 0x105030: 0xde420000  ld          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10502c) {
            ctx->pc = 0x105040u;
            goto label_105040;
        }
    }
    ctx->pc = 0x105034u;
label_105034:
    // 0x105034: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x105034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_105038:
    // 0x105038: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x105038u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x10503c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x10503cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_105040:
    // 0x105040: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x105044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x105044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105048: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x105048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x10504c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x10504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x105050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105054u;
    {
        const bool branch_taken_0x105054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105054u;
        // 0x105058: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105054) {
            ctx->pc = 0x105078u;
            goto label_105078;
        }
    }
    ctx->pc = 0x10505Cu;
label_10505c:
    // 0x10505c: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x10505cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x105060: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x105060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x105064: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x105064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x105068: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x105068u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x10506c: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x10506cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105070: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x105070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x105074: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x105074u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_105078:
    // 0x105078: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x105078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x10507c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x105080: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x105084: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x105084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x105088: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x105088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10508c: 0x3c16bfff  lui         $s6, 0xBFFF
    ctx->pc = 0x10508cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)49151 << 16));
    // 0x105090: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x105090u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x105094: 0x16b0b8  dsll        $s6, $s6, 2
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 2);
    // 0x105098: 0x36d60003  ori         $s6, $s6, 0x3
    ctx->pc = 0x105098u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)3);
    // 0x10509c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x10509cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1050a0: 0x139c78  dsll        $s3, $s3, 17
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 17);
    // 0x1050a4: 0x0  nop
    ctx->pc = 0x1050a4u;
    // NOP
label_1050a8:
    // 0x1050a8: 0x1010c2  srl         $v0, $s0, 3
    ctx->pc = 0x1050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x1050ac: 0x32040007  andi        $a0, $s0, 0x7
    ctx->pc = 0x1050acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1050b0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1050b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1050b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1050b8: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1050bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1050c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1050C0u;
    {
        const bool branch_taken_0x1050c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050C0u;
        // 0x1050c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050c0) {
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x1050C8u;
    // 0x1050c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1050c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1050cc: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x1050ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1050d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1050d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1050d4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1050d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1050d8: 0xc0412b2  jal         func_104AC8
    ctx->pc = 0x1050D8u;
    SET_GPR_U32(ctx, 31, 0x1050E0u);
    ctx->pc = 0x1050DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050D8u;
    // 0x1050dc: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AC8u, 0x1050D8u, 0x1050E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050E0u;
label_1050e0:
    // 0x1050e0: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1050e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1050e4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x1050e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x1050e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1050E8u;
    {
        const bool branch_taken_0x1050e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E8u;
        // 0x1050ec: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050e8) {
            ctx->pc = 0x105104u;
            goto label_105104;
        }
    }
    ctx->pc = 0x1050F0u;
label_1050f0:
    // 0x1050f0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1050f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1050f4: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1050f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1050f8: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1050fc: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1050fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x105100: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x105100u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_105104:
    // 0x105104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105108: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x105108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10510c: 0x2e020022  sltiu       $v0, $s0, 0x22
    ctx->pc = 0x10510cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x105110: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x105110u;
    {
        const bool branch_taken_0x105110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105110u;
        // 0x105114: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105110) {
            ctx->pc = 0x1050A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1050a8;
        }
    }
    ctx->pc = 0x105118u;
    // 0x105118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10511c:
    // 0x10511c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x10511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x105120: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x105120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105124: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x105124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105128: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x105128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10512c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x10512cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105130: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x105130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105134: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x105134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105138: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x105138u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10513c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x10513cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105140: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x105140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105144: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x105144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x105148: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x105148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10514c: 0x3e00008  jr          $ra
    ctx->pc = 0x10514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10514Cu;
        // 0x105150: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105154u;
    // 0x105154: 0x0  nop
    ctx->pc = 0x105154u;
    // NOP
    ctx->pc = 0x105158u;
}
