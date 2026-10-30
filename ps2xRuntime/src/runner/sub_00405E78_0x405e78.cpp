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

// Function: sub_00405E78
// Address: 0x405e78 - 0x405f78
void sub_00405E78_0x405e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405E78_0x405e78");
#endif

    switch (ctx->pc) {
        case 0x405e78u: goto label_405e78;
        case 0x405e7cu: goto label_405e7c;
        case 0x405e80u: goto label_405e80;
        case 0x405e84u: goto label_405e84;
        case 0x405e88u: goto label_405e88;
        case 0x405e8cu: goto label_405e8c;
        case 0x405e90u: goto label_405e90;
        case 0x405e94u: goto label_405e94;
        case 0x405e98u: goto label_405e98;
        case 0x405e9cu: goto label_405e9c;
        case 0x405ea0u: goto label_405ea0;
        case 0x405ea4u: goto label_405ea4;
        case 0x405ea8u: goto label_405ea8;
        case 0x405eacu: goto label_405eac;
        case 0x405eb0u: goto label_405eb0;
        case 0x405eb4u: goto label_405eb4;
        case 0x405eb8u: goto label_405eb8;
        case 0x405ebcu: goto label_405ebc;
        case 0x405ec0u: goto label_405ec0;
        case 0x405ec4u: goto label_405ec4;
        case 0x405ec8u: goto label_405ec8;
        case 0x405eccu: goto label_405ecc;
        case 0x405ed0u: goto label_405ed0;
        case 0x405ed4u: goto label_405ed4;
        case 0x405ed8u: goto label_405ed8;
        case 0x405edcu: goto label_405edc;
        case 0x405ee0u: goto label_405ee0;
        case 0x405ee4u: goto label_405ee4;
        case 0x405ee8u: goto label_405ee8;
        case 0x405eecu: goto label_405eec;
        case 0x405ef0u: goto label_405ef0;
        case 0x405ef4u: goto label_405ef4;
        case 0x405ef8u: goto label_405ef8;
        case 0x405efcu: goto label_405efc;
        case 0x405f00u: goto label_405f00;
        case 0x405f04u: goto label_405f04;
        case 0x405f08u: goto label_405f08;
        case 0x405f0cu: goto label_405f0c;
        case 0x405f10u: goto label_405f10;
        case 0x405f14u: goto label_405f14;
        case 0x405f18u: goto label_405f18;
        case 0x405f1cu: goto label_405f1c;
        case 0x405f20u: goto label_405f20;
        case 0x405f24u: goto label_405f24;
        case 0x405f28u: goto label_405f28;
        case 0x405f2cu: goto label_405f2c;
        case 0x405f30u: goto label_405f30;
        case 0x405f34u: goto label_405f34;
        case 0x405f38u: goto label_405f38;
        case 0x405f3cu: goto label_405f3c;
        case 0x405f40u: goto label_405f40;
        case 0x405f44u: goto label_405f44;
        case 0x405f48u: goto label_405f48;
        case 0x405f4cu: goto label_405f4c;
        case 0x405f50u: goto label_405f50;
        case 0x405f54u: goto label_405f54;
        case 0x405f58u: goto label_405f58;
        case 0x405f5cu: goto label_405f5c;
        case 0x405f60u: goto label_405f60;
        case 0x405f64u: goto label_405f64;
        case 0x405f68u: goto label_405f68;
        case 0x405f6cu: goto label_405f6c;
        case 0x405f70u: goto label_405f70;
        case 0x405f74u: goto label_405f74;
        default: break;
    }

    ctx->pc = 0x405e78u;

label_405e78:
    // 0x405e78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x405e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_405e7c:
    // 0x405e7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x405e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_405e80:
    // 0x405e80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x405e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_405e84:
    // 0x405e84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x405e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_405e88:
    // 0x405e88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x405e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405e8c:
    // 0x405e8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x405e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_405e90:
    // 0x405e90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x405e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405e94:
    // 0x405e94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x405e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_405e98:
    // 0x405e98: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405e9c:
    // 0x405e9c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405ea0:
    // 0x405ea0: 0x40f809  jalr        $v0
label_405ea4:
    if (ctx->pc == 0x405EA4u) {
        ctx->pc = 0x405EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EA0u;
        // 0x405ea4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405EA8u;
        goto label_405ea8;
    }
    ctx->pc = 0x405EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405EA8u);
        ctx->pc = 0x405EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EA0u;
        // 0x405ea4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405EA0u, 0x405EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405EA8u;
label_405ea8:
    // 0x405ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x405ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405eac:
    // 0x405eac: 0xc0ea14c  jal         func_3A8530
