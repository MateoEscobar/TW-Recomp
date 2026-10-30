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

// Function: sub_00476CC8
// Address: 0x476cc8 - 0x4770e0
void sub_00476CC8_0x476cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476CC8_0x476cc8");
#endif

    switch (ctx->pc) {
        case 0x476ee4u: goto label_476ee4;
        default: break;
    }

    ctx->pc = 0x476cc8u;

    // 0x476cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x476cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x476ccc: 0x8f83890c  lw          $v1, -0x76F4($gp)
    ctx->pc = 0x476cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x476cd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x476cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x476cd4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x476cd4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476cd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x476cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x476cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x476cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476ce0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x476ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x476ce4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x476ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x476ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x476ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x476cec: 0x2c62007c  sltiu       $v0, $v1, 0x7C
    ctx->pc = 0x476cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)124) ? 1 : 0);
    // 0x476cf0: 0x92300001  lbu         $s0, 0x1($s1)
    ctx->pc = 0x476cf0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x476cf4: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x476CF4u;
    {
        const bool branch_taken_0x476cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476CF4u;
        // 0x476cf8: 0x8e380004  lw          $t8, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476cf4) {
            ctx->pc = 0x4770C8u;
            goto label_4770c8;
        }
    }
    ctx->pc = 0x476CFCu;
    // 0x476cfc: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x476CFCu;
    {
        const bool branch_taken_0x476cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476cfc) {
            ctx->pc = 0x476ED4u;
            goto label_476ed4;
        }
    }
    ctx->pc = 0x476D04u;
    // 0x476d04: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x476D04u;
    {
        const bool branch_taken_0x476d04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x476D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476D04u;
        // 0x476d08: 0x8f828908  lw          $v0, -0x76F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476d04) {
            ctx->pc = 0x476E00u;
            goto label_476e00;
        }
    }
    ctx->pc = 0x476D0Cu;
    // 0x476d0c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x476d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x476d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x476d14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x476d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476d18: 0xc5e00004  lwc1        $f0, 0x4($t7)
    ctx->pc = 0x476d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d1c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x476d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476d20: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x476d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x476d24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x476d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x476d28: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x476d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x476d2c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x476d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x476d30: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476d34: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x476d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x476d38: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x476d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d3c: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x476d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x476d40: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x476d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x476d44: 0x2448001c  addiu       $t0, $v0, 0x1C
    ctx->pc = 0x476d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x476d48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x476d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x476d4c: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x476d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x476d50: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476d50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476d54: 0x244a0024  addiu       $t2, $v0, 0x24
    ctx->pc = 0x476d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x476d58: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x476d58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x476d5c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x476d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x476d60: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x476d64: 0x244b002c  addiu       $t3, $v0, 0x2C
    ctx->pc = 0x476d64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x476d68: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x476d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d6c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x476d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x476d70: 0x244c0034  addiu       $t4, $v0, 0x34
    ctx->pc = 0x476d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x476d74: 0x244d0038  addiu       $t5, $v0, 0x38
    ctx->pc = 0x476d74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x476d78: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x476d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x476d7c: 0x244e003c  addiu       $t6, $v0, 0x3C
    ctx->pc = 0x476d7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x476d80: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x476d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x476d84: 0xc5e00014  lwc1        $f0, 0x14($t7)
    ctx->pc = 0x476d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d88: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x476d8c: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476d90: 0xc5e00018  lwc1        $f0, 0x18($t7)
    ctx->pc = 0x476d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476d94: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x476d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x476d98: 0xaf878908  sw          $a3, -0x76F8($gp)
    ctx->pc = 0x476d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 7));
    // 0x476d9c: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x476d9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x476da0: 0xaf888908  sw          $t0, -0x76F8($gp)
    ctx->pc = 0x476da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 8));
    // 0x476da4: 0xc5e00020  lwc1        $f0, 0x20($t7)
    ctx->pc = 0x476da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476da8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x476da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x476dac: 0xaf898908  sw          $t1, -0x76F8($gp)
    ctx->pc = 0x476dacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 9));
    // 0x476db0: 0xc5e00024  lwc1        $f0, 0x24($t7)
    ctx->pc = 0x476db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476db4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x476db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x476db8: 0xaf8a8908  sw          $t2, -0x76F8($gp)
    ctx->pc = 0x476db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 10));
    // 0x476dbc: 0xc5e00028  lwc1        $f0, 0x28($t7)
    ctx->pc = 0x476dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476dc0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x476dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x476dc4: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476dc8: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x476dc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x476dcc: 0xaf8b8908  sw          $t3, -0x76F8($gp)
    ctx->pc = 0x476dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 11));
    // 0x476dd0: 0xc5e00030  lwc1        $f0, 0x30($t7)
    ctx->pc = 0x476dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476dd4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x476dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x476dd8: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x476ddc: 0xc5e00034  lwc1        $f0, 0x34($t7)
    ctx->pc = 0x476ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476de0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x476de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x476de4: 0xaf8c8908  sw          $t4, -0x76F8($gp)
    ctx->pc = 0x476de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 12));
    // 0x476de8: 0xc5e00038  lwc1        $f0, 0x38($t7)
    ctx->pc = 0x476de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476dec: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x476decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x476df0: 0xaf8d8908  sw          $t5, -0x76F8($gp)
    ctx->pc = 0x476df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 13));
    // 0x476df4: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x476df4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x476df8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x476DF8u;
    {
        const bool branch_taken_0x476df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476DF8u;
        // 0x476dfc: 0xaf8e8908  sw          $t6, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476df8) {
            ctx->pc = 0x476EC8u;
            goto label_476ec8;
        }
    }
    ctx->pc = 0x476E00u;
