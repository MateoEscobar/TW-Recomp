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

// Function: sub_00324D90
// Address: 0x324d90 - 0x324ef0
void sub_00324D90_0x324d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324D90_0x324d90");
#endif

    switch (ctx->pc) {
        case 0x324dc4u: goto label_324dc4;
        case 0x324dd8u: goto label_324dd8;
        case 0x324df0u: goto label_324df0;
        case 0x324df8u: goto label_324df8;
        case 0x324e04u: goto label_324e04;
        case 0x324e14u: goto label_324e14;
        case 0x324e20u: goto label_324e20;
        case 0x324e38u: goto label_324e38;
        case 0x324e50u: goto label_324e50;
        case 0x324e64u: goto label_324e64;
        case 0x324e70u: goto label_324e70;
        case 0x324e98u: goto label_324e98;
        case 0x324ea0u: goto label_324ea0;
        case 0x324ec4u: goto label_324ec4;
        default: break;
    }

    ctx->pc = 0x324d90u;

    // 0x324d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x324d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x324d94: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x324d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x324d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d9c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x324d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x324da0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x324da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x324da4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x324da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x324da8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x324da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324dac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x324dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x324db0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x324db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x324db4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x324db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x324db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324dbc: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x324DBCu;
    SET_GPR_U32(ctx, 31, 0x324DC4u);
    ctx->pc = 0x324DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DBCu;
    // 0x324dc0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x324DBCu, 0x324DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DC4u;
label_324dc4:
    // 0x324dc4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324dc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x324dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dcc: 0x24a548f8  addiu       $a1, $a1, 0x48F8
    ctx->pc = 0x324dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
    // 0x324dd0: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x324DD0u;
    SET_GPR_U32(ctx, 31, 0x324DD8u);
    ctx->pc = 0x324DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DD0u;
    // 0x324dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x324DD0u, 0x324DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DD8u;
label_324dd8:
    // 0x324dd8: 0x1a600029  blez        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x324DD8u;
    {
        const bool branch_taken_0x324dd8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x324DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD8u;
        // 0x324ddc: 0x8e8269ec  lw          $v0, 0x69EC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dd8) {
            ctx->pc = 0x324E80u;
            goto label_324e80;
        }
    }
    ctx->pc = 0x324DE0u;
    // 0x324de0: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x324de0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
    // 0x324de4: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x324de4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x324de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dec: 0x0  nop
    ctx->pc = 0x324decu;
    // NOP
label_324df0:
    // 0x324df0: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x324DF0u;
    SET_GPR_U32(ctx, 31, 0x324DF8u);
    ctx->pc = 0x324DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DF0u;
    // 0x324df4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x324DF0u, 0x324DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DF8u;
label_324df8:
    // 0x324df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dfc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x324DFCu;
    SET_GPR_U32(ctx, 31, 0x324E04u);
    ctx->pc = 0x324E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DFCu;
    // 0x324e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x324DFCu, 0x324E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E04u;
label_324e04:
    // 0x324e04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x324e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e0c: 0xc0c9048  jal         func_324120
    ctx->pc = 0x324E0Cu;
    SET_GPR_U32(ctx, 31, 0x324E14u);
    ctx->pc = 0x324E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E0Cu;
    // 0x324e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x324E0Cu, 0x324E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E14u;
label_324e14:
    // 0x324e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e18: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x324E18u;
    SET_GPR_U32(ctx, 31, 0x324E20u);
    ctx->pc = 0x324E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E18u;
    // 0x324e1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x324E18u, 0x324E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E20u;
label_324e20:
    // 0x324e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e24: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x324E24u;
    {
        const bool branch_taken_0x324e24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x324E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E24u;
        // 0x324e28: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e24) {
            ctx->pc = 0x324E3Cu;
            goto label_324e3c;
        }
    }
    ctx->pc = 0x324E2Cu;
    // 0x324e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e30: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x324E30u;
    SET_GPR_U32(ctx, 31, 0x324E38u);
    ctx->pc = 0x324E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E30u;
    // 0x324e34: 0x26c54908  addiu       $a1, $s6, 0x4908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 18696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x324E30u, 0x324E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E38u;