label_405eb0:
    if (ctx->pc == 0x405EB0u) {
        ctx->pc = 0x405EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EACu;
        // 0x405eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405EB4u;
        goto label_405eb4;
    }
    ctx->pc = 0x405EACu;
    SET_GPR_U32(ctx, 31, 0x405EB4u);
    ctx->pc = 0x405EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405EACu;
    // 0x405eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x405EACu, 0x405EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405EB4u;
label_405eb4:
    // 0x405eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x405eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405eb8:
    // 0x405eb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x405eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_405ebc:
    // 0x405ebc: 0xc0e858c  jal         func_3A1630
label_405ec0:
    if (ctx->pc == 0x405EC0u) {
        ctx->pc = 0x405EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EBCu;
        // 0x405ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405EC4u;
        goto label_405ec4;
    }
    ctx->pc = 0x405EBCu;
    SET_GPR_U32(ctx, 31, 0x405EC4u);
    ctx->pc = 0x405EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405EBCu;
    // 0x405ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405EBCu, 0x405EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405EC4u;
label_405ec4:
    // 0x405ec4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x405ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_405ec8:
    // 0x405ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405ecc:
    // 0x405ecc: 0xc0e896e  jal         func_3A25B8
label_405ed0:
    if (ctx->pc == 0x405ED0u) {
        ctx->pc = 0x405ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405ECCu;
        // 0x405ed0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405ED4u;
        goto label_405ed4;
    }
    ctx->pc = 0x405ECCu;
    SET_GPR_U32(ctx, 31, 0x405ED4u);
    ctx->pc = 0x405ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405ECCu;
    // 0x405ed0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x405ECCu, 0x405ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405ED4u;
label_405ed4:
    // 0x405ed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x405ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405ed8:
    // 0x405ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405edc:
    // 0x405edc: 0xc0e8604  jal         func_3A1810
label_405ee0:
    if (ctx->pc == 0x405EE0u) {
        ctx->pc = 0x405EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EDCu;
        // 0x405ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405EE4u;
        goto label_405ee4;
    }
    ctx->pc = 0x405EDCu;
    SET_GPR_U32(ctx, 31, 0x405EE4u);
    ctx->pc = 0x405EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405EDCu;
    // 0x405ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x405EDCu, 0x405EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405EE4u;
label_405ee4:
    // 0x405ee4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x405ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_405ee8:
    // 0x405ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x405ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_405eec:
    // 0x405eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405ef0:
    // 0x405ef0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x405ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_405ef4:
    // 0x405ef4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x405ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_405ef8:
    // 0x405ef8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x405ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_405efc:
    // 0x405efc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x405efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_405f00:
    // 0x405f00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x405f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405f04:
    // 0x405f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x405f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_405f08:
    // 0x405f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405f0c:
    // 0x405f0c: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x405f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_405f10:
    // 0x405f10: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x405f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_405f14:
    // 0x405f14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x405f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_405f18:
    // 0x405f18: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x405f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_405f1c:
    // 0x405f1c: 0x3c01bde1  lui         $at, 0xBDE1
    ctx->pc = 0x405f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48609 << 16));
label_405f20:
    // 0x405f20: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x405f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_405f24:
    // 0x405f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x405f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405f28:
    // 0x405f28: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x405f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405f2c:
    // 0x405f2c: 0x3c01be42  lui         $at, 0xBE42
    ctx->pc = 0x405f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48706 << 16));
label_405f30:
    // 0x405f30: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x405f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_405f34:
    // 0x405f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405f38:
    // 0x405f38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x405f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_405f3c:
    // 0x405f3c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x405f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_405f40:
    // 0x405f40: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x405f40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_405f44:
    // 0x405f44: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x405f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_405f48:
    // 0x405f48: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x405f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_405f4c:
    // 0x405f4c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x405f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_405f50:
    // 0x405f50: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x405f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_405f54:
    // 0x405f54: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x405f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_405f58:
    // 0x405f58: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x405f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_405f5c:
    // 0x405f5c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x405f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_405f60:
    // 0x405f60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x405f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_405f64:
    // 0x405f64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x405f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_405f68:
    // 0x405f68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x405f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_405f6c:
    // 0x405f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x405f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_405f70:
    // 0x405f70: 0x3e00008  jr          $ra
label_405f74:
    if (ctx->pc == 0x405F74u) {
        ctx->pc = 0x405F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F70u;
        // 0x405f74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405F78u;
        goto label_fallthrough_0x405f70;
    }
    ctx->pc = 0x405F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F70u;
        // 0x405f74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x405f70:
    ctx->pc = 0x405F78u;
}
