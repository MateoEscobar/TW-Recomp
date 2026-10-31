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

// Function: sub_004A6D28
// Address: 0x4a6d28 - 0x4a6f88
void sub_004A6D28_0x4a6d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6D28_0x4a6d28");
#endif

    switch (ctx->pc) {
        case 0x4a6da0u: goto label_4a6da0;
        case 0x4a6df8u: goto label_4a6df8;
        case 0x4a6e04u: goto label_4a6e04;
        case 0x4a6e28u: goto label_4a6e28;
        case 0x4a6e60u: goto label_4a6e60;
        case 0x4a6e90u: goto label_4a6e90;
        case 0x4a6ed0u: goto label_4a6ed0;
        case 0x4a6ee4u: goto label_4a6ee4;
        case 0x4a6f10u: goto label_4a6f10;
        case 0x4a6f1cu: goto label_4a6f1c;
        case 0x4a6f34u: goto label_4a6f34;
        case 0x4a6f40u: goto label_4a6f40;
        default: break;
    }

    ctx->pc = 0x4a6d28u;

    // 0x4a6d28: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4a6d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x4a6d2c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a6d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4a6d30: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a6d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a6d34: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x4a6d34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6d38: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a6d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a6d3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6d40: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a6d44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6d48: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a6d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a6d4c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a6d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a6d50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a6d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a6d54: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a6d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a6d58: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a6d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4a6d5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a6d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a6d60: 0xffa700f8  sd          $a3, 0xF8($sp)
    ctx->pc = 0x4a6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 7));
    // 0x4a6d64: 0xffa80100  sd          $t0, 0x100($sp)
    ctx->pc = 0x4a6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 8));
    // 0x4a6d68: 0xffa90108  sd          $t1, 0x108($sp)
    ctx->pc = 0x4a6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 9));
    // 0x4a6d6c: 0xffaa0110  sd          $t2, 0x110($sp)
    ctx->pc = 0x4a6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 10));
    // 0x4a6d70: 0xffab0118  sd          $t3, 0x118($sp)
    ctx->pc = 0x4a6d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 11));
    // 0x4a6d74: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x4a6d74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4a6d78: 0xe7ae00ec  swc1        $f14, 0xEC($sp)
    ctx->pc = 0x4a6d78u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x4a6d7c: 0xe7b000f0  swc1        $f16, 0xF0($sp)
    ctx->pc = 0x4a6d7cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4a6d80: 0x1240005c  beqz        $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x4A6D80u;
    {
        const bool branch_taken_0x4a6d80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D80u;
        // 0x4a6d84: 0xe7b200f4  swc1        $f18, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d80) {
            ctx->pc = 0x4A6EF4u;
            goto label_4a6ef4;
        }
    }
    ctx->pc = 0x4A6D88u;
    // 0x4a6d88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a6d8c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4A6D8Cu;
    {
        const bool branch_taken_0x4a6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D8Cu;
        // 0x4a6d90: 0x27b100f8  addiu       $s1, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d8c) {
            ctx->pc = 0x4A6F24u;
            goto label_4a6f24;
        }
    }
    ctx->pc = 0x4A6D94u;
    // 0x4a6d94: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a6d94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6d98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A6D98u;
    {
        const bool branch_taken_0x4a6d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D98u;
        // 0x4a6d9c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d98) {
            ctx->pc = 0x4A6DBCu;
            goto label_4a6dbc;
        }
    }
    ctx->pc = 0x4A6DA0u;
label_4a6da0:
    // 0x4a6da0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x4a6da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4a6da4: 0x8e26fff8  lw          $a2, -0x8($s1)
    ctx->pc = 0x4a6da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x4a6da8: 0x0  nop
    ctx->pc = 0x4a6da8u;
    // NOP
    // 0x4a6dac: 0x0  nop
    ctx->pc = 0x4a6dacu;
    // NOP
    // 0x4a6db0: 0x0  nop
    ctx->pc = 0x4a6db0u;
    // NOP
    // 0x4a6db4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A6DB4u;
    {
        const bool branch_taken_0x4a6db4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DB4u;
        // 0x4a6db8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6db4) {
            ctx->pc = 0x4A6DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6da0;
        }
    }
    ctx->pc = 0x4A6DBCu;
label_4a6dbc:
    // 0x4a6dbc: 0x12c00060  beqz        $s6, . + 4 + (0x60 << 2)
    ctx->pc = 0x4A6DBCu;
    {
        const bool branch_taken_0x4a6dbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DBCu;
        // 0x4a6dc0: 0x8f848a88  lw          $a0, -0x7578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6dbc) {
            ctx->pc = 0x4A6F40u;
            goto label_4a6f40;
        }
    }
    ctx->pc = 0x4A6DC4u;
    // 0x4a6dc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a6dc8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a6dcc: 0x8e570004  lw          $s7, 0x4($s2)
    ctx->pc = 0x4a6dccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a6dd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a6dd4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4a6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x4a6dd8: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x4a6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x4a6ddc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a6ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a6de0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A6DE0u;
    {
        const bool branch_taken_0x4a6de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DE0u;
        // 0x4a6de4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6de0) {
            ctx->pc = 0x4A6E0Cu;
            goto label_4a6e0c;
        }
    }
    ctx->pc = 0x4A6DE8u;
    // 0x4a6de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6dec: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x4a6decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4a6df0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x4A6DF0u;
    {
        const bool branch_taken_0x4a6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DF0u;
        // 0x4a6df4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6df0) {
            ctx->pc = 0x4A6F08u;
            goto label_4a6f08;
        }
    }
    ctx->pc = 0x4A6DF8u;
