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

// Function: sub_002F8D88
// Address: 0x2f8d88 - 0x2f8e70
void sub_002F8D88_0x2f8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8D88_0x2f8d88");
#endif

    switch (ctx->pc) {
        case 0x2f8de8u: goto label_2f8de8;
        case 0x2f8e00u: goto label_2f8e00;
        case 0x2f8e10u: goto label_2f8e10;
        default: break;
    }

    ctx->pc = 0x2f8d88u;

    // 0x2f8d88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f8d8c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2f8d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2f8d90: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f8d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f8d94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f8d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f8d98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f8d9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f8da0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2f8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2f8da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8da8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2f8da8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2f8dac: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f8dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f8db0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8db4: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x2f8db4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2f8db8: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x2f8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x2f8dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8DBCu;
    {
        const bool branch_taken_0x2f8dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DBCu;
        // 0x2f8dc0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8dbc) {
            ctx->pc = 0x2F8DCCu;
            goto label_2f8dcc;
        }
    }
    ctx->pc = 0x2F8DC4u;
    // 0x2f8dc4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F8DC4u;
    {
        const bool branch_taken_0x2f8dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DC4u;
        // 0x2f8dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8dc4) {
            ctx->pc = 0x2F8E44u;
            goto label_2f8e44;
        }
    }
    ctx->pc = 0x2F8DCCu;
label_2f8dcc:
    // 0x2f8dcc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2f8dd0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f8dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2f8dd4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f8dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f8dd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f8dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ddc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F8DDCu;
    {
        const bool branch_taken_0x2f8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DDCu;
        // 0x2f8de0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ddc) {
            ctx->pc = 0x2F8E40u;
            goto label_2f8e40;
        }
    }
    ctx->pc = 0x2F8DE4u;
    // 0x2f8de4: 0x2651015c  addiu       $s1, $s2, 0x15C
    ctx->pc = 0x2f8de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
label_2f8de8:
    // 0x2f8de8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f8de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f8dec: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F8DECu;
    {
        const bool branch_taken_0x2f8dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DECu;
        // 0x2f8df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8dec) {
            ctx->pc = 0x2F8E2Cu;
            goto label_2f8e2c;
        }
    }
    ctx->pc = 0x2F8DF4u;
    // 0x2f8df4: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x2f8df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2f8df8: 0xc104a44  jal         func_412910
    ctx->pc = 0x2F8DF8u;
    SET_GPR_U32(ctx, 31, 0x2F8E00u);
    ctx->pc = 0x2F8DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8DF8u;
    // 0x2f8dfc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x2F8DF8u, 0x2F8E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E00u;
label_2f8e00:
    // 0x2f8e00: 0xc6140040  lwc1        $f20, 0x40($s0)
    ctx->pc = 0x2f8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f8e04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f8e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e08: 0xc0cdb5a  jal         func_336D68
    ctx->pc = 0x2F8E08u;
    SET_GPR_U32(ctx, 31, 0x2F8E10u);
    ctx->pc = 0x2F8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E08u;
    // 0x2f8e0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D68u, 0x2F8E08u, 0x2F8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E10u;
label_2f8e10:
    // 0x2f8e10: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f8e10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2f8e14: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2f8e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8e18: 0x0  nop
    ctx->pc = 0x2f8e18u;
    // NOP
    // 0x2f8e1c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8E1Cu;
    {
        const bool branch_taken_0x2f8e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8e1c) {
            ctx->pc = 0x2F8E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E1Cu;
            // 0x2f8e20: 0x8e42017c  lw          $v0, 0x17C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E30u;
            goto label_2f8e30;
        }
    }
    ctx->pc = 0x2F8E24u;
    // 0x2f8e24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f8e24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2f8e28: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2f8e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e2c:
    // 0x2f8e2c: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x2f8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f8e30:
    // 0x2f8e30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f8e34: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2f8e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f8e38: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F8E38u;
    {
        const bool branch_taken_0x2f8e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E38u;
        // 0x2f8e3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e38) {
            ctx->pc = 0x2F8DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8de8;
        }
    }
    ctx->pc = 0x2F8E40u;
label_2f8e40:
    // 0x2f8e40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f8e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e44:
    // 0x2f8e44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f8e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8e48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f8e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8e4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f8e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8e50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f8e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8e54: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f8e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8e58: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f8e58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8e60: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2f8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f8e64: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f8e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E68u;
        // 0x2f8e6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8E70u;
}