label_476e00:
    // 0x476e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x476e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x476e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x476e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x476e08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x476e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x476e0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x476e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476e10: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x476e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x476e14: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x476e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476e18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x476e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x476e1c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x476e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x476e20: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476e20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476e24: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x476e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x476e28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x476e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x476e2c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x476e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x476e30: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476e34: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x476e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x476e38: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x476e38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x476e3c: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x476e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x476e40: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x476e44: 0x2447001c  addiu       $a3, $v0, 0x1C
    ctx->pc = 0x476e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x476e48: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x476e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x476e4c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x476e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x476e50: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476e54: 0x24480024  addiu       $t0, $v0, 0x24
    ctx->pc = 0x476e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x476e58: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x476e5c: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x476e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x476e60: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x476e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x476e64: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x476e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x476e68: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x476e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x476e6c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x476e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x476e70: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476e74: 0x244a0034  addiu       $t2, $v0, 0x34
    ctx->pc = 0x476e74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x476e78: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x476e78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x476e7c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x476e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x476e80: 0xaf878908  sw          $a3, -0x76F8($gp)
    ctx->pc = 0x476e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 7));
    // 0x476e84: 0x244b003c  addiu       $t3, $v0, 0x3C
    ctx->pc = 0x476e84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x476e88: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x476e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x476e8c: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x476e90: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x476e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x476e94: 0xaf888908  sw          $t0, -0x76F8($gp)
    ctx->pc = 0x476e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 8));
    // 0x476e98: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x476e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x476e9c: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476ea0: 0xe44c0028  swc1        $f12, 0x28($v0)
    ctx->pc = 0x476ea0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x476ea4: 0xaf898908  sw          $t1, -0x76F8($gp)
    ctx->pc = 0x476ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 9));
    // 0x476ea8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x476ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x476eac: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x476eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x476eb0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x476eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x476eb4: 0xaf8a8908  sw          $t2, -0x76F8($gp)
    ctx->pc = 0x476eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 10));
    // 0x476eb8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x476eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x476ebc: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476ec0: 0xe44d0038  swc1        $f13, 0x38($v0)
    ctx->pc = 0x476ec0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x476ec4: 0xaf8b8908  sw          $t3, -0x76F8($gp)
    ctx->pc = 0x476ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 11));
label_476ec8:
    // 0x476ec8: 0x8f82890c  lw          $v0, -0x76F4($gp)
    ctx->pc = 0x476ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x476ecc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x476eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476ed0: 0xaf82890c  sw          $v0, -0x76F4($gp)
    ctx->pc = 0x476ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
