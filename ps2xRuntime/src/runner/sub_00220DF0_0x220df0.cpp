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

// Function: sub_00220DF0
// Address: 0x220df0 - 0x221038
void sub_00220DF0_0x220df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220DF0_0x220df0");
#endif

    switch (ctx->pc) {
        case 0x220e30u: goto label_220e30;
        case 0x220e54u: goto label_220e54;
        case 0x220e70u: goto label_220e70;
        case 0x220e80u: goto label_220e80;
        case 0x220e9cu: goto label_220e9c;
        case 0x220eb4u: goto label_220eb4;
        case 0x220ed4u: goto label_220ed4;
        case 0x220f80u: goto label_220f80;
        case 0x220facu: goto label_220fac;
        case 0x220fc4u: goto label_220fc4;
        case 0x221004u: goto label_221004;
        default: break;
    }

    ctx->pc = 0x220df0u;

    // 0x220df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x220df4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x220df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x220df8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x220df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x220dfc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x220dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e00: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x220e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x220e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x220e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e08: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x220e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x220e0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x220e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e10: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x220e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x220e14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x220e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x220e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x220e1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x220e1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x220e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x220e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220e28: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x220E28u;
    SET_GPR_U32(ctx, 31, 0x220E30u);
    ctx->pc = 0x220E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E28u;
    // 0x220e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x220E28u, 0x220E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E30u;
label_220e30:
    // 0x220e30: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x220E30u;
    {
        const bool branch_taken_0x220e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220e30) {
            ctx->pc = 0x220E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220E30u;
            // 0x220e34: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E38u;
    // 0x220e38: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x220e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x220e3c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x220e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x220e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x220e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220E44u;
    {
        const bool branch_taken_0x220e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220e44) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E4Cu;
    // 0x220e4c: 0xc088f88  jal         func_223E20
    ctx->pc = 0x220E4Cu;
    SET_GPR_U32(ctx, 31, 0x220E54u);
    ctx->pc = 0x220E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E4Cu;
    // 0x220e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x220E4Cu, 0x220E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E54u;
label_220e54:
    // 0x220e54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x220E54u;
    {
        const bool branch_taken_0x220e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220e54) {
            ctx->pc = 0x220E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220E54u;
            // 0x220e58: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E5Cu;
label_220e5c:
    // 0x220e5c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x220e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x220e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x220e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x220e68: 0xc095358  jal         func_254D60
    ctx->pc = 0x220E68u;
    SET_GPR_U32(ctx, 31, 0x220E70u);
    ctx->pc = 0x220E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E68u;
    // 0x220e6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x220E68u, 0x220E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E70u;
label_220e70:
    // 0x220e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e78: 0xc08a684  jal         func_229A10
    ctx->pc = 0x220E78u;
    SET_GPR_U32(ctx, 31, 0x220E80u);
    ctx->pc = 0x220E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E78u;
    // 0x220e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x220E78u, 0x220E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E80u;
label_220e80:
    // 0x220e80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x220e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x220e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x220e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e94: 0xc099b40  jal         func_266D00
    ctx->pc = 0x220E94u;
    SET_GPR_U32(ctx, 31, 0x220E9Cu);
    ctx->pc = 0x220E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E94u;
    // 0x220e98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D00u, 0x220E94u, 0x220E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E9Cu;
label_220e9c:
    // 0x220e9c: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x220e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x220ea0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x220ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x220ea4: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x220ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220eac: 0xc095388  jal         func_254E20
    ctx->pc = 0x220EACu;
    SET_GPR_U32(ctx, 31, 0x220EB4u);
    ctx->pc = 0x220EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EACu;
    // 0x220eb0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E20u, 0x220EACu, 0x220EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EB4u;
label_220eb4:
    // 0x220eb4: 0x30430600  andi        $v1, $v0, 0x600
    ctx->pc = 0x220eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x220eb8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x220eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x220ebc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x220EBCu;
    {
        const bool branch_taken_0x220ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ebc) {
            ctx->pc = 0x220EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220EBCu;
            // 0x220ec0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220EE4u;
            goto label_220ee4;
        }
    }
    ctx->pc = 0x220EC4u;
    // 0x220ec4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x220EC4u;
    {
        const bool branch_taken_0x220ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220ec4) {
            ctx->pc = 0x220EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220EC4u;
            // 0x220ec8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220EE4u;
            goto label_220ee4;
        }
    }
    ctx->pc = 0x220ECCu;
    // 0x220ecc: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x220ECCu;
    SET_GPR_U32(ctx, 31, 0x220ED4u);
    ctx->pc = 0x220ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220ECCu;
    // 0x220ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x220ECCu, 0x220ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220ED4u;
