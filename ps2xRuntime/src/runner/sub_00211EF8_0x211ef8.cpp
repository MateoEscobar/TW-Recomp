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

// Function: sub_00211EF8
// Address: 0x211ef8 - 0x212840
void sub_00211EF8_0x211ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211EF8_0x211ef8");
#endif

    ctx->pc = 0x211ef8u;

    // 0x211ef8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x211ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x211efc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211f00: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x211f04: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x211f04u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x211f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211f14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211f18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211F18u;
    {
        const bool branch_taken_0x211f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F18u;
        // 0x211f1c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f18) {
            ctx->pc = 0x211F60u;
            goto label_211f60;
        }
    }
    ctx->pc = 0x211F20u;
    // 0x211f20: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x211F20u;
    {
        const bool branch_taken_0x211f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F20u;
        // 0x211f24: 0x8c82cdb4  lw          $v0, -0x324C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f20) {
            ctx->pc = 0x211F64u;
            goto label_211f64;
        }
    }
    ctx->pc = 0x211F28u;
    // 0x211f28: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x211f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x211f2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x211F2Cu;
    {
        const bool branch_taken_0x211f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F2Cu;
        // 0x211f30: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f2c) {
            ctx->pc = 0x211F60u;
            goto label_211f60;
        }
    }
    ctx->pc = 0x211F34u;
    // 0x211f34: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x211f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x211f38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x211f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f40: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x211f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x211f44: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x211f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x211f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211f4c: 0x2462fa10  addiu       $v0, $v1, -0x5F0
    ctx->pc = 0x211f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x211f50: 0xe460fa10  swc1        $f0, -0x5F0($v1)
    ctx->pc = 0x211f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965776), bits); }
    // 0x211f54: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x211f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x211f58: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x211f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x211f5c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x211f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_211f60:
    // 0x211f60: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x211f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_211f64:
    // 0x211f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x211f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211f68: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x211f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x211f6c: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x211F6Cu;
    {
        const bool branch_taken_0x211f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F6Cu;
        // 0x211f70: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f6c) {
            ctx->pc = 0x2122E0u;
            goto label_2122e0;
        }
    }
    ctx->pc = 0x211F74u;
    // 0x211f74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x211F74u;
    {
        const bool branch_taken_0x211f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F74u;
        // 0x211f78: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f74) {
            ctx->pc = 0x211FC0u;
            goto label_211fc0;
        }
    }
    ctx->pc = 0x211F7Cu;
    // 0x211f7c: 0x1040022c  beqz        $v0, . + 4 + (0x22C << 2)
    ctx->pc = 0x211F7Cu;
    {
        const bool branch_taken_0x211f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F7Cu;
        // 0x211f80: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f7c) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x211F84u;
    // 0x211f84: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x211f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x211f88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x211f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f90: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x211f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x211f94: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x211f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x211f98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211f9c: 0x2462fa10  addiu       $v0, $v1, -0x5F0
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x211fa0: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x211fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x211fa4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x211fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x211fa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211fac: 0xe460fa10  swc1        $f0, -0x5F0($v1)
    ctx->pc = 0x211facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965776), bits); }
    // 0x211fb0: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x211fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x211fb4: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x211fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x211fb8: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x211FB8u;
    {
        const bool branch_taken_0x211fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FB8u;
        // 0x211fbc: 0xe4420008  swc1        $f2, 0x8($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fb8) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x211FC0u;
label_211fc0:
    // 0x211fc0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x211fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x211fc4: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x211FC4u;
    {
        const bool branch_taken_0x211fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FC4u;
        // 0x211fc8: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fc4) {
            ctx->pc = 0x212244u;
            goto label_212244;
        }
    }
    ctx->pc = 0x211FCCu;
    // 0x211fcc: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x211fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x211fd0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x211fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x211fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211fd8: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x211fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x211fdc: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x211fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x211fe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211fe4: 0x24c3fa10  addiu       $v1, $a2, -0x5F0
    ctx->pc = 0x211fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965776));
    // 0x211fe8: 0xe4c0fa10  swc1        $f0, -0x5F0($a2)
    ctx->pc = 0x211fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294965776), bits); }
    // 0x211fec: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x211fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x211ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211ff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211ff8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x211ffc: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x211ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x212000: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212004: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212008: 0x244dfa40  addiu       $t5, $v0, -0x5C0
    ctx->pc = 0x212008u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
    // 0x21200c: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x21200cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x212010: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x212014: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x212014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212018: 0x25a802f0  addiu       $t0, $t5, 0x2F0
    ctx->pc = 0x212018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 752));
    // 0x21201c: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x21201cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x212020: 0x25a600a0  addiu       $a2, $t5, 0xA0
    ctx->pc = 0x212020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x212024: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x212024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x212028: 0x25a700b0  addiu       $a3, $t5, 0xB0
    ctx->pc = 0x212028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 176));
    // 0x21202c: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x21202cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x212030: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x212030u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x212034: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x212034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x212038: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x212038u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x21203c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x21203cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x212040: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x212040u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x212044: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x212044u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x212048: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x212048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x21204c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x21204cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x212050: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x212050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x212054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212058: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21205c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x21205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x212060: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x212060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x212064: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212068: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x212068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21206c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x21206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x212070: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x212070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x212074: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x212074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212078: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x21207c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21207cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x212080: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x212080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x212084: 0x3c01bdd2  lui         $at, 0xBDD2
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48594 << 16));
    // 0x212088: 0x3421f1aa  ori         $at, $at, 0xF1AA
    ctx->pc = 0x212088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61866);
    // 0x21208c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x21208cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x212090: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x212090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x212094: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x212094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x212098: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x212098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x21209c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x21209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2120a0: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
    // 0x2120a4: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x2120a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x2120a8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2120a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2120ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2120acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2120b0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2120b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x2120b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2120b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2120b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2120b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2120bc: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2120bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2120c0: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x2120c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
    // 0x2120c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2120c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2120c8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2120c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2120cc: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2120ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2120d0: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2120d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2120d4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2120d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2120d8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2120d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2120dc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2120dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2120e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2120e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2120e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2120e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2120e8: 0x3c013e3d  lui         $at, 0x3E3D
    ctx->pc = 0x2120e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15933 << 16));
    // 0x2120ec: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2120ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x2120f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2120f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2120f4: 0x3c013deb  lui         $at, 0x3DEB
    ctx->pc = 0x2120f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15851 << 16));
    // 0x2120f8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x2120fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2120fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x212100: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x212100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x212104: 0x3c013c44  lui         $at, 0x3C44
    ctx->pc = 0x212104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15428 << 16));
    // 0x212108: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x212108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x21210c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x21210cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x212110: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x212110u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212114: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x212114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x212118: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x212118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21211c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x21211cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212120: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212124: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x212124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
    // 0x212128: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x212128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x21212c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x21212cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x212130: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x212130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212134: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x212138: 0xe4650070  swc1        $f5, 0x70($v1)
    ctx->pc = 0x212138u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x21213c: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x21213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212140: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x212140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212144: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x212144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x212148: 0xe4460088  swc1        $f6, 0x88($v0)
    ctx->pc = 0x212148u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x21214c: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x21214cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x212150: 0xe5a700a0  swc1        $f7, 0xA0($t5)
    ctx->pc = 0x212150u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x212154: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x212154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x212158: 0xe5a800b0  swc1        $f8, 0xB0($t5)
    ctx->pc = 0x212158u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 176), bits); }
    // 0x21215c: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x21215cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x212160: 0xe5a902f0  swc1        $f9, 0x2F0($t5)
    ctx->pc = 0x212160u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 752), bits); }
    // 0x212164: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x212164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x212168: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x212168u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x21216c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x21216cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x212170: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x212170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x212174: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x212174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x212178: 0xe5a102e8  swc1        $f1, 0x2E8($t5)
    ctx->pc = 0x212178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 744), bits); }
    // 0x21217c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x21217cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x212180: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212184: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x212184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212188: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x212188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x21218c: 0xe44b0090  swc1        $f11, 0x90($v0)
    ctx->pc = 0x21218cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x212190: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212194: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x212194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212198: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x212198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x21219c: 0xe46a00c8  swc1        $f10, 0xC8($v1)
    ctx->pc = 0x21219cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
    // 0x2121a0: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2121a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2121a4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2121a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2121a8: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2121a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2121ac: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2121acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2121b0: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x2121b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2121b4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2121b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2121b8: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x2121b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2121bc: 0xe46001d0  swc1        $f0, 0x1D0($v1)
    ctx->pc = 0x2121bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
    // 0x2121c0: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2121c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2121c4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2121c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2121c8: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2121c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2121cc: 0xe4400170  swc1        $f0, 0x170($v0)
    ctx->pc = 0x2121ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 368), bits); }
    // 0x2121d0: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2121d4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2121d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2121d8: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2121dc: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2121dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2121e0: 0x8f0440f4  lw          $a0, 0x40F4($t8)
    ctx->pc = 0x2121e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2121e4: 0xe56a0048  swc1        $f10, 0x48($t3)
    ctx->pc = 0x2121e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 72), bits); }
    // 0x2121e8: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x2121e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2121ec: 0xe58c004c  swc1        $f12, 0x4C($t4)
    ctx->pc = 0x2121ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 76), bits); }
    // 0x2121f0: 0xe5440040  swc1        $f4, 0x40($t2)
    ctx->pc = 0x2121f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 64), bits); }
    // 0x2121f4: 0xe5210044  swc1        $f1, 0x44($t1)
    ctx->pc = 0x2121f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 68), bits); }
    // 0x2121f8: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x2121f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2121fc: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x2121fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x212200: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212204: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x212204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212208: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x212208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x21220c: 0xe44d01f8  swc1        $f13, 0x1F8($v0)
    ctx->pc = 0x21220cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 504), bits); }
    // 0x212210: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212214: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x212214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212218: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x212218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x21221c: 0xe4600210  swc1        $f0, 0x210($v1)
    ctx->pc = 0x21221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 528), bits); }
    // 0x212220: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212224: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x212224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212228: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x212228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x21222c: 0xe44f0220  swc1        $f15, 0x220($v0)
    ctx->pc = 0x21222cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 544), bits); }
    // 0x212230: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212234: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x212234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212238: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x21223c: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x21223Cu;
    {
        const bool branch_taken_0x21223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21223Cu;
        // 0x212240: 0xe46e0230  swc1        $f14, 0x230($v1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21223c) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x212244u;
label_212244:
    // 0x212244: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x212244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x212248: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212248u;
    {
        const bool branch_taken_0x212248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212248u;
        // 0x21224c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212248) {
            ctx->pc = 0x212280u;
            goto label_212280;
        }
    }
    ctx->pc = 0x212250u;
    // 0x212250: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x212250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x212254: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x212254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x212258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21225c: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x21225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x212260: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x212260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x212264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212268: 0x2462fa10  addiu       $v0, $v1, -0x5F0
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x21226c: 0xe460fa10  swc1        $f0, -0x5F0($v1)
    ctx->pc = 0x21226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965776), bits); }
    // 0x212270: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x212270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x212274: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x212274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x212278: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x212278u;
    {
        const bool branch_taken_0x212278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212278u;
        // 0x21227c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212278) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x212280u;
label_212280:
    // 0x212280: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x212280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x212284: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21228c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21228cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x212290: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
    // 0x212294: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x212294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x212298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21229c: 0x2483fa10  addiu       $v1, $a0, -0x5F0
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
    // 0x2122a0: 0xe480fa10  swc1        $f0, -0x5F0($a0)
    ctx->pc = 0x2122a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA10u, _value); } while (0); }
    // 0x2122a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2122a8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2122a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2122ac: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2122b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2122b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2122b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2122b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2122b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2122b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2122bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2122bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2122c0: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x2122c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA20u, _value); } while (0); }
    // 0x2122c4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2122c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA2Cu, _value); } while (0); }
    // 0x2122c8: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2122c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA24u, _value); } while (0); }
    // 0x2122cc: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2122ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA28u, _value); } while (0); }
    // 0x2122d0: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x2122d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA14u, _value); } while (0); }
    // 0x2122d4: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2122d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50FA18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50FA18u, _value); } while (0); }
    // 0x2122d8: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x2122D8u;
    {
        const bool branch_taken_0x2122d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D8u;
        // 0x2122dc: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122d8) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x2122E0u;
label_2122e0:
    // 0x2122e0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2122e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2122e4: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2122E4u;
    {
        const bool branch_taken_0x2122e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E4u;
        // 0x2122e8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122e4) {
            ctx->pc = 0x21254Cu;
            goto label_21254c;
        }
    }
    ctx->pc = 0x2122ECu;
    // 0x2122ec: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x2122f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2122f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2122f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2122f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2122f8: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x2122f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x2122fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2122fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x212300: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212304: 0x2462fa10  addiu       $v0, $v1, -0x5F0
    ctx->pc = 0x212304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x212308: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x212308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x21230c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x21230cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x212310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212314: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x212314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x212318: 0xe460fa10  swc1        $f0, -0x5F0($v1)
    ctx->pc = 0x212318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965776), bits); }
    // 0x21231c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x212320: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x212320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x212324: 0x2484fa40  addiu       $a0, $a0, -0x5C0
    ctx->pc = 0x212324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965824));
    // 0x212328: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x212328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x21232c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x212330: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x212330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212334: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x212334u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x212338: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x212338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x21233c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x21233cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x212340: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212344: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x212344u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x212348: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21234c: 0x248702c0  addiu       $a3, $a0, 0x2C0
    ctx->pc = 0x21234cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x212350: 0x3c013e0b  lui         $at, 0x3E0B
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15883 << 16));
    // 0x212354: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x212354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x212358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21235c: 0x24860300  addiu       $a2, $a0, 0x300
    ctx->pc = 0x21235cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x212360: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x212360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212364: 0x3c013dc2  lui         $at, 0x3DC2
    ctx->pc = 0x212364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15810 << 16));
    // 0x212368: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x212368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x21236c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x21236cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212370: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x212374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21237c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x21237cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x212380: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x212384: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x212388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21238c: 0x248a00a0  addiu       $t2, $a0, 0xA0
    ctx->pc = 0x21238cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x212390: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x212390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
    // 0x212394: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x212394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x212398: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x212398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21239c: 0x248802e0  addiu       $t0, $a0, 0x2E0
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x2123a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2123a4: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x2123a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x2123a8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x2123a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x2123ac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2123acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2123b0: 0xe44201d0  swc1        $f2, 0x1D0($v0)
    ctx->pc = 0x2123b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
    // 0x2123b4: 0x248902f0  addiu       $t1, $a0, 0x2F0
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x2123b8: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
    // 0x2123bc: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x2123bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x2123c0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2123c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2123c4: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2123c8: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x2123c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
    // 0x2123cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2123ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2123d0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2123d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2123d4: 0x457018  mult        $t6, $v0, $a1
    ctx->pc = 0x2123d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2123d8: 0x3c01bcbc  lui         $at, 0xBCBC
    ctx->pc = 0x2123d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48316 << 16));
    // 0x2123dc: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x2123dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x2123e0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2123e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2123e4: 0x3c013ce5  lui         $at, 0x3CE5
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15589 << 16));
    // 0x2123e8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2123e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x2123ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2123ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2123f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2123f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2123f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2123f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2123f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2123f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2123fc: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x2123fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x212400: 0x3c013dc6  lui         $at, 0x3DC6
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15814 << 16));
    // 0x212404: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x212404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
    // 0x212408: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x212408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x21240c: 0xe4420170  swc1        $f2, 0x170($v0)
    ctx->pc = 0x21240cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 368), bits); }
    // 0x212410: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x212410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x212414: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212418: 0xe5610050  swc1        $f1, 0x50($t3)
    ctx->pc = 0x212418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
    // 0x21241c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21241cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212420: 0xe5850048  swc1        $f5, 0x48($t4)
    ctx->pc = 0x212420u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 72), bits); }
    // 0x212424: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x212424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x212428: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x212428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x21242c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21242cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212430: 0x3c01bdd2  lui         $at, 0xBDD2
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48594 << 16));
    // 0x212434: 0x3421f1aa  ori         $at, $at, 0xF1AA
    ctx->pc = 0x212434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61866);
    // 0x212438: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x212438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x21243c: 0x3c01bc54  lui         $at, 0xBC54
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48212 << 16));
    // 0x212440: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x212440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x212444: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x212444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x212448: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21244c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x212450: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x212450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x212454: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x212454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x212458: 0xe44201a0  swc1        $f2, 0x1A0($v0)
    ctx->pc = 0x212458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x21245c: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x21245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x212460: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x212460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x212464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212468: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21246c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212470: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212474: 0xe46200d0  swc1        $f2, 0xD0($v1)
    ctx->pc = 0x212474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x212478: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21247c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21247cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212480: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212484: 0xe4420110  swc1        $f2, 0x110($v0)
    ctx->pc = 0x212484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x212488: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21248c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21248cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212490: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212494: 0xe4620140  swc1        $f2, 0x140($v1)
    ctx->pc = 0x212494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x212498: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21249c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21249cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2124a0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2124a4: 0xe44c0070  swc1        $f12, 0x70($v0)
    ctx->pc = 0x2124a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2124a8: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x2124a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2124ac: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2124acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2124b0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2124b4: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x2124b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2124b8: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2124bc: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2124bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2124c0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2124c4: 0xe44e0090  swc1        $f14, 0x90($v0)
    ctx->pc = 0x2124c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2124c8: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2124cc: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2124ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2124d0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2124d4: 0xe46f0094  swc1        $f15, 0x94($v1)
    ctx->pc = 0x2124d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2124d8: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2124dc: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2124dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2124e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2124e4: 0xe4500068  swc1        $f16, 0x68($v0)
    ctx->pc = 0x2124e4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2124e8: 0xe48902c0  swc1        $f9, 0x2C0($a0)
    ctx->pc = 0x2124e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
    // 0x2124ec: 0xe4e60008  swc1        $f6, 0x8($a3)
    ctx->pc = 0x2124ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2124f0: 0xe4860088  swc1        $f6, 0x88($a0)
    ctx->pc = 0x2124f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2124f4: 0xe4e40004  swc1        $f4, 0x4($a3)
    ctx->pc = 0x2124f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2124f8: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x2124f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2124fc: 0xe4810300  swc1        $f1, 0x300($a0)
    ctx->pc = 0x2124fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 768), bits); }
    // 0x212500: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x212500u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x212504: 0xe5a70044  swc1        $f7, 0x44($t5)
    ctx->pc = 0x212504u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 68), bits); }
    // 0x212508: 0xe48800a0  swc1        $f8, 0xA0($a0)
    ctx->pc = 0x212508u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x21250c: 0xe543000c  swc1        $f3, 0xC($t2)
    ctx->pc = 0x21250cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x212510: 0xe48a02e0  swc1        $f10, 0x2E0($a0)
    ctx->pc = 0x212510u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
    // 0x212514: 0xe503000c  swc1        $f3, 0xC($t0)
    ctx->pc = 0x212514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x212518: 0xe48b02f0  swc1        $f11, 0x2F0($a0)
    ctx->pc = 0x212518u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 752), bits); }
    // 0x21251c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x21251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x212520: 0xe523000c  swc1        $f3, 0xC($t1)
    ctx->pc = 0x212520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x212524: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x212524u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x212528: 0xe4c50008  swc1        $f5, 0x8($a2)
    ctx->pc = 0x212528u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x21252c: 0xe5440004  swc1        $f4, 0x4($t2)
    ctx->pc = 0x21252cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x212530: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x212530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x212534: 0xe5040004  swc1        $f4, 0x4($t0)
    ctx->pc = 0x212534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x212538: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x212538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x21253c: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x21253cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x212540: 0xe5240004  swc1        $f4, 0x4($t1)
    ctx->pc = 0x212540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x212544: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x212544u;
    {
        const bool branch_taken_0x212544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212544u;
        // 0x212548: 0xe48500c8  swc1        $f5, 0xC8($a0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212544) {
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x21254Cu;
label_21254c:
    // 0x21254c: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x212550: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x212550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x212554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212558: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x212558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x21255c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x21255cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x212560: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212564: 0x2462fa10  addiu       $v0, $v1, -0x5F0
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x212568: 0x3c013f4a  lui         $at, 0x3F4A
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16202 << 16));
    // 0x21256c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x21256cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x212570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212574: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x212574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x212578: 0xe460fa10  swc1        $f0, -0x5F0($v1)
    ctx->pc = 0x212578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965776), bits); }
    // 0x21257c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21257cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x212580: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x212580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x212584: 0x2484fa40  addiu       $a0, $a0, -0x5C0
    ctx->pc = 0x212584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965824));
    // 0x212588: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x212588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x21258c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21258cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x212590: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x212590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212594: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x212594u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x212598: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x212598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x21259c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x21259cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2125a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2125a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2125a4: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x2125a8: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2125ac: 0x24870060  addiu       $a3, $a0, 0x60
    ctx->pc = 0x2125acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2125b0: 0x3c013e01  lui         $at, 0x3E01
    ctx->pc = 0x2125b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15873 << 16));
    // 0x2125b4: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x2125b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
    // 0x2125b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2125b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2125bc: 0x248800c0  addiu       $t0, $a0, 0xC0
    ctx->pc = 0x2125bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2125c0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2125c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2125c4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2125c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2125c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2125c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2125cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2125ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2125d0: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2125d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x2125d4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2125d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2125d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2125d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2125dc: 0x248c02a0  addiu       $t4, $a0, 0x2A0
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
    // 0x2125e0: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
    // 0x2125e4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2125e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2125e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2125ec: 0x248900a0  addiu       $t1, $a0, 0xA0
    ctx->pc = 0x2125ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2125f0: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2125f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2125f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2125f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2125f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2125f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2125fc: 0x248b00b0  addiu       $t3, $a0, 0xB0
    ctx->pc = 0x2125fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x212600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212604: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x212608: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x212608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x21260c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x21260cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x212610: 0xe44001d0  swc1        $f0, 0x1D0($v0)
    ctx->pc = 0x212610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
    // 0x212614: 0x248a02f0  addiu       $t2, $a0, 0x2F0
    ctx->pc = 0x212614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x212618: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x21261c: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x21261cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x212620: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x212620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x212624: 0x240d00c0  addiu       $t5, $zero, 0xC0
    ctx->pc = 0x212624u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x212628: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21262c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x21262cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x212630: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x212630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x212634: 0x24c6fec0  addiu       $a2, $a2, -0x140
    ctx->pc = 0x212634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966976));
    // 0x212638: 0x458018  mult        $s0, $v0, $a1
    ctx->pc = 0x212638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x21263c: 0xe5c2004c  swc1        $f2, 0x4C($t6)
    ctx->pc = 0x21263cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 76), bits); }
    // 0x212640: 0x3c01bdd7  lui         $at, 0xBDD7
    ctx->pc = 0x212640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48599 << 16));
    // 0x212644: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x212644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x212648: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x212648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x21264c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21264cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212650: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x212650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x212654: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x212654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x212658: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21265c: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x21265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x212660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212668: 0xe4400170  swc1        $f0, 0x170($v0)
    ctx->pc = 0x212668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 368), bits); }
    // 0x21266c: 0xe5ee0048  swc1        $f14, 0x48($t7)
    ctx->pc = 0x21266cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x212670: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212674: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x212674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
    // 0x212678: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x212678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x21267c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x21267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212680: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x212680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212684: 0x3c01bdd2  lui         $at, 0xBDD2
    ctx->pc = 0x212684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48594 << 16));
    // 0x212688: 0x3421f1aa  ori         $at, $at, 0xF1AA
    ctx->pc = 0x212688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61866);
    // 0x21268c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x21268cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x212690: 0x3c013cc4  lui         $at, 0x3CC4
    ctx->pc = 0x212690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15556 << 16));
    // 0x212694: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x212694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x212698: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x212698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x21269c: 0x3c013de9  lui         $at, 0x3DE9
    ctx->pc = 0x21269cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15849 << 16));
    // 0x2126a0: 0x342178d5  ori         $at, $at, 0x78D5
    ctx->pc = 0x2126a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30933);
    // 0x2126a4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2126a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2126a8: 0x3c013d6d  lui         $at, 0x3D6D
    ctx->pc = 0x2126a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15725 << 16));
    // 0x2126ac: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x2126acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
    // 0x2126b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2126b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2126b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2126b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2126b8: 0x3c01bdc2  lui         $at, 0xBDC2
    ctx->pc = 0x2126b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48578 << 16));
    // 0x2126bc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2126bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x2126c0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2126c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2126c4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2126c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2126c8: 0x3c013db4  lui         $at, 0x3DB4
    ctx->pc = 0x2126c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15796 << 16));
    // 0x2126cc: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x2126ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
    // 0x2126d0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2126d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2126d4: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x2126d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2126d8: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2126dc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2126dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2126e0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2126e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2126e4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2126e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2126e8: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x2126e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
    // 0x2126ec: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2126ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x2126f0: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2126f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2126f4: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x2126f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x2126f8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2126f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2126fc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2126fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x212700: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212704: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x212704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x212708: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21270c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21270cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212710: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212714: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x212714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x212718: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21271c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21271cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212720: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212724: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x212724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x212728: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21272c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21272cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212730: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212734: 0xe44c0070  swc1        $f12, 0x70($v0)
    ctx->pc = 0x212734u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x212738: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21273c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21273cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212740: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212744: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x212744u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x212748: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21274c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21274cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212750: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212754: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x212754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212758: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21275c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21275cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212760: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212764: 0xe46f0090  swc1        $f15, 0x90($v1)
    ctx->pc = 0x212764u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x212768: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21276c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x21276cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212770: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212774: 0xe4500094  swc1        $f16, 0x94($v0)
    ctx->pc = 0x212774u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x212778: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x21277c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21277cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212780: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212784: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x212784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x212788: 0xe48b0060  swc1        $f11, 0x60($a0)
    ctx->pc = 0x212788u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x21278c: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x21278cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x212790: 0xe4e40008  swc1        $f4, 0x8($a3)
    ctx->pc = 0x212790u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x212794: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x212794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x212798: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x212798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x21279c: 0xe48502a0  swc1        $f5, 0x2A0($a0)
    ctx->pc = 0x21279cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x2127a0: 0xe5840008  swc1        $f4, 0x8($t4)
    ctx->pc = 0x2127a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2127a4: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x2127a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x2127a8: 0xe48700a0  swc1        $f7, 0xA0($a0)
    ctx->pc = 0x2127a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2127ac: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x2127acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x2127b0: 0xe48800b0  swc1        $f8, 0xB0($a0)
    ctx->pc = 0x2127b0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x2127b4: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x2127b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x2127b8: 0xe48902f0  swc1        $f9, 0x2F0($a0)
    ctx->pc = 0x2127b8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 752), bits); }
    // 0x2127bc: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x2127bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2127c0: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x2127c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x2127c4: 0xe48a00c0  swc1        $f10, 0xC0($a0)
    ctx->pc = 0x2127c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x2127c8: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x2127c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2127cc: 0xe4860308  swc1        $f6, 0x308($a0)
    ctx->pc = 0x2127ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 776), bits); }
    // 0x2127d0: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x2127d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2127d4: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x2127d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2127d8: 0xe5220008  swc1        $f2, 0x8($t1)
    ctx->pc = 0x2127d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2127dc: 0xe48202e8  swc1        $f2, 0x2E8($a0)
    ctx->pc = 0x2127dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 744), bits); }
    // 0x2127e0: 0xe5630004  swc1        $f3, 0x4($t3)
    ctx->pc = 0x2127e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x2127e4: 0xe5620008  swc1        $f2, 0x8($t3)
    ctx->pc = 0x2127e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2127e8: 0xe5430004  swc1        $f3, 0x4($t2)
    ctx->pc = 0x2127e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2127ec: 0xe5060008  swc1        $f6, 0x8($t0)
    ctx->pc = 0x2127ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2127f0: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x2127f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x2127f4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2127f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2127f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2127fc: 0xe44e01f8  swc1        $f14, 0x1F8($v0)
    ctx->pc = 0x2127fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 504), bits); }
    // 0x212800: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212804: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x212804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212808: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21280c: 0xe4710040  swc1        $f17, 0x40($v1)
    ctx->pc = 0x21280cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x212810: 0x8f0240f4  lw          $v0, 0x40F4($t8)
    ctx->pc = 0x212810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212814: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x212814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212818: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x212818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21281c: 0xe4520070  swc1        $f18, 0x70($v0)
    ctx->pc = 0x21281cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x212820: 0x8f0340f4  lw          $v1, 0x40F4($t8)
    ctx->pc = 0x212820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16628)));
    // 0x212824: 0x6d1018  mult        $v0, $v1, $t5
    ctx->pc = 0x212824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212828: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x212828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21282c: 0xe47300a0  swc1        $f19, 0xA0($v1)
    ctx->pc = 0x21282cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_212830:
    // 0x212830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212834: 0x3e00008  jr          $ra
    ctx->pc = 0x212834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212834u;
        // 0x212838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21283Cu;
    // 0x21283c: 0x0  nop
    ctx->pc = 0x21283cu;
    // NOP
    ctx->pc = 0x212840u;
}
