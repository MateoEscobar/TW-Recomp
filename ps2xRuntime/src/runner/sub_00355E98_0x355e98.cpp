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

// Function: sub_00355E98
// Address: 0x355e98 - 0x356028
void sub_00355E98_0x355e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355E98_0x355e98");
#endif

    switch (ctx->pc) {
        case 0x355f88u: goto label_355f88;
        case 0x355fa4u: goto label_355fa4;
        default: break;
    }

    ctx->pc = 0x355e98u;

    // 0x355e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355e9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x355e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x355ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x355ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355eac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x355eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355eb0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x355eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x355eb4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x355eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x355eb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x355eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x355ebc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x355ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x355ec0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x355ec4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355EC4u;
    {
        const bool branch_taken_0x355ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x355ec4) {
            ctx->pc = 0x355EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355EC4u;
            // 0x355ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355ED4u;
            goto label_355ed4;
        }
    }
    ctx->pc = 0x355ECCu;
    // 0x355ecc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x355eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x355ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_355ed4:
    // 0x355ed4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x355ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x355ed8: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x355ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x355edc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x355edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x355ee0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355EE0u;
    {
        const bool branch_taken_0x355ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355EE0u;
        // 0x355ee4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ee0) {
            ctx->pc = 0x355EECu;
            goto label_355eec;
        }
    }
    ctx->pc = 0x355EE8u;
    // 0x355ee8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x355ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_355eec:
    // 0x355eec: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x355eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x355ef0: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x355ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x355ef4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x355ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x355ef8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x355ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x355efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355f00: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x355f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x355f04: 0x94a40014  lhu         $a0, 0x14($a1)
    ctx->pc = 0x355f04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x355f08: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x355f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x355f0c: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x355f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x355f10: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x355f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x355f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355f18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x355f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355f1c: 0x14c00037  bnez        $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x355F1Cu;
    {
        const bool branch_taken_0x355f1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x355F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F1Cu;
        // 0x355f20: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f1c) {
            ctx->pc = 0x355FFCu;
            goto label_355ffc;
        }
    }
    ctx->pc = 0x355F24u;
    // 0x355f24: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x355f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x355f28: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x355f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x355f2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x355F2Cu;
    {
        const bool branch_taken_0x355f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355f2c) {
            ctx->pc = 0x355F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355F2Cu;
            // 0x355f30: 0x94e20014  lhu         $v0, 0x14($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355F3Cu;
            goto label_355f3c;
        }
    }
    ctx->pc = 0x355F34u;
    // 0x355f34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x355F34u;
    {
        const bool branch_taken_0x355f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F34u;
        // 0x355f38: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f34) {
            ctx->pc = 0x355F64u;
            goto label_355f64;
        }
    }
    ctx->pc = 0x355F3Cu;
label_355f3c:
    // 0x355f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x355F3Cu;
    {
        const bool branch_taken_0x355f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F3Cu;
        // 0x355f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f3c) {
            ctx->pc = 0x355F5Cu;
            goto label_355f5c;
        }
    }
    ctx->pc = 0x355F44u;
    // 0x355f44: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x355f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x355f48: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x355f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x355f4c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x355f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x355f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355F54u;
    {
        const bool branch_taken_0x355f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F54u;
        // 0x355f58: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f54) {
            ctx->pc = 0x355F60u;
            goto label_355f60;
        }
    }
    ctx->pc = 0x355F5Cu;
label_355f5c:
    // 0x355f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355f60:
    // 0x355f60: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x355f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_355f64:
    // 0x355f64: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x355f64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x355f68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x355f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x355f6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x355f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x355f70: 0x94440014  lhu         $a0, 0x14($v0)
    ctx->pc = 0x355f70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x355f74: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x355f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x355f78: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x355f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x355f7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x355F7Cu;
    {
        const bool branch_taken_0x355f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F7Cu;
        // 0x355f80: 0xa604003a  sh          $a0, 0x3A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f7c) {
            ctx->pc = 0x355FB4u;
            goto label_355fb4;
        }
    }
    ctx->pc = 0x355F84u;
    // 0x355f84: 0x0  nop
    ctx->pc = 0x355f84u;
    // NOP
label_355f88:
    // 0x355f88: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x355f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x355f8c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x355f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x355f90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x355f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x355f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f9c: 0xc0d56ae  jal         func_355AB8
    ctx->pc = 0x355F9Cu;
    SET_GPR_U32(ctx, 31, 0x355FA4u);
    ctx->pc = 0x355FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355F9Cu;
    // 0x355fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB8u, 0x355F9Cu, 0x355FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FA4u;
label_355fa4:
    // 0x355fa4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x355fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x355fa8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x355fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x355fac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x355FACu;
    {
        const bool branch_taken_0x355fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355fac) {
            ctx->pc = 0x355F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355f88;
        }
    }
    ctx->pc = 0x355FB4u;
label_355fb4:
    // 0x355fb4: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x355fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x355fb8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x355fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x355fbc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x355FBCu;
    {
        const bool branch_taken_0x355fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355fbc) {
            ctx->pc = 0x355FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355FBCu;
            // 0x355fc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356018u;
            goto label_356018;
        }
    }
    ctx->pc = 0x355FC4u;
    // 0x355fc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x355fc8: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x355fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x355fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355FCCu;
    {
        const bool branch_taken_0x355fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FCCu;
        // 0x355fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fcc) {
            ctx->pc = 0x355FF0u;
            goto label_355ff0;
        }
    }
    ctx->pc = 0x355FD4u;
    // 0x355fd4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x355fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x355fd8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x355fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x355fdc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x355fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x355fe0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x355fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x355fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355FE8u;
    {
        const bool branch_taken_0x355fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FE8u;
        // 0x355fec: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fe8) {
            ctx->pc = 0x355FF4u;
            goto label_355ff4;
        }
    }
    ctx->pc = 0x355FF0u;
label_355ff0:
    // 0x355ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355ff4:
    // 0x355ff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355FF4u;
    {
        const bool branch_taken_0x355ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FF4u;
        // 0x355ff8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ff4) {
            ctx->pc = 0x356014u;
            goto label_356014;
        }
    }
    ctx->pc = 0x355FFCu;
label_355ffc:
    // 0x355ffc: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x355ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x356000: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x356000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356004: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x356004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x356008: 0xb202003b  sdl         $v0, 0x3B($s0)
    ctx->pc = 0x356008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35600c: 0xb6020034  sdr         $v0, 0x34($s0)
    ctx->pc = 0x35600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356010: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x356010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_356014:
    // 0x356014: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x356014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356018:
    // 0x356018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35601c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356020: 0x3e00008  jr          $ra
    ctx->pc = 0x356020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356020u;
        // 0x356024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356028u;
}