label_4a6df8:
    // 0x4a6df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6dfc: 0xc1294aa  jal         func_4A52A8
    ctx->pc = 0x4A6DFCu;
    SET_GPR_U32(ctx, 31, 0x4A6E04u);
    ctx->pc = 0x4A6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6DFCu;
    // 0x4a6e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A52A8u, 0x4A6DFCu, 0x4A6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6E04u;
label_4a6e04:
    // 0x4a6e04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4A6E04u;
    {
        const bool branch_taken_0x4a6e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6e04) {
            ctx->pc = 0x4A6E98u;
            goto label_4a6e98;
        }
    }
    ctx->pc = 0x4A6E0Cu;
label_4a6e0c:
    // 0x4a6e0c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a6e10: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a6e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6e14: 0x2e2a818  mult        $s5, $s7, $v0
    ctx->pc = 0x4a6e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x4a6e18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a6e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6e1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A6E1Cu;
    {
        const bool branch_taken_0x4a6e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E1Cu;
        // 0x4a6e20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e1c) {
            ctx->pc = 0x4A6E78u;
            goto label_4a6e78;
        }
    }
    ctx->pc = 0x4A6E24u;
    // 0x4a6e24: 0x0  nop
    ctx->pc = 0x4a6e24u;
    // NOP
label_4a6e28:
    // 0x4a6e28: 0x5280000f  beql        $s4, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4A6E28u;
    {
        const bool branch_taken_0x4a6e28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6e28) {
            ctx->pc = 0x4A6E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6E28u;
            // 0x4a6e2c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6E68u;
            goto label_4a6e68;
        }
    }
    ctx->pc = 0x4A6E30u;
    // 0x4a6e30: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a6e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6E34u;
    {
        const bool branch_taken_0x4a6e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E34u;
        // 0x4a6e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e34) {
            ctx->pc = 0x4A6E48u;
            goto label_4a6e48;
        }
    }
    ctx->pc = 0x4A6E3Cu;
    // 0x4a6e3c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4a6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a6e40: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A6E40u;
    {
        const bool branch_taken_0x4a6e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6e40) {
            ctx->pc = 0x4A6E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6E40u;
            // 0x4a6e44: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6E48u;
            goto label_4a6e48;
        }
    }
    ctx->pc = 0x4A6E48u;
label_4a6e48:
    // 0x4a6e48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A6E48u;
    {
        const bool branch_taken_0x4a6e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E48u;
        // 0x4a6e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e48) {
            ctx->pc = 0x4A6E58u;
            goto label_4a6e58;
        }
    }
    ctx->pc = 0x4A6E50u;
    // 0x4a6e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a6e54: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x4a6e54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4a6e58:
    // 0x4a6e58: 0xc129cc4  jal         func_4A7310
    ctx->pc = 0x4A6E58u;
    SET_GPR_U32(ctx, 31, 0x4A6E60u);
    ctx->pc = 0x4A6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6E58u;
    // 0x4a6e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7310u, 0x4A6E58u, 0x4A6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6E60u;
label_4a6e60:
    // 0x4a6e60: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4A6E60u;
    {
        const bool branch_taken_0x4a6e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E60u;
        // 0x4a6e64: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e60) {
            ctx->pc = 0x4A6DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6df8;
        }
    }
    ctx->pc = 0x4A6E68u;
label_4a6e68:
    // 0x4a6e68: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4a6e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6e6c: 0x8e26fff8  lw          $a2, -0x8($s1)
    ctx->pc = 0x4a6e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x4a6e70: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x4a6e70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x4a6e74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a6e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4a6e78:
    // 0x4a6e78: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A6E78u;
    {
        const bool branch_taken_0x4a6e78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E78u;
        // 0x4a6e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e78) {
            ctx->pc = 0x4A6E98u;
            goto label_4a6e98;
        }
    }
    ctx->pc = 0x4A6E80u;
    // 0x4a6e80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a6e84: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x4a6e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a6e88: 0xc129782  jal         func_4A5E08
    ctx->pc = 0x4A6E88u;
    SET_GPR_U32(ctx, 31, 0x4A6E90u);
    ctx->pc = 0x4A6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6E88u;
    // 0x4a6e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5E08u, 0x4A6E88u, 0x4A6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6E90u;
label_4a6e90:
    // 0x4a6e90: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4A6E90u;
    {
        const bool branch_taken_0x4a6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6e90) {
            ctx->pc = 0x4A6E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6e28;
        }
    }
    ctx->pc = 0x4A6E98u;
