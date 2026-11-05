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

// Function: sub_004B8DB8
// Address: 0x4b8db8 - 0x4b8f10
void sub_004B8DB8_0x4b8db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8DB8_0x4b8db8");
#endif

    switch (ctx->pc) {
        case 0x4b8ddcu: goto label_4b8ddc;
        case 0x4b8df8u: goto label_4b8df8;
        case 0x4b8e10u: goto label_4b8e10;
        case 0x4b8e7cu: goto label_4b8e7c;
        case 0x4b8ebcu: goto label_4b8ebc;
        case 0x4b8eccu: goto label_4b8ecc;
        case 0x4b8ee8u: goto label_4b8ee8;
        default: break;
    }

    ctx->pc = 0x4b8db8u;

    // 0x4b8db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b8db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b8dbc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b8dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b8dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8dc4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4b8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4b8dc8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b8dcc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b8dd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4b8dd4: 0xc12e800  jal         func_4BA000
    ctx->pc = 0x4B8DD4u;
    SET_GPR_U32(ctx, 31, 0x4B8DDCu);
    ctx->pc = 0x4B8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8DD4u;
    // 0x4b8dd8: 0x3c130059  lui         $s3, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA000u, 0x4B8DD4u, 0x4B8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8DDCu;
label_4b8ddc:
    // 0x4b8ddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b8ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8de0: 0x8e711974  lw          $s1, 0x1974($s3)
    ctx->pc = 0x4b8de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b8de4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b8de8: 0x12220042  beq         $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x4B8DE8u;
    {
        const bool branch_taken_0x4b8de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8DE8u;
        // 0x4b8dec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8de8) {
            ctx->pc = 0x4B8EF4u;
            goto label_4b8ef4;
        }
    }
    ctx->pc = 0x4B8DF0u;
    // 0x4b8df0: 0xc12f8d0  jal         func_4BE340
    ctx->pc = 0x4B8DF0u;
    SET_GPR_U32(ctx, 31, 0x4B8DF8u);
    ctx->pc = 0x4B8DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8DF0u;
    // 0x4b8df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE340u, 0x4B8DF0u, 0x4B8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8DF8u;
label_4b8df8:
    // 0x4b8df8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4B8DF8u;
    {
        const bool branch_taken_0x4b8df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8DF8u;
        // 0x4b8dfc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8df8) {
            ctx->pc = 0x4B8EF4u;
            goto label_4b8ef4;
        }
    }
    ctx->pc = 0x4B8E00u;
    // 0x4b8e00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b8e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b8e04: 0xdc250f28  ld          $a1, 0xF28($at)
    ctx->pc = 0x4b8e04u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590F28u));
    // 0x4b8e08: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B8E08u;
    SET_GPR_U32(ctx, 31, 0x4B8E10u);
    ctx->pc = 0x4B8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8E08u;
    // 0x4b8e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B8E08u, 0x4B8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8E10u;
label_4b8e10:
    // 0x4b8e10: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B8E10u;
    {
        const bool branch_taken_0x4b8e10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4B8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8E10u;
        // 0x4b8e14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8e10) {
            ctx->pc = 0x4B8E6Cu;
            goto label_4b8e6c;
        }
    }
    ctx->pc = 0x4B8E18u;
    // 0x4b8e18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b8e1c: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x4b8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x4b8e20: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b8e24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b8e28: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x4b8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x4b8e2c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b8e30: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8E30u;
    {
        const bool branch_taken_0x4b8e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8E30u;
        // 0x4b8e34: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8e30) {
            ctx->pc = 0x4B8E48u;
            goto label_4b8e48;
        }
    }
    ctx->pc = 0x4B8E38u;
    // 0x4b8e38: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b8e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b8e3c: 0xdc220f30  ld          $v0, 0xF30($at)
    ctx->pc = 0x4b8e3cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590F30u));
    // 0x4b8e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8E40u;
    {
        const bool branch_taken_0x4b8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8E40u;
        // 0x4b8e44: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8e40) {
            ctx->pc = 0x4B8E54u;
            goto label_4b8e54;
        }
    }
    ctx->pc = 0x4B8E48u;
