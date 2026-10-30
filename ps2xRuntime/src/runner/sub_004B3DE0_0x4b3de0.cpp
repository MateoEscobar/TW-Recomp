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

// Function: sub_004B3DE0
// Address: 0x4b3de0 - 0x4b3f18
void sub_004B3DE0_0x4b3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3DE0_0x4b3de0");
#endif

    switch (ctx->pc) {
        case 0x4b3e40u: goto label_4b3e40;
        case 0x4b3e70u: goto label_4b3e70;
        case 0x4b3e90u: goto label_4b3e90;
        case 0x4b3ea4u: goto label_4b3ea4;
        case 0x4b3ed0u: goto label_4b3ed0;
        case 0x4b3ee8u: goto label_4b3ee8;
        default: break;
    }

    ctx->pc = 0x4b3de0u;

    // 0x4b3de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b3de4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b3de8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b3de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b3dec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4b3decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3df0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b3df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b3df4: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x4b3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4b3df8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b3dfc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x4b3dfcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4b3e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3e04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b3e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b3e08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b3e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3e0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b3e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b3e10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b3e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3e14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b3e18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b3e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3e1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B3E1Cu;
    {
        const bool branch_taken_0x4b3e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3e1c) {
            ctx->pc = 0x4B3E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3E1Cu;
            // 0x4b3e20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3E24u;
            goto label_4b3e24;
        }
    }
    ctx->pc = 0x4B3E24u;
label_4b3e24:
    // 0x4b3e24: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4b3e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3e28: 0x1812  mflo        $v1
    ctx->pc = 0x4b3e28u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4b3e2c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x4b3e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4b3e30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B3E30u;
    {
        const bool branch_taken_0x4b3e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E30u;
        // 0x4b3e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e30) {
            ctx->pc = 0x4B3E64u;
            goto label_4b3e64;
        }
    }
    ctx->pc = 0x4B3E38u;
    // 0x4b3e38: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x4b3e38u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b3e3c: 0x0  nop
    ctx->pc = 0x4b3e3cu;
    // NOP
label_4b3e40:
    // 0x4b3e40: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4b3e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4b3e44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4b3e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b3e48: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x4b3e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4b3e4c: 0x0  nop
    ctx->pc = 0x4b3e4cu;
    // NOP
    // 0x4b3e50: 0x0  nop
    ctx->pc = 0x4b3e50u;
    // NOP
    // 0x4b3e54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B3E54u;
    {
        const bool branch_taken_0x4b3e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3e54) {
            ctx->pc = 0x4B3E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3e40;
        }
    }
    ctx->pc = 0x4B3E5Cu;
    // 0x4b3e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3E5Cu;
    {
        const bool branch_taken_0x4b3e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3e5c) {
            ctx->pc = 0x4B3E68u;
            goto label_4b3e68;
        }
    }
    ctx->pc = 0x4B3E64u;
label_4b3e64:
    // 0x4b3e64: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x4b3e64u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_4b3e68:
    // 0x4b3e68: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B3E68u;
    SET_GPR_U32(ctx, 31, 0x4B3E70u);
    ctx->pc = 0x4B3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3E68u;
    // 0x4b3e6c: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B3E68u, 0x4B3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3E70u;
label_4b3e70:
    // 0x4b3e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3e78: 0xac950014  sw          $s5, 0x14($a0)
    ctx->pc = 0x4b3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    // 0x4b3e7c: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x4B3E7Cu;
    {
        const bool branch_taken_0x4b3e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3E7Cu;
        // 0x4b3e80: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e7c) {
            ctx->pc = 0x4B3EBCu;
            goto label_4b3ebc;
        }
    }
    ctx->pc = 0x4B3E84u;
    // 0x4b3e84: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x4b3e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x4b3e88: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x4b3e88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3e8c: 0x0  nop
    ctx->pc = 0x4b3e8cu;
    // NOP
label_4b3e90:
    // 0x4b3e90: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b3e94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b3e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b3e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b3e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4b3e9c: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x4B3EA4u);
    ctx->pc = 0x4B3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3E9Cu;
    // 0x4b3ea0: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B3E9Cu, 0x4B3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EA4u;
label_4b3ea4:
    // 0x4b3ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ea8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x4b3ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4b3eac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4B3EACu;
    {
        const bool branch_taken_0x4b3eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3eac) {
            ctx->pc = 0x4B3EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3EACu;
            // 0x4b3eb0: 0x82060000  lb          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3e90;
        }
    }
    ctx->pc = 0x4B3EB4u;
    // 0x4b3eb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3EB4u;
    {
        const bool branch_taken_0x4b3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3EB4u;
        // 0x4b3eb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3eb4) {
            ctx->pc = 0x4B3EC0u;
            goto label_4b3ec0;
        }
    }
    ctx->pc = 0x4B3EBCu;
label_4b3ebc:
    // 0x4b3ebc: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x4b3ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_4b3ec0:
    // 0x4b3ec0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x4b3ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4b3ec4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B3EC4u;
    {
        const bool branch_taken_0x4b3ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3EC4u;
        // 0x4b3ec8: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ec4) {
            ctx->pc = 0x4B3EF0u;
            goto label_4b3ef0;
        }
    }
    ctx->pc = 0x4B3ECCu;
    // 0x4b3ecc: 0x0  nop
    ctx->pc = 0x4b3eccu;
    // NOP
label_4b3ed0:
    // 0x4b3ed0: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x4b3ed0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3ed4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b3ed8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b3ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4b3edc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4b3edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4b3ee0: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B3EE0u;
    SET_GPR_U32(ctx, 31, 0x4B3EE8u);
    ctx->pc = 0x4B3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EE0u;
    // 0x4b3ee4: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B3EE0u, 0x4B3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EE8u;
label_4b3ee8:
    // 0x4b3ee8: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B3EE8u;
    {
        const bool branch_taken_0x4b3ee8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3EE8u;
        // 0x4b3eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ee8) {
            ctx->pc = 0x4B3ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3ed0;
        }
    }
    ctx->pc = 0x4B3EF0u;
label_4b3ef0:
    // 0x4b3ef0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b3ef4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ef8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b3ef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b3efc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b3efcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b3f00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b3f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b3f04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b3f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3f08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b3f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3f10: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F10u;
        // 0x4b3f14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3F18u;
}