label_220ed4:
    // 0x220ed4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x220ed8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220ED8u;
    {
        const bool branch_taken_0x220ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x220ed8) {
            ctx->pc = 0x220EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220ED8u;
            // 0x220edc: 0x8e4201a0  lw          $v0, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220EE8u;
            goto label_220ee8;
        }
    }
    ctx->pc = 0x220EE0u;
    // 0x220ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_220ee4:
    // 0x220ee4: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x220ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_220ee8:
    // 0x220ee8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x220eec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220EECu;
    {
        const bool branch_taken_0x220eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EECu;
        // 0x220ef0: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220eec) {
            ctx->pc = 0x220EFCu;
            goto label_220efc;
        }
    }
    ctx->pc = 0x220EF4u;
    // 0x220ef4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x220EF4u;
    {
        const bool branch_taken_0x220ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EF4u;
        // 0x220ef8: 0x8c628690  lw          $v0, -0x7970($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ef4) {
            ctx->pc = 0x221004u;
            goto label_221004;
        }
    }
    ctx->pc = 0x220EFCu;
label_220efc:
    // 0x220efc: 0x2682fffb  addiu       $v0, $s4, -0x5
    ctx->pc = 0x220efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967291));
    // 0x220f00: 0x2c42000c  sltiu       $v0, $v0, 0xC
    ctx->pc = 0x220f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x220f04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220F04u;
    {
        const bool branch_taken_0x220f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F04u;
        // 0x220f08: 0x2682ffef  addiu       $v0, $s4, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f04) {
            ctx->pc = 0x220F14u;
            goto label_220f14;
        }
    }
    ctx->pc = 0x220F0Cu;
    // 0x220f0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x220F0Cu;
    {
        const bool branch_taken_0x220f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F0Cu;
        // 0x220f10: 0x24130011  addiu       $s3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f0c) {
            ctx->pc = 0x220F4Cu;
            goto label_220f4c;
        }
    }
    ctx->pc = 0x220F14u;
label_220f14:
    // 0x220f14: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x220f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x220f18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220F18u;
    {
        const bool branch_taken_0x220f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F18u;
        // 0x220f1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f18) {
            ctx->pc = 0x220F2Cu;
            goto label_220f2c;
        }
    }
    ctx->pc = 0x220F20u;
    // 0x220f20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x220f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x220F24u;
    {
        const bool branch_taken_0x220f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F24u;
        // 0x220f28: 0x24420190  addiu       $v0, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f24) {
            ctx->pc = 0x220F44u;
            goto label_220f44;
        }
    }
    ctx->pc = 0x220F2Cu;
label_220f2c:
    // 0x220f2c: 0x2682ffe4  addiu       $v0, $s4, -0x1C
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967268));
    // 0x220f30: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x220f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x220f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F34u;
    {
        const bool branch_taken_0x220f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F34u;
        // 0x220f38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f34) {
            ctx->pc = 0x220F4Cu;
            goto label_220f4c;
        }
    }
    ctx->pc = 0x220F3Cu;
    // 0x220f3c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x220f40: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_220f44:
    // 0x220f44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x220f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220f48: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_220f4c:
    // 0x220f4c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x220f50: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x220f54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220F54u;
    {
        const bool branch_taken_0x220f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x220F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F54u;
        // 0x220f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f54) {
            ctx->pc = 0x220F78u;
            goto label_220f78;
        }
    }
    ctx->pc = 0x220F5Cu;
    // 0x220f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220f64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x220f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x220f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x220f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f70: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x220F70u;
    {
        const bool branch_taken_0x220f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F70u;
        // 0x220f74: 0x2408006c  addiu       $t0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f70) {
            ctx->pc = 0x220FFCu;
            goto label_220ffc;
        }
    }
    ctx->pc = 0x220F78u;