label_476ed4:
    // 0x476ed4: 0x13000006  beqz        $t8, . + 4 + (0x6 << 2)
    ctx->pc = 0x476ED4u;
    {
        const bool branch_taken_0x476ed4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x476ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476ED4u;
        // 0x476ed8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ed4) {
            ctx->pc = 0x476EF0u;
            goto label_476ef0;
        }
    }
    ctx->pc = 0x476EDCu;
    // 0x476edc: 0xc12104a  jal         func_484128
    ctx->pc = 0x476EDCu;
    SET_GPR_U32(ctx, 31, 0x476EE4u);
    ctx->pc = 0x476EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476EDCu;
    // 0x476ee0: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x476EDCu, 0x476EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476EE4u;
label_476ee4:
    // 0x476ee4: 0x244a0030  addiu       $t2, $v0, 0x30
    ctx->pc = 0x476ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x476ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x476EE8u;
    {
        const bool branch_taken_0x476ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476EE8u;
        // 0x476eec: 0x244b0020  addiu       $t3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ee8) {
            ctx->pc = 0x476EF4u;
            goto label_476ef4;
        }
    }
    ctx->pc = 0x476EF0u;
label_476ef0:
    // 0x476ef0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x476ef0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476ef4:
    // 0x476ef4: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x476ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476ef8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x476ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x476efc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x476efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476f00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x476f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x476f04: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x476f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476f08: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x476f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476f0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x476f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x476f10: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x476f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x476f14: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x476f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476f18: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x476f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x476f1c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x476f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476f20: 0x12040029  beq         $s0, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x476F20u;
    {
        const bool branch_taken_0x476f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x476F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F20u;
        // 0x476f24: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f20) {
            ctx->pc = 0x476FC8u;
            goto label_476fc8;
        }
    }
    ctx->pc = 0x476F28u;
    // 0x476f28: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x476f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x476f2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x476F2Cu;
    {
        const bool branch_taken_0x476f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F2Cu;
        // 0x476f30: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f2c) {
            ctx->pc = 0x476F4Cu;
            goto label_476f4c;
        }
    }
    ctx->pc = 0x476F34u;
    // 0x476f34: 0x12000064  beqz        $s0, . + 4 + (0x64 << 2)
    ctx->pc = 0x476F34u;
    {
        const bool branch_taken_0x476f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F34u;
        // 0x476f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f34) {
            ctx->pc = 0x4770C8u;
            goto label_4770c8;
        }
    }
    ctx->pc = 0x476F3Cu;
    // 0x476f3c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x476F3Cu;
    {
        const bool branch_taken_0x476f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x476F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F3Cu;
        // 0x476f40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f3c) {
            ctx->pc = 0x476F74u;
            goto label_476f74;
        }
    }
    ctx->pc = 0x476F44u;
    // 0x476f44: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x476F44u;
    {
        const bool branch_taken_0x476f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F44u;
        // 0x476f48: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f44) {
            ctx->pc = 0x4770D0u;
            goto label_4770d0;
        }
    }
    ctx->pc = 0x476F4Cu;
label_476f4c:
    // 0x476f4c: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x476F4Cu;
    {
        const bool branch_taken_0x476f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x476F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F4Cu;
        // 0x476f50: 0x8f828908  lw          $v0, -0x76F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f4c) {
            ctx->pc = 0x476FE4u;
            goto label_476fe4;
        }
    }
    ctx->pc = 0x476F54u;
    // 0x476f54: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x476f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x476f58: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x476F58u;
    {
        const bool branch_taken_0x476f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x476f58) {
            ctx->pc = 0x476F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476F58u;
            // 0x476f5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4770CCu;
            goto label_4770cc;
        }
    }
    ctx->pc = 0x476F60u;
    // 0x476f60: 0x2e020083  sltiu       $v0, $s0, 0x83
    ctx->pc = 0x476f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)131) ? 1 : 0);
    // 0x476f64: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x476F64u;
    {
        const bool branch_taken_0x476f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F64u;
        // 0x476f68: 0x8f828908  lw          $v0, -0x76F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f64) {
            ctx->pc = 0x4770C8u;
            goto label_4770c8;
        }
    }
    ctx->pc = 0x476F6Cu;
    // 0x476f6c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x476F6Cu;
    {
        const bool branch_taken_0x476f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476F6Cu;
        // 0x476f70: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f6c) {
            ctx->pc = 0x477038u;
            goto label_477038;
        }
    }
    ctx->pc = 0x476F74u;
