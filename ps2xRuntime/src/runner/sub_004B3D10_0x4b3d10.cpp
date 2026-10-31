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

// Function: sub_004B3D10
// Address: 0x4b3d10 - 0x4b3de0
void sub_004B3D10_0x4b3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3D10_0x4b3d10");
#endif

    switch (ctx->pc) {
        case 0x4b3d40u: goto label_4b3d40;
        case 0x4b3dacu: goto label_4b3dac;
        default: break;
    }

    ctx->pc = 0x4b3d10u;

    // 0x4b3d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b3d14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4b3d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b3d1c: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x4b3d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x4b3d20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3d24: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4b3d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3d2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b3d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d30: 0x8d100010  lw          $s0, 0x10($t0)
    ctx->pc = 0x4b3d30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4b3d34: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x4b3d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b3d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3d3c: 0x0  nop
    ctx->pc = 0x4b3d3cu;
    // NOP
label_4b3d40:
    // 0x4b3d40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b3d44: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4b3d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4b3d48: 0x150302a  slt         $a2, $t2, $s0
    ctx->pc = 0x4b3d48u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b3d4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4b3d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b3d50: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x4b3d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b3d54: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b3d58: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x4b3d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b3d5c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x4b3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4b3d60: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x4b3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b3d64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b3d68: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b3d6c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4b3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b3d70: 0x38c02  srl         $s1, $v1, 16
    ctx->pc = 0x4b3d70u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b3d74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b3d78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b3d7c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4B3D7Cu;
    {
        const bool branch_taken_0x4b3d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D7Cu;
        // 0x4b3d80: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d7c) {
            ctx->pc = 0x4B3D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3d40;
        }
    }
    ctx->pc = 0x4B3D84u;
    // 0x4b3d84: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B3D84u;
    {
        const bool branch_taken_0x4b3d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D84u;
        // 0x4b3d88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d84) {
            ctx->pc = 0x4B3DCCu;
            goto label_4b3dcc;
        }
    }
    ctx->pc = 0x4B3D8Cu;
    // 0x4b3d8c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4b3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4b3d90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4b3d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4b3d94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B3D94u;
    {
        const bool branch_taken_0x4b3d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D94u;
        // 0x4b3d98: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d94) {
            ctx->pc = 0x4B3DB8u;
            goto label_4b3db8;
        }
    }
    ctx->pc = 0x4B3D9Cu;
    // 0x4b3d9c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x4b3d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4b3da0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3da4: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B3DA4u;
    SET_GPR_U32(ctx, 31, 0x4B3DACu);
    ctx->pc = 0x4B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3DA4u;
    // 0x4b3da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B3DA4u, 0x4B3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3DACu;
label_4b3dac:
    // 0x4b3dac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4b3dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3db0: 0x250b0014  addiu       $t3, $t0, 0x14
    ctx->pc = 0x4b3db0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x4b3db4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4b3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4b3db8:
    // 0x4b3db8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4b3dbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b3dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4b3dc0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4b3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x4b3dc4: 0xad100010  sw          $s0, 0x10($t0)
    ctx->pc = 0x4b3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 16));
    // 0x4b3dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b3dcc:
    // 0x4b3dcc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4b3dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3dd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b3dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DD8u;
        // 0x4b3ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3DE0u;
}