label_220f78:
    // 0x220f78: 0xc088f88  jal         func_223E20
    ctx->pc = 0x220F78u;
    SET_GPR_U32(ctx, 31, 0x220F80u);
    ctx->pc = 0x220F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F78u;
    // 0x220f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x220F78u, 0x220F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F80u;
label_220f80:
    // 0x220f80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220F80u;
    {
        const bool branch_taken_0x220f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F80u;
        // 0x220f84: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f80) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220F88u;
    // 0x220f88: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F88u;
    {
        const bool branch_taken_0x220f88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x220F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F88u;
        // 0x220f8c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f88) {
            ctx->pc = 0x220FA0u;
            goto label_220fa0;
        }
    }
    ctx->pc = 0x220F90u;
    // 0x220f90: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220F90u;
    {
        const bool branch_taken_0x220f90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x220F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F90u;
        // 0x220f94: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f90) {
            ctx->pc = 0x220FA0u;
            goto label_220fa0;
        }
    }
    ctx->pc = 0x220F98u;
    // 0x220f98: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x220F98u;
    {
        const bool branch_taken_0x220f98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x220f98) {
            ctx->pc = 0x220FA4u;
            goto label_220fa4;
        }
    }
    ctx->pc = 0x220FA0u;
label_220fa0:
    // 0x220fa0: 0x241300b7  addiu       $s3, $zero, 0xB7
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_220fa4:
    // 0x220fa4: 0xc089f98  jal         func_227E60
    ctx->pc = 0x220FA4u;
    SET_GPR_U32(ctx, 31, 0x220FACu);
    ctx->pc = 0x220FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FA4u;
    // 0x220fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x220FA4u, 0x220FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FACu;
label_220fac:
    // 0x220fac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x220FACu;
    {
        const bool branch_taken_0x220fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FACu;
        // 0x220fb0: 0x240800b8  addiu       $t0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fac) {
            ctx->pc = 0x220FE4u;
            goto label_220fe4;
        }
    }
    ctx->pc = 0x220FB4u;
    // 0x220fb4: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x220FB4u;
    {
        const bool branch_taken_0x220fb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x220FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FB4u;
        // 0x220fb8: 0x2408007f  addiu       $t0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fb4) {
            ctx->pc = 0x220FE4u;
            goto label_220fe4;
        }
    }
    ctx->pc = 0x220FBCu;
    // 0x220fbc: 0xc088f88  jal         func_223E20
    ctx->pc = 0x220FBCu;
    SET_GPR_U32(ctx, 31, 0x220FC4u);
    ctx->pc = 0x220FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FBCu;
    // 0x220fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x220FBCu, 0x220FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FC4u;
label_220fc4:
    // 0x220fc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220FC4u;
    {
        const bool branch_taken_0x220fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FC4u;
        // 0x220fc8: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fc4) {
            ctx->pc = 0x220FE4u;
            goto label_220fe4;
        }
    }
    ctx->pc = 0x220FCCu;
    // 0x220fcc: 0x26a2fffb  addiu       $v0, $s5, -0x5
    ctx->pc = 0x220fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967291));
    // 0x220fd0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x220fd4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x220fd8: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220fdc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x220fe0: 0x43400a  movz        $t0, $v0, $v1
    ctx->pc = 0x220fe0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_220fe4:
    // 0x220fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220fec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220ff0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x220ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ff4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x220ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ff8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x220ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220ffc:
    // 0x220ffc: 0xc0882b2  jal         func_220AC8
    ctx->pc = 0x220FFCu;
    SET_GPR_U32(ctx, 31, 0x221004u);
    ctx->pc = 0x221000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FFCu;
    // 0x221000: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x220FFCu, 0x221004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221004u;
label_221004:
    // 0x221004: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x221004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221008: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x221008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22100c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x22100cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221010: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x221010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221014: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x221014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221018: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x221018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22101c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x22101cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221024: 0x3e00008  jr          $ra
    ctx->pc = 0x221024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221024u;
        // 0x221028: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22102Cu;
    // 0x22102c: 0x0  nop
    ctx->pc = 0x22102cu;
    // NOP
    // 0x221030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x221030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x221034: 0x0  nop
    ctx->pc = 0x221034u;
    // NOP
    ctx->pc = 0x221038u;
}