label_476f74:
    // 0x476f74: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x476f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476f78: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x476f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476f7c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x476f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x476f80: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x476f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x476f84: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476f88: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x476f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x476f8c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x476f90: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x476f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x476f94: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x476f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x476f98: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x476f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x476f9c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x476f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476fa0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x476fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x476fa4: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x476fa8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x476fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476fac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x476facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x476fb0: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476fb4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x476fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x476fb8: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x476fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x476fbc: 0x8f82890c  lw          $v0, -0x76F4($gp)
    ctx->pc = 0x476fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x476fc0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x476FC0u;
    {
        const bool branch_taken_0x476fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476FC0u;
        // 0x476fc4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476fc0) {
            ctx->pc = 0x4770C4u;
            goto label_4770c4;
        }
    }
    ctx->pc = 0x476FC8u;
label_476fc8:
    // 0x476fc8: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x476fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x476fcc: 0x8f83890c  lw          $v1, -0x76F4($gp)
    ctx->pc = 0x476fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x476fd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x476fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x476fd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x476fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x476fd8: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x476fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x476fdc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x476FDCu;
    {
        const bool branch_taken_0x476fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476FDCu;
        // 0x476fe0: 0xaf83890c  sw          $v1, -0x76F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476fdc) {
            ctx->pc = 0x4770C8u;
            goto label_4770c8;
        }
    }
    ctx->pc = 0x476FE4u;
label_476fe4:
    // 0x476fe4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x476fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x476fe8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x476fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x476fec: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x476fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x476ff0: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x476ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x476ff4: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x476ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x476ff8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x476ffc: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x476ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x477000: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x477000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x477004: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x477004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x477008: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x477008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47700c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x47700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x477010: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x477010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x477014: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x477014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477018: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x477018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x47701c: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x47701cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x477020: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x477020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477024: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x477024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x477028: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x477028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x47702c: 0x8f82890c  lw          $v0, -0x76F4($gp)
    ctx->pc = 0x47702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x477030: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x477030u;
    {
        const bool branch_taken_0x477030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477030u;
        // 0x477034: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477030) {
            ctx->pc = 0x4770C4u;
            goto label_4770c4;
        }
    }
    ctx->pc = 0x477038u;
label_477038:
    // 0x477038: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x477038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x47703c: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x47703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x477040: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x477040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x477044: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x477044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x477048: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x477048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x47704c: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x47704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x477050: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x477050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x477054: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x477054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x477058: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x477058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47705c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x47705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x477060: 0x24470028  addiu       $a3, $v0, 0x28
    ctx->pc = 0x477060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x477064: 0x2448002c  addiu       $t0, $v0, 0x2C
    ctx->pc = 0x477064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x477068: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x477068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x47706c: 0x24490030  addiu       $t1, $v0, 0x30
    ctx->pc = 0x47706cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x477070: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x477070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
    // 0x477074: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x477074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477078: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x477078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x47707c: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x47707cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x477080: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x477080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477084: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x477084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x477088: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x477088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
    // 0x47708c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x47708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477090: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x477090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x477094: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x477094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x477098: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x477098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47709c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x47709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x4770a0: 0xaf878908  sw          $a3, -0x76F8($gp)
    ctx->pc = 0x4770a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 7));
    // 0x4770a4: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x4770a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4770a8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x4770a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x4770ac: 0xaf888908  sw          $t0, -0x76F8($gp)
    ctx->pc = 0x4770acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 8));
    // 0x4770b0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x4770b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4770b4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x4770b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x4770b8: 0xaf898908  sw          $t1, -0x76F8($gp)
    ctx->pc = 0x4770b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 9));
    // 0x4770bc: 0x8f82890c  lw          $v0, -0x76F4($gp)
    ctx->pc = 0x4770bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x4770c0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4770c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_4770c4:
    // 0x4770c4: 0xaf82890c  sw          $v0, -0x76F4($gp)
    ctx->pc = 0x4770c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
label_4770c8:
    // 0x4770c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4770c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4770cc:
    // 0x4770cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4770ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4770d0:
    // 0x4770d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4770d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4770d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4770d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4770D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4770DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4770D8u;
        // 0x4770dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4770D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4770E0u;
}