label_324e38:
    // 0x324e38: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x324e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_324e3c:
    // 0x324e3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324E3Cu;
    {
        const bool branch_taken_0x324e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E3Cu;
        // 0x324e40: 0x8e8269ec  lw          $v0, 0x69EC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e3c) {
            ctx->pc = 0x324E54u;
            goto label_324e54;
        }
    }
    ctx->pc = 0x324E44u;
    // 0x324e44: 0x26a44938  addiu       $a0, $s5, 0x4938
    ctx->pc = 0x324e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 18744));
    // 0x324e48: 0xc10c6c2  jal         func_431B08
    ctx->pc = 0x324E48u;
    SET_GPR_U32(ctx, 31, 0x324E50u);
    ctx->pc = 0x324E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E48u;
    // 0x324e4c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B08u, 0x324E48u, 0x324E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E50u;
label_324e50:
    // 0x324e50: 0x8e8269ec  lw          $v0, 0x69EC($s4)
    ctx->pc = 0x324e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
label_324e54:
    // 0x324e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x324e5c: 0xc10c6c2  jal         func_431B08
    ctx->pc = 0x324E5Cu;
    SET_GPR_U32(ctx, 31, 0x324E64u);
    ctx->pc = 0x324E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E5Cu;
    // 0x324e60: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B08u, 0x324E5Cu, 0x324E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E64u;
label_324e64:
    // 0x324e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e68: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x324E68u;
    SET_GPR_U32(ctx, 31, 0x324E70u);
    ctx->pc = 0x324E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E68u;
    // 0x324e6c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x324E68u, 0x324E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E70u;
label_324e70:
    // 0x324e70: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x324e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x324e74: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x324E74u;
    {
        const bool branch_taken_0x324e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E74u;
        // 0x324e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e74) {
            ctx->pc = 0x324DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324df0;
        }
    }
    ctx->pc = 0x324E7Cu;
    // 0x324e7c: 0x8e8269ec  lw          $v0, 0x69EC($s4)
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
label_324e80:
    // 0x324e80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x324e84: 0x3c120004  lui         $s2, 0x4
    ctx->pc = 0x324e84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4 << 16));
    // 0x324e88: 0x248448f0  addiu       $a0, $a0, 0x48F0
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18672));
    // 0x324e8c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324e90: 0xc10c6c2  jal         func_431B08
    ctx->pc = 0x324E90u;
    SET_GPR_U32(ctx, 31, 0x324E98u);
    ctx->pc = 0x324E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E90u;
    // 0x324e94: 0x3652ffff  ori         $s2, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B08u, 0x324E90u, 0x324E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E98u;
label_324e98:
    // 0x324e98: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x324e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x324e9c: 0x0  nop
    ctx->pc = 0x324e9cu;
    // NOP
label_324ea0:
    // 0x324ea0: 0x0  nop
    ctx->pc = 0x324ea0u;
    // NOP
    // 0x324ea4: 0x0  nop
    ctx->pc = 0x324ea4u;
    // NOP
    // 0x324ea8: 0x0  nop
    ctx->pc = 0x324ea8u;
    // NOP
    // 0x324eac: 0x0  nop
    ctx->pc = 0x324eacu;
    // NOP
    // 0x324eb0: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324EB0u;
    {
        const bool branch_taken_0x324eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x324EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EB0u;
        // 0x324eb4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324eb0) {
            ctx->pc = 0x324EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ea0;
        }
    }
    ctx->pc = 0x324EB8u;
    // 0x324eb8: 0x8e8269ec  lw          $v0, 0x69EC($s4)
    ctx->pc = 0x324eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
    // 0x324ebc: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x324EBCu;
    SET_GPR_U32(ctx, 31, 0x324EC4u);
    ctx->pc = 0x324EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EBCu;
    // 0x324ec0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x324EBCu, 0x324EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EC4u;
label_324ec4:
    // 0x324ec4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x324ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ecc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x324eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324ed0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x324ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324ed4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x324ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324ed8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x324ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324edc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x324edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ee0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x324ee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x324EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EE8u;
        // 0x324eec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324EF0u;
}