label_4a6e98:
    // 0x4a6e98: 0x16760005  bne         $s3, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A6E98u;
    {
        const bool branch_taken_0x4a6e98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x4A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E98u;
        // 0x4a6e9c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e98) {
            ctx->pc = 0x4A6EB0u;
            goto label_4a6eb0;
        }
    }
    ctx->pc = 0x4A6EA0u;
    // 0x4a6ea0: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A6EA0u;
    {
        const bool branch_taken_0x4a6ea0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ea0) {
            ctx->pc = 0x4A6EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6EA0u;
            // 0x4a6ea4: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6EA8u;
            goto label_4a6ea8;
        }
    }
    ctx->pc = 0x4A6EA8u;
label_4a6ea8:
    // 0x4a6ea8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x4A6EA8u;
    {
        const bool branch_taken_0x4a6ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EA8u;
        // 0x4a6eac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ea8) {
            ctx->pc = 0x4A6F44u;
            goto label_4a6f44;
        }
    }
    ctx->pc = 0x4A6EB0u;
label_4a6eb0:
    // 0x4a6eb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6eb8: 0x12620021  beq         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A6EB8u;
    {
        const bool branch_taken_0x4a6eb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EB8u;
        // 0x4a6ebc: 0x2771821  addu        $v1, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6eb8) {
            ctx->pc = 0x4A6F40u;
            goto label_4a6f40;
        }
    }
    ctx->pc = 0x4A6EC0u;
    // 0x4a6ec0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a6ec4: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x4a6ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4a6ec8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a6ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6ecc: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4a6eccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_4a6ed0:
    // 0x4a6ed0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a6ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a6ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6ed8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4a6ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x4a6edc: 0xc1294aa  jal         func_4A52A8
    ctx->pc = 0x4A6EDCu;
    SET_GPR_U32(ctx, 31, 0x4A6EE4u);
    ctx->pc = 0x4A6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6EDCu;
    // 0x4a6ee0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A52A8u, 0x4A6EDCu, 0x4A6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6EE4u;
label_4a6ee4:
    // 0x4a6ee4: 0x1671fffa  bne         $s3, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A6EE4u;
    {
        const bool branch_taken_0x4a6ee4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x4A6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EE4u;
        // 0x4a6ee8: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ee4) {
            ctx->pc = 0x4A6ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6ed0;
        }
    }
    ctx->pc = 0x4A6EECu;
    // 0x4a6eec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4A6EECu;
    {
        const bool branch_taken_0x4a6eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EECu;
        // 0x4a6ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6eec) {
            ctx->pc = 0x4A6F44u;
            goto label_4a6f44;
        }
    }
    ctx->pc = 0x4A6EF4u;
label_4a6ef4:
    // 0x4a6ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6ef8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a6efc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a6efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a6f00: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x4a6f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x4a6f04: 0x0  nop
    ctx->pc = 0x4a6f04u;
    // NOP
label_4a6f08:
    // 0x4a6f08: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A6F08u;
    SET_GPR_U32(ctx, 31, 0x4A6F10u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6F08u, 0x4A6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F10u;
label_4a6f10:
    // 0x4a6f10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6f14: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A6F14u;
    SET_GPR_U32(ctx, 31, 0x4A6F1Cu);
    ctx->pc = 0x4A6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F14u;
    // 0x4a6f18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A6F14u, 0x4A6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F1Cu;
label_4a6f1c:
    // 0x4a6f1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A6F1Cu;
    {
        const bool branch_taken_0x4a6f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F1Cu;
        // 0x4a6f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6f1c) {
            ctx->pc = 0x4A6F44u;
            goto label_4a6f44;
        }
    }
    ctx->pc = 0x4A6F24u;
label_4a6f24:
    // 0x4a6f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6f28: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4a6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4a6f2c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A6F2Cu;
    SET_GPR_U32(ctx, 31, 0x4A6F34u);
    ctx->pc = 0x4A6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F2Cu;
    // 0x4a6f30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6F2Cu, 0x4A6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F34u;
label_4a6f34:
    // 0x4a6f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6f38: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A6F38u;
    SET_GPR_U32(ctx, 31, 0x4A6F40u);
    ctx->pc = 0x4A6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F38u;
    // 0x4a6f3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A6F38u, 0x4A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F40u;
label_4a6f40:
    // 0x4a6f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6f44:
    // 0x4a6f44: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a6f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a6f48: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a6f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a6f4c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a6f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a6f50: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a6f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a6f54: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a6f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a6f58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a6f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a6f5c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a6f5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a6f60: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a6f60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6f64: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a6f64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F6Cu;
        // 0x4a6f70: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6F74u;
    // 0x4a6f74: 0x0  nop
    ctx->pc = 0x4a6f74u;
    // NOP
    // 0x4a6f78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a6f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a6f7c: 0x0  nop
    ctx->pc = 0x4a6f7cu;
    // NOP
    // 0x4a6f80: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4a6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4a6f84: 0x0  nop
    ctx->pc = 0x4a6f84u;
    // NOP
    ctx->pc = 0x4a6f88u;
}