label_4b8e48:
    // 0x4b8e48: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8e4c: 0xdc430ed8  ld          $v1, 0xED8($v0)
    ctx->pc = 0x4b8e4cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590ED8u));
    // 0x4b8e50: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b8e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b8e54:
    // 0x4b8e54: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b8e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b8e5c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B8E5Cu;
    {
        const bool branch_taken_0x4b8e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b8e5c) {
            ctx->pc = 0x4B8EC4u;
            goto label_4b8ec4;
        }
    }
    ctx->pc = 0x4B8E64u;
    // 0x4b8e64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B8E64u;
    {
        const bool branch_taken_0x4b8e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8e64) {
            ctx->pc = 0x4B8EB4u;
            goto label_4b8eb4;
        }
    }
    ctx->pc = 0x4B8E6Cu;
label_4b8e6c:
    // 0x4b8e6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b8e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b8e70: 0xdc250f38  ld          $a1, 0xF38($at)
    ctx->pc = 0x4b8e70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590F38u));
    // 0x4b8e74: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B8E74u;
    SET_GPR_U32(ctx, 31, 0x4B8E7Cu);
    ctx->pc = 0x4B8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8E74u;
    // 0x4b8e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B8E74u, 0x4B8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8E7Cu;
label_4b8e7c:
    // 0x4b8e7c: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B8E7Cu;
    {
        const bool branch_taken_0x4b8e7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8E7Cu;
        // 0x4b8e80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8e7c) {
            ctx->pc = 0x4B8EF4u;
            goto label_4b8ef4;
        }
    }
    ctx->pc = 0x4B8E84u;
    // 0x4b8e84: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8e88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8e8c: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x4b8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x4b8e90: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b8e94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b8e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b8e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8e9c: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x4b8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x4b8ea0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x4b8ea4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b8ea8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b8eac: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8EACu;
    {
        const bool branch_taken_0x4b8eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8EACu;
        // 0x4b8eb0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8eac) {
            ctx->pc = 0x4B8EC4u;
            goto label_4b8ec4;
        }
    }
    ctx->pc = 0x4B8EB4u;
label_4b8eb4:
    // 0x4b8eb4: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B8EB4u;
    SET_GPR_U32(ctx, 31, 0x4B8EBCu);
    ctx->pc = 0x4B8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EB4u;
    // 0x4b8eb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B8EB4u, 0x4B8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EBCu;
label_4b8ebc:
    // 0x4b8ebc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8EBCu;
    {
        const bool branch_taken_0x4b8ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8EBCu;
        // 0x4b8ec0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ebc) {
            ctx->pc = 0x4B8ED8u;
            goto label_4b8ed8;
        }
    }
    ctx->pc = 0x4B8EC4u;
label_4b8ec4:
    // 0x4b8ec4: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B8EC4u;
    SET_GPR_U32(ctx, 31, 0x4B8ECCu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B8EC4u, 0x4B8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8ECCu;
label_4b8ecc:
    // 0x4b8ecc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b8ed0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b8ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b8ed4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8ed8:
    // 0x4b8ed8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8ED8u;
    {
        const bool branch_taken_0x4b8ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8ed8) {
            ctx->pc = 0x4B8EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8ED8u;
            // 0x4b8edc: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8EF4u;
            goto label_4b8ef4;
        }
    }
    ctx->pc = 0x4B8EE0u;
    // 0x4b8ee0: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B8EE0u;
    SET_GPR_U32(ctx, 31, 0x4B8EE8u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B8EE0u, 0x4B8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EE8u;
label_4b8ee8:
    // 0x4b8ee8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8eec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b8ef0: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x4b8ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4b8ef4:
    // 0x4b8ef4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b8ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b8ef8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b8ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b8efc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b8efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b8f00: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b8f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b8f04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b8f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8f08: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F08u;
        // 0x4b8f0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8F10u;
}
